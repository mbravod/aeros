
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using   System.Drawing;
 using System.IO;
using System.Net.Sockets;

namespace MyGame
{
    struct slots
    {
   public     int tilex;
   public int tiley;
   public int subtiley;
   public int subtilex;
   public int key;
   public int inuse ;
   public int doload ;
   public string loaded_file;
    };
    class colision_map
    {
        public const int size_bmp=3145782;
   

       public static byte[] buffer;
        public static slots[] buffer_slots;
        static int  onprocess=0;
        public static void NetToFile(FileStream file, int intx)
        {
            int start = intx * size_bmp;
            
            //start asynchronous read
            file.BeginRead(buffer, start, size_bmp, OnEndRead, file);
        }

        //asynchronous callback
        static void OnEndRead(IAsyncResult ar)
        {
            
            //NetworkStream retrieve
            FileStream net = (FileStream)ar.AsyncState;
            //get number of bytes read
            int nBytesRead = net.EndRead(ar);
            net.Close();
            Game1.maps_loaded++;
            onprocess = 0;
            load_map();
            //write content to file
            //... and now, how do I write to FileStream instance without
            //having its reference??
            //fs.Write(buffer,0,nBytesRead);
        }
        public static int load_map()
        {
         int folder_x;
         int folder_y;
         int tile_x;
         int tile_y;
            int ix;

            if (onprocess == 0)
            {
                onprocess = -1;
                for (ix = 0; ix < 64; ix++)
                {
                    if (buffer_slots[ix].doload == 1)
                    {
                        break;
                    }
                }

                if (ix < 64)
                {
                    folder_x = buffer_slots[ix].tilex;
                    folder_y = buffer_slots[ix].tiley;
                    tile_x = buffer_slots[ix].subtilex;
                    tile_y = buffer_slots[ix].subtiley;
                    string file = "c:\\data\\maps2\\cmap_" + folder_x + "_" + folder_y + "\\map_" + tile_y + "_" + tile_x + ".bmp";
                    buffer_slots[ix].doload = 0;
                    buffer_slots[ix].key = tile_y * 8 + tile_x;
                    buffer_slots[ix].loaded_file = file;
                    onprocess = 1;
                    NetToFile(new FileStream(file, FileMode.Open), ix);
                }
                else
                {
                    onprocess = 0;
                }

            }
                return 0;
        }



      static  public  void free_all()
        {
           int ix;
            for (ix = 0; ix < 64; ix++)
            {
                buffer_slots[ix].inuse = 0;
            }
        }

        public colision_map()
        {
            buffer=new byte[size_bmp*64];
            buffer_slots = new slots[64];
            int ix;
            for (ix=0;ix<64;ix++){
                buffer_slots[ix].inuse = 0;
                buffer_slots[ix].doload = 0;

            }
        }
    }
}
