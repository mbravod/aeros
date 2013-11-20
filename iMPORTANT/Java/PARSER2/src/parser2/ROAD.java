/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package parser2;

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
     }
    
     
 }
 
 
 public void set_width(){
 //para cada segmento calcula dx dy
     double dx,dy;
     
     
     double norm;
     int i;
      
 }

 
 public void add_colision(int segment, XY coord){
     colisions.add(new COLISION(segment,coord));
 }
}