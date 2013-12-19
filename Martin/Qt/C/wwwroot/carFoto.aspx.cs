using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

public partial class carFoto : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        //si se autentica mostramos mensaje y nombre de usuario
        if (HttpContext.Current.User.Identity.IsAuthenticated)
        {
            Response.Write("Bienvenido : " + User.Identity.Name);
        }
    }
    protected void btnRegresar(object sender, EventArgs e)
    {
        //se redirecciona al usuario a la pagina default
        Response.Redirect("default.aspx");
    }
}