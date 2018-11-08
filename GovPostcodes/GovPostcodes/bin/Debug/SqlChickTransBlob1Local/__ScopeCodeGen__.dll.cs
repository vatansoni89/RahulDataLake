using Microsoft.Analytics.Interfaces;
using System;
using System.Collections.Generic;
using System.Text;
using System.Reflection;
using System.IO;
using System.Text.RegularExpressions;
using System.Threading;
using System.Runtime.Serialization;
using System.Linq;
using System.Globalization;
using Microsoft.Analytics.Types.Sql;
using System.Runtime.Versioning;
[assembly:TargetFramework(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")]

public class ___Scope_Generated_Classes___
{

	public class SqlTransformer_0 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			int exceptionIndex = 0;
			try
			{
				System.String col_location = row.GetInternal<System.String>(0);
				System.String col_device = row.GetInternal<System.String>(1);
				System.String col_custom = row.GetInternal<System.String>(2);
				output.SetInternal(0, Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_location));
				exceptionIndex++;
				output.SetInternal(1, Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_device));
				exceptionIndex++;
				output.SetInternal(2, Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_custom, "dimensions[0]"));
				exceptionIndex++;
				output.SetInternal(3, Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_custom, "dimensions[1]"));
				exceptionIndex++;
				output.SetInternal(4, Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_custom, "dimensions[2]"));
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(location)",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(device)",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(custom, ""dimensions[0]"")",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(custom, ""dimensions[1]"")",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(custom, ""dimensions[2]"")",
		};
	}


	public class SqlTransformer_2 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			int exceptionIndex = 0;
			try
			{
				System.String col_Country = row.GetInternal<System.String>(0);
				System.String col_Province = row.GetInternal<System.String>(1);
				System.String col_City = row.GetInternal<System.String>(2);
				System.String col_OsVersion = row.GetInternal<System.String>(3);
				System.String col_RoleName = row.GetInternal<System.String>(4);
				System.String col_CategoryDimension0 = row.GetInternal<System.String>(5);
				System.String col_CategoryDimension1 = row.GetInternal<System.String>(6);
				System.String col_CategoryDimension2 = row.GetInternal<System.String>(7);
				System.String col_CategoryDimension100 = row.GetInternal<System.String>(8);
				output.SetInternal(0, Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_CategoryDimension0));
				exceptionIndex++;
				output.SetInternal(1, Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_CategoryDimension1));
				exceptionIndex++;
				output.SetInternal(2, Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_CategoryDimension2));
				exceptionIndex++;
				output.SetInternal(3, Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_CategoryDimension100));
				exceptionIndex++;
				output.SetInternal(4, col_Country);
				exceptionIndex++;
				output.SetInternal(5, col_Province);
				exceptionIndex++;
				output.SetInternal(6, col_City);
				exceptionIndex++;
				output.SetInternal(7, col_OsVersion);
				exceptionIndex++;
				output.SetInternal(8, col_RoleName);
				exceptionIndex++;
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			return output.AsReadOnly();
		}
		public static string[] exceptionsInfo = 
		{
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(CategoryDimension0)",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(CategoryDimension1)",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(CategoryDimension2)",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(CategoryDimension100)",
			@"Country",
			@"Province",
			@"City",
			@"OsVersion",
			@"RoleName",
		};
	}


	public class SqlFilterTransformer_6 : IProcessor
	{
		public override IRow Process(IRow inRow, IUpdatableRow outRow)
		{
			var row = (ScopeEngineManaged.SqlIpRow)inRow;
			var output = (ScopeEngineManaged.SqlIpUpdatableRow)outRow;
			System.String col_location = row.GetInternal<System.String>(0);
			System.String col_device = row.GetInternal<System.String>(1);
			System.String col_custom = row.GetInternal<System.String>(2);
			bool bPicked = false;
			int exceptionIndex = 0;
			try
			{
				{
					bPicked = true;
					Microsoft.Analytics.Types.Sql.SqlMap<System.String, System.String> tmp_0 = Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_location);
					exceptionIndex++;
					output.SetInternal<System.String>(0, (tmp_0[staticconstant_0] ?? staticconstant_1));
					exceptionIndex++;
					output.SetInternal<System.String>(1, (tmp_0[staticconstant_2] ?? staticconstant_3));
					exceptionIndex++;
					output.SetInternal<System.String>(2, (tmp_0[staticconstant_4] ?? staticconstant_5));
					exceptionIndex++;
					Microsoft.Analytics.Types.Sql.SqlMap<System.String, System.String> tmp_1 = Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_device);
					exceptionIndex++;
					output.SetInternal<System.String>(3, (tmp_1[staticconstant_6] ?? staticconstant_7));
					exceptionIndex++;
					output.SetInternal<System.String>(4, (tmp_1[staticconstant_8] ?? staticconstant_9));
					exceptionIndex++;
					Microsoft.Analytics.Types.Sql.SqlMap<System.String, System.String> tmp_2 = Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_custom, staticconstant_10);
					exceptionIndex++;
					output.SetInternal<System.String>(5, (Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_custom, staticconstant_11)[staticconstant_11])[staticconstant_12] ?? Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(col_custom, staticconstant_13)[staticconstant_13])[staticconstant_12] ?? Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(tmp_2[staticconstant_14])[staticconstant_12] ?? Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(tmp_2[staticconstant_15])[staticconstant_12] ?? staticconstant_16));
					exceptionIndex++;
				}
			}
			catch (Exception exception)
			{
				ScopeEngineManaged.UserExceptionHelper.WrapUserExpressionException(exceptionsInfo[exceptionIndex], ScopeEngineManaged.SqlHelper.Dump(row), exception);
			}
			if(bPicked)
			{
			    return output.AsReadOnly();
			}
			else
			{
			    return null;
			}
		}
		public static string[] exceptionsInfo = 
		{
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(location)",
			@"tmp_0[""country""] ?? ""N/A""",
			@"tmp_0[""province""] ?? ""N/A""",
			@"tmp_0[""city""] ?? ""N/A""",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(device)",
			@"tmp_1[""osVersion""] ?? ""N/A""",
			@"tmp_1[""roleName""] ?? ""N/A""",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(custom, ""dimensions[2]"")",
			@"Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(custom, ""dimensions[0]"")[""dimensions[0]""])[""Category""] ?? Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(custom, ""dimensions[1]"")[""dimensions[1]""])[""Category""] ?? Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(tmp_2[""dimensions[2]""])[""Category""] ?? Microsoft.Analytics.Samples.Formats.Json.JsonFunctions.JsonTuple(tmp_2[""dimensions[100]""])[""Category""] ?? ""N/A""",
		};		static string staticconstant_0 = "country";
		static string staticconstant_1 = "N/A";
		static string staticconstant_2 = "province";
		static string staticconstant_3 = "N/A";
		static string staticconstant_4 = "city";
		static string staticconstant_5 = "N/A";
		static string staticconstant_6 = "osVersion";
		static string staticconstant_7 = "N/A";
		static string staticconstant_8 = "roleName";
		static string staticconstant_9 = "N/A";
		static string staticconstant_10 = "dimensions[2]";
		static string staticconstant_11 = "dimensions[0]";
		static string staticconstant_12 = "Category";
		static string staticconstant_13 = "dimensions[1]";
		static string staticconstant_14 = "dimensions[2]";
		static string staticconstant_15 = "dimensions[100]";
		static string staticconstant_16 = "N/A";

	}



































	public static class __OperatorFactory__
	{
		public static Microsoft.Analytics.Interfaces.IExtractor Create_Extract_0()
		{
			return new Microsoft.Analytics.Samples.Formats.Json.JsonExtractor("context");
		}
		public static string Name_Extract_0 = "Microsoft.Analytics.Samples.Formats.Json.JsonExtractor";
		public static Microsoft.Analytics.Interfaces.IProcessor Create_Process_1()
		{
			return new ___Scope_Generated_Classes___.SqlFilterTransformer_6();
		}
		public static string Name_Process_1 = "___Scope_Generated_Classes___.SqlFilterTransformer_6";
	}
}
