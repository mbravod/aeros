
<%@ Page Language="C#" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<script runat="server">
    public void LoginLink_OnClick(object sender, EventArgs args)
{
    try
    {
 FormsAuthentication.SignOut();
        FormsAuthentication.RedirectToLoginPage();
    }
    catch (Exception)
    {

        Response.Write("Sin sesion");
       Response.End();
    }
       
 
        
        
}

</script>


<html>

<body>


<%
   

 string Key = "cfecurso";
 byte[] IVector = new byte[8] { 27, 9, 45, 27, 0, 72, 171, 54 };

 string inputString = User.Identity.Name+"&VALD="+DateTime.Now.Date.Day.ToString();
    byte[] buffer = Encoding.ASCII.GetBytes(inputString);
    System.Security.Cryptography.TripleDESCryptoServiceProvider tripleDes = new System.Security.Cryptography.TripleDESCryptoServiceProvider();
    System.Security.Cryptography.MD5CryptoServiceProvider MD5 = new System.Security.Cryptography.MD5CryptoServiceProvider();
    tripleDes.Key = MD5.ComputeHash(ASCIIEncoding.ASCII.GetBytes(Key));
    tripleDes.IV = IVector;
    System.Security.Cryptography.ICryptoTransform ITransform = tripleDes.CreateEncryptor();
    byte[] bufferO = ITransform.TransformFinalBlock(buffer, 0, buffer.Length);


    string key = "";
    key += bufferO.Length.ToString() + ",";
    for (int i = 0; i < bufferO.Length; i++)
    {
        key += bufferO[i].ToString()+",";
    }
    System.Random objRandom = new System.Random(((int)((System.DateTime.Now.Millisecond% System.Int32.MaxValue))));
    for (int i = 0; i < 120; i++)
    {int p=objRandom.Next(2, (250 + 1));
        key += p.ToString()+",";
    }
    
    Label1.Text = key+"0";
                
     %>
<form id="form1" runat="server" method="get">
   <%if (System.Web.HttpContext.Current.User.Identity.IsAuthenticated)
      { %>
 
     <div>

  Usuario Actual: <b><%=User.Identity.Name.ToUpper()%></b> <asp:LinkButton id="LoginLink" Text="Cerrar Sesion" OnClick="LoginLink_OnClick" runat="server" />
       <%  if (User.Identity.Name.ToUpper() == "ARZATE")
            {

                Response.Write("&nbsp<a href=\"http://148.204.35.93/test3/manager.aspx\">Control de Administrador</a>");


            Response.Write("                     &nbsp<a href=\"http://148.204.35.93/test3/Acceso.aspx?reg=true\">Crear Usuario</a>"); 
            }%>
            
    </div>
    <br />
   
    
 <%}else{  
       Response.Write("<a >  ");
       Response.Write("   <font size=\"3\" face=\"calibri\" color=\"grey\">  ");
       Response.Write("   <br /> Acceso No Autorizado");
       Response.Write("   </font>");
       Response.Write("</a> ");
        Response.End();
  }%>

  </form>




<script>


function getURLParam(strParamName,strHref){
  var strReturn = "";
 // var strHref = window.location.href;
  if ( strHref.indexOf("?") > -1 ){
    var strQueryString = strHref.substr(strHref.indexOf("?"));
    var aQueryString = strQueryString.split("&");
    for ( var iParam = 0; iParam < aQueryString.length; iParam++ ){
      if ( aQueryString[iParam].indexOf(strParamName.toLowerCase() + "=") > -1 ){
        var aParam = aQueryString[iParam].split("=");
        strReturn = aParam[1];
        break;
      }
    }
  }
  return unescape(strReturn);
}
</script>
  <style>
  
    a.button {
 -webkit-transform: rotate(-90deg) scale(1.0, 1);
 
    -moz-transform: rotate(-90deg) scale(1.0, 1);
    -ms-transform: rotate(-90deg) scale(1.0, 1);

    -webkit-transition: all .4s ease-in-out;
    -moz-transition: all .4s ease-in-out;
    -o-transition: all .4s ease-in-out;
    transition: all .4s ease-in-out;
    background: -moz-linear-gradient(0% 90% 90deg, #EEEEEE, #FFFFFF) repeat scroll 0 0 transparent;
    background: -webkit-gradient(linear, center bottom, center top, from(#EEEEEE), to(#FFFFFF));
    background:      -o-linear-gradient(bottom, #EEEEEE, #FFFFFF);
      filter: progid:DXImageTransform.Microsoft.gradient(GradientType=0,startColorstr='#EEEEEE', endColorstr=' #FFFFFF');/*For IE7-8-9*/ 
height: 1%;/*For IE7*/ 
     background:     -ms-linear-gradient(top, #EEEEEE, #FFFFFF); /* IE10 */

     
    border: 1px solid #DDDDDD;
    border-radius: 5px 5px 5px 5px;
    color: #000000;
    display: block;
    font-family: 'Tahoma',arial,serif;
    font-size: 14px;
    padding: 4px;
    text-align: center;
    text-decoration: none;
    width:100px;
    height:30px;
margin: 10px 0px 70px -48px;
    
}
a.button:hover {
    background: -moz-linear-gradient(0% 90% 90deg, #E7B705, #FF8105) repeat scroll 0 0 transparent;
    background: -webkit-gradient(linear, center bottom, center top, from(#E7B705), to(#FF8105));
    background:      -o-linear-gradient(bottom, #E7B705, #FF8105);
    filter: progid:DXImageTransform.Microsoft.gradient(GradientType=0,startColorstr='#003C82', endColorstr=' #4195DD');/*For IE7-8-9*/ 
    height: 1%;/*For IE7*/ 
    height:40px;
    margin: 10px 0px 70px -45px;
    border-color: #FFAA00;
    color: #FFFFFF;
}
a.button:active {
    background: -moz-linear-gradient(0% 90% 90deg, #4195DD, #003C82) repeat scroll 0 0 transparent;
    background: -webkit-gradient(linear, center bottom, center top, from(#4195DD), to(#003C82));
    background:      -o-linear-gradient(bottom, #4195DD, #003C82);
filter: progid:DXImageTransform.Microsoft.gradient(GradientType=0,startColorstr='#4195DD', endColorstr=' #003C82');/*For IE7-8-9*/ 

}
a.button.notransitions {
    -moz-transition: none 0s ease 0s;
}
</style>  
<% 

Response.Write("<iframe id=\"frame\" name=\"frame\" src=\"index0.html?webgl=1&uid=");
string a = Label1.Text;
    Response.Write(a);
    Response.Write("\" height=\"100%\" frameborder=\"0\" marginheight=\"0\" marginwidth=\"0\" align=\"right\" scrolling=\"no\"></iframe>");
%>
<p> _</p>

<a class="button" href="index0.html?webgl=1&uid=<%Response.Write(Label1.Text); %>" target="frame" id="bt_fallas" left="5px" >Fallas</a>
<p></p>
<a class="button" href="V2011/Tutorial.html" target="frame">Tutorial</a>
<p></p>
<a class="button" href="V2011/CUESTIONARIO.html" target="frame">Preguntas</a>
<p></p>
<a class="button" href="V2011/Documentacion.html" target="frame">Documentacion</a>
<p></p>
<a class="button" target="frame" href="index0.html?webgl=0&uid=<%Response.Write(Label1.Text); %>" id="bt_webgl">Deshabilitar <br>  WEBGL</a>
<p></p>
<a class="button" href="\obj2SceneJS\samplePage" target="frame">Tour</a>
<p></p>

 <asp:Label ID="Label1" runat="server" Text="0" Visible="False"></asp:Label>

<input type="hidden" id="refreshed" value="no" >
<script type="text/javascript">




onload=function(){
var e=document.getElementById("refreshed");
if(e.value=="no")e.value="yes";
else{e.value="no";location.reload();}
}


function resizeIframe() {
    var width = document.documentElement.clientWidth;
    width -= document.getElementById('frame').offsetLeft;
var ele0= document.getElementById('frame')


     document.getElementById('frame').style.top=-5
    // not sure how to get this dynamically
    width -= 30; /* whatever you set your body bottom margin/padding to be */
        document.getElementById('frame').style.align="right"
    document.getElementById('frame').style.width =  document.documentElement.clientWidth-90 +"px";
     document.getElementById('frame').style.height= document.documentElement.clientHeight-10+"px";


var sx=document.getElementById("frame").contentWindow.location.href

   var mt=  getURLParam("webgl",   sx)
     if (mt==1){
     
     document.getElementById('bt_webgl').title="meaw 1"
       document.getElementById('bt_webgl').innerHTML="Deshabilitar WebGl"
       document.getElementById('bt_webgl').href="index0.html?webgl=0&uid=<%Response.Write(Label1.Text); %>"
       document.getElementById('bt_fallas').href = "index0.html?webgl=1&uid=<%Response.Write(Label1.Text); %>"
     }
     if (mt==0){
     document.getElementById('bt_webgl').title="meaw 0"
          document.getElementById('bt_webgl').innerHTML="Habilitar WebGl"
          document.getElementById('bt_webgl').href = "index0.html?webgl=1&uid=<%Response.Write(Label1.Text); %>"
          document.getElementById('bt_fallas').href = "index0.html?webgl=0&uid=<%Response.Write(Label1.Text); %>"
     }
};
document.getElementById('frame').onload = resizeIframe;
window.onresize = resizeIframe;
</script>
</body>
</html>

