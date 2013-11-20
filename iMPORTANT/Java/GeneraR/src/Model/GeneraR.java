package Model;

import java.io.File;
import java.io.FileOutputStream;
import java.io.FilenameFilter;
import java.util.LinkedList;
import org.jdom.Document;
import org.jdom.Element;
import org.jdom.input.SAXBuilder;
import org.jdom.output.Format;
import org.jdom.output.XMLOutputter;

public class GeneraR
{
    public static void main(String []args)
    {
        // Lo primero que hacemos es fijar la ruta donde encontrar los vec
        String nmb = "14745_29125";
        String ruta = "D:/Dropbox/Documents/Mapas/Datos/"+nmb;
        String rutaV = "D:/Dropbox/Documents/Mapas/Rutas/vec.xml";
        String rutaS = "D:/Dropbox/Documents/Mapas/Rutas/"+nmb+".xml";
        
        File dir = new File(ruta);
        
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
                  if(str.equals(".vec"))
                  {
                     return true;
                  }
               }
               return false;
            }
         };
        
        String []files = dir.list(fileNameFilter);
        LinkedList <String> lst = new LinkedList();
        
        System.out.println("Hay " + files.length + " archivos");
        
        for(int g = 0; g < files.length; g++)
        {
            files[g] = ruta + "/" + files[g];
            lst.add(files[g]);
            System.out.println("Ruta: " + files[g]);
        }
        
        if(lst.size() <= 0)
        {
            return;
        }
        
        GuardarRutas(lst, rutaV);
        GuardarRutas(lst, rutaS);
        
    }
    
    public static void GuardarRutas(LinkedList <String> lstXML, String ruta)
    {
        SAXBuilder builder = new SAXBuilder(false);
        // Lo comenzamos a armar desde cero
        Element road;
        Element width;
        Element xy;
        String s;
        // Creamos el elemento de la raiz
        Element root = new Element("VEC");
        
        for(int k = 0; k < lstXML.size(); k++)
        {
            road = new Element("ruta");
            road.setText(lstXML.get(k));
            root.addContent(road);
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
}
