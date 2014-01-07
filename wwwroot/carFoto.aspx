<%@ Page Language="C#" AutoEventWireup="true" CodeFile="carFoto.aspx.cs" Inherits="carFoto" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
      <asp:Label ID="Label1" runat="server" BackColor="White" ForeColor="Black" 
            style="font-size: xx-large" Text="Cargar foto"></asp:Label>
    </div>
    <div>
        <table>
            <tr>
            <td><asp:Button ID="Button2" runat="server" onclick="btnRegresar" Text="Cancelar" /></td>
            <td><asp:Button ID="Button3" runat="server" onclick="btnRegresar" Text="Cargar" /></td>
            </tr>
         </table>
    </div>
    </form>
</body>
</html>
