/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package parser2;

import java.util.ArrayList;

/**
 *
 * @author Jonathan
 */
public class ROADCOLISION {
 public int road1;
 public int road2;
 
  public int road1_point;
  public int road2_point;
 public   ArrayList<Integer> road1_segments=  new ArrayList<Integer>();
 public   ArrayList<Integer> road2_segments=  new ArrayList<Integer>();

 public   ArrayList<ROADCROSS> road1_segments_cross=  new ArrayList<ROADCROSS>();
 public   ArrayList<ROADCROSS> road2_segments_cross=  new ArrayList<ROADCROSS>();
 
 public   ArrayList<XY> rectangle=  new ArrayList<XY>();
  public   ArrayList<XY> line=  new ArrayList<XY>();
  public   ArrayList<EQ_COEF> line_factors = new ArrayList<EQ_COEF>();
  
  
  public int valid=0;
 public SEGMENT_VERTEXES vertexes= new SEGMENT_VERTEXES();
 private int solution_type=0;
 public  ROADCOLISION(int _road1,int _road1_segment,int _road2,int _road2_segment){
 int i;
 
 road1_point=_road1_segment;
 road2_point=_road2_segment; 
   
     road1= _road1;
 
 if (_road1_segment>0){
   road1_segments.add(_road1_segment-1);
   road1_segments_cross.add(new ROADCROSS(0,0));
 }
 
i=PARSER2.roadlist_corrected.get(road1).factors.size();
if (_road1_segment<i){
road1_segments.add(_road1_segment);
 road1_segments_cross.add(new ROADCROSS(0,0));
}
 road2= _road2;
  if (_road2_segment>0){
   road2_segments.add(_road2_segment-1);  
    road2_segments_cross.add(new ROADCROSS(0,0));
 }
i=PARSER2.roadlist_corrected.get(road2).factors.size();
if (_road2_segment<i){
road2_segments.add(_road2_segment);
 road2_segments_cross.add(new ROADCROSS(0,0));
}
 }

 
 
 private int internal_compute_xy(double a0,double b0,double x,double line1startx,double line1starty,double line1endx,double line1endy,XY innersolution,int line1_segment,int side){
  return 0;
 }
 public void compute_xy( ){
   
 }
 
 
 private  void get_line_eq(){
     int i;
     for (i=0;i<line.size()-1;i++){
        double a =line.get(i).y-line.get(i+1).y ; //y1 – y2
         double b =line.get(i+1).x-line.get(i).x ; //x2 – x1
         double c =line.get(i).x*line.get(i+1).y-line.get(i+1).x*line.get(i).y ; //x1y2 – x2y1
         line_factors.add(new EQ_COEF(a,b,c));
     }
 }
 
 public void adapt(){
     //si el corte es linea entonces solo recorta las lineas
     int i,itemp;
     double a0,b0,x;
     if (solution_type==1){
       //busca si el road1 puede ser cortado
    
     
     }
     
   
     
     
 }
 
 public void drawsegments(Integer pass){
     int i,j;
    if (valid==1 && solution_type==2 ){
          if (pass.equals(0)){
              
             PARSER2.outfile.println("v "+rectangle.get(0).x+" 10 "+rectangle.get(0).y+"  \n\r");
             PARSER2.outfile.println("v "+rectangle.get(1).x+" 10 "+rectangle.get(1).y+"  \n\r");
             PARSER2.outfile.println("v "+rectangle.get(2).x+" 10 "+rectangle.get(2).y+"  \n\r");
             PARSER2.outfile.println("v "+rectangle.get(3).x+" 10 "+rectangle.get(3).y+"  \n\r");
         }
         if (pass.equals(1)){
             
             //verifica el setido de giro
             double dx1,dy1,dx0,dy0;
            dx0= rectangle.get(0).x-rectangle.get(1).x;
            dy0= rectangle.get(0).y-rectangle.get(1).y;
       
            dx1= rectangle.get(1).x-rectangle.get(2).x;
            dy1= rectangle.get(1).y-rectangle.get(2).y;
            //in two-dimensional space, the dot product of vectors [a, b] and [c, d] is ad- bc.
            double dot=dx0*dy1-dy0*dx1;
            if (dot>=0){  
                
                //0,3
                String prueba="f "+vertexes.asigned_vertexes.get(0).toString()+" "+vertexes.asigned_vertexes.get(3).toString()+" ";
                if (COLISION.distance(new XY(rectangle.get(3).x,rectangle.get(3).y),new XY(rectangle.get(1).x,rectangle.get(1).y)) > COLISION.distance(new XY(rectangle.get(3).x,rectangle.get(3).y),new XY(rectangle.get(2).x,rectangle.get(2).y))){
                    prueba=prueba+vertexes.asigned_vertexes.get(2).toString()+" "+vertexes.asigned_vertexes.get(1).toString()+"\n\r";
                }
                else{
                    prueba=prueba+vertexes.asigned_vertexes.get(1).toString()+" "+vertexes.asigned_vertexes.get(2).toString()+"\n\r";
                }
                
            PARSER2.outfile.println(prueba);  
            }
            else{
             String prueba="f "+vertexes.asigned_vertexes.get(0).toString()+" "+vertexes.asigned_vertexes.get(1).toString()+" ";
                  if (COLISION.distance(new XY(rectangle.get(1).x,rectangle.get(1).y),new XY(rectangle.get(2).x,rectangle.get(2).y)) > COLISION.distance(new XY(rectangle.get(1).x,rectangle.get(1).y),new XY(rectangle.get(3).x,rectangle.get(3).y))){
                    prueba=prueba+vertexes.asigned_vertexes.get(3).toString()+" "+vertexes.asigned_vertexes.get(2).toString()+"\n\r";
                 }
                else{
                    prueba=prueba+vertexes.asigned_vertexes.get(2).toString()+" "+vertexes.asigned_vertexes.get(3).toString()+"\n\r";
                 }
                
                
            PARSER2.outfile.println(prueba);   
                }
         }
            
       //genera un plano en txt
         
     }
 }
 
 
}