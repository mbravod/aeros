package Model;

import Model.Data.XY;
import Model.Cortes.Interseccion;
import Model.Data.DataXML;
import Model.Data.Road;
import java.io.IOException;
import java.util.LinkedList;
import java.util.logging.Level;
import java.util.logging.Logger;
import xmlfull.XMLFull;

public class Utils
{
    public static int UbicaXY(double x, double y)
    {double tol=5.1;
        System.out.println("Recibo: (" + x + "," + y + ")");
        if((0-tol)<= x && x <= (256+tol) && (0-tol) <= y && y <= (256+tol))
        {
            System.out.println("Está dentro");
            return 1;
        }
        System.out.println("Está fuera");
        return -1;
    }
    
    public static void DetectaCruces(LinkedList <XY> lstXYs)
    {
        XY punto1;
        XY punto2;
        
        // Variables locales
        boolean paralelax = false, paralelay = false;
        Interseccion inter;
        int i = 0;
        
        while(i < lstXYs.size())
        {
            if(i < 0)
            {
                i = 0;
            }
            if(lstXYs.size() == 1)
            {
                // Si el tamaño es 1, terminamos
                break;
            }
            System.out.println("\n........\n" + i + "\tTamaño: " + lstXYs.size() + "\n........\n");
            // Asignamos los puntos...
            if(i == lstXYs.size() - 1)
            {
                // Se trata del último punto
                punto1 = lstXYs.get(i);
                // Ahora comparamos con el anterior
                punto2 = lstXYs.get(i-1);
                System.out.println("Case 2.\t\t\t Tamaño: " + lstXYs.size() + " i: " + i + " i-1: " + (i-1) + "\n");
            }
            else
            {
                System.out.println("i: " + i);
                punto1 = lstXYs.get(i);
                punto2 = lstXYs.get(i+1);
                System.out.println("Case 1.\t\t\t Tamaño: " + lstXYs.size() + " i: " + i + " i+1: " + (i+1) + "\n");
/*                try {
                    System.in.read();
                } catch (IOException ex) {
                    Logger.getLogger(Utils.class.getName()).log(Level.SEVERE, null, ex);
                }//*/
            }
            
            // Imprimimos los números para saber que son ellos
            System.out.println("-> El punto 1 es: (" + punto1.getX() + "," + punto1.getY() + ")");
            System.out.println("-> El punto 2 es: (" + punto2.getX() + "," + punto2.getY() + ")");
            
            // Creamos el objeto para hacer las comparaciones y todo eso
            inter = new Interseccion(punto1, punto2);
            
            // Paralelismo
            //------------------------------------------------------------------
            // Primero verificamos que los puntos no sean paralelas a los ejes
            paralelax = inter.ParalelaX();
            paralelay = inter.ParalelaY();
            
            System.out.println("-> Paralela al eje X? " + paralelax + "\n-> Paralela al eje Y? " + paralelay);
            
            if(paralelax || paralelay)
            {
                // Si es paralela a X o a Y...
                if(paralelax)
                {
                    System.out.println("\tLa recta pasa por y=" + inter.getYp());
                    // Determinamos si la recta está fuera del cuadro 0,0 y 255,255
                    // Si es así, eliminamos ambos puntos
                    if(inter.getYp() < 0 || 255 < inter.getYp())
                    {
                        // Se elimina
                        System.out.println("\t\t-> Se elimina el primer punto por ser paralela");
                        // Pero como eso nos complica, sólo eliminamos el primer punto
                        lstXYs.remove(i);
                        i--;
                    }
                    else
                    {
                        if(punto1.getX() < Interseccion.origen && punto2.getX() < Interseccion.origen)
                        {
                            lstXYs.remove(i);
                            i--;
                        }
                        else if(punto1.getX() < Interseccion.origen && Interseccion.origen <= punto2.getX())
                        {
                            punto1.setX(Interseccion.origen);
//                            i++;
                        }
                        else if(Interseccion.origen <= punto1.getX() && punto1.getX() <= Interseccion.recta)
                        {
                            // No hago nada
//                            i++;
                        }
                        else if(Interseccion.recta < punto1.getX() && punto2.getX() < Interseccion.recta)
                        {
                            punto1.setX(Interseccion.recta);
//                            i++;
                        }
                        else
                        {
                            lstXYs.remove(i);
                            i--;
                        }
                    }
                }
                else
                {
                    System.out.println("\tLa recta pasa por x=" + inter.getXp());
                    // Determinamos si la recta está fuera del cuadro 0,0 y 255,255
                    // Si es así, eliminamos ambos puntos
                    
                    if(inter.getXp() < 0 || 255 < inter.getXp())
                    {
                        // Se elimina
                        System.out.println("\t\t-> Se elimina el primer punto por ser paralela");
                        // Pero como eso nos complica, sólo eliminamos el primer punto
                        lstXYs.remove(i);
                        i--;
                    }
                    else
                    {
                        if(punto1.getY() < Interseccion.origen && punto2.getY() < Interseccion.origen)
                        {
                            lstXYs.remove(i);
                            i--;
                        }
                        else if(punto1.getY() < Interseccion.origen && Interseccion.origen <= punto2.getY())
                        {
                            punto1.setY(Interseccion.origen);
//                            i++;
                        }
                        else if(Interseccion.origen <= punto1.getY() && punto1.getY() <= Interseccion.recta)
                        {
                            // No hago nada
//                            i++;
                        }
                        else if(Interseccion.recta < punto1.getY() && punto2.getY() < Interseccion.recta)
                        {
                            punto1.setY(Interseccion.recta);
//                            i++;
                        }
                        else
                        {
                            lstXYs.remove(i);
                            i--;
                        }
                    }
                }
            }
            else
            {
                //------------------------------------------------------------------
                // Si no son paralelas...
                System.out.println("-> No son paralelas");

                // Obtenemos la pendiente
                System.out.println("Pendiente: " + inter.Pendiente());
                // Obtenemos el corte en X = 0
                inter.ObtenCorteX(true);
                // Obtenemos el corte en Y = 0
                inter.ObtenCorteY(true);
                // Obtenemos el corte en X = 255
                inter.ObtenCorteX(false);
                // Obtenemos el corte en Y = 255
                inter.ObtenCorteY(false);

                // Una vez obtenidos los puntos de corte, examinamos los puntos, si están o no dentro...
                // Ubicamos los puntos
                int ub1 = inter.UbicaPoint(punto1);
                int ub2 = inter.UbicaPoint(punto2);
                System.out.println("->\tPunto 1: " + ub1 + "\n->\tPunto 2: " + ub2);
                
                // Caso 1: si los dos puntos están en el mismo cuadrante
                //      -> Eliminamos el primero de ellos
                // Caso 2: Si el punto 1 es -1... 
                //      -> Si el punto 2 es 3, -3, 2, -4, eliminamos el punto 1
                //      -> Si el punto 1 es -2 y el punto 2 es: 4,-3,5,-4
                //      -> Si el punto 1 es -3 y el punto 2 es: 3,-1,4,-2
                //      -> Si el punto 1 es -4 y el punto 2 es: -1,2,5,-2
                
                /*if(ub1 != 1 && ub1 == ub2)
                {
                    
                 }
                else*/ if((ub1 != 1 && ub1 == ub2) ||
                        (ub1 == -1 && ub2 == 3) || 
                        (ub1 == -1 && ub2 == -3) ||
                        (ub1 == -1 && ub2 == 2) ||
                        (ub1 == -1 && ub2 == -4) ||
                        (ub1 == -2 && ub2 == 4) ||
                        (ub1 == -2 && ub2 == -3) ||
                        (ub1 == -2 && ub2 == 5) ||
                        (ub1 == -2 && ub2 == -4) ||
                        (ub1 == -3 && ub2 == 4) ||
                        (ub1 == -3 && ub2 == -2) ||
                        (ub1 == -3 && ub2 == 3) ||
                        (ub1 == -3 && ub2 == -1) ||
                        (ub1 == -4 && ub2 == 5) ||
                        (ub1 == -4 && ub2 == -2) ||
                        (ub1 == -4 && ub2 == 2) ||
                        (ub1 == -4 && ub2 == -1) ||
                        (ub1 == 2 && ub2 == -1) ||
                        (ub1 == 2 && ub2 == -4) ||
                        (ub1 == 2 && ub2 == -1) ||
                        (ub1 == 3 && ub2 == -3) ||
                        (ub1 == 3 && ub2 == -1) ||
                        (ub1 == 4 && ub2 == -3) ||
                        (ub1 == 4 && ub2 == -2) ||
                        (ub1 == 5 && ub2 == -2) ||
                        (ub1 == 5 && ub2 == -4))
                {
                    // Eliminamos el punto actual (o sea, el 1)
                    lstXYs.remove(i);
                    i--;
                }
                else if(ub1 == 1)
                {
                    // No hago nada.. Paso al siguiente punto
//                    i++;
                }
                else if((ub1 == -1 && ub2 == 1) ||
                        (ub1 == -1 && ub2 == 4) ||
                        (ub1 == -1 && ub2 == 5) ||
                        (ub1 == -1 && ub2 == -2))
                {
                    //Reubicamos el punto 1 en algún cruce
                    XY[] TMPCorte = inter.getCorteO();
                    // Vemos cual es más apropiado
                    if(TMPCorte[0].getX() == Interseccion.origen && TMPCorte[1].getY() == Interseccion.origen)
                    {
                        // Reasignamos el punto en 0,0
                        punto1.setX(TMPCorte[0].getX());
                        punto1.setY(TMPCorte[1].getY());
                    }
                    else if(TMPCorte[0].getX() < Interseccion.origen)
                    {
                        punto1.setX(TMPCorte[0].getX());
                        punto1.setY(TMPCorte[0].getY());
                    }
                    else if(TMPCorte[1].getY() < Interseccion.origen)
                    {
                        punto1.setX(TMPCorte[1].getX());
                        punto1.setY(TMPCorte[1].getY());
                    }
                    i--;
                }
                else if((ub1 == -2 && ub2 == 1) ||
                        (ub1 == -2 && ub2 == 3) ||
                        (ub1 == -2 && ub2 == 2) ||
                        (ub1 == -2 && ub2 == -1))
                {
                    //Reubicamos el punto 1 en algún cruce
                    XY[] TMPCorte = inter.getCorteR();
                    // Vemos cual es más apropiado
                    if(TMPCorte[0].getX() == Interseccion.recta && TMPCorte[1].getY() == Interseccion.recta)
                    {
                        // Reasignamos el punto en 0,0
                        punto1.setX(TMPCorte[0].getX());
                        punto1.setY(TMPCorte[1].getY());
                    }
                    else if(Interseccion.recta < TMPCorte[0].getX())
                    {
                        punto1.setX(TMPCorte[0].getX());
                        punto1.setY(TMPCorte[0].getY());
                    }
                    else if(Interseccion.recta < TMPCorte[1].getY())
                    {
                        punto1.setX(TMPCorte[1].getX());
                        punto1.setY(TMPCorte[1].getY());
                    }
                    i--;
                }
                else if((ub1 == -3 && ub2 == 1) ||
                        (ub1 == -3 && ub2 == 5) ||
                        (ub1 == -3 && ub2 == 2) ||
                        (ub1 == -3 && ub2 == -4))
                {
                    //Reubicamos el punto 1 en algún cruce
                    XY[] TMPCorteO = inter.getCorteO();
                    XY[] TMPCorteR = inter.getCorteR();
                    
                    // Vemos cual es más apropiado
                    if(Interseccion.recta < TMPCorteO[1].getY())
                    {
                        punto1.setX(TMPCorteO[1].getX());
                        punto1.setY(TMPCorteO[1].getY());
                    }
                    else if(TMPCorteR[0].getX() < Interseccion.origen)
                    {
                        punto1.setX(TMPCorteR[0].getX());
                        punto1.setY(TMPCorteR[0].getY());
                    }
                    else if(TMPCorteO[1].getY() == Interseccion.recta && TMPCorteR[0].getX() == Interseccion.origen)
                    {
                        punto1.setX(TMPCorteR[0].getX());
                        punto1.setY(TMPCorteO[1].getY());
                    }
                    i--;
                }
                else if((ub1 == -4 && ub2 == 1) ||
                        (ub1 == -4 && ub2 == 2) ||
                        (ub1 == -4 && ub2 == 5) ||
                        (ub1 == -4 && ub2 == -3))
                {
                    //Reubicamos el punto 1 en algún cruce
                    XY[] TMPCorteO = inter.getCorteO();
                    XY[] TMPCorteR = inter.getCorteR();
                    
                    // Vemos cual es más apropiado
                    if(Interseccion.recta < TMPCorteO[0].getX())
                    {
                        punto1.setX(TMPCorteO[0].getX());
                        punto1.setY(TMPCorteO[0].getY());
                    }
                    else if(TMPCorteR[1].getY() < Interseccion.origen)
                    {
                        punto1.setX(TMPCorteR[1].getX());
                        punto1.setY(TMPCorteR[1].getY());
                    }
                    else if(TMPCorteO[0].getX() == Interseccion.recta && TMPCorteR[1].getY() == Interseccion.origen)
                    {
                        punto1.setX(TMPCorteO[0].getX());
                        punto1.setY(TMPCorteR[1].getY());
                    }
                    i--;
                }
                else if(ub1 == 2)
                {
                    XY[] TMPCorte = inter.getCorteO();
                    
                    if(Interseccion.origen <= TMPCorte[0].getX() && TMPCorte[0].getX() <= Interseccion.recta)
                    {
                        punto1.setX(TMPCorte[0].getX());
                        punto1.setY(TMPCorte[0].getY());
                    }
                    else
                    {
                        // Eliminamos el punto actual (o sea, el 1)
                        lstXYs.remove(i);
                        i--;
                    }
                }
                else if(ub1 == 3)
                {
                    XY[] TMPCorte = inter.getCorteO();
                    
                    if(Interseccion.origen <= TMPCorte[1].getY() && TMPCorte[1].getY() <= Interseccion.recta)
                    {
                        punto1.setX(TMPCorte[1].getX());
                        punto1.setY(TMPCorte[1].getY());
                    }
                    else
                    {
                        // Eliminamos el punto actual (o sea, el 1)
                        lstXYs.remove(i);
                        i--;
                    }
                }
                else if(ub1 == 4)
                {
                    XY[] TMPCorte = inter.getCorteR();
                    
                    if(Interseccion.origen <= TMPCorte[0].getX() && TMPCorte[0].getX() <= Interseccion.recta)
                    {
                        punto1.setX(TMPCorte[0].getX());
                        punto1.setY(TMPCorte[0].getY());
                    }
                    else
                    {
                        // Eliminamos el punto actual (o sea, el 1)
                        lstXYs.remove(i);
                        i--;
                    }
                }
                else if(ub1 == 5)
                {
                    XY[] TMPCorte = inter.getCorteR();
                    
                    if(Interseccion.origen <= TMPCorte[1].getY() && TMPCorte[1].getY() <= Interseccion.recta)
                    {
                        punto1.setX(TMPCorte[1].getX());
                        punto1.setY(TMPCorte[1].getY());
                    }
                    else
                    {
                        // Eliminamos el punto actual (o sea, el 1)
                        lstXYs.remove(i);
                        i--;
                    }
                }
///////////////////////////////////////////////////////////////////////////////////
            }
            i++;
        }
    }
    
    public static int xoffhc= 235840;
    public static int yoffhc= 466064;
    
    
    public static void SetOffsets(DataXML obj, int factor, int off)
    {
        // Obtenemos los valores relativos del offset
        int x = obj.getXoff();
        int y = obj.getYoff();
        // Ajustamos los valores para el offset
        double fc = 1.0/factor;
        double offsetX = (xoffhc-x)*-off;
        double offsetY = (yoffhc-y)*-off;
        System.out.println("Off: " + offsetX + "," + offsetY);
        offsetX=-offsetX;
        // Obtenemos la lista de Roads del archivo
        LinkedList<Road> lstRoads = obj.getLstRoads();
        Road roadTmp;
        LinkedList<XY> lstXYs;
        
        for(int i = 0; i < lstRoads.size(); i++)
        {
            roadTmp = lstRoads.get(i);
            
            // Multiplicamos el valor del ancho por el factor
            roadTmp.setWidth(roadTmp.getWidth()*fc);
            // Obtenemos la lista de puntos
            lstXYs = roadTmp.getLstXYs();
            
            for(int j = 0; j < lstXYs.size(); j++)
            {
                lstXYs.get(j).setX(-(lstXYs.get(j).getX()*fc) + offsetX);
                lstXYs.get(j).setY((lstXYs.get(j).getY()*fc) + offsetY);
            }
        }
    }
    
    public static int _xoffhc= 235840;
    public static int _yoffhc= 466064;
    
    public static void SetOffsetsX(DataXML obj)
    {
        // Obtenemos los valores relativos del offset
        int x = obj.getXoff();
        int y = obj.getYoff();
        // Ajustamos los valores para el offset
        int fc = 1;
        double offsetX = (_xoffhc-x)*-256;
        double offsetY = (_yoffhc-y)*-256;
        System.out.println("Off: " + offsetX + "," + offsetY);
//        offsetX=offsetX;
        // Obtenemos la lista de Roads del archivo
        LinkedList<Road> lstRoads = obj.getLstRoads();
        Road roadTmp;
        LinkedList<XY> lstXYs;
        
        for(int i = 0; i < lstRoads.size(); i++)
        {
            roadTmp = lstRoads.get(i);
            
            // Multiplicamos el valor del ancho por el factor
            roadTmp.setWidth(roadTmp.getWidth()*fc);
            // Obtenemos la lista de puntos
            lstXYs = roadTmp.getLstXYs();
            
            for(int j = 0; j < lstXYs.size(); j++)
            {
                lstXYs.get(j).setX(-(lstXYs.get(j).getX()*fc) + offsetX);
                lstXYs.get(j).setY((lstXYs.get(j).getY()*fc) + offsetY);
            }
        }
    }
    
    public static boolean RoadsEq(Road a, Road b)
    {
        // Comparamos los tamaños
        if((b.getWidth() - XMLFull.tolerance) < a.getWidth() && a.getWidth() < (b.getWidth() + XMLFull.tolerance))
        {
            // Si son iguales, comparamos punto por punto
            if(a.getLstXYs().size() == b.getLstXYs().size())
            {
                // Si los tamaños son iguales, proseguimos con la comparación
                // Comparams uno a uno los puntos
                for(int i = 0; i < a.getLstXYs().size(); i++)
                {
                    if(((b.getLstXYs().get(i).getX() - XMLFull.tolerance) <= a.getLstXYs().get(i).getX()) 
                            && (a.getLstXYs().get(i).getX() <= (b.getLstXYs().get(i).getX() + XMLFull.tolerance))
                            && ((b.getLstXYs().get(i).getY() - XMLFull.tolerance) <= a.getLstXYs().get(i).getY()) 
                            && (a.getLstXYs().get(i).getY() <= (b.getLstXYs().get(i).getY() + XMLFull.tolerance)))
                    {
                        //Continuo
                    }
                    else
                    {
                        // Salgo
                        return false;
                    }
                }
                return true;
            }
            else
            {
                // Si los tamaños son distintos, proseguimos con la comparación de distinta manera
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    
    public static void EliminaEq(DataXML dataXML)
    {
        // Recibimos un DataXML...
        // Este DataXML tiene una lista de carreteras
        // Lo que haremos es obtener cada una de esas carreteras 
        // y compararla contra las demás...
        int i = 0;
        // Obtenemos la lista de carreteras
        LinkedList<Road> lstRoads = dataXML.getLstRoads();
        System.out.println("El tamaño de la lista es: " + lstRoads.size());
        Road a, b;
        boolean iguales = false;
        
        
        while(i < (lstRoads.size() - 1))
        {
            System.out.println("Vamos en la pista: " + i + " de " + (lstRoads.size() - 1));
            // Obtenemos la Road a y la Road b
            a = lstRoads.get(i);
            
            for(int j = i+1; j < lstRoads.size(); j++)
            {
                b = lstRoads.get(j);
                
                // invocamos ala función que las compara
                iguales = Utils.RoadsEq(a, b);

                if(iguales)
                {
                    System.out.println(">>>>>>>>>>>>>>>>>>>>>>> IGUALES");
                    // Si son iguales, eliminamos la segunda road
                    lstRoads.remove(j);
                    // Dejamos el índice i igual
                    // rompemos el ciclo
                    break;
                }
            }
            if(!iguales)
                i++;
        }
    }
    
    public static void UneRoads(DataXML obj)
    {
        // En esta función, uniremos los caminos
        // Comenzaremos uniendo el final de las pistas con los inicios de las subsecuentes
        // Obtenemos la lista de Calles
        LinkedList<Road> lstRoads = obj.getLstRoads();
        // Por cada Road obtenemos la lista de calles
        Road road1, road2;
        int i = 0, j = 0;
        double w1, w2;
        
        XY last, first;
        boolean EqualPoints;
        
        
        while(i < lstRoads.size() - 1)
        {
            // Obtenemos la primer calle contra la que compararemos
            road1 = lstRoads.get(i);
            // Obtenemos el ancho de la calle
            w1 = road1.getWidth();
            // Onbtenemos en este primer caso, el XY final contra el que compararemos
            last = road1.getLstXYs().getLast();
            
            // Obtenemos los subsecuentes inicios de las calles
            // y los comparamos con el final de la calle actual
            while(j < lstRoads.size())
            {
                // Obtenemos la subsecuente calle
                road2 = lstRoads.get(j);
                // Obtenemos el ancho de la calle
                w2 = road2.getWidth();
                
                // Comparamoos los tamaños: si son iguales, proseguimos; si no, pues no
                if(((w1 - XMLFull.tolerance) <= w2) && w2 <= (w1 + XMLFull.tolerance))
                {
                    // Si los anchos son casi iguales...
                    // Obtenemos el elemento final de la calle
                    first = road2.getLstXYs().getFirst();
                    // Comparamos ambos puntos
                    EqualPoints = EqualPoints(last, first);

                    if(EqualPoints)
                    {
                        // Si los puntos son iguales...
                        // Añadimos la segunda lista con la primera
                        for(int k = 1; k < lstRoads.get(j).getLstXYs().size(); k++)
                        {
                            lstRoads.get(i).getLstXYs().add(lstRoads.get(j).getLstXYs().get(k));
                        }

                        // Removemos el elemento que copìamos
                        lstRoads.remove(j);
                        
                        // Ahora, rompemos el while para volver a comparar
                        break;
                    }
                    else
                    {
                        j++;
                    }
                    
                }
                else
                {
                    j++;
                }
            }
            // Pasamos al siguiente elemento de la lista
            i++;
        }
        
        // Ahora comparamos finales con finales
        // Reiniciamos las variables de control
        boolean reiniciar = false;
        i = 0;
        j = 0;
        
        while(i < lstRoads.size() - 1)
        {
            if(reiniciar)
            {
                reiniciar = !reiniciar;
            }
            
            // Obtenemos la primer calle contra la que compararemos
            road1 = lstRoads.get(i);
            // Obtenemos el ancho de la calle
            w1 = road1.getWidth();
            // Onbtenemos en este primer caso, el XY final contra el que compararemos
            last = road1.getLstXYs().getLast();
            
            // Obtenemos los subsecuentes inicios de las calles
            // y los comparamos con el inicio de la calle actual
            while(j < lstRoads.size())
            {
                // Obtenemos la subsecuente calle
                road2 = lstRoads.get(j);
                // Obtenemos el ancho de la calle
                w2 = road2.getWidth();
                
                // Comparamoos los tamaños: si son iguales, proseguimos; si no, pues no
                if(((w1 - XMLFull.tolerance) <= w2) && w2 <= (w1 + XMLFull.tolerance))
                {
                    // Si los anchos son casi iguales...
                    // Obtenemos el elemento inicial de la calle
                    first = road2.getLstXYs().getLast();
                    // Comparamos ambos puntos
                    EqualPoints = EqualPoints(last, first);

                    if(EqualPoints)
                    {
                        // Si los puntos son iguales...
                        // Añadimos la segunda lista con la primera, invirtiéndola
                        LinkedList<XY> InvierteLista = Utils.InvierteLista(lstRoads.get(j).getLstXYs());
                        
                        for(int k = 0; k < InvierteLista.size(); k++)
                        {
                            lstRoads.get(i).getLstXYs().add(InvierteLista.get(k));
                        }
                        
                        // Removemos el elemento que copìamos
                        lstRoads.remove(j);
                        
                        // indicamos la salida
                        reiniciar = true;
                        
                        // Ahora, rompemos el while para volver a comparar
                        break;
                    }
                    else
                    {
                        j++;
                    }
                    
                }
                else
                {
                    j++;
                }
            }
            
            if(reiniciar)
            {
                i = 0;
            }
            else
            {
                // Pasamos al siguiente elemento de la lista
                i++;
            }
        }
        
        // Ahora comparamos finales con finales
        // Reiniciamos las variables de control
        i = 0;
        j = 0;
        reiniciar = false;
        
        while(i < lstRoads.size() - 1)
        {
            if(reiniciar)
            {
                reiniciar = !reiniciar;
            }
            
            // Obtenemos la primer calle contra la que compararemos
            road1 = lstRoads.get(i);
            // Obtenemos el ancho de la calle
            w1 = road1.getWidth();
            // Onbtenemos en este primer caso, el XY inicial contra el que compararemos
            last = road1.getLstXYs().getFirst();
            
            // Obtenemos los subsecuentes inicios de las calles
            // y los comparamos con el inicio de la calle actual
            while(j < lstRoads.size())
            {
                // Obtenemos la subsecuente calle
                road2 = lstRoads.get(j);
                // Obtenemos el ancho de la calle
                w2 = road2.getWidth();
                
                // Comparamoos los tamaños: si son iguales, proseguimos; si no, pues no
                if(((w1 - XMLFull.tolerance) <= w2) && w2 <= (w1 + XMLFull.tolerance))
                {
                    // Si los anchos son casi iguales...
                    // Obtenemos el elemento inicial de la calle
                    first = road2.getLstXYs().getFirst();
                    // Comparamos ambos puntos
                    EqualPoints = EqualPoints(last, first);

                    if(EqualPoints)
                    {
                        // Si los puntos son iguales...
                        // Añadimos la segunda lista con la primera, invirtiéndola
                        // Pero recordemos que esta lista se añadirá al inicio
                        // Entonces, creamos una nueva lista con la que sustituiremos la original
                        LinkedList<XY> InvierteLista = Utils.InvierteLista(lstRoads.get(j).getLstXYs());
                        // Ahora, a la nueva lista le añadimos los elementos originales de la posición original
                        
                        for(int k = 0; k < lstRoads.get(i).getLstXYs().size(); k++)
                        {
                            InvierteLista.add(lstRoads.get(i).getLstXYs().get(k));
                        }
                        
                        // Sustituimos la lista vieja con la nueva lista
                        lstRoads.get(i).setLstXYs(InvierteLista);

                        // Removemos el elemento que copìamos
                        lstRoads.remove(j);
                        
                        // indicamos la salida
                        reiniciar = true;
                        
                        // Ahora, rompemos el while para volver a comparar
                        break;
                    }
                    else
                    {
                        j++;
                    }
                    
                }
                else
                {
                    j++;
                }
            }
            
            if(reiniciar)
            {
                i = 0;
            }
            else
            {
                // Pasamos al siguiente elemento de la lista
                i++;
            }
        }
    }
    
    public static boolean EqualPoints(XY punto1, XY punto2)
    {
        // Obtenemos los componentes del primer
        double p1X = punto1.getX();
        double p1Y = punto1.getY();
        
        double p2X = punto2.getX();
        double p2Y = punto2.getY();
        
        // Hacemos la comparación
        if(((p1X - XMLFull.tolerance) <= p2X) && (p2X <= (p1X - XMLFull.tolerance))
                && ((p1Y - XMLFull.tolerance) <= p2Y) && (p2Y <= (p1Y - XMLFull.tolerance)))
        {
            return true;
        }
        return false;
    }
    
    public static LinkedList<XY> InvierteLista(LinkedList<XY> lstOri)
    {
        // En esta función invertiremos una lista de XYs
        // Declaramos la nueva lusta a trabajar
        LinkedList <XY> lstNew = new LinkedList();
        
        // Copiamos uno a uno los elementos de la lista de forma invertida, excepto el primero
        for(int i = lstOri.size() -1; 0 < i; i--)
        {
            lstNew.add(lstOri.get(i));
        }
        
        return lstNew;
    }
}
