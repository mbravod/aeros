/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package parser;

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
 
i=PARSER.roadlist_corrected.get(road1).factors.size();
if (_road1_segment<i){
road1_segments.add(_road1_segment);
 road1_segments_cross.add(new ROADCROSS(0,0));
}
 road2= _road2;
  if (_road2_segment>0){
   road2_segments.add(_road2_segment-1);  
    road2_segments_cross.add(new ROADCROSS(0,0));
 }
i=PARSER.roadlist_corrected.get(road2).factors.size();
if (_road2_segment<i){
road2_segments.add(_road2_segment);
 road2_segments_cross.add(new ROADCROSS(0,0));
}
 }

 
 
 private int internal_compute_xy(double a0,double b0,double x,double line1startx,double line1starty,double line1endx,double line1endy,XY innersolution,int line1_segment,int side){
       int j;
       int jtemp;
       double line2startx,line2starty,line2endx,line2endy;
       double c0,d0;
       double y;
       Integer result;
       XY solution= new XY(0,0) ;
       int solutions=0;
     for (j=0;j<road2_segments.size();j++){
        jtemp=road2_segments.get(j);
        c0=PARSER.roadlist_corrected.get(road2).factors0.get(jtemp).a;
        d0=PARSER.roadlist_corrected.get(road2).factors0.get(jtemp).b;
        y=-PARSER.roadlist_corrected.get(road2).factors0.get(jtemp).c;

        line2startx=PARSER.roadlist_corrected.get(road2).pairsw0.get(jtemp*2).x;
        line2starty=PARSER.roadlist_corrected.get(road2).pairsw0.get(jtemp*2).y;   
        line2endx=PARSER.roadlist_corrected.get(road2).pairsw0.get(jtemp*2+1).x;
        line2endy=PARSER.roadlist_corrected.get(road2).pairsw0.get(jtemp*2+1).y;   

        result= COLISION.findxy(new XY(line1startx,line1starty),new XY(line1endx,line1endy),new EQ_COEF (a0,b0,-x),new XY(line2startx,line2starty),new XY(line2endx,line2endy),new EQ_COEF (c0,d0,-y), solution,0.0);
        if (result.equals(1)){
            innersolution.x=solution.x;
            innersolution.y=solution.y;
               if (side==0){ road1_segments_cross.get(line1_segment).sidew0=1;
              road1_segments_cross.get(line1_segment).pointw0=new XY(solution.x,solution.y);
             }else{road1_segments_cross.get(line1_segment).sidew1=1;
              road1_segments_cross.get(line1_segment).pointw1=new XY(solution.x,solution.y);
             }
            road2_segments_cross.get(j).sidew0=1;
            road2_segments_cross.get(j).pointw0=new XY(solution.x,solution.y);
          solutions++;
        }
        //calcula con el otro lado
        c0=PARSER.roadlist_corrected.get(road2).factors1.get(jtemp).a;
        d0=PARSER.roadlist_corrected.get(road2).factors1.get(jtemp).b;
        y=-PARSER.roadlist_corrected.get(road2).factors1.get(jtemp).c;

        line2startx=PARSER.roadlist_corrected.get(road2).pairsw1.get(jtemp*2).x;
        line2starty=PARSER.roadlist_corrected.get(road2).pairsw1.get(jtemp*2).y;   
        line2endx=PARSER.roadlist_corrected.get(road2).pairsw1.get(jtemp*2+1).x;
        line2endy=PARSER.roadlist_corrected.get(road2).pairsw1.get(jtemp*2+1).y;   

        result= COLISION.findxy(new XY(line1startx,line1starty),new XY(line1endx,line1endy),new EQ_COEF (a0,b0,-x),new XY(line2startx,line2starty),new XY(line2endx,line2endy),new EQ_COEF (c0,d0,-y), solution,0.0);
        if (result.equals(1)){
          innersolution.x=solution.x;
            innersolution.y=solution.y;
             if (side==0){ road1_segments_cross.get(line1_segment).sidew0=1;
              road1_segments_cross.get(line1_segment).pointw0=new XY(solution.x,solution.y);
             }else{road1_segments_cross.get(line1_segment).sidew1=1;
              road1_segments_cross.get(line1_segment).pointw1=new XY(solution.x,solution.y);
             }
            road2_segments_cross.get(j).sidew1=1;
            road2_segments_cross.get(j).pointw1=new XY(solution.x,solution.y);
          solutions++;
        }     
 }
return solutions;
 }
 public void compute_xy( ){
     //ahora desde el road 1w0 busca colisiones con w0 o w1 de road 2 segmento 1 o 2
     int i,j,k,l;
             int itemp;
                    double a0,b0;
       double x;
double line1startx,line1starty,line1endx,line1endy;
         XY innersolution= new XY(0,0) ;
       Integer result;
        System.out.println("road1:road2 "+road1+" : "+road2);
         ArrayList<XY> cross = new ArrayList<XY>();
        
     for (i=0;i<road1_segments.size();i++){
        
         itemp=road1_segments.get(i);
a0=PARSER.roadlist_corrected.get(road1).factors0.get(itemp).a;
b0=PARSER.roadlist_corrected.get(road1).factors0.get(itemp).b;
x=-PARSER.roadlist_corrected.get(road1).factors0.get(itemp).c;
line1startx=PARSER.roadlist_corrected.get(road1).pairsw0.get(itemp*2).x;
line1starty=PARSER.roadlist_corrected.get(road1).pairsw0.get(itemp*2).y;   
line1endx=PARSER.roadlist_corrected.get(road1).pairsw0.get(itemp*2+1).x;
line1endy=PARSER.roadlist_corrected.get(road1).pairsw0.get(itemp*2+1).y;   
result=internal_compute_xy(a0,b0,x,line1startx,line1starty,line1endx,line1endy,innersolution,i,0);
//paso 2
if (result.equals(1)){

cross.add(new XY(innersolution.x,innersolution.y));
}
if (result.equals(2)){
    System.out.println("FATAL ERROR");
}
   
a0=PARSER.roadlist_corrected.get(road1).factors1.get(itemp).a;
b0=PARSER.roadlist_corrected.get(road1).factors1.get(itemp).b;
x=-PARSER.roadlist_corrected.get(road1).factors1.get(itemp).c;
line1startx=PARSER.roadlist_corrected.get(road1).pairsw1.get(itemp*2).x;
line1starty=PARSER.roadlist_corrected.get(road1).pairsw1.get(itemp*2).y;   
line1endx=PARSER.roadlist_corrected.get(road1).pairsw1.get(itemp*2+1).x;
line1endy=PARSER.roadlist_corrected.get(road1).pairsw1.get(itemp*2+1).y;   
result=internal_compute_xy(a0,b0,x,line1startx,line1starty,line1endx,line1endy,innersolution,i,1);
//paso 2
if (result.equals(1)){
cross.add(new XY(innersolution.x,innersolution.y));
}
if (result.equals(2)){
    System.out.println("FATAL ERROR");
}
}
     //si existen 4 puntos anadimos este cuadrado
   System.out.println(cross.size());
   if (cross.size()==4){
       valid=1;
       solution_type=2;
       //busca para cada segmento su recorte
       
       for (k=0;k<4;k++){
       rectangle.add(new XY(cross.get(k).x,cross.get(k).y));
       vertexes.asigned_vertexes.add((PARSER.VERTEX++));

       }   
   }
   
    if (cross.size()==2){
        int temp;
       valid=1;
      solution_type=1;
      //busca que los segmentos que sean cruzados dos veces w0 y w1 sean recortados
      for (i=0;i<road1_segments_cross.size();i++){
        if  ((road1_segments_cross.get(i).sidew0==1) &&  (road1_segments_cross.get(i).sidew1==1)){
          if (road1_point==0) {   temp=0;} else{ temp=road1_point*2-1; }//si hay segmento es 0 el corte es a la izq de lo contrario es derecha      
              PARSER.roadlist_corrected.get(road1).pairsw0.get(temp).x=road1_segments_cross.get(i).pointw0.x;PARSER.roadlist_corrected.get(road1).pairsw1.get(temp).x=road1_segments_cross.get(i).pointw1.x;
              PARSER.roadlist_corrected.get(road1).pairsw0.get(temp).y=road1_segments_cross.get(i).pointw0.y;PARSER.roadlist_corrected.get(road1).pairsw1.get(temp).y=road1_segments_cross.get(i).pointw1.y;         
        }
      }

      for (i=0;i<road2_segments_cross.size();i++){
        if  ((road2_segments_cross.get(i).sidew0==1) &&  (road2_segments_cross.get(i).sidew1==1)){
          if (road2_point==0) {   temp=0;} else{ temp=road2_point*2-1; }//si hay segmento es 0 el corte es a la izq de lo contrario es derecha      
              PARSER.roadlist_corrected.get(road2).pairsw0.get(temp).x=road2_segments_cross.get(i).pointw0.x;PARSER.roadlist_corrected.get(road2).pairsw1.get(temp).x=road2_segments_cross.get(i).pointw1.x;
              PARSER.roadlist_corrected.get(road2).pairsw0.get(temp).y=road2_segments_cross.get(i).pointw0.y;PARSER.roadlist_corrected.get(road2).pairsw1.get(temp).y=road2_segments_cross.get(i).pointw1.y;        
        }
      }
      
       line.add(new XY(cross.get(0).x,cross.get(0).y));
       line.add(new XY(cross.get(1).x,cross.get(1).y));
      
       
       
       }
   
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
              
             PARSER.outfile.println("v "+rectangle.get(0).x+" 10 "+rectangle.get(0).y+"  \n\r");
             PARSER.outfile.println("v "+rectangle.get(1).x+" 10 "+rectangle.get(1).y+"  \n\r");
             PARSER.outfile.println("v "+rectangle.get(2).x+" 10 "+rectangle.get(2).y+"  \n\r");
             PARSER.outfile.println("v "+rectangle.get(3).x+" 10 "+rectangle.get(3).y+"  \n\r");
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
                
            PARSER.outfile.println(prueba);  
            }
            else{
             String prueba="f "+vertexes.asigned_vertexes.get(0).toString()+" "+vertexes.asigned_vertexes.get(1).toString()+" ";
                  if (COLISION.distance(new XY(rectangle.get(1).x,rectangle.get(1).y),new XY(rectangle.get(2).x,rectangle.get(2).y)) > COLISION.distance(new XY(rectangle.get(1).x,rectangle.get(1).y),new XY(rectangle.get(3).x,rectangle.get(3).y))){
                    prueba=prueba+vertexes.asigned_vertexes.get(3).toString()+" "+vertexes.asigned_vertexes.get(2).toString()+"\n\r";
                 }
                else{
                    prueba=prueba+vertexes.asigned_vertexes.get(2).toString()+" "+vertexes.asigned_vertexes.get(3).toString()+"\n\r";
                 }
                
                
            PARSER.outfile.println(prueba);   
                }
         }
            
       //genera un plano en txt
         
     }
 }
 
 
}