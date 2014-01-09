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

    static int RandomNumber()
    {
        Random random = new Random(); 
        return random.Next();
    }

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
    static byte[] EncryptStringToBytes_Aes(string plainText, byte[] Key,byte[] IV)
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


    string[] x = new string[6];
    x[0] = Request.QueryString["session"];
    x[1] = Request.QueryString["RW"];
    x[3] = Request.QueryString["type"];
    x[2] = Request.QueryString["var"];
    x[4] = Request.QueryString["value"];
    x[5] = Request.QueryString["complete"].ToUpper();
    
    string url = "remote_mmf.aspx?var=" + x[2] + "&value=" + x[4] + "&complete=" + x[5] + "&type=" + x[3] + "&rw=" + x[1] + "&session=" + x[0];

    DateTime dt1970 = new DateTime(1970, 1, 1);
    DateTime current = DateTime.Now;
    TimeSpan span = current - dt1970;
    int Nounce4 = (int)span.TotalSeconds;
  url=url+"&time="+Nounce4; 
    string hash;
  using (MD5 md5Hash = MD5.Create())
  {
      hash= GetMd5Hash(md5Hash, url);
       url=url+"&md5=" + hash ;
  }
    


    byte[] key;
    key = new byte[32];
    string strkey = "l3MYTtoJEPUIBsLQTEJsRcmaWuRfmmi0";
    key = System.Text.Encoding.ASCII.GetBytes(strkey);

    try
    {

        string original = hash;

     
        using (Aes myAes = Aes.Create())
        {


            string IVB64 = System.Convert.ToBase64String(myAes.IV, 0, myAes.IV.Length);
            IVB64 = IVB64.Replace('+', '-'); IVB64 = IVB64.Replace('/', '_'); IVB64 = IVB64.Replace('=', '~');
            url = url + "&IV=" + IVB64;
            byte[] encrypted = EncryptStringToBytes_Aes(original, key, myAes.IV);
            string MSGB64 = System.Convert.ToBase64String(encrypted, 0, encrypted.Length);
            MSGB64 = MSGB64.Replace('+', '-'); MSGB64 = MSGB64.Replace('/', '_'); MSGB64 = MSGB64.Replace('=', '~');
            url = url + "&SIGNATURE=" + MSGB64;
        }

    }
    catch (Exception e1)
    {
        url = url + "&SIGNATURE=" + "AAAA";
    }
    string resp = "<a href=\"" + url + "\" target=\"_blank\">" + url + "</A>";
    Response.Write(resp);
    

}
      
</script>