<%@ Page Language="C#" %>
<%@ Import Namespace="System.Data" %>
<%@ Import Namespace="System.Text" %>
<%@ Import Namespace="System.Data.SqlClient" %>
<%@ Import Namespace="System.IO" %>
<%@ Import Namespace="System" %>
<%@ Import Namespace="System.IO.MemoryMappedFiles" %>
<%@ Import Namespace="System.Data.SqlTypes" %>
<%@ Import Namespace="System.Security.Cryptography" %>

 <%@ Import Namespace="System.Runtime.InteropServices" %>
<script runat="server">


    static string GetMd5Hash(MD5 md5Hash, string input)
    {

       byte[] data = md5Hash.ComputeHash(Encoding.UTF8.GetBytes(input));
        StringBuilder sBuilder = new StringBuilder();
        for (int i = 0; i < data.Length; i++)
        {
            sBuilder.Append(data[i].ToString("x2"));
        }
        return sBuilder.ToString();
    }
    
protected void Page_Load(object sender, EventArgs e)
{


    string[] x = new string[6];
    x[0] = Request.QueryString["session"];
    x[1] = Request.QueryString["RW"];
    x[3] = Request.QueryString["type"];
    x[2] = Request.QueryString["var"];
    x[4] = Request.QueryString["value"];
    x[5] = Request.QueryString["complete"].ToUpper();
    int varPos = Convert.ToInt32(x[2]);// x[3];
    int int_value = 0;
    float float_value = 0;
    string value_type = x[3].ToUpper();

    string var_upload = Request.Form["var_upload"];
    string var_type_upload = Request.Form["var_type_upload"];
    string var_type_value = Request.Form["var_type_value"];

    Response.ContentType = "text/plain";
    
    if (!(String.IsNullOrEmpty(var_upload)))
    {
          Response.Write("Received POST DATA");
          Response.Write("\n");
        Response.Write(var_upload);
        Response.Write("\n");
            Response.Write(var_type_upload);
            Response.Write("\n");
            Response.Write(var_type_value);
            Response.Write("\n");
    }
    
    try
    {
         int_value = Convert.ToInt32(x[4]);// x[3];
    }
    catch (System.FormatException e2)
    {
    }
    try
    {
         float_value = (float)Convert.ToDouble(x[4]);// x[3];
    }
    catch (System.FormatException e3)
    {
            }
            
    string rw_Operation = x[1].ToUpper();
 
    
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
                    int integerSize = Marshal.SizeOf(typeof(int));
                    int integerValue = int_value;

                    int floatSize = Marshal.SizeOf(typeof(float));
                    float floatValue = float_value;

                    int charSize = Marshal.SizeOf(typeof(char));
                    byte[] binaryData;
                    char charValue ;
                    
                    if (x[5] == "TRUE")
                    {
                        binaryData = new Byte[16000];

                        accessor.ReadArray(0, binaryData, 0, binaryData.Length);
                            try
                            {
                              string  base64String = System.Convert.ToBase64String(binaryData,    0,  binaryData.Length);
                              Response.Write("STATUS=\"OK\"");
                              Response.Write("\r\nRESPONSE_TYPE=\"DUMP\"");
                              Response.Write("\r\nCONTENT=\"" + base64String + "\"");
                                 using (MD5 md5Hash = MD5.Create())
                                {
                                 string hash = GetMd5Hash(md5Hash, base64String);
                                 Response.Write("\r\nMD5=\"" + hash + "\"");
                                }
                            }
                            catch (System.ArgumentNullException)
                            {
                                Response.Write("Binary data array is null.");
                            }
                       
                    }
                    else if (rw_Operation == "R")
                    {
                        if (value_type == "INT")
                        {
                            accessor.Read(varPos * integerSize, out integerValue);
                            Response.Write(integerValue.ToString());
                        }
                        else if (value_type == "FLOAT")
                        {
                            accessor.Read(varPos * floatSize, out floatValue);
                            Response.Write(floatValue.ToString());
                        }
                        else
                        {
                            Response.Write("Unknown value Format");
                        }
                    }

                    else   if (rw_Operation == "W")
                    {
                        if (value_type == "INT")
                        {
                            accessor.Write(varPos * integerSize, ref  integerValue);
                            Response.Write("WINT");
                        }
                        else if (value_type == "FLOAT")
                        {
                            accessor.Write(varPos * floatSize, ref  floatValue);
                            Response.Write("WFLOAT");
                        }
                        else
                        {
                            Response.Write("Unknown value Format");
                        }
                    }
                    else
                    {
                        Response.Write("Unknown RW command");
                    }

                }
            }
            
       
    } catch (FileNotFoundException e1)
{
   
             Response.Write("STATUS=\"Unloaded Memory\"");
    }

}
      
</script>