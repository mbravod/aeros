
<%@ Page Language="C#" %>
<%@ Import Namespace="System" %>
<%@ Import Namespace="System.Web.UI.WebControls" %>
<%@ Import Namespace="System.Configuration" %>
<%@ Import Namespace="System.Data.SqlClient" %>
<%@ Import Namespace="System.Data" %>
<%@ Import Namespace="System.Diagnostics" %>


<script runat="server">

protected void Page_Load(object sender, EventArgs e)
{

    int auth = 0;
    if (System.Web.HttpContext.Current.User.Identity.IsAuthenticated)
    {

            auth = 1;

    }
    if (auth == 0)
    {
       
            SqlConnection Conn = new SqlConnection("data source=localhost; user id=sa;password=pass; Initial Catalog=AEROS");
            //Make the connection 
            Conn.Open();
            //Define you query


         //   string sql = "INSERT INTO LOGS VALUES ('" + User.Identity.Name + "','" + System.DateTime.Now.ToString() + "','" + "Intento de acceso no autorizado en manager.aspx" + "',' ','" + "Warning" + "')";
    
        string sql = "INSERT INTO LOGS VALUES ('" +     System.Web.HttpContext.Current.Request.UserHostAddress+ "','" + System.DateTime.Now.ToString() + "','" + "Intento de acceso no autorizado en manager.aspx" + "',' ','" + "Warning" + "')";
          
        SqlCommand cmd = new SqlCommand(sql, Conn);
            SqlDataReader dr = null;
            dr = cmd.ExecuteReader();

            dr.Close();
            Conn.Close();
            Response.Write("Usuario No autorizado, Evento Reportado");
 
    }
}
</script>