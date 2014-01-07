<%@ Page Language="C#" %>
<%@ Import Namespace="System.Data" %>
<%@ Import Namespace="System.Data.SqlClient" %>
<%@ Import Namespace="System.IO" %>
<%@ Import Namespace="System" %>
<%@ Import Namespace="System.IO.MemoryMappedFiles" %>
<%@ Import Namespace="System.Data.SqlTypes" %>
 
 <%@ Import Namespace="System.Runtime.InteropServices" %>
<script runat="server">
 
  
    protected void Page_Load(object sender, EventArgs e)
    {

        string P = "</" + "script>";

        Response.Write(@"<html>
	<head>
		<title>SIMULADOR DE AERODERIVADAS</title>
		<meta http-equiv=""content-type"" content=""text/html; charset=utf-8"" />
		<meta name=""description"" content="" "" />
		<meta name=""keywords"" content="" "" />
		<link href="" "" rel=""stylesheet"" type=""text/css"" />
		<script src=""js/jquery.min.js""> "+ P +          
            
		 @"<script src=""js/jquery.dropotron.js"">"+ P+
		@"<script src=""js/config.js"">"+ P+
		@"<script src=""js/skel.min.js"">"+ P+
		@"<script src=""js/skel-panels.min.js"">"+ P+
		@"<noscript>
			<link rel=""stylesheet"" href=""css/skel-noscript.css"" />
			<link rel=""stylesheet"" href=""css/style.css"" />
			<link rel=""stylesheet"" href=""css/style-desktop.css"" />
		</noscript>
	</head>
	<body class=""homepage"">
<ul class=""style2"">
	    ");
        
        
        
        
        
        if (HttpContext.Current.User.Identity.IsAuthenticated)
        {
            int status = 0;
        string[] x = new string[6];
    x[0] = Request.QueryString["session"];
    long offset = 0x00000000;
    long length = 0x00031000;
    string MAP = "PROCESS_INTEROP_MEM_";
    if (x[0] == null)
    {
        x[0] = "0";
    }
            
    MAP = MAP + x[0];
            
            
    // Create the memory-mapped file. 
    //Global\\
    try
    {
        using (var mmf = MemoryMappedFile.OpenExisting(MAP, MemoryMappedFileRights.ReadWrite, System.IO.HandleInheritability.None)) //length, System.IO.MemoryMappedFiles.MemoryMappedFileAccess.ReadWrite))
        {
            using (var accessor = mmf.CreateViewAccessor(offset, length))
            {status = 0;
                
            }
        }


    }
    catch (FileNotFoundException e1)
    {

        Response.Write("<li><a > Unloaded Memory</a></li>");
        status = 1;
    }

    if (int.Parse(x[0]) < 1 || int.Parse(x[0]) > 20)
    {
        status = 2;
    }
            
            
    if (status == 1) {
        Response.Write("<li><a >Sin Instancia Previa de simulacion " + x[0] + "</a></li>");
   
    }
    else if (status == 2)
    {
        Response.Write("<li><a >Datos Invalidos, intancia = " + x[0]+"</a></li>");
    }
    else
    {

        System.Diagnostics.Process.Start("C:\\Windows\\System32\\taskkill.exe ", "-im launcher.exe /f");
        Response.Write("<li><a >Instancia Terminada  " + x[0]); 
    }       
            Response.Write(@"</ul></body> </html>");
        }
       
        else
        {
            Response.Redirect("Acceso.aspx");
           
        }
    }
    
     
          
    </script>
    
   
        
        
        