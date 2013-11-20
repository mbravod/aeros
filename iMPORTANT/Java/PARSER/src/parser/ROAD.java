/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package parser;

import java.util.ArrayList;

/**
 *
 * @author David
 */


public class ROAD {
    public     double width;
 public   ArrayList<XY> pairs = new ArrayList<XY>();
  public   ArrayList<EQ_COEF> factors = new ArrayList<EQ_COEF>();
 public   ArrayList<COLISION> colisions= new ArrayList();

  public   ArrayList<XYZ> pairsw0 = new ArrayList<XYZ>();
    public   ArrayList<EQ_COEF> factors0 = new ArrayList<EQ_COEF>();
    public   ArrayList<XYZ> pairsw1 = new ArrayList<XYZ>(); 
      public   ArrayList<EQ_COEF> factors1 = new ArrayList<EQ_COEF>();
  public ArrayList<SEGMENT_VERTEXES> vertixes = new ArrayList();
    public ArrayList<SEGMENT_VERTEXES> tvertixes = new ArrayList();
    
    
    
    private ArrayList<FACE> floor_level= new ArrayList<FACE>();
    
    
    
    public static double scale=.25;
 public ROAD(){
 }
 
 public void filter(){
 //to do remove duplicated items
     int i=0;
     int j;
  Integer result;
     while(i<pairs.size())
     {   
         j=i+1;
         while(j<pairs.size())
        {
result =COLISION.closeness(new XY(pairs.get(i).x,pairs.get(i).y),new XY(pairs.get(j).x,pairs.get(j).y),.5);
if (result.equals(1)){
    pairs.remove(j);
    j--;
}
j++;
        }
         i++;
     }
 }
 
 public void get_eq(){
     int i;
     for (i=0;i<pairs.size()-1;i++){
        double a =pairs.get(i).y-pairs.get(i+1).y ; //y1 – y2
         double b =pairs.get(i+1).x-pairs.get(i).x ; //x2 – x1
         double c =pairs.get(i).x*pairs.get(i+1).y-pairs.get(i+1).x*pairs.get(i).y ; //x1y2 – x2y1
         factors.add(new EQ_COEF(a,b,c));
      //   SEGMENT segment_points= new SEGMENT();
      //   segment_points.pairs.add( new XY(pairs.get(i).x,pairs.get(i).y));
      //   segment_points.pairs.add( new XY(pairs.get(i+1).x,pairs.get(i+1).y));
         
        // segments.add(segment_points);
         
     }
    
     
 }
 
 
 public void set_width(){
 //para cada segmento calcula dx dy
     double dx,dy;
     
     
     double norm;
     int i;
     for (i=0;i<factors.size();i++){
         dx=pairs.get(i+1).x-pairs.get(i).x;
          dy=pairs.get(i+1).y-pairs.get(i).y;
     norm=Math.sqrt(dx*dx+dy*dy);
     dx=dx/norm*width*scale/2;
     dy=dy/norm*width*scale/2;
     
     pairsw0.add(new XYZ(pairs.get(i).x+dy,pairs.get(i).y-dx,0));
     pairsw0.add(new XYZ(pairs.get(i+1).x+dy,pairs.get(i+1).y-dx,0));
     
     pairsw1.add(new XYZ(pairs.get(i).x-dy,pairs.get(i).y+dx,0));
     pairsw1.add(new XYZ(pairs.get(i+1).x-dy,pairs.get(i+1).y+dx,0));
    
     vertixes.add(new SEGMENT_VERTEXES() );
     
     vertixes.get(i).asigned_vertexes.add(PARSER.VERTEX++);
     vertixes.get(i).asigned_vertexes.add(PARSER.VERTEX++);
      vertixes.get(i).asigned_vertexes.add(PARSER.VERTEX++);
       vertixes.get(i).asigned_vertexes.add(PARSER.VERTEX++);
       
      
     }
     get_eqw0();
     get_eqw1();
     
      //establece el sentido de giro de los vertices
         double dx1,dy1,dx0,dy0;
         int j;
            for  (i=0;i<factors.size();i++){
        j=i*2;
            dx0= pairsw0.get(j).x-pairsw0.get(j+1).x;
            dy0= pairsw0.get(j).y-pairsw0.get(j+1).y;
       
            dx1= pairsw0.get(j).x-pairsw1.get(j+1).x;
            dy1= pairsw0.get(j).y-pairsw1.get(j+1).y;
            //in two-dimensional space, the dot product of vectors [a, b] and [c, d] is ad- bc.
            double dot=dx0*dy1-dy0*dx1;
            floor_level.add( new FACE()); 
            if (dot>=0){  
               
               floor_level.get(i).face.add(vertixes.get(i).asigned_vertexes.get(0));
               floor_level.get(i).face.add(vertixes.get(i).asigned_vertexes.get(3));
               floor_level.get(i).face.add(vertixes.get(i).asigned_vertexes.get(2));
               floor_level.get(i).face.add(vertixes.get(i).asigned_vertexes.get(1));       
            }
            else{
               floor_level.get(i).face.add(vertixes.get(i).asigned_vertexes.get(0));
               floor_level.get(i).face.add(vertixes.get(i).asigned_vertexes.get(1));
               floor_level.get(i).face.add(vertixes.get(i).asigned_vertexes.get(2));
               floor_level.get(i).face.add(vertixes.get(i).asigned_vertexes.get(3));   
            }
            }      
 }
 
 
 public void drawsegments(Integer pass){
     int i,j;
     
     
     for  (i=0;i<factors.size();i++){
        j=i*2;
          if (pass.equals(0)){
              
             PARSER.outfile.println("v "+pairsw0.get(j).x+" 0 "+pairsw0.get(j).y+"  \n\r");
              PARSER.outfile.println("v "+pairsw0.get(j+1).x+" 0 "+pairsw0.get(j+1).y+"  \n\r");
               PARSER.outfile.println("v "+pairsw1.get(j+1).x+" 0 "+pairsw1.get(j+1).y+"  \n\r");
                PARSER.outfile.println("v "+pairsw1.get(j).x+" 0 "+pairsw1.get(j).y+" \n\r");
         }
          
            if (pass.equals(1)){
             
                //calcula el centro del segmento
              XY temp_point=new XY((pairs.get(i).x+pairs.get(i+1).x)/2,(pairs.get(i).y+pairs.get(i+1).y)/2) ;
             
              double dis= COLISION.distance(temp_point, new XY(pairsw0.get(j).x,pairsw0.get(j).y));
            dis= Math.sqrt(Math.abs(Math.pow(dis,2)-Math.pow(width*scale/2,2) )  );
             PARSER.outfile.println("vt "+(-dis)+"  "+(0)+"  \n\r");
            
            dis= COLISION.distance(temp_point, new XY(pairsw0.get(j+1).x,pairsw0.get(j+1).y));
               dis= Math.sqrt(Math.abs(Math.pow(dis,2)-Math.pow(width*scale/2,2) )  );
               PARSER.outfile.println("vt "+dis+"  "+(0)+"  \n\r");
            
            dis= COLISION.distance(temp_point, new XY(pairsw1.get(j+1).x,pairsw1.get(j+1).y));
               dis= Math.sqrt(Math.abs(Math.pow(dis,2)-Math.pow(width*scale/2,2) )  );
            PARSER.outfile.println("vt "+(dis)+"  "+1+"  \n\r");
            
            
            dis= COLISION.distance(temp_point, new XY(pairsw1.get(j).x,pairsw1.get(j).y));
              dis= Math.sqrt(Math.abs(Math.pow(dis,2)-Math.pow(width*scale/2,2) )  );
                PARSER.outfile.println("vt "+(-dis)+"   "+1+" \n\r");
         }
          
         if (pass.equals(2)){          
             if(i==0){
                 PARSER.outfile.println("usemtl mat1 \n\r");
             }
           PARSER.outfile.println("f "+ floor_level.get(i).face.get(0)+ "/"+floor_level.get(i).face.get(0)+" " +floor_level.get(i).face.get(1)+ "/"+floor_level.get(i).face.get(1)+" "+                           floor_level.get(i).face.get(2)+ "/"+floor_level.get(i).face.get(2)+" "+                          floor_level.get(i).face.get(3)+ "/"+floor_level.get(i).face.get(3)  +"\n\r");  
            }
            
       //genera un plano en txt
         
     }
 }
 
  private void get_eqw0(){
     int i;
     for (i=0;i<pairsw0.size()-1;i=i+2){
        double a =pairsw0.get(i).y-pairsw0.get(i+1).y ; //y1 – y2
         double b =pairsw0.get(i+1).x-pairsw0.get(i).x ; //x2 – x1
         double c =pairsw0.get(i).x*pairsw0.get(i+1).y-pairsw0.get(i+1).x*pairsw0.get(i).y ; //x1y2 – x2y1
         factors0.add(new EQ_COEF(a,b,c)); 
     }
 }
    private void get_eqw1(){
     int i;
     for (i=0;i<pairsw1.size()-1;i=i+2){
        double a =pairsw1.get(i).y-pairsw1.get(i+1).y ; //y1 – y2
         double b =pairsw1.get(i+1).x-pairsw1.get(i).x ; //x2 – x1
         double c =pairsw1.get(i).x*pairsw1.get(i+1).y-pairsw1.get(i+1).x*pairsw1.get(i).y ; //x1y2 – x2y1
         factors1.add(new EQ_COEF(a,b,c)); 
     }
 }
 
 public void add_colision(int segment, XY coord){
     colisions.add(new COLISION(segment,coord));
 }
}