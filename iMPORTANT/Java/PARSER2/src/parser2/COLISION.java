/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package parser2;

/**
 *
 * @author David
 */
class COLISION {
    public int segment;
    public XY  coord;

    public COLISION(int segment, XY coord) {
        this.segment = segment;
        this.coord = coord;
        
        
        
    }

    public static double distance(XY point1,XY point2)
     {
     
    double p= Math.sqrt(    Math.pow( (point1.x-point2.x),2) + Math.pow( (point1.y-point2.y),2));
         return p;
     }
    
     public static int closeness(XY point1,XY point2, double tol)
     {
     tol=tol/PARSER2.TILE_SCALE;
         if (Math.abs(point1.x-point2.x)<tol){
         if (Math.abs(point1.y-point2.y)<tol){
             return 1;
         }      
         }
         return 0;
     }
    
    public static int findxy(XY line1_start,XY line1_end,EQ_COEF line1_coef,XY line2_start,XY line2_end,EQ_COEF line2_coef,XY solution,double tol){

         double a0,b0,c0,d0;
       double det;
       double xsol,ysol,x,y;
       //.aka.
       /*
        * |a0  b0|^-1  |x|
        *             *    =sol
        * |c0  d0|     |y|
        */
      /*           |d0  -b0|   |x|
       * 1/(a0*d0-b0*c0)*          *
       *           |-c0  a0|   |y|
       * 
       */
       Integer i,j,k,l;
     tol=tol/PARSER2.TILE_SCALE;
           a0=line1_coef.a;
           b0=line1_coef.b;
           x=-line1_coef.c;
         c0=line2_coef.a;
           d0=line2_coef.b;
           y=-line2_coef.c;
           
     det=1/(a0*d0-b0*c0);
     xsol= (d0*x-b0*y)*det;
      ysol= (-c0*x+a0*y)*det;
           // tol=0.0;
      //obtiene el rectagulo de segmento j de la linea i
  double  maxx0=Math.max(line1_start.x,line1_end.x)+tol;
  double  minx0=Math.min(line1_start.x,line1_end.x)-tol;
  double  maxy0=Math.max(line1_start.y,line1_end.y)+tol;
  double  miny0=Math.min(line1_start.y,line1_end.y)-tol;
  
    //obtiene el rectagulo de segmento l de la linea k
  double  maxx1=Math.max(line2_start.x,line2_end.x)+tol;
  double  minx1=Math.min(line2_start.x,line2_end.x)-tol;
  double  maxy1=Math.max(line2_start.y,line2_end.y)+tol;
  double  miny1=Math.min(line2_start.y,line2_end.y)-tol;
  
  
            if (maxx0>= xsol && minx0<=xsol)
                  {
                if (maxy0>= ysol && miny0<=ysol)
                        {   
            if (maxx1>= xsol && minx1<=xsol)
                  {
                if (maxy1>= ysol && miny1<=ysol)
                        {
                 solution.x=xsol;
                     solution.y=      ysol;
                            return 1;
                        }
                  }
                        }
                  }  
        return 0;
    }
}
