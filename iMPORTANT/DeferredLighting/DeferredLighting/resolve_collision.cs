using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace MyGame
{
    struct last_index_struct
    {
      public   int ix;
      public float last_height;

    };

    class resolve_collision
    {

        

     static public last_index_struct [] last_index;
     static public int tilex_i ;
     static public int tiley_i ;
     static public  int subtile_dx_i ;
     static public  int subtile_dy_i ;
     static public float offy;
     static public float offx;


     static public void generate_last_index(int items)
     {
         last_index = new last_index_struct[items];
     }


     static public int generate_request(int _tilex, int _tiley,int _subtilex, int _subtiley )
     {

         int tilex = _tilex;
         int tiley = _tiley;
         int subtilex = _subtilex;
         int subtiley = _subtiley;
         if (subtilex < 0)
         {
             subtilex += 8;
             tilex--;
         }

         if (subtilex > 7)
         {
             subtilex -= 8;
             tilex++;
         }


         if (subtiley < 0)
         {
             subtiley += 8;
             tiley--;
         }

         if (subtiley > 7)
         {
             subtiley -= 8;
             tiley++;
         }
         //agrega referencias de uso
         int ix;

         //si no esta cargado bucsca un espacio
         for (ix = 0; ix < 64; ix++)
         {
             if (colision_map.buffer_slots[ix].inuse == 0)
             {
                 colision_map.buffer_slots[ix].tilex = tilex;
                 colision_map.buffer_slots[ix].tiley = tiley;
                 colision_map.buffer_slots[ix].subtilex = subtilex;
                 colision_map.buffer_slots[ix].subtiley = subtiley;
                 colision_map.buffer_slots[ix].inuse = 1;
                 colision_map.buffer_slots[ix].doload = 1;
                 return 1;
                 break;
             }
         }
         return 0;

     }


     static public int check_loaded(int _tilex, int _tiley, int _subtilex, int _subtiley)
     {

         int tilex = _tilex;
         int tiley = _tiley;
         int subtilex = _subtilex;
         int subtiley = _subtiley;
         if (subtilex < 0)
         {
             subtilex += 8;
             tilex--;
         }

         if (subtilex > 7)
         {
             subtilex -= 8;
             tilex++;
         }


         if (subtiley < 0)
         {
             subtiley += 8;
             tiley--;
         }

         if (subtiley > 7)
         {
             subtiley -= 8;
             tiley++;
         }
         //agrega referencias de uso
         int ix;

       
         //si no esta cargado bucsca un espacio
         for (ix = 0; ix < 64; ix++)
         {
             if (colision_map.buffer_slots[ix].tilex == tilex)
             {
                 if (colision_map.buffer_slots[ix].tiley == tiley)
                 {


                     if (colision_map.buffer_slots[ix].subtilex == subtilex)
                     {
                         if (colision_map.buffer_slots[ix].subtiley == subtiley)
                         {
                             colision_map.buffer_slots[ix].inuse = 1;
                             return 1;
                             break;
                         }
                     }
                 }
             }
         }
         return 0;

     }


     static public int get_tile_xy(int tilex, int tiley, int subtilex, int subtiley,int px,int py,int pmem)
     {
         //verifica que el punto px y py sean validos
     
        
         //agrega referencias de uso
         int ix=last_index[pmem].ix;
         if (colision_map.buffer_slots[ix].key == subtiley * 8 + subtilex)
         {
             if (colision_map.buffer_slots[ix].tilex == tilex)
             {
                 if (colision_map.buffer_slots[ix].tiley == tiley)
                 {
                     if (colision_map.buffer_slots[ix].subtilex == subtilex)
                     {
                         if (colision_map.buffer_slots[ix].subtiley == subtiley)
                         {
                             
                             int p = (int)ix * colision_map.size_bmp;
                             char k = (char)colision_map.buffer[p];
                             char k1 = (char)colision_map.buffer[p + 1];
                             if (k == 'B' & k1 == 'M')
                             {
                                 py = 1023 - py;
                                 int off = py * 1024 * 3 + px * 3 + p + 0x36;
                                 last_index[pmem].ix = ix;
                                 int solve = colision_map.buffer[off + 2] * 256 * 256 + colision_map.buffer[off + 1] * 256 + colision_map.buffer[off];
                                 return solve;

                             }
                             return 0;
                         }
                     }
                 }
             }
         }

         //si no esta cargado bucsca un espacio
         for (ix = 0; ix < 64; ix++)
         {

             if (colision_map.buffer_slots[ix].key == subtiley * 8 + subtilex)
             {
                 if (colision_map.buffer_slots[ix].tilex == tilex)
                 {
                     if (colision_map.buffer_slots[ix].tiley == tiley)
                     {
                         if (colision_map.buffer_slots[ix].subtilex == subtilex)
                         {
                             if (colision_map.buffer_slots[ix].subtiley == subtiley)
                             {   
                                 int p = (int)ix * colision_map.size_bmp;
                                 char k = (char)colision_map.buffer[p];
                                 char k1 = (char)colision_map.buffer[p + 1];
                                 if (k == 'B' & k1 == 'M')
                                 {
                                     py = 1023 - py;
                                     int off = py * 1024 * 3 + px * 3 + p + 0x36;
                                     last_index[pmem].ix = ix;
                                     int solve = colision_map.buffer[off + 2] * 256 * 256 + colision_map.buffer[off + 1] * 256 + colision_map.buffer[off];
                                     return solve;

                                 }
                                 return 0;
                                 break;
                             }
                         }
                     }
                 }
             }
         }
         return 0;

     }
        
        static public int get_tile_info(double x, double y, double z,int pmem){
                double x0  ;
                double y0 ;
                double tilex;
                double tiley;
                double tile_dx;
                double tile_dy;
            x0 =x;
            y0 = z;
             tilex = x0 / 256.0;
             tiley = y0 / 256.0;
             tilex_i = (int)Math.Floor(tilex);
             tiley_i = (int)Math.Floor(tiley);
            tile_dx = (tilex - tilex_i) * 8;
            tile_dy = (tiley - tiley_i) * 8;
             subtile_dx_i = (int)Math.Floor(tile_dx);
            subtile_dy_i = (int)Math.Floor(tile_dy);
             offy = (float)(tile_dy - subtile_dy_i) * 1024;
            offx = (float)(tile_dx - subtile_dx_i) * 1024;
            return 1;
        }
    }
}
