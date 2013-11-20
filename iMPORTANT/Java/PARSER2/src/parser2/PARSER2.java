/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package parser2;
import java.util.ArrayList;
import javax.xml.parsers.SAXParser;
import javax.xml.parsers.SAXParserFactory;
import org.xml.sax.Attributes;
import org.xml.sax.SAXException;
import org.xml.sax.helpers.DefaultHandler;
import java.io.*;
import java.util.LinkedList;
import java.util.logging.Level;
import java.util.logging.Logger;

       
/**
 *
 * @author David
 */




public class PARSER2 {

  
 
    
    /**
     * @param args the command line arguments
     */
   //   private static String INFILE ="C:\\data\\roads.xml"; 
    
 //private static String INFILE =   "C:\\Users\\Jonathan\\Documents\\procesed\\tile_16_14740_29140.xml";
 private static String INFILE = "D:\\Dropbox\\Documents\\Mapas\\final 14740_29130/tile_20_235841_466093.xml";
 
 private static ROAD roaditem= new ROAD();
 private static ArrayList<ROAD> roadlist = new ArrayList<ROAD>();
  
 
 private static ROAD roaditem_corrected= new ROAD();
 public static ArrayList<ROAD> roadlist_corrected = new ArrayList<ROAD>();
 private static ArrayList<ROADCOLISION> roadcolisionlist= new ArrayList<ROADCOLISION>();
 public static  PrintWriter outfile;
public static int VERTEX=1;
  public static double TILE_SCALE=16;
    public static void main(String argv[])
    {
        // Lo primero que hacemos es fijar la ruta de trabajo
        String _nmb = "14740_29130";
        File dirs = new File("D:/Dropbox/Documents/Mapas/XMLD");
        LinkedList <String> lstDirs = new LinkedList();
        File[] ficheros = dirs.listFiles();
        
        for(int yh = 0; yh < ficheros.length; yh++)
        {
            if(ficheros[yh].isDirectory())
            {
                lstDirs.add(ficheros[yh].getName());
            }
        }
        
        FilenameFilter fileNameFilter = new FilenameFilter()
        {

            @Override
            public boolean accept(File dir, String name) {
               if(name.lastIndexOf('.')>0)
               {
                  // get last index for '.' char
                  int lastIndex = name.lastIndexOf('.');

                  // get extension
                  String str = name.substring(lastIndex);

                  // match path name extension
                  if(str.equals(".xml"))
                  {
                     return true;
                  }
               }
               return false;
            }
         };
        
        String _ruta;
        String _ruta_;
        File _dir;
        
       for(int yh = 0; yh < lstDirs.size(); yh++)
        {
            
            _ruta = "D:/Dropbox/Documents/Mapas/XMLD/" + lstDirs.get(yh) + "/";
            _ruta_ = "D:/Dropbox/Documents/Mapas/XMLC/" + lstDirs.get(yh) + "/";
            
            System.out.println("Directorio: " + _ruta);

            _dir = new File(_ruta);


            String []_files = _dir.list(fileNameFilter);
            System.out.println("Hay " + _files.length + " archivos");

            for(int g = 0; g < _files.length; g++)
            {
                _files[g] = _ruta + _files[g];
//                System.out.println("Ruta: " + _files[g]);
            }

            int rm = 0;
            double tol=0.01;
       //    _files = new String[1];
        //    _files[0]="D:\\Dropbox\\Documents\\Mapas\\XMLD\\14740_29130\\tile_20_235842_466081.xml";
            
          for(int gh = 0; gh < _files.length; gh++)
            {
                roaditem= new ROAD();
                roadlist = new ArrayList<ROAD>();
                roaditem_corrected= new ROAD();
                roadlist_corrected = new ArrayList<ROAD>();
                roadcolisionlist= new ArrayList<ROADCOLISION>();


                System.out.println("Ruta: " + _files[gh]);
                String []fg = _files[gh].split("/");
                String salida =_ruta_ + fg[fg.length-1];  //"D:\\Dropbox\\Documents\\Mapas\\XMLC\\14740_29130\\tile_20_235842_466081.xml"; //
                System.out.println(salida);

                INFILE =   _files[gh];
                System.out.println("\n\n\t\t" + gh + "\n\n");
                try
                {
                    outfile= new PrintWriter(salida);
                    SAXParserFactory factory = SAXParserFactory.newInstance();
                    SAXParser saxParser = factory.newSAXParser();
                    DefaultHandler handler = new DefaultHandler()
                    {
                        boolean bfname = false;
                        boolean blname = false;
                        boolean bnname = false;
                        boolean bsalary = false;

                        public void startElement(String uri, String localName,String qName, Attributes attributes) throws SAXException
                        {

    //		System.out.println("Start Element :" + qName);

                            if (qName.equalsIgnoreCase("width"))
                            {
                //        road doubleList
                                bfname = true;
                            }

                            if (qName.equalsIgnoreCase("xy"))
                            {
                                blname = true;
                            }
                        }

                        public void endElement(String uri, String localName, String qName) throws SAXException
                        {
                            if (qName=="road")
                            {
                                roaditem.get_eq();
                                roadlist.add(roaditem);
                                roaditem= new ROAD();
                            }
                            //System.out.println("End Element :" + qName);
                        }

                        public void characters(char ch[], int start, int length) throws SAXException
                        {
                            if (bfname)
                            {
                                System.out.println("WIDTH : " + new String(ch, start, length));
                                roaditem.width= Double.parseDouble(new String(ch, start, length));
                                bfname = false;
                            }

                            if (blname)
                            {
                                System.out.println("xy : " + new String(ch, start, length));
                                String pair=new String(ch, start, length);
                                pair.indexOf(",");
                                double x=Double.parseDouble(pair.substring(0, pair.indexOf(",")));
                                double  y=Double.parseDouble(pair.substring(pair.indexOf(",")+1));
                                roaditem.pairs.add( new XY(x,y));
                                blname = false;
                            }
                        }
                    };

                    saxParser.parse(INFILE, handler);
                    PARSER2.outfile.println("<?xml version=\"1.0\"?>  \n\r");

                    Integer i,j, k, l;
                    for (i=0;i<roadlist.size();i++){
                          for (j=i+1;j<roadlist.size();j++){
                            if (roadlist.get(i).pairs.size()==roadlist.get(j).pairs.size())
                            {
                                k=roadlist.get(i).pairs.size()-1;
                                if  (Math.abs(roadlist.get(i).pairs.get(0).x-roadlist.get(j).pairs.get(0).x)<tol)
                                {
                                if  (Math.abs(roadlist.get(i).pairs.get(0).y-roadlist.get(j).pairs.get(0).y)<tol)
                                {
                                 if  (Math.abs(roadlist.get(i).pairs.get(k).x-roadlist.get(j).pairs.get(k).x)<tol)
                                {
                                if  (Math.abs(roadlist.get(i).pairs.get(k).y-roadlist.get(j).pairs.get(k).y)<tol)
                                {
                          roadlist.remove(roadlist.get(j));
                                j--;
                                }
                                }
                                    
                                }
                                }
                                
                            }
                        }   
                    }
                    
                    
                    
                    //para todas las carreteras ve si se generan colisiones
                    roaditem= new ROAD();
                    roaditem.width=8.8;
                    roaditem.pairs.add( new XY(-256,0));
                    roaditem.pairs.add( new XY(512,0));
                    roaditem.get_eq();
                    roadlist.add(roaditem);

                    roaditem= new ROAD();
                    roaditem.width=8.8;
                    roaditem.pairs.add( new XY(256,-256));
                    roaditem.pairs.add( new XY(256,512));

                    roaditem.get_eq();
                    roadlist.add(roaditem);

                    roaditem= new ROAD();
                    roaditem.width=8.8;
                    roaditem.pairs.add( new XY(-256,256));
                    roaditem.pairs.add( new XY(512,256));
                    roaditem.get_eq();
                    roadlist.add(roaditem);

                    roaditem= new ROAD();
                    roaditem.width=8.8;
                    roaditem.pairs.add( new XY(0,-256));
                    roaditem.pairs.add( new XY(0,512));
                    roaditem.get_eq();
                    roadlist.add(roaditem);

                    double a0,b0,c0,d0;
                    double x,y;

                    
                    Integer result;
                    XY solution= new XY(0,0);
                    for (i=0;i<roadlist.size();i++)
                    {
                        for (j=0;j<roadlist.get(i).factors.size();j++)
                        {
                            a0=roadlist.get(i).factors.get(j).a;
                            b0=roadlist.get(i).factors.get(j).b;
                            x=-roadlist.get(i).factors.get(j).c;
                            for (k=i+1;k<roadlist.size();k++)
                            {
                                for (l=0;l<roadlist.get(k).factors.size();l++)
                                {
                                    c0=roadlist.get(k).factors.get(l).a;
                                    d0=roadlist.get(k).factors.get(l).b;
                                    y=-roadlist.get(k).factors.get(l).c;
                                    result= COLISION.findxy(
                                            new XY(roadlist.get(i).pairs.get(j).x,roadlist.get(i).pairs.get(j).y),
                                            new XY(roadlist.get(i).pairs.get(j+1).x,roadlist.get(i).pairs.get(j+1).y),
                                            new EQ_COEF (a0,b0,-x),
                                            new XY(roadlist.get(k).pairs.get(l).x,roadlist.get(k).pairs.get(l).y),
                                            new XY(roadlist.get(k).pairs.get(l+1).x,roadlist.get(k).pairs.get(l+1).y),
                                            new EQ_COEF (c0,d0,-y), solution,.4);
                                    if (result.equals(1))
                                    {
                                        roadlist.get(k).add_colision(l, new XY(solution.x,solution.y));
                                        roadlist.get(i).add_colision(j, new XY(solution.x,solution.y));
                                    }
                                }
                            }
                        }
                    }

                    //get new road points
                    for (i=0;i<roadlist.size();i++)
                    {
                        roaditem_corrected= new ROAD();
                        for (k=0;k<roadlist.get(i).factors.size();k++)
                        {
                            XYARRAY tsegment= new XYARRAY();
                            tsegment.pairs.add(new XY(roadlist.get(i).pairs.get(k).x,roadlist.get(i).pairs.get(k).y));
                            tsegment.pairs.add(new XY(roadlist.get(i).pairs.get(k+1).x,roadlist.get(i).pairs.get(k+1).y));
                            for (j=0;j<roadlist.get(i).colisions.size();j++)
                            {
                                l=roadlist.get(i).colisions.get(j).segment;
                                if (l==k)
                                {
                                    tsegment.pairs.add(roadlist.get(i).colisions.get(j).coord);  
                                }
                            }
                            tsegment.order();
                            //agrega los puntos de segmento exepto el indice (0) (a menos el segmento 0)
                            if (k==0)
                            {
                                roaditem_corrected.pairs.add(new XY(tsegment.order_pairs.get(0).x,tsegment.order_pairs.get(0).y));
                            }

                            for (l=1;l<tsegment.order_pairs.size();l++)
                            {
                                roaditem_corrected.pairs.add(new XY(tsegment.order_pairs.get(l).x,tsegment.order_pairs.get(l).y));
                            }
                        }

                        roaditem_corrected.width=roadlist.get(i).width;
                        roaditem_corrected.filter();
                        roaditem_corrected.get_eq();
                        // roaditem_corrected.set_width();
                        roadlist_corrected.add((roaditem_corrected));
                    }

                    //    encuentra colisiones entre distintas roads
                    for (i=0;i<roadlist_corrected.size();i++)
                    {
                        for (j=0;j<roadlist_corrected.get(i).pairs.size();j++)
                        {
                            for (k=i+1;k<roadlist_corrected.size();k++)
                            {
                                for (l=0;l<roadlist_corrected.get(k).pairs.size();l++)
                                {
                                    result=   COLISION.closeness(new XY(roadlist_corrected.get(i).pairs.get(j).x,roadlist_corrected.get(i).pairs.get(j).y),new XY(roadlist_corrected.get(k).pairs.get(l).x,roadlist_corrected.get(k).pairs.get(l).y),.5);
                                    if (result==1)
                                    {
                                        //los dos puntos deben de quedar unidos
                                        double midx= ( roadlist_corrected.get(i).pairs.get(j).x+roadlist_corrected.get(k).pairs.get(l).x)/2;
                                        double midy= ( roadlist_corrected.get(i).pairs.get(j).y+roadlist_corrected.get(k).pairs.get(l).y)/2;

                                        roadlist_corrected.get(i).pairs.get(j).x=midx;
                                        roadlist_corrected.get(k).pairs.get(l).x=midx;

                                        roadlist_corrected.get(i).pairs.get(j).y=midy;
                                        roadlist_corrected.get(k).pairs.get(l).y=midy;
                                        roadlist_corrected.get(i).factors=new ArrayList();
                                        roadlist_corrected.get(k).factors=new ArrayList();
                                        roadlist_corrected.get(i).get_eq();
                                        roadlist_corrected.get(k).get_eq();

                                        roadcolisionlist.add(new ROADCOLISION(i,j,k,l) );
                                        // roadcolisionlist.get(roadcolisionlist.size()-1).compute_xy();
                                    }
                                }
                            }
                        }
                    }

                    PARSER2.outfile.write("<TILE>"+"\r\n");
                    for (i=0;i<roadlist_corrected.size() ;i++)
                    {
                        PARSER2.outfile.write("<road>"+"\r\n");
                        PARSER2.outfile.write("<width>"+       roadlist_corrected.get(i).width+"</width>"+"\r\n");
                        for (j=0;j<roadlist_corrected.get(i).pairs.size() ;j++)
                        {
                            PARSER2.outfile.write("<xy>"+       roadlist_corrected.get(i).pairs.get(j).x+","+  roadlist_corrected.get(i).pairs.get(j).y+"</xy>"+"\r\n");
                        }
                        PARSER2.outfile.write("</road>"+"\r\n");
                    }

                    PARSER2.outfile.write("</TILE>"+"\r\n");
                    PARSER2.outfile.close();
                }
                catch (Exception e)
                {
                    e.printStackTrace();
                }/*
                try
                {
                    Thread.sleep(1500);
                }
                catch (InterruptedException ex)
                {
                    Logger.getLogger(PARSER2.class.getName()).log(Level.SEVERE, null, ex);
                }*/
            }
        }
    }
}

