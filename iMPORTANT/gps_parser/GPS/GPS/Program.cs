using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
 using System;
    using System.IO;

namespace GPS
{
    struct map_point
    {
        public double x;
        public double y;
        public double z;

        public double x0;
        public double y0;


        public double x1;
        public double y1;


        public int inuse;
        public double a;
        public double b;
        public double c;
    };



    struct vector_pos
    {
        public double x;
        public double y;
        public double z;


    };
    struct face
    {
        public int[] a;
        public vector_pos[] b;
        public vector_pos c;
    };


    struct facedis
    {
        public double[] distances;
        public double[] arr;
        public int[] from;
        public int[] to;
        public int[] used;
    };

    class Test
    {
        static vector_pos[] vpoint;
        static face[] vface;
        static facedis vfacedis;

        public static double distance(int a, int b)
        {
            double x = vpoint[a - 1].x - vpoint[b - 1].x;
            double y = vpoint[a - 1].y - vpoint[b - 1].y;
            double z = 0;// vpoint[a - 1].z - vpoint[b - 1].z;
            double dis = Math.Sqrt(x * x + y * y + z * z);
            return dis;
        }

        public static double distancetoface(double x0, double y0, double z0, int face)
        {
            double x = vface[face].c.x - x0;
            double y = vface[face].c.y - y0;
            double z = 0;// vface[face].c.z - z0;
            double dis = Math.Sqrt(x * x + y * y + z * z);
            return dis;
        }
        public static void Main()
        {

            int i, j, k, counter, vpoint_count, vface_count;

            //abre el archivo de posiciones

            //genera la opcion
            int opc = 4; //NS LAT //SN LAT //NS MEX

            string inF1 = "";
            if (opc == 1 || opc == 3)
            {
                inF1 = "..\\..\\NS.obj";
            }

            if (opc == 2 || opc == 4)
            {
                inF1 = "..\\..\\SN.obj";
            }
            try
            {
                String[] line_V;
                String[] line_F;
                using (StreamReader sr1 = new StreamReader(inF1))
                {
                    String line_f1 = sr1.ReadToEnd();
                    String[] line_a_f1 = line_f1.Split('\n');
                    vpoint_count = 0;
                    vface_count = 0;
                    for (i = 1; i < line_a_f1.Length; i++)
                    {
                        if (line_a_f1[i].StartsWith("v "))
                        {
                            vpoint_count++;
                        }
                        if (line_a_f1[i].StartsWith("f "))
                        {
                            vface_count++;
                        }
                    }
                    vpoint = new vector_pos[vpoint_count];
                    vface = new face[vface_count];
                    for (i = 0; i < vface_count; i++)
                    {
                        vface[i].a = new int[4];
                    }


                    vpoint_count = 0;
                    vface_count = 0;
                    for (i = 1; i < line_a_f1.Length; i++)
                    {
                        if (line_a_f1[i].StartsWith("v "))
                        {
                            line_V = line_a_f1[i].Split(' ');
                            vpoint[vpoint_count].x = double.Parse(line_V[1]);
                            vpoint[vpoint_count].z = double.Parse(line_V[2]);
                            vpoint[vpoint_count].y = double.Parse(line_V[3]);
                            vpoint_count++;
                        }
                        if (line_a_f1[i].StartsWith("f "))
                        {
                            line_V = line_a_f1[i].Split(' ');
                            line_F = line_V[1].Split('/');
                            vface[vface_count].a[0] = int.Parse(line_F[0]);
                            line_F = line_V[2].Split('/');
                            vface[vface_count].a[1] = int.Parse(line_F[0]);
                            line_F = line_V[3].Split('/');
                            vface[vface_count].a[2] = int.Parse(line_F[0]);
                            line_F = line_V[4].Split('/');
                            vface[vface_count].a[3] = int.Parse(line_F[0]);
                            vface_count++;
                        }
                    }
                    sr1.Close();
                    // ahora busca los dos puntos minimos
                    vfacedis.distances = new double[6];
                    vfacedis.arr = new double[6];
                    vfacedis.from = new int[6];
                    vfacedis.to = new int[6];
                    vfacedis.used = new int[6];

                    for (counter = 0; counter < vface.Length; counter++)
                    {
                        k = 0;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = i + 1; j < 4; j++)
                            {
                                vfacedis.distances[k] = distance(vface[counter].a[i], vface[counter].a[j]);
                                vfacedis.arr[k] = vfacedis.distances[k];
                                vfacedis.from[k] = i;
                                vfacedis.to[k] = j;
                                vfacedis.used[k] = 0;

                                k++;
                            }
                        }

                        double temp;
                        for (int write = 0; write < 6; write++)
                        {
                            for (int sort = 0; sort < 5; sort++)
                            {
                                if (vfacedis.arr[sort] > vfacedis.arr[sort + 1])
                                {
                                    temp = vfacedis.arr[sort + 1];
                                    vfacedis.arr[sort + 1] = vfacedis.arr[sort];
                                    vfacedis.arr[sort] = temp;
                                }
                            }
                        }
                        vface[counter].b = new vector_pos[2];
                        for (k = 0; k < 2; k++)
                        {
                            for (i = 0; i < 6; i++)
                            {

                                if ((vfacedis.distances[i] == vfacedis.arr[k]) && vfacedis.used[i]==0)
                                {
                                    vfacedis.used[i] = 1;
                                    vface[counter].b[k].x = (vpoint[vface[counter].a[vfacedis.from[i]] - 1].x + vpoint[vface[counter].a[vfacedis.to[i]] - 1].x) / 2;//+ vpoint[vface[counter].a[vfacedis.from[i]] - 1].x;
                                    vface[counter].b[k].y = (vpoint[vface[counter].a[vfacedis.from[i]] - 1].y + vpoint[vface[counter].a[vfacedis.to[i]] - 1].y) / 2;//+ vpoint[vface[counter].a[vfacedis.from[i]] - 1].y;
                                    vface[counter].b[k].z = (vpoint[vface[counter].a[vfacedis.from[i]] - 1].z + vpoint[vface[counter].a[vfacedis.to[i]] - 1].z) / 2;//+ vpoint[vface[counter].a[vfacedis.from[i]] - 1].z;
                                    break;
                                }
                            }
                        }

                        vface[counter].c.x = (vface[counter].b[0].x + vface[counter].b[1].x) / 2;// + vface[counter].b[0].x;
                        vface[counter].c.y = (vface[counter].b[0].y + vface[counter].b[1].y) / 2;//+ vface[counter].b[0].y;
                        vface[counter].c.z = (vface[counter].b[0].z + vface[counter].b[1].z) / 2;//+ vface[counter].b[0].z;



                    }





                }

            }
            catch (Exception e)
            {
                Console.WriteLine("The file could not be read:");
                Console.WriteLine(e.Message);
            }




            map_point[] mpoint;
            string input1;
            input1 = "..\\..\\19_08-01_46_48.txt";
            input1 = "..\\..\\19_08-01_12_52.txt";
            input1 = "..\\..\\31_09-01_56_25.txt";

            if (opc == 1)
            {
                input1 = "..\\..\\31_09-01_18_41.txt";
            }
            if (opc == 2)
            {
                input1 = "..\\..\\31_09-01_56_25.txt";
            }
            mpoint = new map_point[1];
            System.IO.StreamWriter file = new System.IO.StreamWriter("..\\..\\out1.obj");

            if (opc == 1 || opc == 2)
            {

                try
                {
                    using (StreamReader sr = new StreamReader(input1))
                    {
                        String line = sr.ReadToEnd();
                        String[] line_a = line.Split('\n');
                        String[] line_G;
                        String[] line_P;
                        double lat, lon;
                        double zoom = 16;
                        j = 0;
                        int gstatus = 0;

                        mpoint = new map_point[line_a.Length / 10 + 1];
                        for (i = 1; i < line_a.Length; i++)
                        {
                            line_a[i] = line_a[i].Substring(1);
                            if (line_a[i].StartsWith("G"))
                            {
                                line_G = line_a[i].Split(' ');
                                lat = double.Parse(line_G[7]);
                                lon = double.Parse(line_G[8]);
                                double sin_phi = System.Math.Sin(lat * System.Math.PI / 180);
                                double norm_x = lon / 180;
                                double norm_y = (0.5 * System.Math.Log((1 + sin_phi) / (1 - sin_phi))) / System.Math.PI;
                                double y = System.Math.Pow(2, zoom) * ((1 - norm_y) / 2);
                                double x = System.Math.Pow(2, zoom) * ((norm_x + 1) / 2);
                                mpoint[j].x = x - 14743;

                                mpoint[j].y = y - 29128;

                                gstatus = 1;
                            }
                            if (gstatus == 1)
                            {
                                if (line_a[i].StartsWith("P"))
                                {
                                    line_P = line_a[i].Split(' ');
                                    mpoint[j].x = mpoint[j].x * 256 + .0000001 * i;
                                    mpoint[j].y = mpoint[j].y * 256 + .0000001 * i;
                                    mpoint[j].z = double.Parse(line_P[1]);  //1?
                                    mpoint[j].z = (mpoint[j].z - 2150);
                                    mpoint[j].x = -1 * mpoint[j].x;
                                    //busca el segmento que este mas cerca de todos
                                    int min_counter = 0;
                                    double temp_distance, min_distance = distancetoface(mpoint[j].x, mpoint[j].y, mpoint[j].z, 1);
                                    for (counter = 0; counter < vface.Length; counter++)
                                    {
                                        temp_distance = distancetoface(mpoint[j].x, mpoint[j].y, mpoint[j].z, counter);
                                        if (min_distance > temp_distance)
                                        {
                                            min_distance = temp_distance;
                                            min_counter = counter;
                                        }
                                    }
                                    mpoint[j].z = vface[min_counter].c.z;
                                    mpoint[j].inuse = 1;
                                    gstatus = 0;
                                    j++;
                                }
                            }

                        }
                        file.Close();
                        //Console.WriteLine(line);
                    }
                }

                catch (Exception e)
                {
                    Console.WriteLine("The file could not be read:");
                    Console.WriteLine(e.Message);
                }
            }
            if (opc == 1 || opc == 2)
            {
                for (i = 0; i < mpoint.Length - 1; i++)
                {
                    if (mpoint[i + 1].inuse == 0) { break; }


                    double a = mpoint[i].y - mpoint[i + 1].y;
                    double b = mpoint[i + 1].x - mpoint[i].x;
                    double c = (mpoint[i].x - mpoint[i + 1].x) * mpoint[i].y + (mpoint[i + 1].y - mpoint[i].y) * mpoint[i].x;
                    mpoint[i].a = a;
                    mpoint[i].b = b;
                    mpoint[i].c = c;

                    double dis = Math.Sqrt(a * a + b * b);
                    mpoint[i].x0 = mpoint[i].x + a / dis * .9f;
                    mpoint[i].y0 = mpoint[i].y + b / dis * .9f;

                    mpoint[i].x1 = mpoint[i].x - a / dis * .9f;
                    mpoint[i].y1 = mpoint[i].y - b / dis * .9f;
                }


                for (i = 0; i < mpoint.Length - 1; i++)
                {
                    if (mpoint[i + 1].inuse == 0) { break; }

                    file.WriteLine("v " + mpoint[i].x0 + " " + mpoint[i].z + " " + mpoint[i].y0);
                    file.WriteLine("v " + mpoint[i].x1 + " " + mpoint[i].z + " " + mpoint[i].y1);
                    file.WriteLine("v " + mpoint[i + 1].x1 + " " + mpoint[i + 1].z + " " + mpoint[i + 1].y1);
                    file.WriteLine("v " + mpoint[i + 1].x0 + " " + mpoint[i + 1].z + " " + mpoint[i + 1].y0);

                }
                for (i = 0; i < mpoint.Length - 1; i++)
                {
                    if (mpoint[i + 1].inuse == 0) { break; }

                    file.WriteLine("f " + ((i * 4) + 1).ToString() + " " + ((i * 4) + 4).ToString() + " " + ((i * 4) + 3).ToString() + " " + ((i * 4) + 2).ToString());

                }
            }
            if (opc == 3 || opc == 4)
            {
                mpoint = new map_point[vface.Length*2];
                //ahora busquemos la forma de enlazar los faces
                double x0;
                double y0 ;
                double dis0;
                for (i = 0; i < vface.Length; i++)
                {
                    for (j = 0; j < vface.Length; j++)
                    {
                       // x0= vface[i].b[0].x - vface[j].b[0].x;
                       //  y0= vface[i].b[0].y - vface[j].b[0].x;
                       //  dis0 = Math.Sqrt(x0 * x0 + y0 * y0);


                    }
                }

                for (i = 0; i < vface.Length ; i++)
                {
                    double a = vface[i].b[0].y - vface[i].b[1].y;
                    double b = vface[i].b[1].x - vface[i].b[0].x;
                    double c = (vface[i].b[0].x - vface[i].b[1].x) * vface[i].b[0].y + (vface[i].b[1].y - vface[i].b[0].y) * vface[i].b[0].x;
                    /*
                    double a = mpoint[i].y - mpoint[i + 1].y;
                    double b = mpoint[i + 1].x - mpoint[i].x;
                    double c = (mpoint[i].x - mpoint[i + 1].x) * mpoint[i].y + (mpoint[i + 1].y - mpoint[i].y) * mpoint[i].x;
                     */
                    mpoint[i*2].a = a;
                    mpoint[i*2].b = b;
                    mpoint[i*2].c = c;

                    double dis = Math.Sqrt(a * a + b * b);
                    mpoint[i*2].x0 = vface[i].b[0].x + a / dis * .9f;
                    mpoint[i*2].y0 = vface[i].b[0].y + b / dis * .9f;
                    mpoint[i*2].x1 = vface[i].b[0].x - a / dis * .9f;
                    mpoint[i*2].y1 = vface[i].b[0].y - b / dis * .9f;
                     mpoint[i*2].z =vface[i].b[0].z;

                    mpoint[i*2+1].x0 = vface[i].b[1].x + a / dis * .9f;
                    mpoint[i*2+1].y0 = vface[i].b[1].y + b / dis * .9f;
                    mpoint[i*2+1].x1 = vface[i].b[1].x - a / dis * .9f;
                    mpoint[i*2+1].y1 = vface[i].b[1].y - b / dis * .9f;
                    mpoint[i*2 + 1].z = vface[i].b[1].z;


                }

                //BUSCA TODOS LOS VERTICES MAS CERCANOS

                for (i = 0; i < vface.Length; i++)
                {
                    file.WriteLine("v " + mpoint[i * 2].x0 + " " + mpoint[i * 2].z + " " + mpoint[i * 2].y0);
                    file.WriteLine("v " + mpoint[i * 2].x1 + " " + mpoint[i * 2].z + " " + mpoint[i * 2].y1);
                    file.WriteLine("v " + mpoint[i * 2 + 1].x1 + " " + mpoint[i * 2 + 1].z + " " + mpoint[i * 2 + 1].y1);
                    file.WriteLine("v " + mpoint[i * 2 + 1].x0 + " " + mpoint[i * 2 + 1].z + " " + mpoint[i * 2 + 1].y0);

                }
                for (i = 0; i < vface.Length; i++)
                {
                    file.WriteLine("f " + ((i * 4) + 1).ToString() + " " + ((i * 4) + 4).ToString() + " " + ((i * 4) + 3).ToString() + " " + ((i * 4) + 2).ToString());
                }
                //Console.WriteLine(line);


            }
            file.Close();
        }
    }
}
