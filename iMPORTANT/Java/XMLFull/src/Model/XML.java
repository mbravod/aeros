package Model;

import Model.Data.DataXML;
import Model.Data.XY;
import Model.Data.Road;
import java.io.FileOutputStream;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import javax.swing.JOptionPane;
import org.jdom.Document;
import org.jdom.Element;
import org.jdom.input.SAXBuilder;
import org.jdom.output.Format;
import org.jdom.output.XMLOutputter;

public class XML
{
    public static DataXML ObtenXML(String ruta)
    {
        SAXBuilder builder = new SAXBuilder(false);
        System.out.println("Ruta: " + ruta);
        String []nameP = ruta.split("/");
        for(int i = 0; i < nameP.length; i++)
        {
            System.out.println("N: " + nameP[i]);
        }
        int fi = nameP.length - 1;
        System.out.println("fi: " + fi + " - " + nameP[fi]);
        String name = nameP[fi].substring(0, nameP[fi].length()-4);
        System.out.println("name: " + name);
        String []xystrr = name.split("_");
        int x = Integer.parseInt(xystrr[2]);
        int y = Integer.parseInt(xystrr[3]);
        System.out.println("X: " + x + " y: " + y);
        
        DataXML xml;
        LinkedList <Road> lstRoad;
        Road tmpRoad;
        LinkedList <XY> lstXY;
        XY tmpXY; 
        
        Document doc;
        Element raiz;
        List lstRoads;
        Element e1;
        List lstXYs;
        Element e2;
        Iterator i, j;
        
        try
        {
            xml = new DataXML();
            xml.setNombre(name);
            xml.setXoff(x);
            xml.setYoff(y);
            // Iniciamos el cosntructor del documentos
            doc=builder.build(ruta);
            raiz = doc.getRootElement();
            lstRoads = raiz.getChildren("road");
            i = lstRoads.iterator();
            lstRoad = new LinkedList();
            
            double d = 0;
            double cx;
            double cy;
            
            while(i.hasNext())
            {
                // Obtemos 
                e1 = (Element) i.next();
                d = Double.parseDouble(e1.getChildText("width"));
                System.out.println("d: " + d);
                
            if(d != 8.8)
                {
                    tmpRoad = new Road();
                    tmpRoad.setWidth(d);
                    
                    // Obtenemos la lista de coordenadas
                    lstXYs = e1.getChildren("xy");
                    j = lstXYs.iterator();
                    lstXY = new LinkedList();

                    while(j.hasNext())
                    {
                        tmpXY = new XY();
                        e2 = (Element) j.next();
                        String str = e2.getText();
                        String []xystr = str.split(",");
                        cx = Double.parseDouble(xystr[0]);
                        cy = Double.parseDouble(xystr[1]);
                        
//                        System.out.println("(" + cx + "," + cy + ")");
                        
                        if(Utils.UbicaXY(cx, cy) == 1)
                        {
//                            System.out.println("Está dentro...");
                            tmpXY.setX(cx);
                            tmpXY.setY(cy);
                            lstXY.add(tmpXY);
                        }
                    }
                    tmpRoad.setLstXYs(lstXY);
                    lstRoad.add(tmpRoad);
                }
                // Obtenemos el ancho
                
            }
            xml.setLstRoads(lstRoad);
        }
        catch(Exception e)
        {
            System.out.println("Error...\n---------");
            e.printStackTrace();
            System.out.println("\n---------");
            JOptionPane.showMessageDialog(null, "ERROR al leer el archivo xml: " + e.getMessage());
            xml = null;
        }
        return xml;
    }
    
    // Guardar XML ----------
    public static void guardarXML(LinkedList <DataXML> lstXML, String ruta)
    {
        SAXBuilder builder = new SAXBuilder(false);
        // Lo comenzamos a armar desde cero
        Element road;
        Element width;
        Element xy;
        String s;
        // Creamos el elemento de la raiz
        Element root = new Element("TILE");
        
        DataXML data;
        
        for(int k = 0; k < lstXML.size(); k++)
        {
            data = lstXML.get(k);
            
            for(int i = 0; i < data.getLstRoads().size(); i++)
            {
                road = new Element("road");
                width = new Element("width");
                width.setText(String.valueOf(data.getLstRoads().get(i).getWidth()));
                road.addContent(width);
                for(int j = 0; j < data.getLstRoads().get(i).getLstXYs().size(); j++)
                {
                    xy = new Element("xy");
                    s = String.valueOf(data.getLstRoads().get(i).getLstXYs().get(j).getX()) 
                            + "," + data.getLstRoads().get(i).getLstXYs().get(j).getY();
                    xy.setText(s);
                    road.addContent(xy);
                }
                root.addContent(road);
            }
        }
        
        // Creamos el documento XML en memoria
        Document tile_new = new Document(root);
        // Almacenamos el doc virtual en un fichero
        try
        {
            XMLOutputter out=new XMLOutputter(Format.getPrettyFormat());
            FileOutputStream file_xml=new FileOutputStream(ruta);
            out.output(tile_new, file_xml);
            file_xml.flush();
            file_xml.close();
            out.output(tile_new, System.out);
        }
        catch(Exception e)
        {
            e.printStackTrace();
        }
    }
    
    public static DataXML ObtenXMLF(String ruta)
    {
        SAXBuilder builder = new SAXBuilder(false);
        System.out.println("Ruta: " + ruta);
        String []nameP = ruta.split("/");
/*        for(int i = 0; i < nameP.length; i++)
        {
            System.out.println("N: " + nameP[i]);
        }*/
        int fi = nameP.length - 1;
//        System.out.println("fi: " + fi + " - " + nameP[fi]);
        String name = nameP[fi].substring(0, nameP[fi].length()-4);
//        System.out.println("name: " + name);
        String []xystrr = name.split("_");
        int x = Integer.parseInt(xystrr[0]);
        int y = Integer.parseInt(xystrr[1]);
//        System.out.println("X: " + x + " y: " + y);
        
        DataXML xml;
        LinkedList <Road> lstRoad;
        Road tmpRoad;
        LinkedList <XY> lstXY;
        XY tmpXY; 
        
        Document doc;
        Element raiz;
        List lstRoads;
        Element e1;
        List lstXYs;
        Element e2;
        Iterator i, j;
        
        try
        {
            xml = new DataXML();
            xml.setNombre(name);
            xml.setXoff(x);
            xml.setYoff(y);
            // Iniciamos el cosntructor del documentos
            doc=builder.build(ruta);
            raiz = doc.getRootElement();
            lstRoads = raiz.getChildren("road");
            i = lstRoads.iterator();
            lstRoad = new LinkedList();
            while(i.hasNext())
            {
                tmpRoad = new Road();
                e1 = (Element) i.next();
                // Obtenemos el ancho
                tmpRoad.setWidth(Double.parseDouble(e1.getChildText("width")));
                // Obtenemos la lista de coordenadas
                lstXYs = e1.getChildren("xy");
                j = lstXYs.iterator();
                lstXY = new LinkedList();
                
                while(j.hasNext())
                {
                    tmpXY = new XY();
                    e2 = (Element) j.next();
                    String str = e2.getText();
                    String []xystr = str.split(",");
                    tmpXY.setX(Double.parseDouble(xystr[0]));
                    tmpXY.setY(Double.parseDouble(xystr[1]));
                    lstXY.add(tmpXY);
                }
                tmpRoad.setLstXYs(lstXY);
                lstRoad.add(tmpRoad);
            }
            xml.setLstRoads(lstRoad);
        }
        catch(Exception e)
        {
            System.out.println("Error...\n---------");
            e.printStackTrace();
            System.out.println("\n---------");
            JOptionPane.showMessageDialog(null, "ERROR al leer el archivo xml: " + e.getMessage());
            xml = null;
        }
        return xml;
    }
}
