using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
using System.Data;

public partial class salFoto : System.Web.UI.Page
{
    
    protected void Page_Load(object sender, EventArgs e)
    {
        //si se autentica mostramos mensaje y nombre de usuario
        if (HttpContext.Current.User.Identity.IsAuthenticated)
        {   
           
           Response.Write("Bienvenido : " + User.Identity.Name);
           //prueva de la coneccion ala base de datos
            if (getConexion() != null)
                Response.Write("Conexion Correcta");
            else
                Response.Write("Conexion Incorrecta");
        }
    }
    protected void btnRegresar(object sender, EventArgs e)
    {
        //se redirecciona al usuario a la pagina default
        Response.Redirect("default.aspx");
    }
    public static SqlConnection getConexion()
    {
        try
        {
            SqlConnection cn = new SqlConnection("Data Source=localhost;user id=sa;password=pass;Initial Catalog= AEROS;");
            cn.Open();
            string sql = "INSERT INTO LOGS VALUES ('hola','" + System.DateTime.Now.ToString() + "','" + "Intento de acceso no autorizado en manager.aspx" + "',' ','" + "Warning" + "')";
            SqlCommand cmd = new SqlCommand(sql, cn);
            SqlDataReader dr = null;
            dr = cmd.ExecuteReader();

            dr.Close();
            //cn.Close();
            return cn;
        }
        catch (Exception ex)
        {
            return null;
        }
    }
}