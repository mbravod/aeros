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

    static string DecryptStringFromBytes_Aes(byte[] cipherText, byte[] Key, byte[] IV)
    {
        // Check arguments. 
        if (cipherText == null || cipherText.Length <= 0)
            throw new ArgumentNullException("cipherText");
        if (Key == null || Key.Length <= 0)
            throw new ArgumentNullException("Key");
        if (IV == null || IV.Length <= 0)
            throw new ArgumentNullException("Key");

        string plaintext = null;

        using (Aes aesAlg = Aes.Create())
        {
            aesAlg.Key = Key;
            aesAlg.IV = IV;

            ICryptoTransform decryptor = aesAlg.CreateDecryptor(aesAlg.Key, aesAlg.IV);

            using (MemoryStream msDecrypt = new MemoryStream(cipherText))
            {
                using (CryptoStream csDecrypt = new CryptoStream(msDecrypt, decryptor, CryptoStreamMode.Read))
                {
                    using (StreamReader srDecrypt = new StreamReader(csDecrypt))
                    {
                        plaintext = srDecrypt.ReadToEnd();
                    }
                }
            }

        }

        return plaintext;

    }
    
protected void Page_Load(object sender, EventArgs e)
{


    string[] x = new string[10];
    x[0] = Request.QueryString["session"];
    x[1] = Request.QueryString["RW"];
    x[3] = Request.QueryString["type"];
    x[2] = Request.QueryString["var"];
    x[4] = Request.QueryString["value"];
    x[5] = Request.QueryString["complete"].ToUpper();

    x[6] = Request.QueryString["time"];
    x[7] = Request.QueryString["md5"];
    x[8] = Request.QueryString["IV"];
    x[9] = Request.QueryString["SIGNATURE"];
     //Validacion de mensaje
    string url = "remote_mmf.aspx?var=" + x[2] + "&value=" + x[4] + "&complete=" + x[5] + "&type=" + x[3] + "&rw=" + x[1] + "&session=" + x[0];
    int Nounce4 = Int32.Parse( x[6].ToString());
    url = url + "&time=" + Nounce4;
    string hash_url;
    using (MD5 md5Hash = MD5.Create())
    {
        hash_url = GetMd5Hash(md5Hash, url);
        url = url + "&md5=" + hash_url;
    }

    byte[] key;
    key = new byte[32];
    string strkey = "l3MYTtoJEPUIBsLQTEJsRcmaWuRfmmi0";
    key = System.Text.Encoding.ASCII.GetBytes(strkey);
    string decoded = "";
    try
    {
        
        
        using (Aes myAes = Aes.Create())
        {
            string IVB64 = x[8];
            IVB64 = IVB64.Replace('-', '+'); IVB64 = IVB64.Replace('_', '/'); IVB64 = IVB64.Replace( '~','=');
            byte [] IV = System.Convert.FromBase64String(IVB64);
            string MSGB64 = x[9];
            MSGB64 = MSGB64.Replace('-', '+'); MSGB64 = MSGB64.Replace('_', '/'); MSGB64 = MSGB64.Replace('~', '=');
            byte[] ENC = System.Convert.FromBase64String(MSGB64);


            decoded = DecryptStringFromBytes_Aes(ENC, key, IV);
         
        }

    }
    catch (Exception e1)
    {
        Response.Write("SECURITY=\"UNSIGNED MESSAGE\"");
    }
    int allowed=0;
    if (decoded == hash_url)
    {

        DateTime dt1970 = new DateTime(1970, 1, 1);
        DateTime current = DateTime.Now;
        TimeSpan span = current - dt1970;
        int NOW = (int)span.TotalSeconds;
        int DIF = (Math.Abs(NOW - Nounce4));
        if (DIF < 60)
        {
            Response.Write("SECURITY=\"VALIDATED\"");
             allowed=1;
        }
        else
        {
            Response.Write("SECURITY=\"EXPIRED SIGNATURE\"");

        }
    }
    else{
        Response.Write("SECURITY=\"INVALID SIGNATURE\"");

    }
    Response.Write("\r\n");
    
    if (allowed==0){
        Response.End();
    }
    
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