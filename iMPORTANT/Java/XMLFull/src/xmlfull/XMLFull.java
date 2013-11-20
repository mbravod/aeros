package xmlfull;

import Model.Data.DataXML;
import Model.Data.Road;
import Model.Data.XY;
import Model.Utils;
import Model.XML;
import java.io.File;
import java.io.FilenameFilter;
import java.util.LinkedList;

public class XMLFull
{
    public static double tolerance = 0.5/16;
    
    public static void main(String[] args)
    {
        // Lo primero que hacemos es fijar la ruta de trabajo
        String ruta;
        String rutaS;
        
        
        File dirs = new File("D:/Dropbox/Documents/Mapas/XMLC");
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
        
        File dir;
        
        for(int jy = 0; jy < lstDirs.size(); jy++)
        {
            ruta = "D:/Dropbox/Documents/Mapas/XMLC/" + lstDirs.get(jy) + "/";
            rutaS = "D:/Dropbox/Documents/Mapas/XML/" + lstDirs.get(jy) + ".xml";
            
            dir = new File(ruta);
            System.out.println("Ruta: " + ruta);

            String []files = dir.list(fileNameFilter);
            System.out.println("Hay " + files.length + " archivos");
            
            // Obtenemos los valores del offset
/*            String []nameXML = files[0].split("_");
            int xoff_ = Integer.parseInt(nameXML[nameXML.length-2]);
            int yoff_ = Integer.parseInt(nameXML[nameXML.length-1].substring(0, nameXML[nameXML.length-1].length()-4));
            Utils.xoffhc = xoff_;
            Utils.yoffhc = yoff_;//*/
            
            for(int g = 0; g < files.length; g++)
            {
                files[g] = ruta + files[g];
            }

            LinkedList <DataXML> lst = new LinkedList();
    //        DataXML xml;
            DataXML xmlt;
            
            // Fijamos 

            for(int g = 0; g < files.length; g++)
            {
                System.out.println(g + ": " + files[g]);
                xmlt = XML.ObtenXML(files[g]);

                lst.add(xmlt);
            }

            for(int j = 0; j < lst.size(); j++)
            {
                LinkedList<Road> lstRoads = lst.get(j).getLstRoads();
                int m = 0;
                while(m < lstRoads.size())
                {
                    if(lstRoads.get(m).getLstXYs().size() <= 1)
                    {
                        lstRoads.remove(m);
                    }
                    else
                    {
                        m++;
                    }
                }
            }

            // Ahora, eliminamos los que sean relativamente iguales, en un mismo DataXML
            for(int i = 0; i < lst.size(); i++)
            {
                Utils.EliminaEq(lst.get(i));
            }


            //Hasta este punto, ya tenemos la lista de XMLs en objetos DataXML.
            // Ahora, hay que aplicarle los offsets
            for(int i = 0; i < lst.size(); i++)
            {
               Utils.SetOffsets(lst.get(i), 16, 16);
            }

            // Ahora, eliminamos los que sean relativamente iguales, en un mismo DataXML
            for(int i = 0; i < lst.size(); i++)
            {
                Utils.EliminaEq(lst.get(i));
            }

            // Ahora, unimos las calles para cada DataXML
            for(int i = 0; i < lst.size(); i++)
            {
                Utils.UneRoads(lst.get(i));
            }//*/

            // Ahora creamos un sólo DataXML con todos los datos
            DataXML general = new DataXML();
            general.setNombre("General");

            //Ahora, obtenemos de cada XML la lista de calles y las añadimos al general
            for(int i = 0; i < lst.size(); i++)
            {
                for(int j = 0; j < lst.get(i).getLstRoads().size(); j++)
                {
                    general.getLstRoads().add(lst.get(i).getLstRoads().get(j));
                }
            }

            // Hasta aqui, tengo un DataXML gigantesco... Vuelvo a aplicar todo...
            // Ahora, eliminamos los que sean relativamente iguales, en un mismo DataXML
            Utils.EliminaEq(general);
            Utils.UneRoads(general);
            lst.clear();
            lst.add(general);

            XML.guardarXML(lst, rutaS);
        }
    }
}
