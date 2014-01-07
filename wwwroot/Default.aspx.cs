using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.Security;

public partial class _Default : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        //si se autentica mostramos mensaje y nombre de usuario
        if (HttpContext.Current.User.Identity.IsAuthenticated)
        {
            Response.Write("Bienvenido : " + User.Identity.Name);
        }
    }
    protected void btncerrar_Click(object sender, EventArgs e)
    {
        //se borra la cookie de autenticacion
        FormsAuthentication.SignOut();

        //se redirecciona al usuario a la pagina de login
        Response.Redirect(Request.UrlReferrer.ToString());
    }
    protected void btnParInter(object sender, EventArgs e)
    {
        //se redirecciona al usuario a la pagina de parametros internos
        Response.Redirect("parInter.aspx");
    }
    protected void btnParExte(object sender, EventArgs e)
    {
        //se redirecciona al usuario a la pagina de parametros externos
        Response.Redirect("parExter.aspx");
    }
    protected void btnSalFoto(object sender, EventArgs e)
    {
        //se redirecciona al usuario a la pagina salvar foto
        Response.Redirect("salFoto.aspx");
    }
    protected void btnCarFoto(object sender, EventArgs e)
    {
        //se redirecciona al usuario a la pagina de cargar foto  
        Response.Redirect("carFoto.aspx");
    }
}