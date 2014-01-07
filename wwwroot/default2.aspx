
<%@ Page Language="C#" %>
<%@ Import Namespace="System" %>
<%@ Import Namespace="System.Web.UI.WebControls" %>
<%@ Import Namespace="System.Configuration" %>
<%@ Import Namespace="System.Data.SqlClient" %>
<%@ Import Namespace="System.Data" %>
<%@ Import Namespace="System.Diagnostics" %>

<script runat="server">
public static string Base64Encode(string plainText) {
  var plainTextBytes = System.Text.Encoding.UTF8.GetBytes(plainText);
  return System.Convert.ToBase64String(plainTextBytes);
}
public static string Base64Decode(string base64EncodedData)
{
    var base64EncodedBytes = System.Convert.FromBase64String(base64EncodedData);
    return System.Text.Encoding.UTF8.GetString(base64EncodedBytes);
}
protected void Page_Load(object sender, EventArgs e)
{
    Response.Write("Hola Mundo");
    Response.Write("<a href=\"process.aspx?q=" + Base64Encode("select form usarios where user='Admin';") + "\">Cargar Fotograma</a>");
    //Response.Write(Base64Decode(""));
}
</script>