<%--Directiva--%>
<%@ Page Language="C#" %>
<%--Codigo en linea--%>
<script runat="server">
protected void btnAceptar_Click(object sender, EventArgs e)
{
    lblResultado.Text = txtNombre.Text;
    txtNombre.Text = string.Empty;
}
</script>
<%--HTML para dibujar los controles en pantalla--%>
<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title>Mi primera aplicacion - Maestros del Web</title>
</head>
<body>
<form id="form1" runat="server">
    <div>
        <asp:TextBox ID="txtNombre" runat="server"></asp:TextBox>
        <asp:Button ID="btnAceptar" runat="server" Text="Aceptar"
        onclick="btnAceptar_Click"/>
        <br/>
        <asp:Label ID="lblResultado" runat="server" Text="[Resultado]"></asp:Label>
    </div>
</form>
</body>
</html>