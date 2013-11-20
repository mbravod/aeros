package xmlfull;

import Model.Data.DataXML;
import Model.Data.Road;
import Model.Utils;
import Model.XML;
import java.io.File;
import java.io.FilenameFilter;
import java.util.LinkedList;

public class XMLFinal
{
    public static void main(String[] args)
    {
        System.out.println("FINAL<<<<<<<<<<<<<<<<<<<<<<<<<");
        // Lo primero que hacemos es fijar la ruta de trabajo
        String ruta = "D:/Dropbox/Documents/Mapas/XML/";
        String rutaS = "D:/Dropbox/Documents/Mapas/14740_29130.xml";
        
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
        
        File dir = new File(ruta);
        System.out.println("Ruta: " + ruta);

        String []files = dir.list(fileNameFilter);
        System.out.println("Hay " + files.length + " archivos");
        
        // Obtenemos los valores del offset
        String []nameXML = files[0].split("_");
        int xoff_ = Integer.parseInt(nameXML[nameXML.length-2]);
        int yoff_ = Integer.parseInt(nameXML[nameXML.length-1].substring(0, nameXML[nameXML.length-1].length()-4));
        Utils._xoffhc = xoff_;
        Utils._yoffhc = yoff_;
        
        for(int g = 0; g < files.length; g++)
        {
            files[g] = ruta + files[g];
        }
        
        LinkedList <DataXML> lst = new LinkedList();
        DataXML xml;
        
        for(int g = 0; g < files.length; g++)
        {
            System.out.println(g + ": " + files[g]);
            xml = XML.ObtenXMLF(files[g]);
            System.out.println("g: " + g + " XML Obtenido...");

            lst.add(xml);
        }
        
        System.out.println("Lista de archivos creada: " + lst.size());
        
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
        System.out.println("De longitud 1 removidas...");
        
        // Ahora, eliminamos los que sean relativamente iguales, en un mismo DataXML
        for(int i = 0; i < lst.size(); i++)
        {
            Utils.EliminaEq(lst.get(i));
        }
        
        System.out.println("Iguales eliminadas");
        
        // Ahora, unimos las calles para cada DataXML
        for(int i = 0; i < lst.size(); i++)
        {
            Utils.UneRoads(lst.get(i));
        }
        
        System.out.println("Unidas las carreteras...");
        
        DataXML general = new DataXML();
        general.setNombre("General");
        
        DataXML _tDataXML;
        LinkedList<Road> _tlstRoads;

        //Ahora, obtenemos de cada XML la lista de calles y las añadimos al general
        for(int i = 0; i < lst.size(); i++)
        {
            // Obtenemos el primer objeto
            _tDataXML = lst.get(i);
            // Obtenemos la lista de calles
            _tlstRoads = _tDataXML.getLstRoads();
            
            // Ahora, cada elemento de la lista original, lo copiamos en la general
            for(int j = 0; j < _tlstRoads.size(); j++)
            {
                general.getLstRoads().add(_tlstRoads.get(j));
            }
        }
        
        System.out.println("Creado el general...");

        
        // Ahora, eliminamos los que sean relativamente iguales, en un mismo DataXML
//        Utils.EliminaEq(general);
        
        System.out.println("Eliminadas las iguales 2");
        
//        Utils.UneRoads(general);
        
        lst.clear();
        lst.add(general);
        
        XML.guardarXML(lst, rutaS);
        
        
/*        

        
        
        


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
        
        //Hasta este punto, ya tenemos la lista de XMLs en objetos DataXML.
        // Ahora, hay que aplicarle los offsets
/*        for(int i = 0; i < lst.size(); i++)
        {
           Utils.SetOffsets(lst.get(i), 1, 256);
        }*/
        
//        System.out.println("Paso Offsets");

/*        // Ahora, eliminamos los que sean relativamente iguales, en un mismo DataXML
        for(int i = 0; i < lst.size(); i++)
        {
            Utils.EliminaEq(lst.get(i));
        }*/
        

        // Ahora, unimos las calles para cada DataXML
/*        for(int i = 0; i < lst.size(); i++)
        {
            Utils.UneRoads(lst.get(i));
        }//

//        System.out.println("Paso une carreteras");
        
        // Ahora creamos un sólo DataXML con todos los datos
        DataXML general = new DataXML();
        general.setNombre("General");
        
        System.out.println("Creo el principal donde meteré " + lst.size() + " elementos.");


        //Ahora, obtenemos de cada XML la lista de calles y las añadimos al general
        for(int i = 0; i < lst.size(); i++)
        {
            for(int j = 0; j < lst.get(i).getLstRoads().size(); j++)
            {
                general.getLstRoads().add(lst.get(i).getLstRoads().get(j));
            }
        }
        
//        System.out.println("General creado...");

        // Hasta aqui, tengo un DataXML gigantesco... Vuelvo a aplicar todo...
        // Ahora, eliminamos los que sean relativamente iguales, en un mismo DataXML
//        System.out.println("Uniré Roads...");
//        Utils.EliminaEq(general);
//        Utils.UneRoads(general);
//        System.out.println("Limpiaré la lista");
//        lst.clear();
//        System.out.println("Añado el general");
//        lst.add(general);
        System.out.println("Guardo...");

        XML.guardarXML(lst, rutaS);*/
    }
}
