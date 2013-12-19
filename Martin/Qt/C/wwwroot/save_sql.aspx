<%@ Page Language="C#" %>
<%@ Import Namespace="System.Data" %>
<%@ Import Namespace="System.Data.SqlClient" %>
<%@ Import Namespace="System.IO" %>
<%@ Import Namespace="System" %>
<%@ Import Namespace="System.IO.MemoryMappedFiles" %>
<%@ Import Namespace="System.Data.SqlTypes" %>
 
 <%@ Import Namespace="System.Runtime.InteropServices" %>
<script runat="server">



protected void Page_Load(object sender, EventArgs e)
{


 
    string var_scene_name = Request.Form["scene_name"];
    string var_comments = Request.Form["comments"];
    string var_user = Request.Form["user"];
    string var_data = Request.Form["data"];


    if (!(String.IsNullOrEmpty(var_scene_name)))
    {
        Response.Write("Foto Almacenada con los siguientes parametros");
        Response.Write("\nNombre:");
        Response.Write(var_scene_name);
        Response.Write("\nComentarios:");
        Response.Write(var_comments);
        Response.Write("\nUsuario:");
        Response.Write(var_user);
        Response.Write("\nTamaño:");
        Response.Write(var_data.Length);
        Response.Write("\n");

        string st = ConfigurationManager.ConnectionStrings["MyLocalSQLServer"].ConnectionString;
        Response.Write(st);

        try
        {

            SqlConnection Conn = new SqlConnection(st);
            Conn.Open();

            string sql = "INSERT INTO FOTOS (usuario, nombre, descripcion, data, date) VALUES ('" + var_user + "','" + var_scene_name + "', '" + var_comments + "', '" + var_data + "', '" + System.DateTime.Now.ToString() + "');";
            SqlCommand cmd = new SqlCommand(sql, Conn);
//            SqlDataReader sqlReader = cmd.ExecuteReader();
//            sqlReader.Close();
            cmd.Dispose();
            Conn.Close();
        }
        catch (Exception c)
        {
            Response.Write("/n/nERROR: /n" + c.Message);
        }
                
    }
    else
    {
        Response.Write("invalid data");
    }
  }
   
</script>