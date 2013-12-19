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
            {status = 1;
                
            }
        }


    }
    catch (FileNotFoundException e1)
    {

        Response.Write("Unloaded Memory<br>");
        status = 0;
    }

    if (int.Parse(x[0]) < 1 || int.Parse(x[0]) > 20)
    {
        status = 2;
    }
            
            
    if (status == 1) {
        Response.Write("Instancia Previa en ejecucion, " + x[0] + "<br>");
        Response.Write("<li><a href=\"kill.aspx?session=" + x[0] + "\" target=\"iframe_a\">Detener Simulacion</a></li>");
    }
    else if (status == 2)
    {
        Response.Write("Datos Invalidos, intancia = " + x[0]);
    }
    else
    {

        
        System.Diagnostics.Process.Start("C:\\sthie\\launcher.exe", x[0]);
        Response.Write("Ejecutando instancia numero  " + x[0]);
    }       
            
        }
       
        else
        {
            Response.Redirect("Acceso.aspx");
           
        }
    }
    
    
    </script>
    
    
