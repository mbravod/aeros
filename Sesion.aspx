<%@ Page Language="C#" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<script runat="server">

</script>

<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">
    <title>Programmatically login example</title>
</head>
<body>
    <form id="form1" runat="server">
    <div>
        <h1>Are you Logged in?</h1>
        <asp:LoginStatus ID="LoginStatus1" runat="server" />
        <br /><br />
        <asp:LoginName ID="LoginName2" runat="server" FormatString="Hi {0}! you are logged in." Font-Size="X-Large" ForeColor="DarkCyan" />
    </div>
    </form>
</body>
</html>
