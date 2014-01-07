using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Data.SqlClient;
using System.Configuration;

public static class Autentificacion
{
    public static bool Autenticar(string usuario, string password)
    {
        /*Aqui iria la logica para saber si el usuario existe o no y regresar un boool
         * este ejemplo se supone que yaa lo hacia de una forma extraña. por ahora lo deje siempre verdadero
         * hace falta estudiar lo de SQL Server como conectalo y realizar todas las operaciones requeridas
         */

        //consulta a la base de datos
        //string sql = @"SELECT COUNT(*)
        //                      FROM Usuarios
        //                      WHERE usuario = @user AND contraseña = @pass";
        //cadena conexion
        //using (SqlConnection conn = new SqlConnection(ConfigurationManager.ConnectionStrings["default"].ToString()))
        // {
        //conn.Open();//abrimos conexion
        //SqlCommand cmd = new SqlCommand(sql, conn); //ejecutamos la instruccion
        //cmd.Parameters.AddWithValue("@user", usuario); //enviamos los parametros
        //cmd.Parameters.AddWithValue("@pass", password);

        int count = 1;// Convert.ToInt32(cmd.ExecuteScalar()); //devuelve la fila afectada
        if (count == 0)
            return false;
        else
            return true;

        // }
    }
  
}