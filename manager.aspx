
<%@ Page Language="C#" %>
<%@ Import Namespace="System" %>
<%@ Import Namespace="System.Web.UI.WebControls" %>
<%@ Import Namespace="System.Configuration" %>
<%@ Import Namespace="System.Data.SqlClient" %>
<%@ Import Namespace="System.Data" %>
<%@ Import Namespace="System.Diagnostics" %>


<form id="form1" runat="server">
<asp:GridView ID="GridView1" runat="server">
</asp:GridView>

   <%if (System.Web.HttpContext.Current.User.Identity.IsAuthenticated)
      { %>
 

  Usuario Actual: <b><%=User.Identity.Name%></b> <asp:LinkButton id="LoginLink" Text="Cerrar Sesion" OnClick="LoginLink_OnClick" runat="server" />

  <%} %>


</form>


<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<script runat="server">
 
    public void LoginLink_OnClick(object sender, EventArgs args)
    {
        try
        {
            FormsAuthentication.SignOut();
            FormsAuthentication.RedirectToLoginPage();
        }
        catch (Exception)
        {

            Response.Write("Sin sesion");
            Response.End();
        }




    }
    protected void Page_Load(object sender, EventArgs e)
    {
      DataTable dataTable= new DataTable();

        int auth = 0;

        if (System.Web.HttpContext.Current.User.Identity.IsAuthenticated)
        {
            if (User.Identity.Name.ToUpper() == "ARZATE")
            {


                auth = 1;


            }

        }
        if (auth == 0)
        {
            if (System.Web.HttpContext.Current.User.Identity.IsAuthenticated)
            {
                SqlConnection Conn = new SqlConnection("data source=148.204.35.93\\SQLEXPRESS; user id=sa;password=pass; Initial Catalog=curso");
                //Make the connection 
                Conn.Open();
                //Define you query


                string sql = "INSERT INTO EVAL VALUES ('" + User.Identity.Name + "','" + System.DateTime.Now.ToString() + "','" + "Intento de acceso no autorizado en manager.aspx" + "',' ','" + "Warning" + "')";
                SqlCommand cmd = new SqlCommand(sql, Conn);
                SqlDataReader dr = null;
                dr = cmd.ExecuteReader();

                dr.Close();
                Conn.Close();
                Response.Write("Usuario No autorizado, Evento Reportado");
            }
        }
        else
        {
            Response.Write("Bienvenido");

         
  
                SqlConnection Conn = new SqlConnection("data source=148.204.35.93\\SQLEXPRESS; user id=sa;password=pass; Initial Catalog=curso");
            //Make the connection 
            Conn.Open();
            //Define you query


            string sql = "SELECT * FROM EVAL";
            SqlCommand cmd = new SqlCommand(sql, Conn);
            SqlDataReader dr = null;
           // dr = cmd.ExecuteReader();

            SqlDataAdapter da = new SqlDataAdapter(cmd);
            // this will query your database and return the result to your datatable
            da.Fill(dataTable);
            
         //   dr.Close();
            Conn.Close();
     
            
            GridView1.DataSource = dataTable;
            GridView1.DataBind();
      

    
        }
    }
    </script>
    

