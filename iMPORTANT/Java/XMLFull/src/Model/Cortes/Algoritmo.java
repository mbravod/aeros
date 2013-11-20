package Model.Cortes;

import Model.Data.XY;
import Model.*;
import java.util.LinkedList;
import Model.Utils;

public class Algoritmo
{
    public static void main(String []args)
    {
        // Creamos la lista de punto...
        LinkedList <XY> lstXYs = new LinkedList();
/*        lstXYs.add(new XY(-6,-2));
        lstXYs.add(new XY(-4,-1));
        lstXYs.add(new XY(-1,0.5));
        lstXYs.add(new XY(2,2));
        lstXYs.add(new XY(4,3));
        lstXYs.add(new XY(7,5));//
        lstXYs.add(new XY(510,256));
        lstXYs.add(new XY(598,300));//*/
        lstXYs.add(new XY(-2,-2));
        lstXYs.add(new XY(-3,-0.8));
        lstXYs.add(new XY(-3, 1));
        lstXYs.add(new XY(-1.3,2.2));
        lstXYs.add(new XY(0.3,1));
        lstXYs.add(new XY(2,2.2));
        lstXYs.add(new XY(3.5,3.8));//*/
        
        
        for(int j = 0; j < lstXYs.size(); j++)
        {
            System.out.println("-> El punto " + j +" es: (" + lstXYs.get(j).getX() + "," + lstXYs.get(j).getY() + ")");
        }
        
        System.out.println(".......................................................");
        
        Utils.DetectaCruces(lstXYs);
        
/*        XY punto1;
        XY punto2;
        
        // Variables locales
        boolean paralelax = false, paralelay = false;
        boolean ultimoP = false;
        Interseccion inter;
        int i = 0;
        
        while(i < lstXYs.size())
        {
            System.out.println("\n........\n" + i + "\n........\n");
            // Asignamos los puntos...
            if(i == lstXYs.size() - 1)
            {
                // Se trata del último punto
                ultimoP = true;
                punto1 = lstXYs.get(i);
                // Ahora comparamos con el anterior
                punto2 = lstXYs.get(i-1);
            }
            else
            {
                ultimoP = false;
                punto1 = lstXYs.get(i);
                punto2 = lstXYs.get(i+1);
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
                    System.out.println("\tLa recta pasa por x=" + inter.getXp());
                    // Determinamos si la recta está fuera del cuadro 0,0 y 255,255
                    // Si es así, eliminamos ambos puntos
                    if(inter.getXp() < 0 || 255 < inter.getXp())
                    {
                        // Se elimina
                        System.out.println("\t\t-> Se elimina la línea");
                    }
                    else
                    {
                        // Si es paralela pero no está fuera del cuadro, determinamos si los puntos están dentro
                        System.out.println("Paralela");
                        // Creamos el primer punto
                    }
                }
                else
                {
                    System.out.println("\tLa recta pasa por y=" + inter.getYp());
                    // Determinamos si la recta está fuera del cuadro 0,0 y 255,255
                    // Si es así, eliminamos ambos puntos
                    if(inter.getYp() < 0 || 255 < inter.getYp())
                    {
                        // Se elimina
                        System.out.println("\t\t-> Se elimina la línea");
                    }
                }
//                return;
            }
            else
            {
                //------------------------------------------------------------------
                // Si no son paralelas...
                System.out.println("-> No son paralelas");

                // Obtenemos la pendiente
//                System.out.println("Pendiente: " + inter.Pendiente());
                // Obtenemos el corte en X = 0
                inter.EcuacionX(true);
                // Obtenemos el corte en Y = 0
                inter.EcuacionY(true);
                // Obtenemos el corte en X = 255
                inter.EcuacionX(false);
                // Obtenemos el corte en Y = 255
                inter.EcuacionY(false);

                // Una vez obtenidos los puntos de corte, examinamos los puntos, si están o no dentro...
                // Primero el punto 1
                int ub1 = inter.UbicaPoint(punto1);
                int ub2 = inter.UbicaPoint(punto2);
                System.out.println("->\tPunto 1: " + ub1 + "\n->\tPunto 2: " + ub2);
                
                
///////////////////////////////////////////////////////////////////////////////////
                // Detectamos los casos
                if(ub1 == 1 && ub2 == 1)
                {
                    System.out.println("La recta esta dentro");
                    // No hacemos nada
    //                return;
                }
///////////////////////////////////////////////////////////////////////////////////
                else if(ub1 < 0 && ub2 < 0)
                {
                    System.out.println("La recta está fuera del cuadro... Se elimina el primer punto");
                    lstXYs.remove(i);
                    i--;
                }
///////////////////////////////////////////////////////////////////////////////////
                else if((ub1 == 1 && ub2 != 1) || (ub2 == 1 && ub1 != 1))
                {
                    System.out.println(">>>>>> Hay un cruce...");
                    // Obtenemos los puntos de corte
                    XY []cruceO = inter.getCorteO();
                    XY []cruceR = inter.getCorteR();
                    
                    // Determinamos cual es el punto que está dentro y cual fuera
                    if(ub1 == 1)
                    {
                        // Esto quiere decir, que el punto 1 está dentro y el 2 fuera
                        System.out.println("\t=> El punto 1 está dentro, y el punto 2 está fuera");
                        
                        // Determinamos si es el punto el que está fuera del cuadrante
                        if(ub2 < 0)
                        {
                            //Determinamos si la pendiente es negativa o positiva
                            if(inter.isMPositiva())
                            {
                                // La pendiente es positiva
                                // Significa que ub2 = -1 o ub2 = -2
                                System.out.println("\t\t - La pendiente es positiva... " + ub2);

                                if(ub2 == -1)
                                {
                                    if(cruceO[0].getX() < 0 && 0 <= cruceO[1].getY())
                                    {
                                        // El segmento cruza por el eje y
                                        punto2.setX(cruceO[1].getX());
                                        punto2.setY(cruceO[1].getY());
                                    }
                                    else if(0 <= cruceO[0].getX() && cruceO[1].getY() < 0)
                                    {
                                        // El segmento cruza por el eje x
                                        punto2.setX(cruceO[0].getX());
                                        punto2.setY(cruceO[0].getY());
                                    }
                                }
                                else
                                {
                                    if(Interseccion.recta < cruceR[0].getX() && cruceR[1].getY() < Interseccion.recta)
                                    {
                                        // El segmento cruza por el eje yR
                                        punto2.setX(cruceR[1].getX());
                                        punto2.setY(cruceR[1].getY());
                                    }
                                    else if(cruceR[0].getX() < Interseccion.recta && Interseccion.recta < cruceR[1].getY())
                                    {
                                        // El segmento cruza por el eje x
                                        punto2.setX(cruceR[0].getX());
                                        punto2.setY(cruceR[0].getY());
                                    }
                                }
                                
                                
                            }
                            else
                            {
                                // La pendiente es negativa
                                // Significa que ub2 = -3 o ub2 = -4
                                System.out.println("\t\t - La pendiente es negativa");
                            }
                        }
                        else if(ub2 == 2)
                        {
                            punto2.setX(cruceO[0].getX());
                            punto2.setY(cruceO[0].getY());
                        }
                        else if(ub2 == 3)
                        {
                            punto2.setX(cruceO[1].getX());
                            punto2.setY(cruceO[1].getY());
                        }
                        else if(ub2 == 4)
                        {
                            punto2.setX(cruceR[0].getX());
                            punto2.setY(cruceR[0].getY());
                        }
                        else if(ub2 == 5)
                        {
                            punto2.setX(cruceR[1].getX());
                            punto2.setY(cruceR[1].getY());
                        }
                        else
                        {
                            System.out.println("==============================FATAL ERROR");
                        }
                    }
                    else
                    {
                        // Esto quiere decir, que el punto 2 está dentro y el 1 fuera
                        System.out.println("\t=> El punto 2 está dentro, y el punto 1 está fuera");
                        
                        // Determinamos si es el punto el que está fuera del cuadrante
                        if(ub1 < 0)
                        {
                            //Determinamos si la pendiente es negativa o positiva
                            if(inter.isMPositiva())
                            {
                                // La pendiente es positiva
                                // Significa que ub2 = -1 o ub2 = -2
                                System.out.println("\t\t - La pendiente es positiva... " + ub1);

                                if(ub1 == -1)
                                {
                                    if(cruceO[0].getX() < 0 && 0 <= cruceO[1].getY())
                                    {
                                        // El segmento cruza por el eje y
                                        punto1.setX(cruceO[1].getX());
                                        punto1.setY(cruceO[1].getY());
                                    }
                                    else if(0 <= cruceO[0].getX() && cruceO[1].getY() < 0)
                                    {
                                        // El segmento cruza por el eje x
                                        punto1.setX(cruceO[0].getX());
                                        punto1.setY(cruceO[0].getY());
                                    }
                                }
                                else
                                {
                                    if(Interseccion.recta < cruceR[0].getX() && cruceR[1].getY() < Interseccion.recta)
                                    {
                                        // El segmento cruza por el eje yR
                                        punto1.setX(cruceR[1].getX());
                                        punto1.setY(cruceR[1].getY());
                                    }
                                    else if(cruceR[0].getX() < Interseccion.recta && Interseccion.recta < cruceR[1].getY())
                                    {
                                        // El segmento cruza por el eje x
                                        punto1.setX(cruceR[0].getX());
                                        punto1.setY(cruceR[0].getY());
                                    }
                                }
                                
                                
                            }
                            else
                            {
                                // La pendiente es negativa
                                // Significa que ub2 = -3 o ub2 = -4
                                System.out.println("\t\t - La pendiente es negativa");
                            }
                        }
                        else if(ub1 == 2)
                        {
                            punto1.setX(cruceO[0].getX());
                            punto1.setY(cruceO[0].getY());
                        }
                        else if(ub1 == 3)
                        {
                            System.out.println("Caso 3: " + cruceO[1].getX() + "," + cruceO[1].getY());
                            punto1.setX(cruceO[1].getX());
                            punto1.setY(cruceO[1].getY());
                        }
                        else if(ub1 == 4)
                        {
                            punto1.setX(cruceR[0].getX());
                            punto1.setY(cruceR[0].getY());
                        }
                        else if(ub1 == 5)
                        {
                            punto1.setX(cruceR[1].getX());
                            punto1.setY(cruceR[1].getY());
                        }
                        else
                        {
                            System.out.println("==============================FATAL ERROR");
                        }
                    }

                }
///////////////////////////////////////////////////////////////////////////////////
                else
                {
                    System.out.println("Cualquier otro caso");
                    lstXYs.remove(i);
                    i--;
                }
///////////////////////////////////////////////////////////////////////////////////
            }
//            System.out.println("");
            i++;
        }//*/
        
        System.out.println(".......................................................");
        
        for(int j = 0; j < lstXYs.size(); j++)
        {
            System.out.println("-> El punto " + j +" es: (" + lstXYs.get(j).getX() + "," + lstXYs.get(j).getY() + ")");
        }
        
/*        // Comenzamos con el algoritmo
        // Tomamos los dos primeros puntos
        punto1 = lstXYs.get(i);
        punto2 = lstXYs.get(i+1);
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
        System.out.println("La recta es paralela al eje X? " + paralelax);
        System.out.println("La recta es paralela al eje Y? " + paralelay);
        if(paralelax || paralelay)
        {
            // Si es paralela a X o a Y...
            if(paralelax)
            {
                System.out.println("\tLa recta pasa por x=" + inter.getXp());
                // Determinamos si la recta está fuera del cuadro 0,0 y 255,255
                // Si es así, eliminamos ambos puntos
                if(inter.getXp() < 0 || 255 < inter.getXp())
                {
                    // Se elimina
                    System.out.println("\t\t-> Se elimina la línea");
                }
                else
                {
                    // Si es paralela pero no está fuera del cuadro, determinamos si los puntos están dentro
                    System.out.println("Paralela");
                    // Creamos el primer punto
                }
            }
            else
            {
                System.out.println("\tLa recta pasa por y=" + inter.getYp());
                // Determinamos si la recta está fuera del cuadro 0,0 y 255,255
                // Si es así, eliminamos ambos puntos
                if(inter.getYp() < 0 || 255 < inter.getYp())
                {
                    // Se elimina
                    System.out.println("\t\t-> Se elimina la línea");
                }
            }
            return;
        }
        else
        {
            //------------------------------------------------------------------
            // Si no son paralelas...
            System.out.println("No son paralelas");
            
            // Obtenemos la pendiente
            inter.Pendiente();
            // Obtenemos el corte en X = 0
            inter.EcuacionX(true);
            // Obtenemos el corte en Y = 0
            inter.EcuacionY(true);
            // Obtenemos el corte en X = 255
            inter.EcuacionX(false);
            // Obtenemos el corte en Y = 255
            inter.EcuacionY(false);
            
            // Obtenemos el punto de corte
            XY []xy = inter.PuntoCorte(true);
            if(xy == null)
            {
                System.out.println("El punto es nulo");
                return;
            }
            
            System.out.println("XYX: " + xy[0].getX() + "," + xy[0].getY());
            System.out.println("XYY: " + xy[1].getX() + "," + xy[1].getY());
            
            xy = inter.PuntoCorte(false);
            if(xy == null)
            {
                System.out.println("El punto es nulo");
                return;
            }
            
            System.out.println("XYRX: " + xy[0].getX() + "," + xy[0].getY());
            System.out.println("XYRY: " + xy[1].getX() + "," + xy[1].getY());
            
            // Una vez obtenido el punto de corte, examinamos los puntos, si están o no dentro...
            // Primero el punto 1
            int ub1 = inter.UbicaPoint(punto1);
            int ub2 = inter.UbicaPoint(punto2);
            System.out.println("Punto 1: " + ub1);
            System.out.println("Punto 2: " + ub2);
            // Detectamos los casos
            if(ub1 == 1 && ub2 == 1)
            {
                System.out.println("Esta dentro");
                // No hacemos nada
//                return;
            }
            else if(ub1 < 0 && ub2 < 0)
            {
                System.out.println("La recta está fuera del cuadro... Se elimina el segmento");

            }
            else if((ub1 == 1 && ub2 != 1) || (ub2 == 1 && ub1 != 1))
            {
                System.out.println("Hay cruce...");
                if(ub1 == 1)
                {
                    //Si el punto 1 es el que está dentro, examinamos el caso
                    if(ub2 < 0)
                    {
                        // Vemos donde está el punto
                        double x0t, y0t;
                        if(punto2.getX() < 0)
                        {
                            x0t = inter.EvaluaX(0);
                            y0t = inter.EvaluaY(0);
                            if((0 < y0t) && (y0t < Interseccion.recta))
                            {
                                punto2.setX(0);
                                punto2.setY(y0t);
                            }
                            else if(0 < x0t)
                            {
                                punto2.setX(x0t);
                                punto2.setY(0);
                            }
                        }
                        
                    }
                        
                }
            }
            else
            {
                System.out.println("Cualquier otro caso");
            }
            
            
//            if(punto1.getY() < inter.getCorteO()[0].getY())
            
            
            
        }*/
        
    }
}
