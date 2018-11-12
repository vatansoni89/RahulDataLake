using Microsoft.Analytics.Types.Sql;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Utility
{
    public class StringOperations
    {
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
