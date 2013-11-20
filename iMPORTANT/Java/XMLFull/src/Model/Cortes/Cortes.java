package Model.Cortes;

import Model.Data.*;

public class Cortes
{
    private static int origen = 0;
    private static int linea = 255;
    private static double descarta = 209363994.209363839;
    
    public Cortes() { }
    
    public boolean ParalelaX(XY p1, XY p2)
    {
        if(p2.getX() == p1.getX())
        {
            return true;
        }
        return false;
    }
    
    public boolean ParalelaY(XY p1, XY p2)
    {
        if(p2.getY() == p1.getY())
        {
            return true;
        }
        return false;
    }
    
    public static double Pendiente(double x1, double y1, double x2, double y2)
    {
        // Determinamos la pendiente de la recta
        if(x2 == x1)
        {
            // La recta es paralela
            return 209363994.98090009;
        }
        double m = (y2 - y1)/(x2 - x1);
        return m;
    }
    
    public static double Pendiente(XY p1, XY p2)
    {
        // Determinamos la pendiente de la recta
//        System.out.println("\t\t\t X1 = " + p1.getX() + " Y1 = " + p1.getY());
//        System.out.println("\t\t\t X2 = " + p2.getX() + " Y2 = " + p2.getY());
        double y2y1 = p2.getY() - p1.getY();
//        System.out.println("\t\t\t Y2 - Y1 = " + y2y1);
        double x2x1 = p2.getX() - p1.getX();
        if(x2x1 == 0)
        {
            return descarta;
        }
//        System.out.println("\t\t\t X2 - X1 = " + x2x1);
        double m = y2y1/x2x1;
        return m;
    }
    
    public static double EcuacionX(double x1, double y1, double x2, double y2, double recta)
    {
        double m = Pendiente(x1, y1, x2, y2);
        if(m == descarta)
        {
            return descarta;
        }
        
        double x0 = (recta - y1 + (x1*m))/m;
        return x0;
    }
    
    public static double EcuacionY(double x1, double y1, double x2, double y2, double recta)
    {
        double m = Pendiente(x1, y1, x2, y2);
        if(m == descarta)
        {
            return descarta;
        }
        
        double y0 = (m*recta) - (m*x1) + y1;
        
        return y0;
    }
    
    public static double EcuacionX(XY xy1, XY xy2, double recta)
    {
        double m = Pendiente(xy1, xy2);
        if(m == descarta)
        {
            return descarta;
        }
//        System.out.println("\t\t- La pendiente es: " + m);
        double x0 = (recta - xy1.getY() + (xy1.getX()*m))/m;
        return x0;
    }
    
    public static double EcuacionY(XY xy1, XY xy2, double recta)
    {
        double m = Pendiente(xy1, xy2);
        if(m == descarta)
        {
            return descarta;
        }
//        System.out.println("\t\t- La pendiente es: " + m);
        double y0 = (m*recta) - (m*xy1.getX()) + xy1.getY();
        
        return y0;
    }
    
    public static boolean MenorAX(XY punto1, XY punto2, boolean primero)
    {
//        System.out.println("--------------------------------------------------");
//        System.out.println("\t>>> Funcion: MenorAX. Puntos: (" + punto1.getX() + "," + punto1.getY() + ") y (" + punto2.getX() + "," + punto2.getY() + ")");
        XY punto;
        if(primero)
        {
            punto = punto1;
        }
        else
        {
            punto = punto2;
        }
        
//        System.out.println("\t>>> Punto a evaluar: (" + punto.getX() + "," + punto.getY() + ")");
        
        double x0 = EcuacionX(punto1, punto2, 0);
        if(x0 == descarta)
        {
            return true;
        }
        
//        System.out.println("\t>>> Segun la ecuacion X, xy0 = (" + x0 + ",0) - (Punto en X cuando la recta corta al Eje X)");
        
//        System.out.println("--------------------------------------------------");
        if(punto.getX() < x0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    public static boolean MenorAY(XY punto1, XY punto2, boolean primero)
    {
        System.out.println("--------------------------------------------------");
//        System.out.println("\t>>> Funcion: MenorAY. Puntos: (" + punto1.getX() + "," + punto1.getY() + ") y (" + punto2.getX() + "," + punto2.getY() + ")");
        XY punto;
        if(primero)
        {
            punto = punto1;
        }
        else
        {
            punto = punto2;
        }
        
//        System.out.println("\t>>> Punto a evaluar: (" + punto.getX() + "," + punto.getY() + ")");
        
        double y0 = EcuacionY(punto1, punto2, 0);
        if(y0 == descarta)
        {
            return true;
        }
        
//        System.out.println("\t>>> Segun la ecuacion Y, xy0 = (0," + y0 + ") - (Punto en Y cuando la recta corta al Eje Y)");
        
//        System.out.println("--------------------------------------------------");
        
        if(punto.getY() < y0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    public static boolean MenorARX(XY punto1, XY punto2, boolean primero)
    {
        XY punto;
        if(primero)
        {
            punto = punto1;
        }
        else
        {
            punto = punto2;
        }
        
        double x0 = EcuacionX(punto1, punto2, linea);
        if(x0 == descarta)
        {
            return true;
        }
        
        if(x0 < punto.getX())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    public static boolean MenorARY(XY punto1, XY punto2, boolean primero)
    {
        XY punto;
        if(primero)
        {
            punto = punto1;
        }
        else
        {
            punto = punto2;
        }
        
        double y0 = EcuacionY(punto1, punto2, linea);
        if(y0 == descarta)
        {
            return true;
        }
        
        if(y0 < punto.getY())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    public static XY[] CorteR(XY p1, XY p2, boolean offset)
    {
        // Primero, calculamos la pendiente
        double recta = origen;
        double x0i, y0i;
        if(offset)
        {
            recta = linea;
        }
        
        x0i = EcuacionX(p1, p2, recta);
        y0i = EcuacionY(p1, p2, recta);
        
        if(x0i == descarta || y0i == descarta)
        {
            return null;
        }
        
        // Creamos el objeto contenedor
        XY [] xy = new XY[2];
        xy[0] = new XY();
        xy[1] = new XY();
        
        // La posición 0 es para el corte en X, y la posición 1 es para el corte en Y
        xy[0].setX(x0i);
        xy[0].setY(recta);
        
        xy[1].setX(recta);
        xy[1].setY(y0i);
        
        return xy;
    }
}
