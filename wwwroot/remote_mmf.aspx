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
    static byte[] EncryptStringToBytes_Aes(string plainText, byte[] Key, byte[] IV)
    {

        if (plainText == null || plainText.Length <= 0)
            throw new ArgumentNullException("plainText");
        if (Key == null || Key.Length <= 0)
            throw new ArgumentNullException("Key");
        if (IV == null || IV.Length <= 0)
            throw new ArgumentNullException("Key");
        byte[] encrypted;
        using (Aes aesAlg = Aes.Create())
        {
            aesAlg.Key = Key;
            aesAlg.IV = IV;

            ICryptoTransform encryptor = aesAlg.CreateEncryptor(aesAlg.Key, aesAlg.IV);

            using (MemoryStream msEncrypt = new MemoryStream())
            {
                using (CryptoStream csEncrypt = new CryptoStream(msEncrypt, encryptor, CryptoStreamMode.Write))
                {
                    using (StreamWriter swEncrypt = new StreamWriter(csEncrypt))
                    {
                        swEncrypt.Write(plainText);
                    }
                    encrypted = msEncrypt.ToArray();
                }
            }
        }
        return encrypted;

    }
protected void Page_Load(object sender, EventArgs e)
{
   
    Response.ContentType = "text/plain";
    string pre_resp;
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
        pre_resp="\"SECURITY\":\"UNSIGNED MESSAGE\"";
    }
    int allowed=0;
    if (decoded == hash_url)
    {

        DateTime dt1970 = new DateTime(1970, 1, 1);
        DateTime current = DateTime.Now;
        TimeSpan span = current - dt1970;
        int NOW = (int)span.TotalSeconds;
        int DIF = (Math.Abs(NOW - Nounce4));
        if (DIF < 10)
        {
             pre_resp="\"SECURITY\":\"VALIDATED\"";
             allowed=1;
        }
        else
        {
              pre_resp="\"SECURITY\":\"EXPIRED SIGNATURE\"";

        }
    }
    else{
         pre_resp="\"SECURITY\":\"INVALID SIGNATURE\"";

    }
    string md5 = "";
    string resp = pre_resp;
    string security = "";
    if (allowed == 1)
    {


        int varPos = Convert.ToInt32(x[2]);// x[3];
        int int_value = 0;
        float float_value = 0;
        string value_type = x[3].ToUpper();

        
      

        try
        { int_value = Convert.ToInt32(x[4]);  }
        catch (System.FormatException e2) { }
        try
        { float_value = (float)Convert.ToDouble(x[4]);}
        catch (System.FormatException e3) { }

        string rw_Operation = x[1].ToUpper();


        long offset = 0x00000000;
        long length = 24 * 1024 * 4;
        string MAP = "PROCESS_INTEROP_MEM_";
        MAP = MAP + x[0];
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
                    char charValue;

                    if (x[5] == "TRUE")
                    {
                        binaryData = new Byte[length];

                        accessor.ReadArray(0, binaryData, 0, binaryData.Length);
                        try
                        {
                            string base64String = System.Convert.ToBase64String(binaryData, 0, binaryData.Length);

                            base64String = base64String.Replace('+', '-'); base64String = base64String.Replace('/', '_'); base64String = base64String.Replace('=', '~');
          
                            resp = resp + "\r\n\"STATUS\":\"OK\"";
                            resp = resp + "\r\n\"RESPONSE_TYPE\":\"DUMP\"";
                            resp = resp + "\r\n\"CONTENT\":\"" + base64String + "\"";
                        }
                        catch (System.ArgumentNullException)
                        {
                            resp = resp + "\r\n\"STATUS\":\"Error Retrieving MMF\"";
                        }

                    }
                    else if (rw_Operation == "R")
                    {
                        if (value_type == "INT")
                        {
                            accessor.Read(varPos * integerSize, out integerValue);
                            resp = resp + "\r\n\"STATUS\":\"OK\"";
                            resp = resp + "\r\n\"RESPONSE_TYPE\":\"VALUE_INT\"";
                            resp = resp + "\r\n\"CONTENT\":\"" + integerValue.ToString() + "\"";
                        }
                        else if (value_type == "FLOAT")
                        {
                            accessor.Read(varPos * floatSize, out floatValue);
                            resp = resp + "\r\n\"STATUS\";\"OK\"";
                            resp = resp + "\r\n\"RESPONSE_TYPE\":\"VALUE_FLOAT\"";
                            resp = resp + "\r\n\"CONTENT\":\"" + floatValue.ToString() + "\"";
                        }
                        else
                        {
                            resp = resp + "\r\n\"STATUS\":\"Unknown Value Format\"";
                        }
                    }

                    else if (rw_Operation == "W")
                    {
                        if (value_type == "INT")
                        {
                            accessor.Write(varPos * integerSize, ref  integerValue);

                            resp = resp + "\r\n\"STATUS\":\"OK\"";
                            resp = resp + "\r\n\"RESPONSE_TYPE\":\"VALUE_INT_WRITE\"";
                            resp = resp + "\r\n\"CONTENT\":\"" + "1" + "\"";

                        }
                        else if (value_type == "FLOAT")
                        {
                            accessor.Write(varPos * floatSize, ref  floatValue);
                            resp = resp + "\r\n\"STATUS\":\"OK\"";
                            resp = resp + "\r\n\"RESPONSE_TYPE\":\"VALUE_FLOAT_WRITE\"";
                            resp = resp + "\r\n\"CONTENT\":\"" + "1" + "\"";
                        }
                        else
                        {
                            resp = resp + "\r\n\"STATUS\":\"Unknown Value Format[WRITE]\"";
                        }
                    }
                    else
                    {
                        resp = resp + "\r\n\"STATUS\":\"Unknown RW command\"";
                    }

                }
            }
        }
        catch (FileNotFoundException e1)
        {

           resp = resp + "\r\n\"STATUS\":\"Unloaded Memory\"";
        }
            using (MD5 md5Hash = MD5.Create())
            {
                md5 = GetMd5Hash(md5Hash, resp);
                resp = resp + "\r\n\"MD5\":\"" + md5 + "\"";
            }

            byte[] key2;
            key = new byte[32];
            string strkey2 = "l3MYTtoJEPUIBsLQTEJsRcmaWuRfmmi0";  //la clave es en funcion de la sesion
            key2 = System.Text.Encoding.ASCII.GetBytes(strkey2);
            
            try
            {
                using (Aes myAes = Aes.Create())
                {


                    string IVB64 = System.Convert.ToBase64String(myAes.IV, 0, myAes.IV.Length);
                    IVB64 = IVB64.Replace('+', '-'); IVB64 = IVB64.Replace('/', '_'); IVB64 = IVB64.Replace('=', '~');
                    security = "\r\n\"IV\":\"" + IVB64 + "\"";
                    byte[] encrypted = EncryptStringToBytes_Aes(md5, key2, myAes.IV);
                    string MSGB64 = System.Convert.ToBase64String(encrypted, 0, encrypted.Length);
                    MSGB64 = MSGB64.Replace('+', '-'); MSGB64 = MSGB64.Replace('/', '_'); MSGB64 = MSGB64.Replace('=', '~');
                    security = security + "\r\n\"SIGNATURE\":\"" + MSGB64 + "\"";
                }

            }
            catch (Exception e2)
            {
                security = security + "\r\n\"IV=\"" + "AAA\"";
                security = security + "\r\n\"SIGNATURE\":\"" + "AAA\"";
            }

          

        
    }

    Response.Write("{\r\n"  + resp + security + "\r\n}");

}
      
</script>