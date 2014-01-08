<%@ Page Language="C#" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<%  %>
<script runat="server">
 
    public void LoginLink_OnClick(object sender, EventArgs args)
{
  FormsAuthentication.SignOut();
  FormsAuthentication.RedirectToLoginPage();
}

    protected void Login1_Authenticate(object sender, AuthenticateEventArgs e)
    {

     //   Membership.CreateUser("meaw", "pass","5539299335@itelcel.com"); 
        if (Membership.ValidateUser(Login1.UserName, Login1.Password))
        {
            e.Authenticated = true;
      
            FormsAuthentication.RedirectFromLoginPage(Login1.UserName.ToUpper(), false);
            
            
   
        }
        else
        {
            Response.Write("Usuario/PIN Incorrecto!");
            Label1.Text = "1";
        }
    }

    protected void Page_Load(object sender, EventArgs e)
    {
        int a;
        a =  20;
    }

    protected void CreateUserWizard1_CreatedUser(object sender, EventArgs e)
    {
        Response.Redirect("main.aspx");
    }
</script>



<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Inicio de sesion</title>
</head>

<body>



    <form id="form1" runat="server" method="get">
    <%
        if (System.Web.HttpContext.Current.User.Identity.IsAuthenticated)
      { %>
 
     <div>
  Usuario Actual: <b><%=User.Identity.Name%></b> <asp:LinkButton id="LoginLink" Text="Cerrar Sesion" OnClick="LoginLink_OnClick" runat="server" />
    </div>
   // Response.redirect()
    <br />
   
    
 <%} if ((!System.Web.HttpContext.Current.User.Identity.IsAuthenticated) || User.Identity.Name.ToUpper()=="ARZATE")
        {
   
      
          
           string  x;
          bool y;

           x = Request.QueryString["reg"];

           y = Request.RawUrl.Contains("__EVENTTARGET=&__EVENTARGUMENT=&__VIEWSTATE");
           if ( (x == "true" || y ==true ) &&  Label1.Text == "0")
      { %>

 <asp:CreateUserWizard ID="CreateUserWizard1" runat="server" 
       EmailRegularExpression="\w+([-+. ]\w+)*" 
        CompleteSuccessText="Cuenta Creada" ConfirmPasswordLabelText="Confirmar PIN:" 
        DuplicateUserNameErrorMessage="Usuario invalido(repetido)" 
        ErrorMessageStyle-BorderStyle="NotSet" 
        ConfirmPasswordCompareErrorMessage="Los PINs deben de coincidir" 
        ConfirmPasswordRequiredErrorMessage="Confirme PIN" Answer="retrieve" 
        AnswerLabelText="Conf Autorizacion" Email="Curso CFE" EmailLabelText="Tipo" 
        DuplicateEmailErrorMessage="Curso Invalido(Repetido)" 
        InvalidPasswordErrorMessage="Longitud Minima: {0}. No caracteres: {1}." 
        PasswordLabelText="PIN:" QuestionLabelText="Cod Autorizacion:" 
        UserNameLabelText="Usuario:" UnknownErrorMessage="Cuenta no creada" 
        EmailRequiredErrorMessage="Se requiere curso" 
        EmailRegularExpressionErrorMessage="Ingrese un curso valido" 
        PasswordRegularExpressionErrorMessage="Ingrese otro PIN" 
        PasswordRequiredErrorMessage="PIN Requerido" 
        QuestionRequiredErrorMessage="Codigo de Autorizacion Requerido" 
        UserNameRequiredErrorMessage="Nombre de Usuario Requerido"
        Question="retrieve" BackColor="#F7F6F3" BorderColor="#E6E2D8" 
        BorderStyle="Solid" BorderWidth="1px" Font-Names="Verdana" Font-Size="0.8em" 
        oncreateduser="CreateUserWizard1_CreatedUser">
        <TextBoxStyle BorderStyle="notSet" />
        <ContinueButtonStyle BackColor="#FFFBFF" BorderColor="#CCCCCC" 
            BorderStyle="Solid" BorderWidth="1px" Font-Names="Verdana" 
            ForeColor="#284775" />
        <CreateUserButtonStyle BackColor="#FFFBFF" BorderColor="#CCCCCC" 
            BorderStyle="Solid" BorderWidth="1px" Font-Names="Verdana" 
            ForeColor="#284775" />
        <TitleTextStyle BackColor="#5D7B9D" Font-Bold="True" ForeColor="White" />
        <WizardSteps>
            <asp:CreateUserWizardStep ID="CreateUserWizardStep1" runat="server"  Title="Crear Nuevo Usuario"/>
            <asp:CompleteWizardStep ID="CompleteWizardStep1" runat="server" Title="Datos Validos" />
        </WizardSteps>
        <HeaderStyle BackColor="#5D7B9D" BorderStyle="Solid" Font-Bold="True" 
            Font-Size="0.9em" ForeColor="White" HorizontalAlign="Center" />
        <NavigationButtonStyle BackColor="#FFFBFF" BorderColor="#CCCCCC" 
            BorderStyle="Solid" BorderWidth="1px" Font-Names="Verdana" 
            ForeColor="#284775" />
        <SideBarButtonStyle BorderWidth="0px" Font-Names="Verdana" ForeColor="White" />
        <SideBarStyle BackColor="#5D7B9D" BorderWidth="0px" Font-Size="0.9em" 
            VerticalAlign="Top" />
        <StepStyle BorderWidth="0px" />
    </asp:CreateUserWizard>
      <%}else{%>
    
 <asp:Login ID="Login1" runat="server" onauthenticate="Login1_Authenticate" 
        BackColor="#F7F6F3" BorderColor="#E6E2D8" BorderPadding="4" BorderStyle="Solid" 
        BorderWidth="1px" Font-Names="Verdana" Font-Size="0.8em" 
        ForeColor="#333333" 
        FailureText="No se pudo Iniciar sesion, Verifique los datos" 
        LoginButtonText="Iniciar sesion" PasswordLabelText="PIN:" 
        PasswordRequiredErrorMessage="PIN no puede ser vacio" 
        RememberMeText="Recordar datos de sesion" TitleText="Inicio de sesion" 
        UserNameLabelText="Nombre de usuario" 
        UserNameRequiredErrorMessage="valido" 
        MembershipProvider="MySqlMembershipProvider">
     <InstructionTextStyle Font-Italic="True" ForeColor="Black" />
     <LoginButtonStyle BackColor="#FFFBFF" BorderColor="#CCCCCC" BorderStyle="Solid" 
         BorderWidth="1px" Font-Names="Verdana" Font-Size="0.8em" ForeColor="#284775" />
     <TextBoxStyle Font-Size="0.8em" />
     <TitleTextStyle BackColor="#5D7B9D" Font-Bold="True" Font-Size="0.9em" 
         ForeColor="White" />
    </asp:Login>




     <%}%>
    

   

   <% }%>


    

    <asp:Label ID="Label1" runat="server" Text="0" Visible="False"></asp:Label>


    

    </form>
</body>
</html>
