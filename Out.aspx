<%@ Page Language="C#" %>
<%@ Import Namespace="System.Web.Security" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN"
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<script runat="server">

public void LoginLink_OnClick(object sender, EventArgs args)
{
  FormsAuthentication.SignOut();
  FormsAuthentication.RedirectToLoginPage();
}

</script>
<html xmlns="http://www.w3.org/1999/xhtml" >
<head id="Head1" runat="server">
    <title>Cerrar sesion</title>
</head>
<body>

<form id="form1" runat="server">
Usuario: <b><%=User.Identity.Name%></b> <asp:LinkButton id="LoginLink" Text="Cerrar Sesion" 
                      OnClick="LoginLink_OnClick" runat="server" />

<!-- Page Contents -->

</form>



</body>
</html>
