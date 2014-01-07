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


    string[] x = new string[6];
    x[0] = Request.QueryString["session"];
 

   
    
  
    long offset = 0x00000000;
    long length = 0x00031000;
    string MAP="PROCESS_INTEROP_MEM_";
        MAP=MAP+ x[0] ;
    // Create the memory-mapped file. 
//Global\\
    try
    {
        using (var mmf = MemoryMappedFile.OpenExisting(MAP, MemoryMappedFileRights.ReadWrite, System.IO.HandleInheritability.None)) //length, System.IO.MemoryMappedFiles.MemoryMappedFileAccess.ReadWrite))
        {
            using (var accessor = mmf.CreateViewAccessor(offset, length))
            {
                byte[] binaryData;

             
                    binaryData = new Byte[16000];

                    accessor.ReadArray(0, binaryData, 0, binaryData.Length);
                    try
                    {
                        string base64String = System.Convert.ToBase64String(binaryData, 0, binaryData.Length);





                        //base64String.Substring(19)
                        
                 string send=    @" 
<script src=""http"+":"+@"//ajax.googleapis.com/ajax/libs/jquery/1.10.2/jquery.min.js"">"+"</"+"script>"+@"
<div class=""tab-pane fade active in"" id=""simple-form-post""> 
<form name=""ajaxform"" id=""ajaxform"" action=""save_sql.aspx"" method=""POST"">
Nombre de escena: <input type=""text"" name=""scene_name"" value ="" ""/> <br/>
Comentarios: <input type=""text"" name=""comments"" value ="" "" /> <br/>
<input type=""text"" style=""display:none""  name=""user"" value="" "+ User.Identity.Name+@" ""/> <br/>"+
@"
<input type=""text"" style=""display:none""  name=""data"" value=""" + base64String + @"""/>  " +
@"
</form> 
<button id=""simple-post"" onclick=""loadXMLDoc()"">Guardar</button>  
<div id=""simple-msg"">
</div>
</div>";







                 string send3 = @" <script>
                    $(""#simple-post"").click(function()
{
	$(""#ajaxform"").submit(function(e)
	{
		$(""#simple-msg"").html(""<img src='loading.gif'/>"");
		var postData = $(this).serializeArray();
		var formURL = $(this).attr(""action"");
		$.ajax(
		{
			url : formURL,
			type: ""POST"",
			data : postData,
			success:function(data, textStatus, jqXHR) 
			{
				$(""#simple-msg"").html('<pre><code class=""prettyprint"">'+data+'</code></pre>');

			},
			error: function(jqXHR, textStatus, errorThrown) 
			{
				$(""#simple-msg"").html('<pre><code class=""prettyprint"">AJAX Request Failed<br/> textStatus='+textStatus+', errorThrown='+errorThrown+'</code></pre>');
			}
		});
	    e.preventDefault();	//STOP default action
	});
		
	$(""#ajaxform"").submit(); //SUBMIT FORM
});";

          
                        
       
Response.Write( send+"\n"+ send3 + "</"+"script>" );

                        
                    }
                        
                //         SqlConnection Conn = new SqlConnection("data source=148.204.35.93\\SQLEXPRESS; user id=sa;password=pass; Initial Catalog=curso");
                ////Make the connection 
                //Conn.Open();
                ////Define you query


                //string sql = "INSERT INTO EVAL VALUES ('" + User.Identity.Name + "','" + System.DateTime.Now.ToString() + "','" + "Intento de acceso no autorizado en manager.aspx" + "',' ','" + "Warning" + "')";
                //SqlCommand cmd = new SqlCommand(sql, Conn);
                //SqlDataReader dr = null;
                //dr = cmd.ExecuteReader();

                //dr.Close();
                //Conn.Close();
                //Response.Write("Usuario No autorizado, Evento Reportado");
                
                        
                    catch (System.ArgumentNullException)
                    {
                        Response.Write("Binary data array is null.");
                    }

           
            }
            }
            
       
    } catch (FileNotFoundException e1)
{
   
             Response.Write("Memory Dump Fail");
    }

}
      
</script>