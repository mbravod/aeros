package Model.Data;

import java.util.LinkedList;

public class Road
{
    private double width;
    private LinkedList<XY> lstXYs;

    public Road()
    {
        lstXYs = new LinkedList();
    }

    public double getWidth() {
        return width;
    }

    public void setWidth(double width) {
        this.width = width;
    }

    public LinkedList<XY> getLstXYs() {
        return lstXYs;
    }

    public void setLstXYs(LinkedList<XY> lstXY) {
        this.lstXYs = lstXY;
    }
}
