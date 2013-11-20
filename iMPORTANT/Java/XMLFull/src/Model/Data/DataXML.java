package Model.Data;

import java.util.LinkedList;

public class DataXML
{
    private String nombre;
    private int xoff;
    private int yoff;

    private LinkedList<Road> lstRoads;

    public int getXoff() {
        return xoff;
    }

    public void setXoff(int xoff) {
        this.xoff = xoff;
    }

    public int getYoff() {
        return yoff;
    }

    public void setYoff(int yoff) {
        this.yoff = yoff;
    }

    public DataXML() {
        lstRoads = new LinkedList();
    }

    public DataXML(String nombre) {
        this.nombre = nombre;
        lstRoads = new LinkedList();
    }

    public String getNombre() {
        return nombre;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public LinkedList<Road> getLstRoads() {
        return lstRoads;
    }

    public void setLstRoads(LinkedList<Road> lstRoads) {
        this.lstRoads = lstRoads;
    }
}
