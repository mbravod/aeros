using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Web.Security;

public partial class Login : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {


    }
    protected void Login1_Authenticate(object sender, AuthenticateEventArgs e)
    {
        if (Autentificacion.Autenticar(Login1.UserName, Login1.Password))//llamamos al a funcion autentificar, donde se hara la consulta  ala bd 
        {
            FormsAuthentication.RedirectFromLoginPage(Login1.UserName, Login1.RememberMeSet);

        }
    }
}