#pragma warning( disable : 4100 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4355 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4512 )
#pragma warning( disable:  4651 )
#pragma warning( disable : 4691 )
#pragma warning( disable : 4723 )
#pragma warning( disable : 4702 )
#define SCOPE_NO_UDT
#if defined(COMPILE_NATIVE)
#include "ScopeCommonError.h"
#include "ScopeError.h"
#include "ScopeOperators.h"
#endif
#if defined(COMPILE_MANAGED)
#using <mscorlib.dll>
[assembly: System::Runtime::Versioning::TargetFrameworkAttribute(".NETFramework,Version=v4.5", FrameworkDisplayName = ".NET Framework, Version 4.5")];
#include "ScopeCommonError.h"
#include "SqlManaged.h"
#endif
#if defined(COMPILE_NATIVE)
#endif
using namespace ScopeEngine;
static ScopeEngine::CompilerSettings GetCompilerSettings()
{
    static ScopeEngine::CompilerSettings settings;
    settings.m_restrictOperatorMemorySpilling = false;
    settings.m_verboseRuntimeStatistic = false;
    return settings;
};

enum OperatorUID
{
UID_Extract_0 = 1,
UID_Extract_0_Data0 = 2,
UID_Process_1 = 3,
UID_Process_1_Data0 = 4,
UID_SV1_Extract_out0 = 5,
UID_ParallelUnionAll_Extract_0
};
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

//namespace ScopeGeneratedClasses
//{
    // IDs representing UDTs to be used in native code
    enum UserDefinedTypeId
    {
        
    };

#if defined(COMPILE_MANAGED)
// Explicit instantiations for templated functions that are defined in managed code
#endif // defined(COMPILE_MANAGED)


    class Extract_0_Data0
    {
    public:
        FString m_location;
        FString m_device;
        FString m_custom;
        Extract_0_Data0();
        Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Extract_0_Data0(const Extract_0_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"location:string,device:string,custom:string" };
        }

        friend ostream & operator<<(ostream & os, Extract_0_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Extract_0_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



    class Process_1_Data0
    {
    public:
        FString m_Country;
        FString m_Province;
        FString m_City;
        FString m_OsVersion;
        FString m_RoleName;
        FString m_Category;
        Process_1_Data0();
        Process_1_Data0(const Process_1_Data0 & c, IncrementalAllocator * alloc);

        template <typename Allocator>
        Process_1_Data0(const Process_1_Data0 & c, FixedArrayTypeMemoryManager<Allocator> * mmng);

        template <typename Allocator>
        void Delete(FixedArrayTypeMemoryManager<Allocator> * mmng);



        static const bool containsUDT = false;

        UINT8 GetScopeCEPEventType() const { return 0; }
        ScopeDateTime GetScopeCEPEventStartTime() const { return ScopeDateTime::MinValue; }
        void SetScopeCEPEventStartTime(ScopeDateTime& startTime) {}
        void SetScopeCEPEventType(int type) {}
        bool IsScopeCEPCTI() const { return false; }
        void ResetScopeCEPStatus(ScopeDateTime startTime, ScopeDateTime endTime, int type) { }

        static const std::string GetSchema()
        {
            return std::string{ u8"Country:string,Province:string,City:string,OsVersion:string,RoleName:string,Category:string" };
        }

        friend ostream & operator<<(ostream & os, Process_1_Data0 & row);

    };


    INLINE ostream & operator<<(ostream & os, Process_1_Data0 & row)
    {
        std::string schema = row.GetSchema();
        ScopeEngine::OutputRowContent(schema, &row, os);
        return os;
    }



#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedRow<Extract_0_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(3);            
            offset[0] = ColumnOffsetId(offsetof(Extract_0_Data0, m_location), T_String);
            offset[1] = ColumnOffsetId(offsetof(Extract_0_Data0, m_device), T_String);
            offset[2] = ColumnOffsetId(offsetof(Extract_0_Data0, m_custom), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(3);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("location"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("location")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("device"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("device")) >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("custom"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("custom")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Extract_0_Data0>::ComplexColumnGetter, &ManagedRow<Extract_0_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Extract_0_Data0>;    
    template<>
    struct ManagedRow<Process_1_Data0>
    {
        cli::array<ScopeEngineManaged::ColumnOffsetId>^ ColumnOffsets()
        {
            cli::array<ScopeEngineManaged::ColumnOffsetId>^ offset = gcnew cli::array<ScopeEngineManaged::ColumnOffsetId>(6);            
            offset[0] = ColumnOffsetId(offsetof(Process_1_Data0, m_Country), T_String);
            offset[1] = ColumnOffsetId(offsetof(Process_1_Data0, m_Province), T_String);
            offset[2] = ColumnOffsetId(offsetof(Process_1_Data0, m_City), T_String);
            offset[3] = ColumnOffsetId(offsetof(Process_1_Data0, m_OsVersion), T_String);
            offset[4] = ColumnOffsetId(offsetof(Process_1_Data0, m_RoleName), T_String);
            offset[5] = ColumnOffsetId(offsetof(Process_1_Data0, m_Category), T_String);
            return offset;        
        }

        cli::array<ScopeEngineManaged::SqlIpColumn^>^ Columns(cli::array<String^>^ readOnlyColumns)
        {
            cli::array<ScopeEngineManaged::SqlIpColumn^>^ c = gcnew cli::array<ScopeEngineManaged::SqlIpColumn^>(6);
            c[0] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("Country"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("Country")) >= 0, /*isSystem*/false);
            c[1] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("Province"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("Province")) >= 0, /*isSystem*/false);
            c[2] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("City"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("City")) >= 0, /*isSystem*/false);
            c[3] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("OsVersion"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("OsVersion")) >= 0, /*isSystem*/false);
            c[4] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("RoleName"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("RoleName")) >= 0, /*isSystem*/false);
            c[5] = gcnew ScopeEngineManaged::SqlIpColumn(gcnew System::String("Category"), System::String::typeid, readOnlyColumns == nullptr ? false : Array::IndexOf(readOnlyColumns, gcnew System::String("Category")) >= 0, /*isSystem*/false);
            return c;        
        }

        static System::Object^ ComplexColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        static System::Object^ UDTColumnGetter(int index, BYTE* address)
        {
            System::Object^ r = nullptr;
            return r;
        }

        ManagedRow()
        {
            SqlIpSchema^ schema = gcnew SqlIpSchema(Columns(nullptr), &ManagedRow<Process_1_Data0>::ComplexColumnGetter, &ManagedRow<Process_1_Data0>::UDTColumnGetter);   
            m_row.reset(gcnew SqlIpRow(schema, ColumnOffsets(), nullptr));
        }

        SqlIpRow^ get()
        {
            return m_row.get();
        }

    private:
    
        ScopeTypedManagedHandle<SqlIpRow^> m_row;
        ManagedRow & operator=(ManagedRow &);
    };

    template class ManagedRowFactory<Process_1_Data0>;    

#endif // defined(COMPILE_MANAGED)


//}

#pragma region Schema Constructors
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Extract_0_Data0::Extract_0_Data0()
    {
    }
    INLINE Extract_0_Data0::Extract_0_Data0(const Extract_0_Data0 & c, IncrementalAllocator * alloc) :
            m_location(c.m_location, alloc),
            m_device(c.m_device, alloc),
            m_custom(c.m_custom, alloc)
    {
    }

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    INLINE Process_1_Data0::Process_1_Data0()
    {
    }

#pragma endregion Schema Constructors
#pragma hdrstop
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_INIT_SHUTDOWN)
#if defined(COMPILE_MANAGED)
extern "C" __declspec(dllexport) void __stdcall InitVertexManaged(std::string * argv, int argc)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif
    cli::array<String^>^ arguments = ScopeEngineManaged::GroupArguments(argv, argc);
    ScopeEngineManaged::InitializeScopeEngineManaged(arguments);
}

extern "C" __declspec(dllexport) void __stdcall ShutdownVertexManaged(CLRMemoryStat& stat)
{
    ScopeEngineManaged::FinalizeScopeEngineManaged(stat);
}
#endif //#if defined(COMPILE_MANAGED)

#if defined(COMPILE_NATIVE)
ScopeEngine::ScopeCEPCheckpointManager* g_scopeCEPCheckpointManager = NULL;

extern "C" __declspec(dllexport) void __stdcall InitVertexNative(VertexExecutionInfo * vertexExecutionInfo)
{
#if defined(FORCEMANAGEDDATETIMESER)
    ScopeEngine::ScopeDateTime::ForceManagedSerialization = true;
#endif

    ErrorManager::GetGlobal()->EnableJSON();
}

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



// Add broadcast vertex code
extern "C" __declspec(dllexport) void __stdcall SV_CopyThrough_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
{
    SCOPE_ASSERT(inputCnt == 1 && outputCnt == 1);
    IOManager::CopyStream(IOManager::GetGlobal()->GetDevice(inputs[0].inputFileName), IOManager::GetGlobal()->GetDevice(outputs[0].outputFileName));
}

#endif //#if defined(COMPILE_NATIVE)


#endif //#if defined(COMPILE_INIT_SHUTDOWN)
#pragma region SV1_Extract
#if defined(COMPILE_SV1_EXTRACT) || defined(COMPILE_ALL_VERTICES)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Extract_0>
    {
        typedef Microsoft::Analytics::Interfaces::IExtractor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Extract_0());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{})));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Extract_0, "Constructor", ex);
                throw;
            }
        }

        int StreamIdColumnIndex()
        {
            return -1;
        }

        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Extract_0_Data0, UID_Extract_0>
    {
    public:
        static void Marshal(ScopeEngineManaged::SqlIpRow^ managedRow, Extract_0_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_location, managedRow->GetInternal<System::String^>(0), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_device, managedRow->GetInternal<System::String^>(1), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_custom, managedRow->GetInternal<System::String^>(2), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


    template<>
    class RowTransformPolicy<Extract_0_Data0, Process_1_Data0, UID_Process_1>
    {
    public:

        static bool FilterTransformRow(Extract_0_Data0 & input, Process_1_Data0 & output, IncrementalAllocator * alloc)
        {
return true;
}

            #pragma warning(push)
            #pragma warning(disable: 4100) // 'alloc': unreferenced formal parameter
            static void InitializeStatics(IncrementalAllocator * alloc)
            {
            #pragma warning(pop)
            }
    
            // get operator resource requirements
            static OperatorRequirements GetOperatorRequirements()
            {
                return OperatorRequirements();
            }
        };
    

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
    template<>
    struct ManagedUDO<UID_Process_1>
    {
        typedef Microsoft::Analytics::Interfaces::IProcessor UDO;

        ManagedUDO(std::string * argv, int argc)
        {
            try
            {
                m_udo.reset(___Scope_Generated_Classes___::__OperatorFactory__::Create_Process_1());
                m_args.reset(gcnew Generic::List<String^>(ConvertArgsToArray(std::wstring{})));
            }
            catch (Exception ^ex)
            {
                ScopeEngineManaged::UserExceptionHelper::WrapUserException(___Scope_Generated_Classes___::__OperatorFactory__::Name_Process_1, "Constructor", ex);
                throw;
            }
        }


        UDO^ get()
        {
            return m_udo.get();
        }

        Generic::List<String^>^ args()
        {
            return m_args.get();
        }
        cli::array<String^>^ ReadOnlyColumns_Output()
        {
            return nullptr;
        }
        
        cli::array<String^>^ ReadOnlyColumns_Input()
        {
            return nullptr;
        }

    private:
        ScopeTypedManagedHandle<UDO^> m_udo;
        ScopeTypedManagedHandle<Generic::List<String^>^> m_args;
        ManagedUDO & operator=(ManagedUDO &);
    };
    template<>
    class InteropToNativeRowPolicy<Process_1_Data0, UID_Process_1>
    {
    public:
        static void Marshal(ScopeEngineManaged::SqlIpRow^ managedRow, Process_1_Data0& nativeRow, IncrementalAllocator* alloc)
        {
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Country, managedRow->GetInternal<System::String^>(0), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Province, managedRow->GetInternal<System::String^>(1), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_City, managedRow->GetInternal<System::String^>(2), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_OsVersion, managedRow->GetInternal<System::String^>(3), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_RoleName, managedRow->GetInternal<System::String^>(4), alloc);
            ScopeManagedInterop::CopyToNativeColumn(nativeRow.m_Category, managedRow->GetInternal<System::String^>(5), alloc);
        }
    };
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.

    template<> 
    class TextOutputPolicy<Process_1_Data0, UID_SV1_Extract_out0>
    {
    public:

        static void Serialize(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output, Process_1_Data0 & row)
        {
            if (!row.m_Country.IsNull())
            {
                output->Write<FString,true>(row.m_Country);
            }
            output->WriteDelimiter();
            if (!row.m_Province.IsNull())
            {
                output->Write<FString,true>(row.m_Province);
            }
            output->WriteDelimiter();
            if (!row.m_City.IsNull())
            {
                output->Write<FString,true>(row.m_City);
            }
            output->WriteDelimiter();
            if (!row.m_OsVersion.IsNull())
            {
                output->Write<FString,true>(row.m_OsVersion);
            }
            output->WriteDelimiter();
            if (!row.m_RoleName.IsNull())
            {
                output->Write<FString,true>(row.m_RoleName);
            }
            output->WriteDelimiter();
            if (!row.m_Category.IsNull())
            {
                output->Write<FString,true>(row.m_Category);
            }
            output->WriteNewLine();
        }

        static void SerializeHeader(TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput> * output)
        {
            output->Write<string,true>(FString("Country", 7));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Province", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("City", 4));
            output->WriteDelimiter();
            output->Write<string,true>(FString("OsVersion", 9));
            output->WriteDelimiter();
            output->Write<string,true>(FString("RoleName", 8));
            output->WriteDelimiter();
            output->Write<string,true>(FString("Category", 8));
            output->WriteNewLine();
        }
    };

// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.


#if defined(COMPILE_MANAGED)
#endif // defined(COMPILE_MANAGED)
// All of the templates will throw a CS1591 warning because we 
// have /doc turned on in the CSharp compiler.
// The only way to solve this is to move all of the templates to their own
// project, and then turn off /doc.



#if defined(COMPILE_NATIVE)
namespace ScopeGeneratedClasses
{
    extern "C" __declspec(dllexport) void __stdcall SV1_Extract_execute(std::string * argv, int argc, InputFileInfo* inputs, int inputCnt, OutputFileInfo* outputs, int outputCnt, VertexExecutionInfo * vertexExecutionInfo)
    {
#ifdef USE_SSE4_2
        // check CPUID to make sure this machine supports SSE4_2 instructions
        // - this is incase we download a cluster vertex and try and debug it on a machine that doesn't support these instructions
        int cpuInfo[4];
        __cpuid(cpuInfo, 0x00000001);
        //Array index | Bit range | Description 
        // 2          | 20        | SSE4.2 extensions
        if ((cpuInfo[2] & (1 << 20)) == 0)
        {
            throw RuntimeException(E_USER_ERROR, "Please recompile __ScopeCodeGenEngine__.dll without /DUSE_SSE4_2");
            return;
        }
#endif

        Configuration::Create(ET_Azure, GetCompilerSettings(), vertexExecutionInfo);
        SIZE_T x_inputBufSize, x_outputBufSize, x_inputVirtualMemoryLimit;
        int    x_inputBufCnt, x_outputBufCnt;
        
        MemoryManager::CalculateIOBufferSize(inputCnt, outputCnt, MemoryManager::x_vertexMemoryLimit, MemoryManager::x_vertexReserveMemory, x_inputBufSize, x_inputBufCnt, x_outputBufSize, x_outputBufCnt, x_inputVirtualMemoryLimit, false);

        const bool IsNativeOnlyVertex = false;
        // If we have more than one input, we will random shuffle it
        if (inputCnt - 0 > 1)
        {
            ScopeRandom scopeRandom((int)vertexExecutionInfo->m_vertexId);
            auto lambda = [&scopeRandom](int max)->int { return (scopeRandom.Next() % max + max) % max;}; // scopeRandom.Next() % max could be negative value
            random_shuffle(&inputs[0], inputs + inputCnt - 0, lambda ); 
        }
        // Define extractor type and construct objects
        // 
        typedef ScopeExtractor<CosmosInput, Extract_0_Data0> ExtractorType1_SV1_Extract;
        unique_ptr<unique_ptr<ExtractorType1_SV1_Extract>[]> extractor_0_array(new unique_ptr<ExtractorType1_SV1_Extract>[inputCnt - 0]);
        
        for (int i = 0; i < inputCnt; i++)
        {
            // 
            extractor_0_array[i - 0].reset(new ExtractorType1_SV1_Extract(ScopeExtractorManagedFactory::MakeSqlIp<CosmosInput,Extract_0_Data0,UID_Extract_0, 0>(argv, argc), inputs[i], false, x_inputBufSize, x_inputBufCnt, x_inputVirtualMemoryLimit, UID_Extract_0));
        }

    ExtractorType1_SV1_Extract ** extractor_0 = (ExtractorType1_SV1_Extract **)extractor_0_array.get();

        
        ULONG extractor_0_count = (ULONG) inputCnt - 0;
        // Merge streams N->1
        typedef ParallelUnionAll<ExtractorType1_SV1_Extract, Extract_0_Data0, IsNativeOnlyVertex> UnionAllType_extractor_serially_Extract_0_connector;
        unique_ptr<UnionAllType_extractor_serially_Extract_0_connector> unionall_extractor_serially_Extract_0_connector_ptr(new UnionAllType_extractor_serially_Extract_0_connector(extractor_0,extractor_0_count,true,UID_ParallelUnionAll_Extract_0));
        UnionAllType_extractor_serially_Extract_0_connector * unionall_extractor_serially_Extract_0_connector = unionall_extractor_serially_Extract_0_connector_ptr.get();
        ULONG unionall_extractor_serially_Extract_0_connector_count = 1;
        // Construct operator and initialize it.
        unique_ptr<OperatorDelegate<Extract_0_Data0>> delegate_unionall_extractor_serially_Extract_0_connector_ptr (new OperatorDelegate<Extract_0_Data0>(OperatorDelegate<Extract_0_Data0>::FromOperator(unionall_extractor_serially_Extract_0_connector)));
        OperatorDelegate<Extract_0_Data0> * delegate_unionall_extractor_serially_Extract_0_connector = delegate_unionall_extractor_serially_Extract_0_connector_ptr.get();
        ULONG delegate_unionall_extractor_serially_Extract_0_connector_count = 1;
        // Define the type of the operator
        typedef ScopeProcessor<Extract_0_Data0, Process_1_Data0> ProcessorType_Process_1;
        // Construct operator and initialize it.
        unique_ptr<ProcessorType_Process_1> processor_Process_1_ptr (new ProcessorType_Process_1(ScopeProcessorManagedFactory::MakeSqlIp<Extract_0_Data0,Process_1_Data0,UID_Process_1>(delegate_unionall_extractor_serially_Extract_0_connector), delegate_unionall_extractor_serially_Extract_0_connector, UID_Process_1));
        ProcessorType_Process_1 * processor_Process_1 = processor_Process_1_ptr.get();
        ULONG processor_Process_1_count = 1;
        // Define outputer type
        typedef Outputer<ProcessorType_Process_1, Process_1_Data0, TextOutputPolicy<Process_1_Data0, UID_SV1_Extract_out0>, TextOutputStream<TextOutputStreamTraitsConst<',', '\0', false, false, true, false, true, UTF8, true, CharFormat_uint16>, CosmosOutput>, false> OutputerType2_SV1_Extract;
        // Construct operator and initialize it
        unique_ptr<OutputerType2_SV1_Extract> outputer_SV1_Extract_out0_ptr(new OutputerType2_SV1_Extract(processor_Process_1, outputs[0].outputFileName, outputs[0].isFirstOutputPiece, x_outputBufSize, x_outputBufCnt, OutputStreamParameters(',', "\r\n", '\0', static_cast<const char*>(__nullptr), false, false, true, false, "O", UTF8, true, CharFormat_uint16), UID_SV1_Extract_out0));
        OutputerType2_SV1_Extract * outputer_SV1_Extract_out0 = outputer_SV1_Extract_out0_ptr.get();
        try
        {
            // Init operator chain
            outputer_SV1_Extract_out0->Init();

            // Execute the whole vertex by calling the GetNextRow on top operator
            Process_1_Data0 row;
            outputer_SV1_Extract_out0->GetNextRow(row);

            // Close operator chain
            outputer_SV1_Extract_out0->Close();
        }
        catch (const ExceptionWithStack& ex)
        {
            if (vertexExecutionInfo->m_reportStatusFunc != NULL)
            {
                ErrorManager::GetGlobal()->SetError(std::current_exception(), "VertexExecute");
                vertexExecutionInfo->m_reportStatusFunc(vertexExecutionInfo->m_statusReportContext);
            }
            
            std::cout << "Caught exception: " << ex.what() << std::endl << ex.GetStack() << std::endl;
            throw;
        }


        // Write out execution stats
        MemoryManager::GetGlobal()->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
        outputer_SV1_Extract_out0->WriteRuntimeStats(vertexExecutionInfo->m_statsRoot);
    }
}
#endif // defined(COMPILE_NATIVE)

#if defined(COMPILE_MANAGED)
template ScopeExtractorManaged<CosmosInput,Extract_0_Data0> * ScopeEngine::ScopeExtractorManagedFactory::MakeSqlIp<CosmosInput, Extract_0_Data0, UID_Extract_0, 0>(std::string * argv, int argc);
template ScopeProcessorManaged<Extract_0_Data0, Process_1_Data0> * ScopeEngine::ScopeProcessorManagedFactory::MakeSqlIp<Extract_0_Data0, Process_1_Data0, UID_Process_1>(OperatorDelegate<Extract_0_Data0>*);
#endif // defined(COMPILE_MANAGED)
#if defined(COMPILE_NATIVE)
#endif // defined(COMPILE_NATIVE)

#endif
#pragma endregion SV1_Extract
// Empty footer
