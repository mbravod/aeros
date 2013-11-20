package Model.Cortes;

import Model.Data.XY;

public class Interseccion
{
    // Punto de origen
    public static double origen = 0;
    // Punto de la recta
    public static double recta = 255;
    public static double descarta = -209363994.209363839;
    
    // Punto inicial en la lista: a evaluar
    private XY punto1;
    // Punto siguiente en la lista: como referencia
    private XY punto2;
    // Punto en el que corta al origen
    // 0 -> Coordenada en la que corta a X
    // 1 -> Coordenada en la que corta a Y
    private XY []corteO;
    // Punto en el que corta a la recta
    // 0 -> Coordenada en la que corta a la recta paralela a X
    // 1 -> Coordenada en la que corta a la recta paralela a Y
    private XY []corteR;
    // Coordenadas en las que la recta es paralela a X o Y
    private double xp;
    private double yp;
    
    //-----------------
    private double m;

    public Interseccion()
    {
        // Asignamos a la pendiente el valor de descarte
        m = descarta;
        // Iniciamos los dos números de cortes
        corteO = new XY[2];
        corteR = new XY[2];
        for(int i = 0; i < 2; i++)
        {
            corteO[i] = new XY();
            corteR[i] = new XY();
        }
    }

    public Interseccion(XY punto1, XY punto2)
    {
        // Ajustamos los dos puntos a trabajar
        this.punto1 = punto1;
        this.punto2 = punto2;
        // Asignamos a la pendiente el valor de descarte
        m = descarta;
        // Iniciamos los dos números de cortes
        corteO = new XY[2];
        corteR = new XY[2];
        for(int i = 0; i < 2; i++)
        {
            corteO[i] = new XY();
            corteR[i] = new XY();
        }
    }
    
    public boolean ParalelaX()
    {
        //Si la corrdenada Y es igual en ambos puntos,
        if(punto1.getY() == punto2.getY())
        {
            // Es paralela a X...
            // Obtenemos el punto de Y por el que pasa
            yp = punto1.getY();
            return true;
        }
        // Si no, decimos que no hay nada
        return false;
    }
    
    public boolean ParalelaY()
    {
        //Si la corrdenada x es igual en ambos puntos,
        if(punto2.getX() == punto1.getX())
        {
            // Es paralela a Y...
            // Obtenemos el punto de X por el que pasa
            xp = punto1.getX();
            return true;
        }
        // Si no, decimos que no hay nada
        return false;
    }
    
    public double Pendiente()
    {
        // Determinamos la pendiente de la recta
//        System.out.println("\t\t\t X1 = " + p1.getX() + " Y1 = " + p1.getY());
//        System.out.println("\t\t\t X2 = " + p2.getX() + " Y2 = " + p2.getY());
        double y2y1 = punto2.getY() - punto1.getY();
//        System.out.println("\t\t\t Y2 - Y1 = " + y2y1);
        double x2x1 = punto2.getX() - punto1.getX();
        
        // Si el denominador es 0, es paralela a Y
        if(x2x1 == 0)
        {
            return descarta;
        }
//        System.out.println("\t\t\t X2 - X1 = " + x2x1);
        m = y2y1/x2x1;
        return m;
    }
    
    public double ObtenCorteX(boolean cero)
    {
        // Función en donde se obtiene la coordenada donde se corta al eje X
        if(m == descarta)
        {
            Pendiente();
        }
        
        if(m == descarta)
        {
            return descarta;
        }
        
        double linea;
        
        if(cero)
        {
            linea = origen;
        }
        else
        {
            linea = recta;
        }
        
//        System.out.println("\t\t- La pendiente es: " + m);
        // x = (y - y1 + mx1)/m
        //   y: 0 o 255, según el corte
        //  y1: coordenada 1 en Y
        //  x1: coordenada 1 en X
        //   m: Pendiente
        //-------------------------------------
        // Cuando y = 0, a qué es igual x?
        double x0 = (linea - punto1.getY()+ (punto1.getX()*m))/m;
        
        if(cero)
        {
            // Si el corte era en cero
            // 0 -> Corte en X
            corteO[0].setX(x0);
            corteO[0].setY(linea);
        }
        else
        {
            // Si el corte era en la recta
            // 0 -> Corte en X
            corteR[0].setX(x0);
            corteR[0].setY(linea);
        }
        return x0;
    }
    
    public double ObtenCorteY(boolean cero)
    {
        // Función en donde se obtiene la coordenada donde se corta al eje Y
        if(m == descarta)
        {
            Pendiente();
        }
        
        if(m == descarta)
        {
            return descarta;
        }
        
        double linea;
        
        if(cero)
        {
            linea = origen;
        }
        else
        {
            linea = recta;
        }
        
//        System.out.println("\t\t- La pendiente es: " + m);
        // y = m(x - x1)+y1
        //   x: 0 o 255, según el corte
        //  y1: coordenada 1 en Y
        //  x1: coordenada 1 en X
        //   m: Pendiente
        //-------------------------------------
        // Cuando x = 0, a qué es igual y?
        double y0 = (m*(linea - punto1.getX())) + punto1.getY();
        
        if(cero)
        {
            // Si el corte era en cero
            // 1 -> Corte en Y
            corteO[1].setX(linea);
            corteO[1].setY(y0);
        }
        else
        {
            // Si el corte era en la recta
            // 1 -> Corte en Y
            corteR[1].setX(linea);
            corteR[1].setY(y0);
        }
        
        return y0;
    }
    
    public double ObtenX(double y)
    {
        if(m == descarta)
        {
            Pendiente();
        }
        
        if(m == descarta)
        {
            return descarta;
        }
        
        double x0 = (y - punto1.getY() + (punto1.getX()*m))/m;
        
        return x0;
    }
    
    
    public double ObtenY(double x)
    {
        if(m == descarta)
        {
            Pendiente();
        }
        
        if(m == descarta)
        {
            return descarta;
        }
        
        double y0 = (m*(x - punto1.getX())) + punto1.getY();
        
        return y0;
    }
    
    public XY[] PuntoCorte(boolean cero)
    {
        XY []xy;
        if(cero)
        {
            xy = corteO;
        }
        else
        {
            xy = corteR;
        }
        
        return xy;
    }
    
    public int UbicaPoint(XY xy)
    {
        if(xy.getX() < origen && xy.getY() < origen)
        {
            return -1;
        }
        else if(recta < xy.getX() && recta < xy.getY())
        {
            return -2;
        }
        else if(xy.getX() < origen && recta < xy.getY())
        {
            return -3;
        }
        else if(recta < xy.getX() && xy.getY() < origen)
        {
            return -4;
        }
        else if(origen <= xy.getX() && xy.getX() <= recta && origen <= xy.getY() && xy.getY() <= recta)
        {
            return 1;
        }
        else if(origen <= xy.getX() && xy.getX() <= recta && xy.getY() < origen)
        {
            return 2;
        }
        else if(xy.getX() < origen && origen <= xy.getY() && xy.getY() <= recta)
        {
            return 3;
        }
        else if(origen <= xy.getX() && xy.getX() <= recta && recta < xy.getY())
        {
            return 4;
        }
        else if(recta < xy.getX() && origen <= xy.getY() && xy.getY() <= recta)
        {
            return 5;
        }
        
        return 0;
    }
/*    public int UbicaPoint(XY xy)
    {
        // Regresarà el cuadrante donde se ubica el punto
        // -1 => El punto se ubica completamente fuera del cuadro
        //      | (x < xC && y < yC) || (xR < x && yR < y
        //  1 => El punto se ubica dentro del cuadro
        //      | (xC < x && yC < y) && (x < xR && y < yR)
        //  2 => Por fuera, corta al eje X
        //      | x < xC && yC < y
        //  3 => Por fuera, corta al eje Y
        //      | xC < x && y < yC
        //  4 => Por fuera, corta a la recta X
        //      | xR < x && y < yR
        //  5 => Por fuera, corta a la recta Y
        //      | x < xR && yR < y
        
        // Si la pendiente es positiva
        if(0 < m)
        {
            // Examinamos los casos
            // Regresamos negativo cuando:
            //  x < xC && y < yC => -1
            //  xR < x && yR < y => -2 
            if((xy.getX() <= corteO[0].getX() && xy.getY() < corteO[1].getY()) 
                    || (corteR[0].getX() < xy.getX() && corteR[1].getY() < xy.getY()))
            {
                if(xy.getX() <= corteO[0].getX() && xy.getY() <= corteO[1].getY())
                {
                    return -1;
                }
                else
                {
                    return -2;
                }
            }
            else if(corteO[0].getX() < xy.getX() && xy.getX() <= corteR[0].getX() 
                    && corteO[1].getY() < xy.getY() && xy.getY() <= corteR[1].getY())
            {
                // Regresamos 1 cuando se encuentra dentro del cuadrante... Esto es:
                //  xC < x && x < xR
                //  yC < y && y < yR
                return 1;
            }
            else if(xy.getX() <= corteO[0].getX() && corteO[1].getY() < xy.getY())
            {
                // Regresamos 2 cuando corta el eje X... Esto es:
                //  x < xC && yC< y
                return 2;
            }
            else if(corteO[0].getX() < xy.getX() && xy.getY() <= corteO[1].getY())
            {
                // Regresamos 3 cuando corta al eje y... Esto es:
                //  xC < x && y < yC
                return 3;
            }
            else if(corteR[0].getX() < xy.getX() && xy.getY() <= corteR[1].getY())
            {
                // Regresamos 4 cuando corta a la recta paralela a X... Esto es:
                //  xR < x && y < yR
                return 4;
            }
            else if(xy.getX() <= corteR[0].getX() && corteR[1].getY() <= xy.getY())
            {
                // Regresamos 5 cuando corta a la recta paralela a Y... Esto es:
                //  x < xR && yR < y
                return 5;
            }
            else
            {
                System.out.println("\n\n\n\nX: " + xy.getX() + " Y: " + xy.getY() + " xC = " + corteO[0].getX() + " yC = " + corteO[1].getY()+ " xR = " + corteR[0].getX() + " yR = " + corteR[1].getY() + "\n\n\n\n");
                return 0;
            }
        }
        else
        {
//            System.out.println("\t\t Pendiente negativa");
//            System.out.println("\t\t   Punto: " + xy.getX() + "," + xy.getY());
//            System.out.println("\t\t Corte 0: " + corteO[0].getX() + "," + corteO[1].getY());
//            System.out.println("\t\t Corte R: " + corteR[0].getX() + "," + corteR[1].getY());
            // Examinamos los casos
            // Regresamos negativo cuando:
            //  x < xR && yC < y => -3
            //  xC < x && y < yR => -4 
            if((xy.getX() < corteR[0].getX() && corteO[1].getY() < xy.getY()) 
                    || (corteO[0].getX() < xy.getX() && xy.getY() <= corteR[1].getY()))
            {
                if(xy.getX() <= corteR[0].getX() && corteO[1].getY() < xy.getY())
                {
                    return -3;
                }
                else
                {
                    return -4;
                }
            }
            else if(corteR[0].getX() < xy.getX() && xy.getX() <= corteO[0].getX() 
                    && corteR[1].getY() < xy.getY() && xy.getY() <= corteO[1].getY())
            {
                // Regresamos 1 cuando se encuentra dentro del cuadrante... Esto es:
                //  xR < x && x < xC
                //  y < yC && yR < y
                return 1;
            }
            else if(corteO[0].getX() < xy.getX() && corteR[1].getY() < xy.getY())
            {
                // Regresamos 2 cuando corta el eje X... Esto es:
                //  xC < x && yR < y
                return 2;
            }
            else if(corteR[0].getX() < xy.getX() && corteO[1].getY() < xy.getY())
            {
                // Regresamos 3 cuando corta al eje y... Esto es:
                //  xR < x && yC < y
                return 3;
            }
            else if(xy.getX() <= corteR[0].getX() && xy.getY() <= corteO[1].getY())
            {
                // Regresamos 4 cuando corta a la recta paralela a X... Esto es:
                //  x < xR && y < yC
                return 4;
            }
            else if(xy.getX() <= corteO[0].getX() && xy.getY() <= corteR[1].getY())
            {
                // Regresamos 5 cuando corta a la recta paralela a Y... Esto es:
                //  x < xC && y < yR
                return 5;
            }
            else
            {
                System.out.println("\n\n\n\nX: " + xy.getX() + " Y: " + xy.getY() + " xC = " + corteO[0].getX() + " yC = " + corteO[1].getY()+ " xR = " + corteR[0].getX() + " yR = " + corteR[1].getY() + "\n\n\n\n");
                return 0;
            }            
        }
    }*/
    
    

    public XY getPunto1() {
        return punto1;
    }

    public void setPunto1(XY punto1) {
        this.punto1 = punto1;
    }

    public XY getPunto2() {
        return punto2;
    }

    public void setPunto2(XY punto2) {
        this.punto2 = punto2;
    }

    public XY[] getCorteO() {
        return corteO;
    }

    public void setCorteO(XY[] corteO) {
        this.corteO = corteO;
    }

    public XY[] getCorteR() {
        return corteR;
    }

    public void setCorteR(XY[] corteR) {
        this.corteR = corteR;
    }

    public double getXp() {
        return xp;
    }

    public void setXp(double xp) {
        this.xp = xp;
    }

    public double getYp() {
        return yp;
    }

    public void setYp(double yp) {
        this.yp = yp;
    }

    public boolean isMPositiva()
    {
        if(0 < m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
