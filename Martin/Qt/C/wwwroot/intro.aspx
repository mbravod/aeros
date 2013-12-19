<%@ Page Language="C#" %>

<script runat="server">
 
  
    protected void Page_Load(object sender, EventArgs e)
    {
      

        if (System.Web.HttpContext.Current.User.Identity.IsAuthenticated)
        {
           //normal
         //   Response.Write("Bienvenido : " + User.Identity.Name);
            
            
            
            
        }
       
        else
        {
            Response.Redirect("Acceso.aspx");
           
        }
    }
    
    
    </script>
<html>
	<head>
		<title>SIMULADOR DE AERODERIVADAS</title>
		<meta http-equiv="content-type" content="text/html; charset=utf-8" />
		<meta name="description" content="" />
		<meta name="keywords" content="" />
		<link href="http://fonts.googleapis.com/css?family=Open+Sans:400,300,700,800" rel="stylesheet" type="text/css" />
		<script src="js/jquery.min.js"></script>
		<script src="js/jquery.dropotron.js"></script>
		<script src="js/config.js"></script>
		<script src="js/skel.min.js"></script>
		<script src="js/skel-panels.min.js"></script>
		<noscript>
			<link rel="stylesheet" href="css/skel-noscript.css" />
			<link rel="stylesheet" href="css/style.css" />
			<link rel="stylesheet" href="css/style-desktop.css" />
		</noscript>
		<!--[if lte IE 9]><link rel="stylesheet" href="css/ie9.css" /><![endif]-->
		<!--[if lte IE 8]><script src="js/html5shiv.js"></script><link rel="stylesheet" href="css/ie8.css" /><![endif]-->
		<!--[if lte IE 7]><link rel="stylesheet" href="css/ie7.css" /><![endif]-->
	</head>
	<body class="homepage">
    <div id="banner">

                                
									<h2><strong>CFE-IPN</strong> Centro Nacional De Capacitacion A Operadores<br />
									Sistema de prueba <a href="http://CNCAOI.com"> ... </a></h2>
									<p>Simulador de Aeroderivadas</p>

                                  <%   Response.Write("<a href=\"CSIM://1\" class=\"button button-big button-icon button-icon-check\">Iniciar App</a>");%>  

								
								</div>
                                
	</body>
</html>
