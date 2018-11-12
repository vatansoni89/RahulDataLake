using Microsoft.Analytics.Interfaces;
using Microsoft.Analytics.Types.Sql;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Newtonsoft.Json;





namespace GovPostcodes
{
    public static class Utility
    { 
        //public static string GetName(SqlArray<string> sqlArray)
        //{
        //    Class1 c = new Class1();
        //    return c.GetName(sqlArray);
            
        //}

        public static string GetName(SqlArray<string> sqlArray)
        {
            string s = "";
            foreach (var item in sqlArray)
            {
                if (item != null)
                {
                    s += ((Newtonsoft.Json.Linq.JValue)((Newtonsoft.Json.Linq.JContainer)((Newtonsoft.Json.Linq.JContainer)item).First).First).Value.ToString();

                }

            }
            return s;
        }
    }
}
