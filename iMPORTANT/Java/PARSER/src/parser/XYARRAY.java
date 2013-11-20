/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package parser;

import java.util.ArrayList;
import java.util.*;
/**
 *
 * @author Jonathan
 */
public class XYARRAY {
     public   ArrayList<XY> pairs = new ArrayList<XY>();
        public   ArrayList<XY> original_pairs = new ArrayList<XY>();
        public   ArrayList<XY> order_pairs = new ArrayList<XY>();
     public   ArrayList<Double> dpairs = new ArrayList<Double>();
      public XYARRAY(){
          
          
      }
     public void order(){
        Double start=pairs.get(0).x*1000+pairs.get(0).y;
        int i,j;
         for (i=0;i<pairs.size();i++){
             dpairs.add((pairs.get(i).x)*1000+(pairs.get(i).y));
         }
         
         Collections.sort(dpairs);
         if (start.equals(dpairs.get(0))){
         }else{
             
             //using Comparator to sort in descending order 
        Comparator<Double> comparator = Collections.reverseOrder();
        Collections.sort(dpairs,comparator);//Descending sorting using sort method            
         }
         for (i=0;i<dpairs.size();i++){
             Double temp= dpairs.get(i);
             for (j=0;j<pairs.size();j++){
                 Double test=pairs.get(j).x*1000+pairs.get(j).y;
                   if (temp.equals(test)){
                 order_pairs.add(new XY(pairs.get(j).x,pairs.get(j).y));
                 break;
                    }
              }
             
         }
         
         
         
      }
     
      
}
