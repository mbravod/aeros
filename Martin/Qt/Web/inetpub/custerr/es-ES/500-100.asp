<%@ language="VBScript" %>
<%
  Option Explicit

  Const lngMaxFormBytes = 200

  Dim objASPError, blnErrorWritten, strServername, strServerIP, strRemoteIP
  Dim strMethod, lngPos, datNow, strQueryString, strURL

  If Response.Buffer Then
    Response.Clear
    Response.Status = "500 Internal Server Error"
    Response.ContentType = "text/html"
    Response.Expires = 0
  End If

  Set objASPError = Server.GetLastError
%>
<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01//EN" "http://www.w3.org/TR/html4/strict.dtd">
<HTML><HEAD><TITLE>No se puede mostrar la página</TITLE>
<META HTTP-EQUIV="Content-Type" Content="text/html; charset=Windows-1252">
<STYLE type="text/css">
  BODY { font: 8pt/12pt verdana }
  H1 { font: 13pt/15pt verdana }
  H2 { font: 8pt/12pt verdana }
  A:link { color: red }
  A:visited { color: maroon }
</STYLE>
</HEAD><BODY><TABLE width=500 border=0 cellspacing=10><TR><TD>

<h1>No se puede mostrar la página</h1>
Hay un problema con la página a la que intenta obtener acceso y no se puede mostrar.
<hr>
<p>Pruebe lo siguiente:</p>
<ul>
<li>Póngase en contacto con el administrador del sitio web para informarle de que se ha producido este error con esta dirección URL.</li>
</ul>
<h2>HTTP 500.100 - Error interno del servidor: error de ASP.<br>Internet Information Services</h2>
<hr>
<p>Información técnica (para el personal de soporte técnico)</p>
<ul>
<li>Tipo de error:<br>
<%
  Dim bakCodepage
  on error resume next
	bakCodepage = Session.Codepage
	Session.Codepage = 1252
  on error goto 0
  Response.Write Server.HTMLEncode(objASPError.Category)
  If objASPError.ASPCode > "" Then Response.Write Server.HTMLEncode(", " & objASPError.ASPCode)
    Response.Write Server.HTMLEncode(" (0x" & Hex(objASPError.Number) & ")" ) & "<br>"
  If objASPError.ASPDescription > "" Then 
	Response.Write Server.HTMLEncode(objASPError.ASPDescription) & "<br>"
  elseIf (objASPError.Description > "") Then 
	Response.Write Server.HTMLEncode(objASPError.Description) & "<br>" 
  end if
  blnErrorWritten = False
  ' Only show the Source if it is available and the request is from the same machine as IIS
  If objASPError.Source > "" Then
    strServername = LCase(Request.ServerVariables("SERVER_NAME"))
    strServerIP = Request.ServerVariables("LOCAL_ADDR")
    strRemoteIP =  Request.ServerVariables("REMOTE_ADDR")
    If (strServerIP = strRemoteIP) And objASPError.File <> "?" Then
      Response.Write Server.HTMLEncode(objASPError.File)
      If objASPError.Line > 0 Then Response.Write ", line " & objASPError.Line
      If objASPError.Column > 0 Then Response.Write ", column " & objASPError.Column
      Response.Write "<br>"
      Response.Write "<font style=""COLOR:000000; FONT: 8pt/11pt courier new""><b>"
      Response.Write Server.HTMLEncode(objASPError.Source) & "<br>"
      If objASPError.Column > 0 Then Response.Write String((objASPError.Column - 1), "-") & "^<br>"
      Response.Write "</b></font>"
      blnErrorWritten = True
    End If
  End If
  If Not blnErrorWritten And objASPError.File <> "?" Then
    Response.Write "<b>" & Server.HTMLEncode(  objASPError.File)
    If objASPError.Line > 0 Then Response.Write Server.HTMLEncode(", line " & objASPError.Line)
    If objASPError.Column > 0 Then Response.Write ", column " & objASPError.Column
    Response.Write "</b><br>"
  End If
%>
</li>
<li>Tipo de explorador:<br>
<%= Server.HTMLEncode(Request.ServerVariables("HTTP_USER_AGENT")) %>
<br><br></li>
<li>Página:<br>
<%
  strMethod = Request.ServerVariables("REQUEST_METHOD")
  Response.Write strMethod & " "
  If strMethod = "POST" Then
    Response.Write Request.TotalBytes & " bytes to "
  End If
  Response.Write Request.ServerVariables("SCRIPT_NAME")
  Response.Write "</li>"
  If strMethod = "POST" Then
    Response.Write "<p><li>POST Data:<br>"
    ' On Error in case Request.BinaryRead was executed in the page that triggered the error.
    On Error Resume Next
    If Request.TotalBytes > lngMaxFormBytes Then
      Response.Write Server.HTMLEncode(Left(Request.Form, lngMaxFormBytes)) & " . . ."
    Else
      Response.Write Server.HTMLEncode(Request.Form)
    End If
    On Error Goto 0
    Response.Write "</li>"
  End If
%>
<br><br></li>
<li>Hora:<br>
<%
  datNow = Now()
  Response.Write Server.HTMLEncode(FormatDateTime(datNow, 1) & ", " & FormatDateTime(datNow, 3))
  on error resume next
	Session.Codepage = bakCodepage 
  on error goto 0
%>
<br><br></li>
<li>Más información:<br>
<%  
  strQueryString = "prd=iis&sbp=&pver=5.0&ID=500;100&cat=" & Server.URLEncode(objASPError.Category) & "&os=&over=&hrd=&Opt1=" & Server.URLEncode(objASPError.ASPCode)  & "&Opt2=" & Server.URLEncode(objASPError.Number) & "&Opt3=" & Server.URLEncode(objASPError.Description) 
  strURL = "http://www.microsoft.com/ContentRedirect.asp?" & strQueryString
%>
  <ul>
  <li>Haga clic en <a href="<%= strURL %>">Soporte técnico de Microsoft</a> para obtener vínculos a artículos acerca de este error.</li>
  <li>Vaya a <a href="http://go.microsoft.com/fwlink/?linkid=8180" target="_blank">Ayuda y Soporte Técnico de Microsoft</a> y busque la palabra <b>HTTP</b> y <b>500</b>.</li>
  <li>Abra la <b>Ayuda de IIS</b>, a la que se puede obtener acceso en el Administrador de IIS (inetmgr), y busque los temas <b>Administración de sitios web</b> y <b>Acerca de mensajes de error personalizados</b>.</li>
  <li>En el kit de desarrollo de software (SDK) de IIS o en <a href="http://go.microsoft.com/fwlink/?LinkId=8181">MSDN Online Library</a>, busque los temas <b>Depurar scripts ASP</b> (en inglés), <b>Depurar componentes</b> (en inglés) y <b>Depurar filtros y extensiones ISAPI</b> (en inglés).</li>
  </ul>
</li>
</ul>

</TD></TR></TABLE></BODY></HTML>