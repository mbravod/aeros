﻿<%@ Page Language="C#" AutoEventWireup="true" CodeFile="parInter.aspx.cs" Inherits="parInter" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    <asp:Label ID="Label1" runat="server" BackColor="White" ForeColor="Black" 
            style="font-size: xx-large" Text="Parametros Internos"></asp:Label>
    </div>
    <div>
    <table>
            <tr>
            <td><asp:Button ID="Button2" runat="server" onclick="btnRegresar" Text="Cancelar" /></td>
            <td><asp:Button ID="Button3" runat="server" onclick="btnRegresar" Text="Salvar" /></td>
            </tr>
         </table>
        <br />
          <asp:Button ID="Button1" runat="server" onclick="btnRegresar" Text="Regresar" />
    </div>
    </form>
</body>
</html>