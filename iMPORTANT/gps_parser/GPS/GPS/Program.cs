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
    class Test
    {
        public static void Main()
        {
            int i;
            map_point []mpoint;

            string input1= "..\\..\\19_08-01_46_48.txt";
             string input2=   "..\\..\\19_08-01_12_52.txt";
             string input3 = "..\\..\\31_09-01_18_41.txt";
             string input4 = "..\\..\\31_09-01_56_25.txt";



            System.IO.StreamWriter file = new System.IO.StreamWriter("..\\..\\out1.obj");
            try
            {
                using (StreamReader sr = new StreamReader(input3  ))
                {
                    String line = sr.ReadToEnd();
                  String [] line_a=    line.Split('\n');
                  String[] line_G;
                  String[] line_P;
                  double lat, lon;
                    double zoom=16;
                    int j = 0,gstatus=0;

                    mpoint = new map_point[line_a.Length / 10 + 1];
                  for (i = 1; i < line_a.Length; i++)
                  {
                      line_a[i]=line_a[i].Substring(1);
                      if ( line_a[i].StartsWith("G")){
                          line_G = line_a[i].Split(' ');
                          lat = double.Parse(line_G[7]);
                          lon = double.Parse(line_G[8]);
                            double sin_phi = System.Math.Sin(lat * System.Math.PI / 180);
                            double norm_x = lon / 180;
                            double norm_y = (0.5 * System.Math.Log((1 + sin_phi) / (1 - sin_phi))) / System.Math.PI;
                            double y = System.Math.Pow(2, zoom) * ((1 - norm_y) / 2);
                            double x = System.Math.Pow(2, zoom) * ((norm_x + 1) / 2);
                            mpoint[j].x = x-14743;
                          
                            mpoint[j].y = y-29128;
                            
                            gstatus = 1;
                      }
                      if (gstatus == 1)
                      {
                          if (line_a[i].StartsWith("P"))
                          {
                              line_P = line_a[i].Split(' ');
                              mpoint[j].x=mpoint[j].x*256+.0000001*i;
                              mpoint[j].y = mpoint[j].y * 256 + .0000001 * i;
                              mpoint[j].z = double.Parse(line_P[1]);  //1?
                             mpoint[j].z = (mpoint[j].z - 2150);
                              mpoint[j].inuse = 1;
                              gstatus = 0;
                              j++;
                          }
                      }

                  }


                  for (i = 0; i < mpoint.Length-1; i++)
                  {
                      if (mpoint[i + 1].inuse == 0) { break; }


                   double   a = mpoint[i].y-mpoint[i+1].y;
  double b = mpoint[i+1].x-mpoint[i].x;
  double c = (mpoint[i].x - mpoint[i + 1].x) * mpoint[i].y + (mpoint[i + 1].y - mpoint[i].y) * mpoint[i].x;
  mpoint[i].a = a;
  mpoint[i].b = b;
  mpoint[i].c = c;
  
                      double dis=Math.Sqrt(a*a+b*b);
                      mpoint[i].x0 = mpoint[i].x + a/ dis * .9f;
                      mpoint[i].y0 = mpoint[i].y + b / dis * .9f;

                      mpoint[i].x1 = mpoint[i].x - a / dis * .9f;
                      mpoint[i].y1 = mpoint[i].y - b / dis * .9f;
                  }


                  for (i = 0; i < mpoint.Length - 1; i++)
                  {
                      if (mpoint[i + 1].inuse == 0) { break; }

                      file.WriteLine("v "+-1*mpoint[i].x0 +" "+mpoint[i].z+ " "+ mpoint[i].y0);
                      file.WriteLine("v " + -1 * mpoint[i].x1 + " " + mpoint[i].z + " " + mpoint[i].y1);
                      file.WriteLine("v " + -1 * mpoint[i + 1].x1 + " " + mpoint[i+1].z + " " + mpoint[i + 1].y1);
                      file.WriteLine("v " + -1 * mpoint[i + 1].x0 + " " + mpoint[i+1].z + " " + mpoint[i + 1].y0);
                  
                  }
                 for (i = 0; i < mpoint.Length - 1; i++)
                  {
                      if (mpoint[i + 1].inuse == 0) { break; }

                      file.WriteLine("f " + ((i * 4) + 1).ToString() + " " + ((i * 4) + 2).ToString() + " " + ((i * 4) + 3).ToString() + " " + ((i * 4) + 4).ToString());
                   
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
    }
}
