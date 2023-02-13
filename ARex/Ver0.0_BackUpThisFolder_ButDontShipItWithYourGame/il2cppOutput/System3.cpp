﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>

#include "icalls/System/System.Diagnostics/Stopwatch.h"

struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3;
// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo>
struct ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Security.Cryptography.Oid>
struct List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Security.Cryptography.Oid[]
struct OidU5BU5D_t73E7D08DA46298D6D923119136C4075A492E666B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587;
// Mono.Security.ASN1
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8;
// System.Diagnostics.AsyncStreamReader
struct AsyncStreamReader_tAC4F4C9FDA0C1A8D21F2B1C838C08C0E83AE871B;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9;
// System.ComponentModel.BrowsableAttribute
struct BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76;
// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Collections.Specialized.CaseSensitiveStringDictionary
struct CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083;
// System.ComponentModel.ComponentConverter
struct ComponentConverter_tFE75D55373FA41F9E4EC733FEDC24C8166A3D7CE;
// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93;
// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1;
// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.ComponentModel.DefaultEventAttribute
struct DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07;
// System.ComponentModel.DefaultPropertyAttribute
struct DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4;
// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34;
// System.ComponentModel.DefaultValueAttribute
struct DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86;
// System.ComponentModel.DesignerCategoryAttribute
struct DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715;
// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83;
// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7;
// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8;
// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE;
// System.ComponentModel.EditorAttribute
struct EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C;
// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8;
// System.Exception
struct Exception_t;
// System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute
struct ExcludeFromCodeCoverageAttribute_tD4CB13A2A9FCF2022C854E503D3B44DFF634FAAD;
// System.ComponentModel.ExpandableObjectConverter
struct ExpandableObjectConverter_t2D9FF3B389851F14034FBA07A57944EB27C18F63;
// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_tE129D608FCDB7207E0F0ECE33473CC950A83AD16;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.ComponentModel.ISite
struct ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t94542FC52B3B1FCA7BC4D8CC518FC2EF9870861F;
// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB;
// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED;
// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23;
// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932;
// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Diagnostics.MonitoringDescriptionAttribute
struct MonitoringDescriptionAttribute_t93A41F21391E9A06411FF8E8EDBD2C0813A1026E;
// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.ComponentModel.NotifyParentPropertyAttribute
struct NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287;
// System.Security.Cryptography.OidCollection
struct OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3;
// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41;
// System.Collections.Specialized.OrderedDictionary
struct OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD;
// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A;
// System.Diagnostics.Process
struct Process_tF74794C64BCE464912BF158980B347CE66AF203B;
// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_tB2EBC893262A796A0182EDF0022F0B08E30461EE;
// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C;
// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t9E9F6B3EB7E8031736898D77DD88F2BD29740971;
// System.Diagnostics.ProcessWaitHandle
struct ProcessWaitHandle_t8460169FB67A55A5531F08CB2FDC37090B13A1C2;
// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405;
// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2;
// System.Threading.RegisteredWaitHandle
struct RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86;
// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F;
// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE;
// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7;
// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Security.SecureString
struct SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C;
// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2;
// System.ComponentModel.SettingsBindableAttribute
struct SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B;
// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12;
// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1;
// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE;
// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C;
// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167;
// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463;
// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00;
// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9;
// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35;
// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5;
// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B;
// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5;
// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF;
// System.ComponentModel.EventHandlerList/ListEntry
struct ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD;
// System.Net.IPAddress/ReadOnlyIPAddress
struct ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C;
// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6;
// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3;

IL2CPP_EXTERN_C RuntimeClass* ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IContainer_t717EF6801E89E9463045041A0C482723AC06DA86_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OidLookup_t8767D0F636CD22219B1F239AE31597AF84BA6458_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1;
IL2CPP_EXTERN_C String_t* _stringLiteral08F78B1140DE9B7FF7C3C57BB5C1F10BBD3B15CB;
IL2CPP_EXTERN_C String_t* _stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7;
IL2CPP_EXTERN_C String_t* _stringLiteral0E0E07FBC53FA8C48B097E23C1F51253713BFE1D;
IL2CPP_EXTERN_C String_t* _stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405;
IL2CPP_EXTERN_C String_t* _stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D;
IL2CPP_EXTERN_C String_t* _stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA;
IL2CPP_EXTERN_C String_t* _stringLiteral1757A05516A315BB0FA6014D44AB4E34D2ECE718;
IL2CPP_EXTERN_C String_t* _stringLiteral17E5BE9B221C767EF04A364F24B81309DAE38512;
IL2CPP_EXTERN_C String_t* _stringLiteral1842163E600730C192914B1BCFB77A9A809A8070;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9C2E56B6E7518DF358644E56A37604D9A7C17A;
IL2CPP_EXTERN_C String_t* _stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064;
IL2CPP_EXTERN_C String_t* _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9;
IL2CPP_EXTERN_C String_t* _stringLiteral20BFDEE599B675B43C275E62F4062F4333B183F9;
IL2CPP_EXTERN_C String_t* _stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F;
IL2CPP_EXTERN_C String_t* _stringLiteral212797907CC7AD095EFEBD10D643DF1F9608C8C1;
IL2CPP_EXTERN_C String_t* _stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral244BA6FE8878C6A66F7648332C07125DF3AFBC4B;
IL2CPP_EXTERN_C String_t* _stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4;
IL2CPP_EXTERN_C String_t* _stringLiteral2802A9301C19413CB7F4E27669891AE233E74AD7;
IL2CPP_EXTERN_C String_t* _stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983;
IL2CPP_EXTERN_C String_t* _stringLiteral2D33F3CC9AFA97ECECBBF5C0881C8F9C86690251;
IL2CPP_EXTERN_C String_t* _stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3;
IL2CPP_EXTERN_C String_t* _stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDCE7F577695853459152469012B0121731CD52;
IL2CPP_EXTERN_C String_t* _stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6;
IL2CPP_EXTERN_C String_t* _stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72;
IL2CPP_EXTERN_C String_t* _stringLiteral324A15BBCCD67A1997F37BF20414A7EB61126AB5;
IL2CPP_EXTERN_C String_t* _stringLiteral347BD96BC18B22D437A751E98B8B12B9FF171229;
IL2CPP_EXTERN_C String_t* _stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123;
IL2CPP_EXTERN_C String_t* _stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral393675B7B89ED13307BB22662AFC326F6FD7BBA0;
IL2CPP_EXTERN_C String_t* _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836;
IL2CPP_EXTERN_C String_t* _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA;
IL2CPP_EXTERN_C String_t* _stringLiteral3C77EE02D0B62256DB746EEC2F12CB9BC801126A;
IL2CPP_EXTERN_C String_t* _stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30;
IL2CPP_EXTERN_C String_t* _stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECCF64C0782442EC426220868830513FD924C3C;
IL2CPP_EXTERN_C String_t* _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88;
IL2CPP_EXTERN_C String_t* _stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99;
IL2CPP_EXTERN_C String_t* _stringLiteral4818B6292BB54C3BA36849A617241A4C666A6CB8;
IL2CPP_EXTERN_C String_t* _stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985;
IL2CPP_EXTERN_C String_t* _stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F;
IL2CPP_EXTERN_C String_t* _stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78;
IL2CPP_EXTERN_C String_t* _stringLiteral50ED994EAB5E4B5A327FC8D974EAB06E7CFA83A4;
IL2CPP_EXTERN_C String_t* _stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E;
IL2CPP_EXTERN_C String_t* _stringLiteral5295380188F75D696383F8BDB2147F0053791372;
IL2CPP_EXTERN_C String_t* _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318;
IL2CPP_EXTERN_C String_t* _stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31;
IL2CPP_EXTERN_C String_t* _stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786;
IL2CPP_EXTERN_C String_t* _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D;
IL2CPP_EXTERN_C String_t* _stringLiteral5CAB08554552B91BA981CD02709F3608049743F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5D1D45B6F90EF153C0073C0B7E9492B4DBF540F1;
IL2CPP_EXTERN_C String_t* _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50;
IL2CPP_EXTERN_C String_t* _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
IL2CPP_EXTERN_C String_t* _stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E;
IL2CPP_EXTERN_C String_t* _stringLiteral5F81F92407132C01FCBA0B31D7B46D0565978E58;
IL2CPP_EXTERN_C String_t* _stringLiteral60081E4C6B9BD5BBFC2D172205F8D7236FF4A669;
IL2CPP_EXTERN_C String_t* _stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D;
IL2CPP_EXTERN_C String_t* _stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886;
IL2CPP_EXTERN_C String_t* _stringLiteral6A83C8F3F967D3600B00869EB5D24C78AFA71C6B;
IL2CPP_EXTERN_C String_t* _stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668;
IL2CPP_EXTERN_C String_t* _stringLiteral6EE6BFCFA9B2342B9FF2A513D72A69E2065C4446;
IL2CPP_EXTERN_C String_t* _stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524;
IL2CPP_EXTERN_C String_t* _stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF;
IL2CPP_EXTERN_C String_t* _stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B;
IL2CPP_EXTERN_C String_t* _stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190;
IL2CPP_EXTERN_C String_t* _stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral7FCF7A87CABC373319B2F3FA01CF5A0164A66AFA;
IL2CPP_EXTERN_C String_t* _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499;
IL2CPP_EXTERN_C String_t* _stringLiteral8398C464CEF2A8E224363DAF635848402299705A;
IL2CPP_EXTERN_C String_t* _stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA;
IL2CPP_EXTERN_C String_t* _stringLiteral89228C2272C203A431928EA4D77EC3641DC74018;
IL2CPP_EXTERN_C String_t* _stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057;
IL2CPP_EXTERN_C String_t* _stringLiteral8D1E32D587015A9DB04576A49D22A6924F1B9D62;
IL2CPP_EXTERN_C String_t* _stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31;
IL2CPP_EXTERN_C String_t* _stringLiteral95E0BCC89582D0EEC7BEA5EEF50AA6E16AA82363;
IL2CPP_EXTERN_C String_t* _stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7;
IL2CPP_EXTERN_C String_t* _stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteral98086E81726E63C07D5EE51033D818164107DDF6;
IL2CPP_EXTERN_C String_t* _stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2;
IL2CPP_EXTERN_C String_t* _stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B;
IL2CPP_EXTERN_C String_t* _stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE;
IL2CPP_EXTERN_C String_t* _stringLiteralA1709E965184FB01440CCA167288AABC938DF2B5;
IL2CPP_EXTERN_C String_t* _stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7;
IL2CPP_EXTERN_C String_t* _stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralA9AF8D13B64E63A31A01386E007E5C9CF3A6CF5B;
IL2CPP_EXTERN_C String_t* _stringLiteralAC705511F599E168CB4A19DE96F050E694A04892;
IL2CPP_EXTERN_C String_t* _stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB;
IL2CPP_EXTERN_C String_t* _stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31;
IL2CPP_EXTERN_C String_t* _stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBACA539D75FA73DDDF3F50DD9184448E7FA5C58D;
IL2CPP_EXTERN_C String_t* _stringLiteralBBE682A549E4FD2504E5F2F69458189FB5C75139;
IL2CPP_EXTERN_C String_t* _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C;
IL2CPP_EXTERN_C String_t* _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
IL2CPP_EXTERN_C String_t* _stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172;
IL2CPP_EXTERN_C String_t* _stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445;
IL2CPP_EXTERN_C String_t* _stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2;
IL2CPP_EXTERN_C String_t* _stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC;
IL2CPP_EXTERN_C String_t* _stringLiteralC55A209603A8816AA928E5D683D66E9AE643A83A;
IL2CPP_EXTERN_C String_t* _stringLiteralC7D3548860AD1BC0D9141620DC4DD9E8A4809A2C;
IL2CPP_EXTERN_C String_t* _stringLiteralC8682A75717174CD9261F7BF3E200FB1F95C3C2B;
IL2CPP_EXTERN_C String_t* _stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E;
IL2CPP_EXTERN_C String_t* _stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306;
IL2CPP_EXTERN_C String_t* _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
IL2CPP_EXTERN_C String_t* _stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E;
IL2CPP_EXTERN_C String_t* _stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE;
IL2CPP_EXTERN_C String_t* _stringLiteralD30CDE84D4CFDAD1992F4DD1DBC71AE0074AAA08;
IL2CPP_EXTERN_C String_t* _stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4;
IL2CPP_EXTERN_C String_t* _stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87;
IL2CPP_EXTERN_C String_t* _stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73;
IL2CPP_EXTERN_C String_t* _stringLiteralDD5CDF6F085705A984082B0F14828C1DBE6A2C57;
IL2CPP_EXTERN_C String_t* _stringLiteralDE873DB986C802AEB50AD8FEA9D8885FC21EDE3D;
IL2CPP_EXTERN_C String_t* _stringLiteralDE92258D76E8AE90A5B2808E9FE961A24A4FA1FA;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F;
IL2CPP_EXTERN_C String_t* _stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544;
IL2CPP_EXTERN_C String_t* _stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF;
IL2CPP_EXTERN_C String_t* _stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE16AFF540287588AFBE93DE74387A9E2AF88621B;
IL2CPP_EXTERN_C String_t* _stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D;
IL2CPP_EXTERN_C String_t* _stringLiteralE71F295D9CF58DA2D871442B14557E57C3912CAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6;
IL2CPP_EXTERN_C String_t* _stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A;
IL2CPP_EXTERN_C String_t* _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
IL2CPP_EXTERN_C String_t* _stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E;
IL2CPP_EXTERN_C String_t* _stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D;
IL2CPP_EXTERN_C String_t* _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA;
IL2CPP_EXTERN_C String_t* _stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901;
IL2CPP_EXTERN_C String_t* _stringLiteralEFD09EAD139D405830AF16300A6875BA89AF9EB3;
IL2CPP_EXTERN_C String_t* _stringLiteralF0F1DAD540221F03C448A3AE9F0242B2388C05D4;
IL2CPP_EXTERN_C String_t* _stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E;
IL2CPP_EXTERN_C String_t* _stringLiteralF41760006700B346FE970834ED6436CD21A1330F;
IL2CPP_EXTERN_C String_t* _stringLiteralF428852DD02174C34C4A9A66F6A49711BF8470D5;
IL2CPP_EXTERN_C String_t* _stringLiteralF5A333AFDC77CE93EC4EC2C0AB10FDE8EE3695F6;
IL2CPP_EXTERN_C String_t* _stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033;
IL2CPP_EXTERN_C String_t* _stringLiteralF8E8E3CB7E102B63C5E2F7011280E4E41798F185;
IL2CPP_EXTERN_C String_t* _stringLiteralFC7CE1550BE8A973149B3C0EC550C5A65BDD7413;
IL2CPP_EXTERN_C String_t* _stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE;
IL2CPP_EXTERN_C String_t* _stringLiteralFCD210A96CF1970B48B92647765BF4F3670D2D23;
IL2CPP_EXTERN_C String_t* _stringLiteralFF0046B99C0F5DFE48BFA77D6703520FE5ECEB63;
IL2CPP_EXTERN_C const RuntimeMethod* AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CaseSensitiveStringDictionary_Add_m9B3BE19D3A3468F470E99F7CC4D553877A81764D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1__ctor_m87E923C2EF32F8BEE106696D60941C5CF5E9B92F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_Clear_mCED01246B19A457FAD097372DD7EFA0840D94E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProcessWaitHandle__ctor_mB6F85E300A73FD16261E29E69F1ACBF17E0F44EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringDictionary_Add_mE81F28657F0C11A7242C286D10AB4BFA34081FAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension__ctor_m02334D8CAA280B339CA41E2019CF1F02C8B2E7DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_get_CertificateAuthority_mB4ECEF43A245E97DA80C6323BE339BE2DF99FF5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_get_HasPathLengthConstraint_m8F7C371EFF99BD110663DB106BEE889955255BC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509BasicConstraintsExtension_get_PathLengthConstraint_m4D3F016E42C243887D07DD955518A818DC14BBC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.Collection`1<System.String>
struct Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Security.Cryptography.Oid>
struct List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	OidU5BU5D_t73E7D08DA46298D6D923119136C4075A492E666B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	OidU5BU5D_t73E7D08DA46298D6D923119136C4075A492E666B* ___s_emptyArray_5;
};

// Mono.Security.ASN1
struct ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F  : public RuntimeObject
{
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___elist_2;
};
struct Il2CppArrayBounds;

// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A  : public RuntimeObject
{
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8  : public RuntimeObject
{
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____raw_1;
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Configuration.ConfigurationElement
struct ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E  : public RuntimeObject
{
};

// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93  : public RuntimeObject
{
};

// System.Configuration.ConfigurationSectionGroup
struct ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863  : public RuntimeObject
{
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Diagnostics.DiagnosticsConfigurationHandler
struct DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8  : public RuntimeObject
{
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::_head
	ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* ____head_0;
	// System.ComponentModel.Component System.ComponentModel.EventHandlerList::_parent
	Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* ____parent_1;
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D  : public RuntimeObject
{
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::_buckets
	bucketU5BU5D_t59F1C7BC4EBFE874CA0B3F391EA65717E3C8D587* ____buckets_10;
	// System.Int32 System.Collections.Hashtable::_count
	int32_t ____count_11;
	// System.Int32 System.Collections.Hashtable::_occupancy
	int32_t ____occupancy_12;
	// System.Int32 System.Collections.Hashtable::_loadsize
	int32_t ____loadsize_13;
	// System.Single System.Collections.Hashtable::_loadFactor
	float ____loadFactor_14;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_version
	int32_t ____version_15;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::_isWriterInProgress
	bool ____isWriterInProgress_16;
	// System.Collections.ICollection System.Collections.Hashtable::_keys
	RuntimeObject* ____keys_17;
	// System.Collections.ICollection System.Collections.Hashtable::_values
	RuntimeObject* ____values_18;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_19;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject* ____syncRoot_20;
};

struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_StaticFields
{
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Object,System.Runtime.Serialization.SerializationInfo> System.Collections.Hashtable::s_serializationInfoTable
	ConditionalWeakTable_2_t381B9D0186C0FCC3F83C0696C28C5001468A7858* ___s_serializationInfoTable_21;
};

// System.Collections.HashtableExtensions
struct HashtableExtensions_t856DEECAB5172E908DD4944C65112B8D863DC779  : public RuntimeObject
{
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddressParser
struct IPAddressParser_t4EBAFE480B61AF2AA63D53B93829B674C8BEE392  : public RuntimeObject
{
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Marvin
struct Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242  : public RuntimeObject
{
};

struct Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_StaticFields
{
	// System.UInt64 System.Marvin::<DefaultSeed>k__BackingField
	uint64_t ___U3CDefaultSeedU3Ek__BackingField_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287  : public RuntimeObject
{
	// System.String System.Security.Cryptography.Oid::_value
	String_t* ____value_0;
	// System.String System.Security.Cryptography.Oid::_friendlyName
	String_t* ____friendlyName_1;
	// System.Security.Cryptography.OidGroup System.Security.Cryptography.Oid::_group
	int32_t ____group_2;
};

// System.Security.Cryptography.OidCollection
struct OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Security.Cryptography.Oid> System.Security.Cryptography.OidCollection::_list
	List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* ____list_0;
};

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41  : public RuntimeObject
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.OidEnumerator::_oids
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ____oids_0;
	// System.Int32 System.Security.Cryptography.OidEnumerator::_current
	int32_t ____current_1;
};

// System.Collections.Specialized.OrderedDictionary
struct OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::_objectsArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____objectsArray_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::_objectsTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____objectsTable_1;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::_initialCapacity
	int32_t ____initialCapacity_2;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::_comparer
	RuntimeObject* ____comparer_3;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::_readOnly
	bool ____readOnly_4;
	// System.Object System.Collections.Specialized.OrderedDictionary::_syncRoot
	RuntimeObject* ____syncRoot_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_6;
};

// System.Diagnostics.ProcessInfo
struct ProcessInfo_t6CEADC95A2E12CF8CD04440B2EB5879FED848BF6  : public RuntimeObject
{
};

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405  : public RuntimeObject
{
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_keyValue
	AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ____keyValue_0;
	// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::_params
	AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ____params_1;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::_oid
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ____oid_2;
};

struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_StaticFields
{
	// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::Empty
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Empty_3;
};

// System.Collections.ReadOnlyCollectionBase
struct ReadOnlyCollectionBase_tDFADA53EA832E96746EED154A156F609C844D7BD  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// System.Security.SecureString
struct SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C  : public RuntimeObject
{
	// System.Int32 System.Security.SecureString::length
	int32_t ___length_0;
	// System.Boolean System.Security.SecureString::disposed
	bool ___disposed_1;
	// System.Byte[] System.Security.SecureString::data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data_2;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.Collections.Specialized.StringDictionary
struct StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE  : public RuntimeObject
{
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___contents_0;
};

// System.ComponentModel.TypeConverter
struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C  : public RuntimeObject
{
};

struct TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C_StaticFields
{
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Xml.XmlNode
struct XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF  : public RuntimeObject
{
};

// System.ComponentModel.EventHandlerList/ListEntry
struct ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD  : public RuntimeObject
{
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList/ListEntry::_next
	ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* ____next_0;
	// System.Object System.ComponentModel.EventHandlerList/ListEntry::_key
	RuntimeObject* ____key_1;
	// System.Delegate System.ComponentModel.EventHandlerList/ListEntry::_handler
	Delegate_t* ____handler_2;
};

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6  : public RuntimeObject
{
	// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_objectReturnType
	int32_t ____objectReturnType_0;
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_arrayEnumerator
	RuntimeObject* ____arrayEnumerator_1;
};

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_isKeys
	bool ____isKeys_1;
};

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3  : public RuntimeObject
{
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.ComponentModel.DesignerSerializationVisibility>
struct Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.ValueTuple`2<System.Int32,System.Int32>
struct ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;
};

// System.ComponentModel.BaseNumberConverter
struct BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.ComponentModel.BooleanConverter
struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

struct BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9_StaticFields
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.BooleanConverter::s_values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___s_values_2;
};

// System.ComponentModel.BrowsableAttribute
struct BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.BrowsableAttribute::<Browsable>k__BackingField
	bool ___U3CBrowsableU3Ek__BackingField_3;
};

struct BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields
{
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* ___Yes_0;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* ___No_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* ___Default_2;
};

// System.Net.Configuration.BypassElement
struct BypassElement_t1626DF2ACB357F8677EA94142CFA984569ADB4DC  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Collections.Specialized.CaseSensitiveStringDictionary
struct CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F  : public StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE
{
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.ComponentModel.CollectionConverter
struct CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.ComponentModel.Component
struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* ___events_3;
};

struct Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields
{
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject* ___EventDisposed_1;
};

// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Configuration.ConfigurationSection
struct ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.ConnectionManagementElement
struct ConnectionManagementElement_t44321336DB0AC70D7B85FAB146D7F66036D51353  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.ComponentModel.DefaultEventAttribute
struct DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DefaultEventAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

struct DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_StaticFields
{
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* ___Default_1;
};

// System.ComponentModel.DefaultPropertyAttribute
struct DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DefaultPropertyAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

struct DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_StaticFields
{
	// System.ComponentModel.DefaultPropertyAttribute System.ComponentModel.DefaultPropertyAttribute::Default
	DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* ___Default_1;
};

// System.ComponentModel.DefaultValueAttribute
struct DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Object System.ComponentModel.DefaultValueAttribute::_value
	RuntimeObject* ____value_0;
};

// System.ComponentModel.DescriptionAttribute
struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DescriptionAttribute::<DescriptionValue>k__BackingField
	String_t* ___U3CDescriptionValueU3Ek__BackingField_1;
};

struct DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields
{
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* ___Default_0;
};

// System.ComponentModel.DesignerCategoryAttribute
struct DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DesignerCategoryAttribute::<Category>k__BackingField
	String_t* ___U3CCategoryU3Ek__BackingField_4;
};

struct DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields
{
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* ___Component_0;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* ___Default_1;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* ___Form_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* ___Generic_3;
};

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::<Visibility>k__BackingField
	int32_t ___U3CVisibilityU3Ek__BackingField_4;
};

struct DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields
{
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* ___Content_0;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* ___Hidden_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* ___Visible_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* ___Default_3;
};

// System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB 
{
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject* ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.DisplayNameAttribute::<DisplayNameValue>k__BackingField
	String_t* ___U3CDisplayNameValueU3Ek__BackingField_1;
};

struct DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields
{
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* ___Default_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.ComponentModel.EditorAttribute
struct EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.EditorAttribute::<EditorBaseTypeName>k__BackingField
	String_t* ___U3CEditorBaseTypeNameU3Ek__BackingField_0;
	// System.String System.ComponentModel.EditorAttribute::<EditorTypeName>k__BackingField
	String_t* ___U3CEditorTypeNameU3Ek__BackingField_1;
};

// System.ComponentModel.EditorBrowsableAttribute
struct EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::browsableState
	int32_t ___browsableState_0;
};

// System.ComponentModel.EnumConverter
struct EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::values
	StandardValuesCollection_tC5F10128EB5F9B6E4E5519E6AE47DA01384F91E3* ___values_2;
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t* ___type_3;
};

// System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute
struct ExcludeFromCodeCoverageAttribute_tD4CB13A2A9FCF2022C854E503D3B44DFF634FAAD  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.ComponentModel.ExpandableObjectConverter
struct ExpandableObjectConverter_t2D9FF3B389851F14034FBA07A57944EB27C18F63  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.Net.Configuration.HttpWebRequestElement
struct HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Net.Configuration.Ipv6Element
struct Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.NetSectionGroup
struct NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F  : public ConfigurationSectionGroup_tE7948C2D31B193F4BA8828947ED3094B952C7863
{
};

// System.ComponentModel.NotifyParentPropertyAttribute
struct NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::notifyParent
	bool ___notifyParent_3;
};

struct NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_StaticFields
{
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Yes
	NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* ___Yes_0;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::No
	NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* ___No_1;
	// System.ComponentModel.NotifyParentPropertyAttribute System.ComponentModel.NotifyParentPropertyAttribute::Default
	NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* ___Default_2;
};

// System.Net.Configuration.PerformanceCountersElement
struct PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Diagnostics.ProcessModuleCollection
struct ProcessModuleCollection_tB2EBC893262A796A0182EDF0022F0B08E30461EE  : public ReadOnlyCollectionBase_tDFADA53EA832E96746EED154A156F609C844D7BD
{
};

// System.Diagnostics.ProcessThreadCollection
struct ProcessThreadCollection_t9E9F6B3EB7E8031736898D77DD88F2BD29740971  : public ReadOnlyCollectionBase_tDFADA53EA832E96746EED154A156F609C844D7BD
{
};

// System.Net.Configuration.ProxyElement
struct ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
	// System.Type System.ComponentModel.ReferenceConverter::_type
	Type_t* ____type_3;
};

struct ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_StaticFields
{
	// System.String System.ComponentModel.ReferenceConverter::s_none
	String_t* ___s_none_2;
};

// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::<Reloadable>k__BackingField
	bool ___U3CReloadableU3Ek__BackingField_0;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::<SerializerTypeName>k__BackingField
	String_t* ___U3CSerializerTypeNameU3Ek__BackingField_1;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::<SerializerBaseTypeName>k__BackingField
	String_t* ___U3CSerializerBaseTypeNameU3Ek__BackingField_2;
};

// System.Security.Cryptography.SHA1
struct SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Net.Configuration.ServicePointManagerElement
struct ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.ComponentModel.SettingsBindableAttribute
struct SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Boolean System.ComponentModel.SettingsBindableAttribute::<Bindable>k__BackingField
	bool ___U3CBindableU3Ek__BackingField_2;
};

struct SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_StaticFields
{
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::Yes
	SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* ___Yes_0;
	// System.ComponentModel.SettingsBindableAttribute System.ComponentModel.SettingsBindableAttribute::No
	SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* ___No_1;
};

// System.Net.Configuration.SocketElement
struct SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.ComponentModel.StringConverter
struct StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.ComponentModel.TimeSpanConverter
struct TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F  : public TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C
{
};

// System.ComponentModel.TypeConverterAttribute
struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String System.ComponentModel.TypeConverterAttribute::<ConverterTypeName>k__BackingField
	String_t* ___U3CConverterTypeNameU3Ek__BackingField_1;
};

struct TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields
{
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* ___Default_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Net.Configuration.WebProxyScriptElement
struct WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Net.Configuration.WebRequestModuleElement
struct WebRequestModuleElement_t9856A4B94D713299F842F672DFD60557C38349FD  : public ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E
{
};

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5  : public AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8
{
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_2;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48__padding[32];
	};
};

// System.Net.IPAddress/ReadOnlyIPAddress
struct ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C  : public IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484
{
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.UInt16>
struct ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.ByReference`1<System.UInt32>
struct ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t56F624E1051A2E261613B6A81CA2333397F49CB3_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___04D9D643E5A26924DC98C9906714082D395DCB17CEE9674D5EBFEC15D098C2B5_0;
	// System.Int64 <PrivateImplementationDetails>::1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B
	int64_t ___1417FCAA8455DC8E3C88BF916DD5C75746A2597CC052F212A8E4394C890E012B_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70
	__StaticArrayInitTypeSizeU3D32_t543FA0727A92B3B7D8A0EB86D73AB8F35AB0CF48 ___2EF83B43314F8CD03190EEE30ECCF048DA37791237F27C62A579F23EACE9FD70_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C
	__StaticArrayInitTypeSizeU3D128_tCC4BD0E4F5977323EDA6FFF6CD1484F1848F5B0E ___B849624EC20707184A433E21DAAC963906D4B261A19BD8F139F0E269E59E308C_3;
};

// System.ComponentModel.ArrayConverter
struct ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C  : public CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0
{
};

// System.Net.Configuration.BypassElementCollection
struct BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.ComponentModel.ComponentConverter
struct ComponentConverter_tFE75D55373FA41F9E4EC733FEDC24C8166A3D7CE  : public ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2
{
};

// System.Net.Configuration.ConnectionManagementElementCollection
struct ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.ConnectionManagementSection
struct ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.ComponentModel.DecimalConverter
struct DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Net.Configuration.DefaultProxySection
struct DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.ComponentModel.DoubleConverter
struct DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.Runtime.InteropServices.HandleRef
struct HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F 
{
	// System.Object System.Runtime.InteropServices.HandleRef::_wrapper
	RuntimeObject* ____wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::_handle
	intptr_t ____handle_1;
};

// System.ComponentModel.Int16Converter
struct Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int32Converter
struct Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.ComponentModel.Int64Converter
struct Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Diagnostics.MonitoringDescriptionAttribute
struct MonitoringDescriptionAttribute_t93A41F21391E9A06411FF8E8EDBD2C0813A1026E  : public DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86
{
};

// System.Diagnostics.Process
struct Process_tF74794C64BCE464912BF158980B347CE66AF203B  : public Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083
{
	// System.Boolean System.Diagnostics.Process::haveProcessId
	bool ___haveProcessId_4;
	// System.Int32 System.Diagnostics.Process::processId
	int32_t ___processId_5;
	// System.Boolean System.Diagnostics.Process::haveProcessHandle
	bool ___haveProcessHandle_6;
	// Microsoft.Win32.SafeHandles.SafeProcessHandle System.Diagnostics.Process::m_processHandle
	SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB* ___m_processHandle_7;
	// System.Boolean System.Diagnostics.Process::isRemoteMachine
	bool ___isRemoteMachine_8;
	// System.String System.Diagnostics.Process::machineName
	String_t* ___machineName_9;
	// System.Int32 System.Diagnostics.Process::m_processAccess
	int32_t ___m_processAccess_10;
	// System.Diagnostics.ProcessThreadCollection System.Diagnostics.Process::threads
	ProcessThreadCollection_t9E9F6B3EB7E8031736898D77DD88F2BD29740971* ___threads_11;
	// System.Diagnostics.ProcessModuleCollection System.Diagnostics.Process::modules
	ProcessModuleCollection_tB2EBC893262A796A0182EDF0022F0B08E30461EE* ___modules_12;
	// System.Boolean System.Diagnostics.Process::haveWorkingSetLimits
	bool ___haveWorkingSetLimits_13;
	// System.Boolean System.Diagnostics.Process::havePriorityClass
	bool ___havePriorityClass_14;
	// System.Diagnostics.ProcessStartInfo System.Diagnostics.Process::startInfo
	ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* ___startInfo_15;
	// System.Boolean System.Diagnostics.Process::watchForExit
	bool ___watchForExit_16;
	// System.Boolean System.Diagnostics.Process::watchingForExit
	bool ___watchingForExit_17;
	// System.EventHandler System.Diagnostics.Process::onExited
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___onExited_18;
	// System.Boolean System.Diagnostics.Process::exited
	bool ___exited_19;
	// System.Int32 System.Diagnostics.Process::exitCode
	int32_t ___exitCode_20;
	// System.Boolean System.Diagnostics.Process::signaled
	bool ___signaled_21;
	// System.Boolean System.Diagnostics.Process::haveExitTime
	bool ___haveExitTime_22;
	// System.Boolean System.Diagnostics.Process::raisedOnExited
	bool ___raisedOnExited_23;
	// System.Threading.RegisteredWaitHandle System.Diagnostics.Process::registeredWaitHandle
	RegisteredWaitHandle_t5AEE89AB4B4A54EAC5B66A72A0D7D2EF8C82EC86* ___registeredWaitHandle_24;
	// System.Threading.WaitHandle System.Diagnostics.Process::waitHandle
	WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* ___waitHandle_25;
	// System.ComponentModel.ISynchronizeInvoke System.Diagnostics.Process::synchronizingObject
	RuntimeObject* ___synchronizingObject_26;
	// System.IO.StreamReader System.Diagnostics.Process::standardOutput
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___standardOutput_27;
	// System.IO.StreamWriter System.Diagnostics.Process::standardInput
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___standardInput_28;
	// System.IO.StreamReader System.Diagnostics.Process::standardError
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___standardError_29;
	// System.Boolean System.Diagnostics.Process::disposed
	bool ___disposed_30;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::outputStreamReadMode
	int32_t ___outputStreamReadMode_31;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::errorStreamReadMode
	int32_t ___errorStreamReadMode_32;
	// System.Diagnostics.Process/StreamReadMode System.Diagnostics.Process::inputStreamReadMode
	int32_t ___inputStreamReadMode_33;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::output
	AsyncStreamReader_tAC4F4C9FDA0C1A8D21F2B1C838C08C0E83AE871B* ___output_34;
	// System.Diagnostics.AsyncStreamReader System.Diagnostics.Process::error
	AsyncStreamReader_tAC4F4C9FDA0C1A8D21F2B1C838C08C0E83AE871B* ___error_35;
	// System.String System.Diagnostics.Process::process_name
	String_t* ___process_name_36;
};

// System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C  : public RuntimeObject
{
	// System.String System.Diagnostics.ProcessStartInfo::fileName
	String_t* ___fileName_0;
	// System.String System.Diagnostics.ProcessStartInfo::arguments
	String_t* ___arguments_1;
	// System.String System.Diagnostics.ProcessStartInfo::directory
	String_t* ___directory_2;
	// System.String System.Diagnostics.ProcessStartInfo::verb
	String_t* ___verb_3;
	// System.Diagnostics.ProcessWindowStyle System.Diagnostics.ProcessStartInfo::windowStyle
	int32_t ___windowStyle_4;
	// System.Boolean System.Diagnostics.ProcessStartInfo::errorDialog
	bool ___errorDialog_5;
	// System.IntPtr System.Diagnostics.ProcessStartInfo::errorDialogParentHandle
	intptr_t ___errorDialogParentHandle_6;
	// System.Boolean System.Diagnostics.ProcessStartInfo::useShellExecute
	bool ___useShellExecute_7;
	// System.String System.Diagnostics.ProcessStartInfo::userName
	String_t* ___userName_8;
	// System.String System.Diagnostics.ProcessStartInfo::domain
	String_t* ___domain_9;
	// System.Security.SecureString System.Diagnostics.ProcessStartInfo::password
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___password_10;
	// System.String System.Diagnostics.ProcessStartInfo::passwordInClearText
	String_t* ___passwordInClearText_11;
	// System.Boolean System.Diagnostics.ProcessStartInfo::loadUserProfile
	bool ___loadUserProfile_12;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardInput
	bool ___redirectStandardInput_13;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardOutput
	bool ___redirectStandardOutput_14;
	// System.Boolean System.Diagnostics.ProcessStartInfo::redirectStandardError
	bool ___redirectStandardError_15;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::standardOutputEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardOutputEncoding_16;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::standardErrorEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardErrorEncoding_17;
	// System.Boolean System.Diagnostics.ProcessStartInfo::createNoWindow
	bool ___createNoWindow_18;
	// System.WeakReference System.Diagnostics.ProcessStartInfo::weakParentProcess
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___weakParentProcess_19;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.ProcessStartInfo::environmentVariables
	StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ___environmentVariables_20;
	// System.Collections.ObjectModel.Collection`1<System.String> System.Diagnostics.ProcessStartInfo::_argumentList
	Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ____argumentList_22;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> System.Diagnostics.ProcessStartInfo::environment
	RuntimeObject* ___environment_23;
	// System.Text.Encoding System.Diagnostics.ProcessStartInfo::<StandardInputEncoding>k__BackingField
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CStandardInputEncodingU3Ek__BackingField_24;
};

struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_StaticFields
{
	// System.String[] System.Diagnostics.ProcessStartInfo::empty
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___empty_21;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_pinvoke
{
	char* ___fileName_0;
	char* ___arguments_1;
	char* ___directory_2;
	char* ___verb_3;
	int32_t ___windowStyle_4;
	int32_t ___errorDialog_5;
	intptr_t ___errorDialogParentHandle_6;
	int32_t ___useShellExecute_7;
	char* ___userName_8;
	char* ___domain_9;
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___password_10;
	char* ___passwordInClearText_11;
	int32_t ___loadUserProfile_12;
	int32_t ___redirectStandardInput_13;
	int32_t ___redirectStandardOutput_14;
	int32_t ___redirectStandardError_15;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardOutputEncoding_16;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardErrorEncoding_17;
	int32_t ___createNoWindow_18;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___weakParentProcess_19;
	StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ___environmentVariables_20;
	Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ____argumentList_22;
	RuntimeObject* ___environment_23;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CStandardInputEncodingU3Ek__BackingField_24;
};
// Native definition for COM marshalling of System.Diagnostics.ProcessStartInfo
struct ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_com
{
	Il2CppChar* ___fileName_0;
	Il2CppChar* ___arguments_1;
	Il2CppChar* ___directory_2;
	Il2CppChar* ___verb_3;
	int32_t ___windowStyle_4;
	int32_t ___errorDialog_5;
	intptr_t ___errorDialogParentHandle_6;
	int32_t ___useShellExecute_7;
	Il2CppChar* ___userName_8;
	Il2CppChar* ___domain_9;
	SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ___password_10;
	Il2CppChar* ___passwordInClearText_11;
	int32_t ___loadUserProfile_12;
	int32_t ___redirectStandardInput_13;
	int32_t ___redirectStandardOutput_14;
	int32_t ___redirectStandardError_15;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardOutputEncoding_16;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___standardErrorEncoding_17;
	int32_t ___createNoWindow_18;
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___weakParentProcess_19;
	StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ___environmentVariables_20;
	Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ____argumentList_22;
	RuntimeObject* ___environment_23;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___U3CStandardInputEncodingU3Ek__BackingField_24;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Runtime.InteropServices.SafeHandle
struct SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.IntPtr System.Runtime.InteropServices.SafeHandle::handle
	intptr_t ___handle_0;
	// System.Int32 System.Runtime.InteropServices.SafeHandle::_state
	int32_t ____state_1;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_ownsHandle
	bool ____ownsHandle_2;
	// System.Boolean System.Runtime.InteropServices.SafeHandle::_fullyInitialized
	bool ____fullyInitialized_3;
};

// System.Net.Configuration.SettingsSection
struct SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.ComponentModel.SingleConverter
struct SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1  : public BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706
{
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Net.Configuration.WebRequestModuleElementCollection
struct WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463  : public ConfigurationElementCollection_t56E8398661A85A59616301BADF13026FB1492606
{
};

// System.Net.Configuration.WebRequestModulesSection
struct WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00  : public ConfigurationSection_t0BC609F0151B160A4FAB8226679B62AF22539C3E
{
};

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_certificateAuthority
	bool ____certificateAuthority_5;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_hasPathLengthConstraint
	bool ____hasPathLengthConstraint_6;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_pathLengthConstraint
	int32_t ____pathLengthConstraint_7;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::_status
	int32_t ____status_8;
};

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ____enhKeyUsage_3;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_4;
};

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_7;
};

// System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
struct X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_subjectKeyIdentifier
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____subjectKeyIdentifier_5;
	// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_ski
	String_t* ____ski_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::_status
	int32_t ____status_7;
};

// System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0  : public RuntimeObject
{
	// System.IntPtr System.Array/RawData::Bounds
	intptr_t ___Bounds_0;
	// System.IntPtr System.Array/RawData::Count
	intptr_t ___Count_1;
	// System.Byte System.Array/RawData::Data
	uint8_t ___Data_2;
};
// Native definition for P/Invoke marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_pinvoke
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};
// Native definition for COM marshalling of System.Array/RawData
struct RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0_marshaled_com
{
	intptr_t ___Bounds_0;
	intptr_t ___Count_1;
	uint8_t ___Data_2;
};

// System.Diagnostics.Process/ProcInfo
struct ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2 
{
	// System.IntPtr System.Diagnostics.Process/ProcInfo::process_handle
	intptr_t ___process_handle_0;
	// System.Int32 System.Diagnostics.Process/ProcInfo::pid
	int32_t ___pid_1;
	// System.String[] System.Diagnostics.Process/ProcInfo::envVariables
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___envVariables_2;
	// System.String System.Diagnostics.Process/ProcInfo::UserName
	String_t* ___UserName_3;
	// System.String System.Diagnostics.Process/ProcInfo::Domain
	String_t* ___Domain_4;
	// System.IntPtr System.Diagnostics.Process/ProcInfo::Password
	intptr_t ___Password_5;
	// System.Boolean System.Diagnostics.Process/ProcInfo::LoadUserProfile
	bool ___LoadUserProfile_6;
};
// Native definition for P/Invoke marshalling of System.Diagnostics.Process/ProcInfo
struct ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshaled_pinvoke
{
	intptr_t ___process_handle_0;
	int32_t ___pid_1;
	char** ___envVariables_2;
	char* ___UserName_3;
	char* ___Domain_4;
	intptr_t ___Password_5;
	int32_t ___LoadUserProfile_6;
};
// Native definition for COM marshalling of System.Diagnostics.Process/ProcInfo
struct ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshaled_com
{
	intptr_t ___process_handle_0;
	int32_t ___pid_1;
	Il2CppChar** ___envVariables_2;
	Il2CppChar* ___UserName_3;
	Il2CppChar* ___Domain_4;
	intptr_t ___Password_5;
	int32_t ___LoadUserProfile_6;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.UInt16>
struct ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.ReadOnlySpan`1<System.UInt32>
struct ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Span`1<System.Byte>
struct Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 
{
	// System.ByReference`1<T> System.Span`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.Span`1::_length
	int32_t ____length_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Diagnostics.ProcessWaitHandle
struct ProcessWaitHandle_t8460169FB67A55A5531F08CB2FDC37090B13A1C2  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
struct SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629  : public SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.Security.Cryptography.CryptographicException
struct CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82  : public MulticastDelegate_t
{
};

// System.Runtime.InteropServices.ExternalException
struct ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Microsoft.Win32.SafeHandles.SafeProcessHandle
struct SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

struct SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB_StaticFields
{
	// Microsoft.Win32.SafeHandles.SafeProcessHandle Microsoft.Win32.SafeHandles.SafeProcessHandle::InvalidHandle
	SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB* ___InvalidHandle_6;
};

// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449  : public SafeHandleZeroOrMinusOneIsInvalid_tC152552D137451170B3B1A304227B0ECADB65629
{
};

// System.Runtime.Serialization.SerializationException
struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

struct SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_StaticFields
{
	// System.String System.Runtime.Serialization.SerializationException::s_nullMessage
	String_t* ___s_nullMessage_18;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.ObjectDisposedException
struct ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
	// System.String System.ObjectDisposedException::_objectName
	String_t* ____objectName_18;
};

// System.PlatformNotSupportedException
struct PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A  : public NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A
{
};

// System.ComponentModel.Win32Exception
struct Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9  : public ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C
{
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_18;
};

// Unity.ThrowStub
struct ThrowStub_tA028CA7941154A8E0F17F9AD0563D538617A7A47  : public ObjectDisposedException_tC5FB29E8E980E2010A2F6A5B9B791089419F89EB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collection_1__ctor_m82A329DF46E01C30AB3FF7AFA314E3CE05945220_gshared (Collection_1_t3899E6252BC3D003B1AB1D6F5D7AD93EB1DCEEC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt16>(System.ReadOnlySpan`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___span0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method) ;
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Runtime.InteropServices.MemoryMarshal::CreateReadOnlySpan<System.UInt32>(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared_inline (uint32_t* ___reference0, int32_t ___length1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt32>(System.ReadOnlySpan`1<T>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___span0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.UInt16>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_gshared (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.UInt16>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt32>::.ctor(T&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.UInt32>::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.Collection`1<System.String>::.ctor()
inline void Collection_1__ctor_m87E923C2EF32F8BEE106696D60941C5CF5E9B92F (Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* __this, const RuntimeMethod* method)
{
	((  void (*) (Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575*, const RuntimeMethod*))Collection_1__ctor_m82A329DF46E01C30AB3FF7AFA314E3CE05945220_gshared)(__this, method);
}
// System.Void System.Collections.Specialized.CaseSensitiveStringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseSensitiveStringDictionary__ctor_m2AF7A1302E4A8EE55E5E98BA342FDC3EF89A3F5E (CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F* __this, const RuntimeMethod* method) ;
// System.Collections.IDictionary System.Environment::GetEnvironmentVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Environment_GetEnvironmentVariables_m3C5400B01048535A472E52B6F2B25FA1F4C5B33E (const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitHandle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitHandle__ctor_m26EE883A7A858B7B47A72B2AF42BF96EE09EA773 (WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* __this, const RuntimeMethod* method) ;
// System.IntPtr Microsoft.Win32.NativeMethods::GetCurrentProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t NativeMethods_GetCurrentProcess_m0DDA8AB28E27F6B04D1CD3B60AF94D066F3953C8 (const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F* __this, RuntimeObject* ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method) ;
// System.Boolean Microsoft.Win32.NativeMethods::DuplicateHandle(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.SafeHandle,System.Runtime.InteropServices.HandleRef,Microsoft.Win32.SafeHandles.SafeWaitHandle&,System.Int32,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeMethods_DuplicateHandle_m34BEE27509460FD294C19D18F4A44CB7683BB750 (HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___hSourceProcessHandle0, SafeHandle_tC1A4DA80DA89B867CC011B707A07275230321BF7* ___hSourceHandle1, HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F ___hTargetProcess2, SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449** ___targetHandle3, int32_t ___dwDesiredAccess4, bool ___bInheritHandle5, int32_t ___dwOptions6, const RuntimeMethod* method) ;
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5 (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitHandle::set_SafeWaitHandle(Microsoft.Win32.SafeHandles.SafeWaitHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitHandle_set_SafeWaitHandle_m947E6379936E00386AE0774B58E758BEFD496B91 (WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8* __this, SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___value0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___description0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DescriptionAttribute::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_Description_m153F27F0911FC88F9DD8856BCA449AF5BE46F100 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedTicks_m3F4040FBF8C7CCDC69E0E04824019DEBB25AA410 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003 (int64_t ___value0, const RuntimeMethod* method) ;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7 (const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.String Internal.Cryptography.OidLookup::ToOid(System.String,System.Security.Cryptography.OidGroup,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* OidLookup_ToOid_m084AE2948BA1D784EAC148B97B6D5EF94F0D58B0 (String_t* ___friendlyName0, int32_t ___oidGroup1, bool ___fallBackToAllGroups2, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Security.Cryptography.Oid>::.ctor()
inline void List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8 (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Security.Cryptography.Oid>::get_Count()
inline int32_t List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_inline (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Security.Cryptography.Oid>::Add(T)
inline void List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_inline (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<System.Security.Cryptography.Oid>::get_Item(System.Int32)
inline Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* (*) (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidEnumerator__ctor_m2168FEE96614FB7460C84762ED3728A5413F42E6 (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___oids0, const RuntimeMethod* method) ;
// System.Security.Cryptography.OidEnumerator System.Security.Cryptography.OidCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Rank()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___oid0, const RuntimeMethod* method) ;
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042 (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.Oid::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_BasicConstraintsExtension_m74BFC192666755E9D8A088880789AB6EA84F1FCC (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_EnhancedKeyUsageExtension_m3C95D5D2D8F81BEA5E33B264767C8A5E5575D7CA (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_KeyUsageExtension_m9A9C72CF2A831A1849A55336FC8D6DEE097E28D3 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m3CEDDCED26AD5621407DAA401F385269348BB789 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_SubjectAltName_mDE2F39E1A43C1E13D89319F221517EE54B1A6A14 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_NetscapeCertType_m55E43EBDA7882304E8FE5F3DC134A2719F519373 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_Default_m883444CBD5238793D1B94A6DE273FF2F9C47EA70 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Byte::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310 (uint8_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m76C88E8D4C7CCEC7B2C3D56CC58A56352F7729E4 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedBasicConstraints0, bool ___critical1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_mBDA55EB3C6594D4F6A06102B4EAF633F86C3E092 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedEnhancedKeyUsages0, bool ___critical1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m1DE9CD768712A07E5803496501CCFDA81CFB2689 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedKeyUsage0, bool ___critical1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m421293DCB67F3A918098962166B8166FD9657D08 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedSubjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Byte Mono.Security.ASN1::get_Tag()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.Byte[] Mono.Security.ASN1::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CryptoConvert_ToHex_m1A0AD4D32CEEC47D3C60CB2E4D05A935C62F261A (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___input0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.Int32 Mono.Security.ASN1::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F (StringBuilder_t* __this, String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, String_t* ___friendlyName1, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509BasicConstraintsExtension_Encode_mD7FA31A70B025F67062C3844E4FEB09B14A4DE2B (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600 (String_t* ___msg0, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ASN1Convert_ToInt32_m956785EB4A235575C21677C16D2F6CBE54787032 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, uint8_t ___tag0, const RuntimeMethod* method) ;
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, uint8_t ___tag0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data1, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ASN1Convert_FromInt32_mACAC096211E525F124BE0D50D90524ADCB6EA198 (int32_t ___value0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.OidCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) ;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8 (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* ___asn10, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___oid0, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___oid0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, int32_t ___flags0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_FromHex_m0C965FECB6AC9330589DBDC182E7EA34EFE4195D (String_t* ___hex0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___key0, int32_t ___algorithm1, bool ___critical2, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.CryptoConfig::EncodeOID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* CryptoConfig_EncodeOID_mFC779B3B35D074F2804F36F36D9DB4A8E2070CDD (String_t* ___str0, const RuntimeMethod* method) ;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) ;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_mFBC6B2009778633420F9F4FF38D7E641FBF63EFA (Il2CppChar ___c10, Il2CppChar ___c21, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::set_PrivateAddress(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateAddress_m73BD8A117538CBDB80F8FF47D31609FA4855D74E (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Net.IPAddress::ThrowAddressNullException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034 (const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline)(__this, ___array0, method);
}
// System.Void System.Net.IPAddress::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___address0, int64_t ___scopeid1, const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.Byte>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline)(__this, method);
}
// System.Void System.Net.IPAddress::set_PrivateScopeId(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateScopeId_m2BA43F20C3B975BDAC6E330C09E09BFD34594A42 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::get_IsIPv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.UInt32 System.Net.IPAddress::get_PrivateScopeId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String System.Net.IPAddressParser::IPv6AddressToString(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv6AddressToString_m7C25DEA2FB9E3F863777653CB9C314BBEDF911A6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, uint32_t ___scopeId1, const RuntimeMethod* method) ;
// System.UInt32 System.Net.IPAddress::get_PrivateAddress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.String System.Net.IPAddressParser::IPv4AddressToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv4AddressToString_m3D56686708BDA87E76737D94441BF1AE486922D2 (uint32_t ___address0, const RuntimeMethod* method) ;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::get_IsIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) ;
// System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, RuntimeObject* ___comparandObj0, bool ___compareScopeId1, const RuntimeMethod* method) ;
// System.Void System.Span`1<System.Byte>::.ctor(System.Void*,System.Int32)
inline void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, void*, int32_t, const RuntimeMethod*))Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline)(__this, ___pointer0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[])
inline void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline)(__this, ___array0, method);
}
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt16>(System.ReadOnlySpan`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F, const RuntimeMethod*))MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared_inline)(___span0, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::CopyTo(System.Span`1<T>)
inline void ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_gshared)(__this, ___destination0, method);
}
// System.Span`1<T> System.Span`1<System.Byte>::Slice(System.Int32)
inline Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method)
{
	return ((  Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, int32_t, const RuntimeMethod*))Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline)(__this, ___start0, method);
}
// System.Boolean System.BitConverter::TryWriteBytes(System.Span`1<System.Byte>,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_TryWriteBytes_mC08570066B061A5EEBC9E54FFE8B4D10EDB3EC9B (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___destination0, uint32_t ___value1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Span`1<System.Byte>::op_Implicit(System.Span`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84 (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305, const RuntimeMethod*))Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_gshared)(___span0, method);
}
// System.UInt64 System.Marvin::get_DefaultSeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline (const RuntimeMethod* method) ;
// System.Int32 System.Marvin::ComputeHash32(System.ReadOnlySpan`1<System.Byte>,System.UInt64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, uint64_t ___seed1, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.Runtime.InteropServices.MemoryMarshal::CreateReadOnlySpan<System.UInt32>(T&,System.Int32)
inline ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_inline (uint32_t* ___reference0, int32_t ___length1, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 (*) (uint32_t*, int32_t, const RuntimeMethod*))MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared_inline)(___reference0, ___length1, method);
}
// System.ReadOnlySpan`1<System.Byte> System.Runtime.InteropServices.MemoryMarshal::AsBytes<System.UInt32>(System.ReadOnlySpan`1<T>)
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___span0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4, const RuntimeMethod*))MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared_inline)(___span0, method);
}
// System.Void System.Net.IPAddress/ReadOnlyIPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5 (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* __this, int64_t ___newAddress0, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, int64_t ___scopeid1, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, int64_t ___newAddress0, const RuntimeMethod* method) ;
// System.Int32 System.Net.IPAddressParser::IPv4AddressToStringHelper(System.UInt32,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91 (uint32_t ___address0, Il2CppChar* ___addressString1, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char*,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2 (String_t* __this, Il2CppChar* ___value0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448 (StringBuilder_t* __this, Il2CppChar* ___value0, int32_t ___valueCount1, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::FormatIPv4AddressNumber(System.Int32,System.Char*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F (int32_t ___number0, Il2CppChar* ___addressString1, int32_t* ___offset2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Net.IPAddressParser::IPv6AddressToStringHelper(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* IPAddressParser_IPv6AddressToStringHelper_m405EE1B288D87500878DD96ADAEE31B106CCF930 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, uint32_t ___scopeId1, const RuntimeMethod* method) ;
// System.String System.Text.StringBuilderCache::GetStringAndRelease(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0 (StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilderCache::Acquire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892 (int32_t ___capacity0, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.UInt16>::op_Implicit(T[])
inline ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F (*) (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_gshared)(___array0, method);
}
// System.Boolean System.IPv6AddressHelper::ShouldHaveIpv4Embedded(System.ReadOnlySpan`1<System.UInt16>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPv6AddressHelper_ShouldHaveIpv4Embedded_m08BEFD0452A0145779E70931B00F2D6EA15A1E70 (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___numbers0, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::AppendSections(System.UInt16[],System.Int32,System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, int32_t ___fromInclusive1, int32_t ___toExclusive2, StringBuilder_t* ___buffer3, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.UInt32 System.Net.IPAddressParser::ExtractIPv4Address(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddressParser_ExtractIPv4Address_mB79D4899358C69C1FC7C44C81A26BBD976FC2CB6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::IPv4AddressToString(System.UInt32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_IPv4AddressToString_m4113E0673C882A7CB1313639E2836FB24B9BC6A0 (uint32_t ___address0, StringBuilder_t* ___destination1, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3C5F10B877B802CA99FA61EC5360B30631270062 (StringBuilder_t* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Math::DivRem(System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_DivRem_m531807E96CEE227EF54C8C16753B3F05A0F8BCB5 (int32_t ___a0, int32_t ___b1, int32_t* ___result2, const RuntimeMethod* method) ;
// System.Void System.ReadOnlySpan`1<System.UInt16>::.ctor(T[],System.Int32,System.Int32)
inline void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*, int32_t, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared_inline)(__this, ___array0, ___start1, ___length2, method);
}
// System.ValueTuple`2<System.Int32,System.Int32> System.IPv6AddressHelper::FindCompressionRange(System.ReadOnlySpan`1<System.UInt16>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D IPv6AddressHelper_FindCompressionRange_m5BA0C004FA7BE7CB3C520AB47C4D6B6FA6C13C56 (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___numbers0, const RuntimeMethod* method) ;
// System.Void System.Net.IPAddressParser::AppendHex(System.UInt16,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2 (uint16_t ___value0, StringBuilder_t* ___buffer1, const RuntimeMethod* method) ;
// System.UInt16 System.Net.IPAddressParser::Reverse(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E (uint16_t ___number0, const RuntimeMethod* method) ;
// System.Int32 System.Attribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.BrowsableAttribute::get_Browsable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3 (bool* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.BrowsableAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035 (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, bool ___browsable0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DescriptionAttribute::set_DescriptionValue(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DescriptionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DesignerCategoryAttribute::get_Category()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583 (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, String_t* ___category0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__ctor_mC6EAF0212217A1CEE757459ADDB8D48D3B61A4EB (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) ;
// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::get_Visibility()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E_inline (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.ComponentModel.DesignerSerializationVisibility>::.ctor(T)
inline void Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.ComponentModel.DesignerSerializationVisibility>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_inline (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline)(__this, method);
}
// System.Boolean System.Nullable`1<System.ComponentModel.DesignerSerializationVisibility>::get_HasValue()
inline bool Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_inline (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.ctor(System.ComponentModel.DesignerSerializationVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1 (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, int32_t ___visibility0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___displayName0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::set_DisplayNameValue(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DisplayNameAttribute::get_DisplayNameValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_mE16A1FD5C8425C7F00EC5728A1227AF6FBEFB968 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.Component::get_CanRaiseEventsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_get_CanRaiseEventsInternal_mAF68FD325FA909AEA171953DF83CB1051A9EA3CC (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) ;
// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::Find(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* EventHandlerList_Find_m5E0CAB161102D1551CF2E636C8BC7B71C959A5C8 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DefaultEventAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3_inline (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DefaultEventAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultEventAttribute__ctor_m7FE746F300D84188A24F4CF38A330EA255E5EE46 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.DefaultPropertyAttribute::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890_inline (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.DefaultPropertyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPropertyAttribute__ctor_m43FD7A91A431F72713FFA7829DE9BD24A321FD3A (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.String System.String::ToUpper(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1 (String_t* __this, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.EditorAttribute::get_EditorTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EditorAttribute_get_EditorTypeName_m587C6D66C4567BC349AC9E2C65FE5E021ED2EB09_inline (EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* __this, const RuntimeMethod* method) ;
// System.String System.ComponentModel.EditorAttribute::get_EditorBaseTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EditorAttribute_get_EditorBaseTypeName_m1CF77F3AA9AB5AE9CD3585FE86B24E1DD21B1EB4_inline (EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* __this, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.SettingsBindableAttribute::get_Bindable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SettingsBindableAttribute_get_Bindable_m448BA41F157DF20B461625E635BAA0DD861668F3_inline (SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.SettingsBindableAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBindableAttribute__ctor_mC0F9613A258449016DF2A53220343DB20A388A91 (SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* __this, bool ___bindable0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.EventHandler::Invoke(System.Object,System.EventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void System.MarshalByRefObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshalByRefObject__ctor_mCBAD191F9BB35587528256781970FDFEFCDBE538 (MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.ReferenceConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceConverter__ctor_mECD358A5C07B37EFD8659FDEF4C067A16E51171E (ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379 (const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, const RuntimeMethod* method) ;
// System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Win32Exception_GetErrorMessage_m4DF2B191F4BBBF3B7AC82CE276E3E62F0A9159CC (int32_t ___error0, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_m289660079DD06ADACDAABE3BC8948AF7C73A8602 (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.ExternalException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExternalException__ctor_m3B89FDD35A0B6E96CE69B2FAD48FB832402167AC (ExternalException_t419875A3CD3C551692EDBBC99E4927E69F2E1F4C* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9 (Exception_t* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) ;
// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::get_NotifyParent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NotifyParentPropertyAttribute_get_NotifyParent_m9CE85A9E830D177C945D2E79C8BB15F1E4354A80_inline (NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* __this, const RuntimeMethod* method) ;
// System.Void System.ComponentModel.NotifyParentPropertyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyParentPropertyAttribute__ctor_m921D2426472D2601F59590590DAE1585D8768FD5 (NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* __this, bool ___notifyParent0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) ;
// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::get_objectsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::.ctor(System.Collections.ArrayList,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64 (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___array0, bool ___isKeys1, const RuntimeMethod* method) ;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0 (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, int32_t ___capacity0, RuntimeObject* ___equalityComparer1, const RuntimeMethod* method) ;
// System.Object System.Threading.Interlocked::CompareExchange(System.Object&,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71 (RuntimeObject** ___location10, RuntimeObject* ___value1, RuntimeObject* ___comparand2, const RuntimeMethod* method) ;
// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::get_objectsTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Specialized.OrderedDictionary::IndexOfKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::.ctor(System.Collections.ArrayList,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___array0, int32_t ___objectReturnType1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, Type_t* ___type2, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Specialized.OrderedDictionary::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Runtime.Serialization.SerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0 (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Collections.DictionaryEntry System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void System.Collections.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* __this, const RuntimeMethod* method) ;
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2 (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Specialized.StringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringDictionary__ctor_mF13D065DE0B8C21DBAB7873436D7D7C879373A7C (StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* __this, const RuntimeMethod* method) ;
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1 (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* __this, const RuntimeMethod* method) ;
// T& System.Runtime.InteropServices.MemoryMarshal::GetReference<System.Byte>(System.ReadOnlySpan`1<T>)
inline uint8_t* MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90 (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___span0, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D, const RuntimeMethod*))MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_gshared)(___span0, method);
}
// System.Int32 System.Marvin::ComputeHash32(System.Byte&,System.Int32,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Marvin_ComputeHash32_mAB058ED57AEEE83EF8016C0D7C3A5CF96825C08D (uint8_t* ___data0, int32_t ___count1, uint64_t ___seed2, const RuntimeMethod* method) ;
// System.Byte& System.Array::GetRawSzArrayData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowInvalidTypeWithPointersNotSupported(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF (Type_t* ___targetType0, const RuntimeMethod* method) ;
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56 (const RuntimeMethod* method) ;
// System.Int32 System.ReadOnlySpan`1<System.UInt16>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline)(__this, method);
}
// System.Void System.ReadOnlySpan`1<System.Byte>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D*, uint8_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.Span`1<System.Byte>::.ctor(T&,System.Int32)
inline void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305*, uint8_t*, int32_t, const RuntimeMethod*))Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Void System.ReadOnlySpan`1<System.UInt32>::.ctor(T&,System.Int32)
inline void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, uint32_t*, int32_t, const RuntimeMethod*))ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline)(__this, ___ptr0, ___length1, method);
}
// System.Int32 System.ReadOnlySpan`1<System.UInt32>::get_Length()
inline int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4*, const RuntimeMethod*))ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Diagnostics.Process/ProcInfo
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke(const ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2& unmarshaled, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshaled_pinvoke& marshaled)
{
	Exception_t* ___envVariables_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'envVariables' of type 'ProcInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___envVariables_2Exception, NULL);
}
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_back(const ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshaled_pinvoke& marshaled, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2& unmarshaled)
{
	Exception_t* ___envVariables_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'envVariables' of type 'ProcInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___envVariables_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Diagnostics.Process/ProcInfo
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_pinvoke_cleanup(ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Diagnostics.Process/ProcInfo
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_com(const ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2& unmarshaled, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshaled_com& marshaled)
{
	Exception_t* ___envVariables_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'envVariables' of type 'ProcInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___envVariables_2Exception, NULL);
}
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_com_back(const ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshaled_com& marshaled, ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2& unmarshaled)
{
	Exception_t* ___envVariables_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'envVariables' of type 'ProcInfo'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___envVariables_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Diagnostics.Process/ProcInfo
IL2CPP_EXTERN_C void ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshal_com_cleanup(ProcInfo_t79019AEB58EDD7089B790325C2EBE830E1F458D2_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Diagnostics.ProcessStartInfo
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke(const ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C& unmarshaled, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_pinvoke& marshaled)
{
	Exception_t* ___password_10Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'password' of type 'ProcessStartInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___password_10Exception, NULL);
}
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_back(const ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_pinvoke& marshaled, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C& unmarshaled)
{
	Exception_t* ___password_10Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'password' of type 'ProcessStartInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___password_10Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Diagnostics.ProcessStartInfo
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_pinvoke_cleanup(ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Diagnostics.ProcessStartInfo
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_com(const ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C& unmarshaled, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_com& marshaled)
{
	Exception_t* ___password_10Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'password' of type 'ProcessStartInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___password_10Exception, NULL);
}
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_com_back(const ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_com& marshaled, ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C& unmarshaled)
{
	Exception_t* ___password_10Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'password' of type 'ProcessStartInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___password_10Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Diagnostics.ProcessStartInfo
IL2CPP_EXTERN_C void ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshal_com_cleanup(ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_marshaled_com& marshaled)
{
}
// System.Void System.Diagnostics.ProcessStartInfo::.ctor(System.Diagnostics.Process)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessStartInfo__ctor_mB83B1F3722B69B6A212B85ADDCB636E63E6EE09F (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, Process_tF74794C64BCE464912BF158980B347CE66AF203B* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___useShellExecute_7 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Process_tF74794C64BCE464912BF158980B347CE66AF203B* L_0 = ___parent0;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_1 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_1, L_0, NULL);
		__this->___weakParentProcess_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___weakParentProcess_19), (void*)L_1);
		return;
	}
}
// System.Void System.Diagnostics.ProcessStartInfo::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessStartInfo__ctor_m61D7C61CBD55C32AD1DE83E1C17279F1241AE16E (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, String_t* ___fileName0, const RuntimeMethod* method) 
{
	{
		__this->___useShellExecute_7 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___fileName0;
		__this->___fileName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___fileName_0), (void*)L_0);
		return;
	}
}
// System.Collections.ObjectModel.Collection`1<System.String> System.Diagnostics.ProcessStartInfo::get_ArgumentList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* ProcessStartInfo_get_ArgumentList_mB8D94EA559605295AACF34CEFD80E7B7DC73AADC (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1__ctor_m87E923C2EF32F8BEE106696D60941C5CF5E9B92F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* L_0 = __this->____argumentList_22;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* L_1 = (Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575*)il2cpp_codegen_object_new(Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Collection_1__ctor_m87E923C2EF32F8BEE106696D60941C5CF5E9B92F(L_1, Collection_1__ctor_m87E923C2EF32F8BEE106696D60941C5CF5E9B92F_RuntimeMethod_var);
		__this->____argumentList_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____argumentList_22), (void*)L_1);
	}

IL_0013:
	{
		Collection_1_t2C70C2119B2290EEF2700585C16805CAA9C19575* L_2 = __this->____argumentList_22;
		return L_2;
	}
}
// System.String System.Diagnostics.ProcessStartInfo::get_Arguments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProcessStartInfo_get_Arguments_mA584AC8FB8210FFE888AA42532AD3A31784D6EC7 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___arguments_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = __this->___arguments_1;
		return L_2;
	}
}
// System.Void System.Diagnostics.ProcessStartInfo::set_Arguments(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessStartInfo_set_Arguments_mB0FD15AAE263A0BE623B23A0FCB2E8091B73335E (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___arguments_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arguments_1), (void*)L_0);
		return;
	}
}
// System.Collections.Specialized.StringDictionary System.Diagnostics.ProcessStartInfo::get_EnvironmentVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* ProcessStartInfo_get_EnvironmentVariables_m2D3A45132BAA93948D2018F9A1E04D465D20776D (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* L_0 = __this->___environmentVariables_20;
		if (L_0)
		{
			goto IL_00b5;
		}
	}
	{
		CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F* L_1 = (CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F*)il2cpp_codegen_object_new(CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CaseSensitiveStringDictionary__ctor_m2AF7A1302E4A8EE55E5E98BA342FDC3EF89A3F5E(L_1, NULL);
		__this->___environmentVariables_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___environmentVariables_20), (void*)L_1);
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_2 = __this->___weakParentProcess_19;
		if (!L_2)
		{
			goto IL_005e;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_3 = __this->___weakParentProcess_19;
		NullCheck(L_3);
		bool L_4;
		L_4 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_3);
		if (!L_4)
		{
			goto IL_005e;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_5 = __this->___weakParentProcess_19;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_5);
		NullCheck(((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083*)CastclassClass((RuntimeObject*)L_6, Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var)));
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.ComponentModel.ISite System.ComponentModel.Component::get_Site() */, ((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083*)CastclassClass((RuntimeObject*)L_6, Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var)));
		if (!L_7)
		{
			goto IL_005e;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = __this->___weakParentProcess_19;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_8);
		NullCheck(((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083*)CastclassClass((RuntimeObject*)L_9, Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var)));
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.ComponentModel.ISite System.ComponentModel.Component::get_Site() */, ((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083*)CastclassClass((RuntimeObject*)L_9, Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.ComponentModel.ISite::get_DesignMode() */, ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var, L_10);
		if (L_11)
		{
			goto IL_00b5;
		}
	}

IL_005e:
	{
		RuntimeObject* L_12;
		L_12 = Environment_GetEnvironmentVariables_m3C5400B01048535A472E52B6F2B25FA1F4C5B33E(NULL);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(9 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220_il2cpp_TypeInfo_var, L_12);
		V_0 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a4:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_14 = V_0;
					V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_15 = V_2;
					if (!L_15)
					{
						goto IL_00b4;
					}
				}
				{
					RuntimeObject* L_16 = V_2;
					NullCheck(L_16);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_16);
				}

IL_00b4:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009a_1;
			}

IL_006b_1:
			{
				RuntimeObject* L_17 = V_0;
				NullCheck(L_17);
				RuntimeObject* L_18;
				L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				V_1 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_18, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* L_19 = __this->___environmentVariables_20;
				RuntimeObject* L_20;
				L_20 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_1), NULL);
				RuntimeObject* L_21;
				L_21 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_1), NULL);
				NullCheck(L_19);
				VirtualActionInvoker2< String_t*, String_t* >::Invoke(5 /* System.Void System.Collections.Specialized.StringDictionary::Add(System.String,System.String) */, L_19, ((String_t*)CastclassSealed((RuntimeObject*)L_20, String_t_il2cpp_TypeInfo_var)), ((String_t*)CastclassSealed((RuntimeObject*)L_21, String_t_il2cpp_TypeInfo_var)));
			}

IL_009a_1:
			{
				RuntimeObject* L_22 = V_0;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_006b_1;
				}
			}
			{
				goto IL_00b5;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b5:
	{
		StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* L_24 = __this->___environmentVariables_20;
		return L_24;
	}
}
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessStartInfo_get_RedirectStandardInput_m26C0E09A37FDFE804FE4A669D03DF377D96BE9E7 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___redirectStandardInput_13;
		return L_0;
	}
}
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardOutput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessStartInfo_get_RedirectStandardOutput_mB52CFF493E90893AEAE01C85ED162547646BFEC0 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___redirectStandardOutput_14;
		return L_0;
	}
}
// System.Boolean System.Diagnostics.ProcessStartInfo::get_RedirectStandardError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessStartInfo_get_RedirectStandardError_m88E395C99E3FA8D289ABF575EA400E11F02C449A (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___redirectStandardError_15;
		return L_0;
	}
}
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardErrorEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ProcessStartInfo_get_StandardErrorEncoding_m7F14E239FB2676D432EC8C75FFE9D7506B4FE8BF (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = __this->___standardErrorEncoding_17;
		return L_0;
	}
}
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardOutputEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ProcessStartInfo_get_StandardOutputEncoding_mCFBE2B3FFC5FF52DCA9A0D7F8F7E5990F9340066 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = __this->___standardOutputEncoding_16;
		return L_0;
	}
}
// System.Boolean System.Diagnostics.ProcessStartInfo::get_UseShellExecute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessStartInfo_get_UseShellExecute_m5A39BF230D7E14AB73D31AACA175DB66B406E8B7 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___useShellExecute_7;
		return L_0;
	}
}
// System.String System.Diagnostics.ProcessStartInfo::get_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProcessStartInfo_get_UserName_m85741EF26D7D9707B4DC8492EE2318045F716D60 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___userName_8;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = __this->___userName_8;
		return L_2;
	}
}
// System.Security.SecureString System.Diagnostics.ProcessStartInfo::get_Password()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* ProcessStartInfo_get_Password_m41E2B779C5A3CB19DA90C1B88F9973376B2BC4DA (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		SecureString_t6FBEB334D455CA90093BD446BBEBA47FE5B20C6C* L_0 = __this->___password_10;
		return L_0;
	}
}
// System.String System.Diagnostics.ProcessStartInfo::get_Domain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProcessStartInfo_get_Domain_mEB80C28F46CA07CAAA39C8266A2350CD003F01A4 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___domain_9;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = __this->___domain_9;
		return L_2;
	}
}
// System.Boolean System.Diagnostics.ProcessStartInfo::get_LoadUserProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessStartInfo_get_LoadUserProfile_m849B59F3CABDB8965E158A2F7FD696BE0A1D7C42 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___loadUserProfile_12;
		return L_0;
	}
}
// System.String System.Diagnostics.ProcessStartInfo::get_FileName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProcessStartInfo_get_FileName_mF4DC31E6FF1E17A4E6BB8E0928621A825EE0AFDC (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___fileName_0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = __this->___fileName_0;
		return L_2;
	}
}
// System.String System.Diagnostics.ProcessStartInfo::get_WorkingDirectory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ProcessStartInfo_get_WorkingDirectory_m7B39909360A9507AD5F2B91C0DC267BA96A8C885 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___directory_2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
	}

IL_000e:
	{
		String_t* L_2 = __this->___directory_2;
		return L_2;
	}
}
// System.Boolean System.Diagnostics.ProcessStartInfo::get_HaveEnvVars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProcessStartInfo_get_HaveEnvVars_m93DFEAECCDF06DEC08F479DB32F3DB2990037698 (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* L_0 = __this->___environmentVariables_20;
		return (bool)((!(((RuntimeObject*)(StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Text.Encoding System.Diagnostics.ProcessStartInfo::get_StandardInputEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ProcessStartInfo_get_StandardInputEncoding_m678223845EB327856D00DE2F4D519701FDFB5CFA (ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C* __this, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0 = __this->___U3CStandardInputEncodingU3Ek__BackingField_24;
		return L_0;
	}
}
// System.Void System.Diagnostics.ProcessStartInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessStartInfo__cctor_m1CE3CAE8B2C7E8F1BCCAEB4B60A33FE34C7D1E71 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		((ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_StaticFields*)il2cpp_codegen_static_fields_for(ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_il2cpp_TypeInfo_var))->___empty_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_StaticFields*)il2cpp_codegen_static_fields_for(ProcessStartInfo_t03E06D8098D3DC01CDACE23EE2D308BDA8E41D3C_il2cpp_TypeInfo_var))->___empty_21), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.ProcessWaitHandle::.ctor(Microsoft.Win32.SafeHandles.SafeProcessHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessWaitHandle__ctor_mB6F85E300A73FD16261E29E69F1ACBF17E0F44EB (ProcessWaitHandle_t8460169FB67A55A5531F08CB2FDC37090B13A1C2* __this, SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB* ___processHandle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_il2cpp_TypeInfo_var);
		WaitHandle__ctor_m26EE883A7A858B7B47A72B2AF42BF96EE09EA773(__this, NULL);
		V_0 = (SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449*)NULL;
		intptr_t L_0;
		L_0 = NativeMethods_GetCurrentProcess_m0DDA8AB28E27F6B04D1CD3B60AF94D066F3953C8(NULL);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_1), __this, L_0, /*hidden argument*/NULL);
		SafeProcessHandle_tA260D4420C5F481A5DA030FFB19D038BBF8A63CB* L_2 = ___processHandle0;
		intptr_t L_3;
		L_3 = NativeMethods_GetCurrentProcess_m0DDA8AB28E27F6B04D1CD3B60AF94D066F3953C8(NULL);
		HandleRef_t4B05E32B68797F702257D4E838B85A976313F08F L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m0298D55E5F35F77B6A6CCA75C8E828C3F3127DE7((&L_4), __this, L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = NativeMethods_DuplicateHandle_m34BEE27509460FD294C19D18F4A44CB7683BB750(L_1, L_2, L_4, (&V_0), 0, (bool)0, 2, NULL);
		if (L_5)
		{
			goto IL_0036;
		}
	}
	{
		SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295* L_6 = (SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		SystemException__ctor_mC481DFD60F19362A0B3523FBD5E429EC4F1F3FB5(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF0F1DAD540221F03C448A3AE9F0242B2388C05D4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ProcessWaitHandle__ctor_mB6F85E300A73FD16261E29E69F1ACBF17E0F44EB_RuntimeMethod_var)));
	}

IL_0036:
	{
		SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_il2cpp_TypeInfo_var);
		WaitHandle_set_SafeWaitHandle_m947E6379936E00386AE0774B58E758BEFD496B91(__this, L_7, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.MonitoringDescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitoringDescriptionAttribute__ctor_m41C05A99A8DFCA8AB181CC0E06F0B89D183C5CD2 (MonitoringDescriptionAttribute_t93A41F21391E9A06411FF8E8EDBD2C0813A1026E* __this, String_t* ___description0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___description0;
		il2cpp_codegen_runtime_class_init_inline(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97(__this, L_0, NULL);
		return;
	}
}
// System.String System.Diagnostics.MonitoringDescriptionAttribute::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MonitoringDescriptionAttribute_get_Description_mD28A2C666D1B4100914C186C9F8C84EC8B2E59CE (MonitoringDescriptionAttribute_t93A41F21391E9A06411FF8E8EDBD2C0813A1026E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DescriptionAttribute_get_Description_m153F27F0911FC88F9DD8856BCA449AF5BE46F100(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7 (const RuntimeMethod* method) 
{
	typedef int64_t (*Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7_ftn) ();
	using namespace il2cpp::icalls;
	return ((Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7_ftn)System::System::Diagnostics::Stopwatch::GetTimestamp) ();
}
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		bool L_0 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___IsHighResolution_1;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedTicks_m3F4040FBF8C7CCDC69E0E04824019DEBB25AA410(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_2 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___Frequency_0;
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(((int64_t)(L_1/((int64_t)(L_2/((int64_t)((int32_t)10000000)))))), NULL);
		return L_3;
	}

IL_0020:
	{
		int64_t L_4;
		L_4 = Stopwatch_get_ElapsedTicks_m3F4040FBF8C7CCDC69E0E04824019DEBB25AA410(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = TimeSpan_FromTicks_m9C683B1D142312F22E8CC6C803E32EF6D42F9003(L_4, NULL);
		return L_5;
	}
}
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		bool L_0 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___IsHighResolution_1;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int64_t L_1;
		L_1 = Stopwatch_get_ElapsedTicks_m3F4040FBF8C7CCDC69E0E04824019DEBB25AA410(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_2 = ((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___Frequency_0;
		return ((int64_t)(L_1/((int64_t)(L_2/((int64_t)((int32_t)1000))))));
	}

IL_001b:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(__this, NULL);
		V_0 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalMilliseconds_m3506C1A49F1FE37A82F3027EA061D18215EF87CF((&V_0), NULL);
		if (L_4 > (double)((std::numeric_limits<int64_t>::max)())) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Stopwatch_get_ElapsedMilliseconds_m8D8E60ADEB47D008C06D8E57D28D41EAE07AECBF_RuntimeMethod_var);
		return il2cpp_codegen_cast_double_to_int<int64_t>(L_4);
	}
}
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedTicks_m3F4040FBF8C7CCDC69E0E04824019DEBB25AA410 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___is_running_4;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		int64_t L_1 = __this->___elapsed_2;
		return L_1;
	}

IL_000f:
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		int64_t L_3 = __this->___started_3;
		int64_t L_4 = __this->___elapsed_2;
		return ((int64_t)il2cpp_codegen_add(((int64_t)il2cpp_codegen_subtract(L_2, L_3)), L_4));
	}
}
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___is_running_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		__this->___started_3 = L_1;
		__this->___is_running_4 = (bool)1;
		return;
	}
}
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->___is_running_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		int64_t L_1 = __this->___elapsed_2;
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_2;
		L_2 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		int64_t L_3 = __this->___started_3;
		__this->___elapsed_2 = ((int64_t)il2cpp_codegen_add(L_1, ((int64_t)il2cpp_codegen_subtract(L_2, L_3))));
		int64_t L_4 = __this->___elapsed_2;
		if ((((int64_t)L_4) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0034;
		}
	}
	{
		__this->___elapsed_2 = ((int64_t)0);
	}

IL_0034:
	{
		__this->___is_running_4 = (bool)0;
		return;
	}
}
// System.Void System.Diagnostics.Stopwatch::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__cctor_mF9BBC572803E232BF2D323301E90A6AFDB496FB9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___Frequency_0 = ((int64_t)((int32_t)10000000));
		((Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields*)il2cpp_codegen_static_fields_for(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var))->___IsHighResolution_1 = (bool)1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExcludeFromCodeCoverageAttribute__ctor_m2CB8196E20519167E842D03BE4CFBCC84BEFC9E2 (ExcludeFromCodeCoverageAttribute_tD4CB13A2A9FCF2022C854E503D3B44DFF634FAAD* __this, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Oid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___oid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidLookup_t8767D0F636CD22219B1F239AE31597AF84BA6458_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___oid0;
		il2cpp_codegen_runtime_class_init_inline(OidLookup_t8767D0F636CD22219B1F239AE31597AF84BA6458_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = OidLookup_ToOid_m084AE2948BA1D784EAC148B97B6D5EF94F0D58B0(L_0, 0, (bool)0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_3 = ___oid0;
		V_0 = L_3;
	}

IL_0014:
	{
		String_t* L_4 = V_0;
		Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F_inline(__this, L_4, NULL);
		__this->____group_2 = 0;
		return;
	}
}
// System.Void System.Security.Cryptography.Oid::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, String_t* ___friendlyName1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		String_t* L_1 = ___friendlyName1;
		__this->____friendlyName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____friendlyName_1), (void*)L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.Oid::.ctor(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___oid0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = ___oid0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17E5BE9B221C767EF04A364F24B81309DAE38512)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59_RuntimeMethod_var)));
	}

IL_0014:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2 = ___oid0;
		NullCheck(L_2);
		String_t* L_3 = L_2->____value_0;
		__this->____value_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_3);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_4 = ___oid0;
		NullCheck(L_4);
		String_t* L_5 = L_4->____friendlyName_1;
		__this->____friendlyName_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____friendlyName_1), (void*)L_5);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_6 = ___oid0;
		NullCheck(L_6);
		int32_t L_7 = L_6->____group_2;
		__this->____group_2 = L_7;
		return;
	}
}
// System.String System.Security.Cryptography.Oid::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3 (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____value_0;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Oid::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.OidCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_0 = (List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B*)il2cpp_codegen_object_new(List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8(L_0, List_1__ctor_m3BB823E6AB875ADEA1C357D9FD3988FC3BD07DC8_RuntimeMethod_var);
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		return;
	}
}
// System.Int32 System.Security.Cryptography.OidCollection::Add(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___oid0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_0 = __this->____list_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_inline(L_0, List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var);
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_2 = __this->____list_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_3 = ___oid0;
		NullCheck(L_2);
		List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_inline(L_2, L_3, List_1_Add_m3365EDCFC60E7D35967ECEB93DD7851CC2D9B41F_RuntimeMethod_var);
		return L_1;
	}
}
// System.Security.Cryptography.Oid System.Security.Cryptography.OidCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_0 = __this->____list_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2;
		L_2 = List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE(L_0, L_1, List_1_get_Item_m79E063DD5D6C2BF1AF8CB852A77E38360E5484BE_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 System.Security.Cryptography.OidCollection::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t31E53E1C1BAA65ECAEFCBC9D003166BC01081D6B* L_0 = __this->____list_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_inline(L_0, List_1_get_Count_m00523F252234FC6049965BF2606B179CEF09A759_RuntimeMethod_var);
		return L_1;
	}
}
// System.Security.Cryptography.OidEnumerator System.Security.Cryptography.OidCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_0 = (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41*)il2cpp_codegen_object_new(OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		OidEnumerator__ctor_m2168FEE96614FB7460C84762ED3728A5413F42E6(L_0, __this, NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator System.Security.Cryptography.OidCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OidCollection_System_Collections_IEnumerable_GetEnumerator_m4624AA2C7F0693698228803D9B59EFE6AAD6AFE4 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	{
		OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* L_0;
		L_0 = OidCollection_GetEnumerator_mBB791F48E305B3355A1BCE624E0BB367331F82AC(__this, NULL);
		return L_0;
	}
}
// System.Void System.Security.Cryptography.OidCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___array0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var)));
	}

IL_0022:
	{
		int32_t L_5 = ___index1;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_6 = ___index1;
		RuntimeArray* L_7 = ___array0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_003f;
		}
	}

IL_002f:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mE5B2755F0BEA043CACF915D5CE140859EE58FA66(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var)));
	}

IL_003f:
	{
		int32_t L_10 = ___index1;
		int32_t L_11;
		L_11 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(__this, NULL);
		RuntimeArray* L_12 = ___array0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_12, NULL);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_10, L_11))) <= ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OidCollection_System_Collections_ICollection_CopyTo_m4EF1FB9A18E822BA196BF3F0204B7C06178B9CFC_RuntimeMethod_var)));
	}

IL_005a:
	{
		V_0 = 0;
		goto IL_0075;
	}

IL_005e:
	{
		RuntimeArray* L_15 = ___array0;
		int32_t L_16 = V_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_17;
		L_17 = OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A(__this, L_16, NULL);
		int32_t L_18 = ___index1;
		NullCheck(L_15);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_15, L_17, L_18, NULL);
		int32_t L_19 = ___index1;
		___index1 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0075:
	{
		int32_t L_21 = V_0;
		int32_t L_22;
		L_22 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(__this, NULL);
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_005e;
		}
	}
	{
		return;
	}
}
// System.Boolean System.Security.Cryptography.OidCollection::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OidCollection_get_IsSynchronized_mF751E9C1DBC7A5637C7CD8A0FEB39AB15C74A0A7 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Object System.Security.Cryptography.OidCollection::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OidCollection_get_SyncRoot_mD310358F3BF4454604AD96C734BA6EC180CE7A85 (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* __this, const RuntimeMethod* method) 
{
	{
		return __this;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidEnumerator__ctor_m2168FEE96614FB7460C84762ED3728A5413F42E6 (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* ___oids0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_0 = ___oids0;
		__this->____oids_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____oids_0), (void*)L_0);
		__this->____current_1 = (-1);
		return;
	}
}
// System.Security.Cryptography.Oid System.Security.Cryptography.OidEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) 
{
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_0 = __this->____oids_0;
		int32_t L_1 = __this->____current_1;
		NullCheck(L_0);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2;
		L_2 = OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OidEnumerator_System_Collections_IEnumerator_get_Current_m0B627B9F510EF4F283F40EBE17164B9231BB7735 (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) 
{
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0;
		L_0 = OidEnumerator_get_Current_mCED077699FA00ED57FA82F8B460C28B86F1B5C9F(__this, NULL);
		return L_0;
	}
}
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OidEnumerator_MoveNext_mD42201944C163E81DABDE08B1535C4AB9A5778DD (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current_1;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_1 = __this->____oids_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_1, NULL);
		if ((((int32_t)L_0) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 1)))))
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		int32_t L_3 = __this->____current_1;
		__this->____current_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		return (bool)1;
	}
}
// System.Void System.Security.Cryptography.OidEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OidEnumerator_Reset_m24F1F25812A7BFE9B02B312BA9E670C930622F27 (OidEnumerator_t9E63ADFA5DD6DB1AA249F81E650FF063479EDD41* __this, const RuntimeMethod* method) 
{
	{
		__this->____current_1 = (-1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.AsnEncodedData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.AsnEncodedData::set_Oid(System.Security.Cryptography.Oid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		__this->____oid_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____oid_0), (void*)(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)NULL);
		return;
	}

IL_000b:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_1 = ___value0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_2 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_2, L_1, NULL);
		__this->____oid_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____oid_0), (void*)L_2);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.AsnEncodedData::get_RawData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____raw_1;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.AsnEncodedData::set_RawData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF41760006700B346FE970834ED6436CD21A1330F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B_RuntimeMethod_var)));
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___value0;
		NullCheck((RuntimeArray*)L_2);
		RuntimeObject* L_3;
		L_3 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_2, NULL);
		__this->____raw_1 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____raw_1), (void*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_3, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void System.Security.Cryptography.AsnEncodedData::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		NullCheck(L_2);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_3 = L_2->____oid_0;
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7(__this, (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)NULL, NULL);
		goto IL_0030;
	}

IL_001f:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_4 = ___asnEncodedData0;
		NullCheck(L_4);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = L_4->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_6 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_6, L_5, NULL);
		AsnEncodedData_set_Oid_m877771219F651EA3FF834952300180274531C9C7(__this, L_6, NULL);
	}

IL_0030:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_7 = ___asnEncodedData0;
		NullCheck(L_7);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7->____raw_1;
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_8, NULL);
		return;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_ToString_m669772943B78D9242BC5F176A4BD857326F95021 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E0E07FBC53FA8C48B097E23C1F51253713BFE1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50ED994EAB5E4B5A327FC8D974EAB06E7CFA83A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = __this->____oid_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, NULL);
		if (L_3)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_4 = V_0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, NULL);
		if (L_5)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, NULL);
		if (L_7)
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, NULL);
		if (L_9)
		{
			goto IL_0074;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral0E0E07FBC53FA8C48B097E23C1F51253713BFE1D, NULL);
		if (L_11)
		{
			goto IL_007c;
		}
	}
	{
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral50ED994EAB5E4B5A327FC8D974EAB06E7CFA83A4, NULL);
		if (L_13)
		{
			goto IL_0084;
		}
	}
	{
		goto IL_008c;
	}

IL_005c:
	{
		bool L_14 = ___multiLine0;
		String_t* L_15;
		L_15 = AsnEncodedData_BasicConstraintsExtension_m74BFC192666755E9D8A088880789AB6EA84F1FCC(__this, L_14, NULL);
		return L_15;
	}

IL_0064:
	{
		bool L_16 = ___multiLine0;
		String_t* L_17;
		L_17 = AsnEncodedData_EnhancedKeyUsageExtension_m3C95D5D2D8F81BEA5E33B264767C8A5E5575D7CA(__this, L_16, NULL);
		return L_17;
	}

IL_006c:
	{
		bool L_18 = ___multiLine0;
		String_t* L_19;
		L_19 = AsnEncodedData_KeyUsageExtension_m9A9C72CF2A831A1849A55336FC8D6DEE097E28D3(__this, L_18, NULL);
		return L_19;
	}

IL_0074:
	{
		bool L_20 = ___multiLine0;
		String_t* L_21;
		L_21 = AsnEncodedData_SubjectKeyIdentifierExtension_m3CEDDCED26AD5621407DAA401F385269348BB789(__this, L_20, NULL);
		return L_21;
	}

IL_007c:
	{
		bool L_22 = ___multiLine0;
		String_t* L_23;
		L_23 = AsnEncodedData_SubjectAltName_mDE2F39E1A43C1E13D89319F221517EE54B1A6A14(__this, L_22, NULL);
		return L_23;
	}

IL_0084:
	{
		bool L_24 = ___multiLine0;
		String_t* L_25;
		L_25 = AsnEncodedData_NetscapeCertType_m55E43EBDA7882304E8FE5F3DC134A2719F519373(__this, L_24, NULL);
		return L_25;
	}

IL_008c:
	{
		bool L_26 = ___multiLine0;
		String_t* L_27;
		L_27 = AsnEncodedData_Default_m883444CBD5238793D1B94A6DE273FF2F9C47EA70(__this, L_26, NULL);
		return L_27;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::Default(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_Default_m883444CBD5238793D1B94A6DE273FF2F9C47EA70 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0044;
	}

IL_000a:
	{
		StringBuilder_t* L_1 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->____raw_1;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_4, NULL);
		int32_t L_6 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____raw_1;
		NullCheck(L_7);
		if ((((int32_t)L_6) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1)))))
		{
			goto IL_0040;
		}
	}
	{
		StringBuilder_t* L_8 = V_0;
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
	}

IL_0040:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0044:
	{
		int32_t L_11 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->____raw_1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		StringBuilder_t* L_13 = V_0;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
		return L_14;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::BasicConstraintsExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_BasicConstraintsExtension_m74BFC192666755E9D8A088880789AB6EA84F1FCC (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* L_0 = (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35*)il2cpp_codegen_object_new(X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509BasicConstraintsExtension__ctor_m76C88E8D4C7CCEC7B2C3D56CC58A56352F7729E4(L_0, __this, (bool)0, NULL);
		bool L_1 = ___multiLine0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, bool >::Invoke(5 /* System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Object)
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::EnhancedKeyUsageExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_EnhancedKeyUsageExtension_m3C95D5D2D8F81BEA5E33B264767C8A5E5575D7CA (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* L_0 = (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF*)il2cpp_codegen_object_new(X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509EnhancedKeyUsageExtension__ctor_mBDA55EB3C6594D4F6A06102B4EAF633F86C3E092(L_0, __this, (bool)0, NULL);
		bool L_1 = ___multiLine0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, bool >::Invoke(5 /* System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Object)
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::KeyUsageExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_KeyUsageExtension_m9A9C72CF2A831A1849A55336FC8D6DEE097E28D3 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* L_0 = (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B*)il2cpp_codegen_object_new(X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509KeyUsageExtension__ctor_m1DE9CD768712A07E5803496501CCFDA81CFB2689(L_0, __this, (bool)0, NULL);
		bool L_1 = ___multiLine0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, bool >::Invoke(5 /* System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Object)
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::SubjectKeyIdentifierExtension(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_SubjectKeyIdentifierExtension_m3CEDDCED26AD5621407DAA401F385269348BB789 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* L_0 = (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5*)il2cpp_codegen_object_new(X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509SubjectKeyIdentifierExtension__ctor_m421293DCB67F3A918098962166B8166FD9657D08(L_0, __this, (bool)0, NULL);
		bool L_1 = ___multiLine0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, bool >::Invoke(5 /* System.String System.Security.Cryptography.AsnEncodedData::ToString(System.Boolean) */, L_0, L_1);
		V_0 = L_2;
		goto IL_0019;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0010;
		}
		throw e;
	}

CATCH_0010:
	{// begin catch(System.Object)
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_0 = L_3;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0019;
	}// end catch (depth: 1)

IL_0019:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::SubjectAltName(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_SubjectAltName_mDE2F39E1A43C1E13D89319F221517EE54B1A6A14 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F78B1140DE9B7FF7C3C57BB5C1F10BBD3B15CB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EE6BFCFA9B2342B9FF2A513D72A69E2065C4446);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE873DB986C802AEB50AD8FEA9D8885FC21EDE3D);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	int32_t V_2 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	uint8_t V_6 = 0x0;
	String_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____raw_1;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) >= ((int32_t)5)))
		{
			goto IL_0011;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_0011:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____raw_1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_2 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_2, L_1, NULL);
			V_0 = L_2;
			StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
			NullCheck(L_3);
			StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
			V_1 = L_3;
			V_2 = 0;
			goto IL_00ed_1;
		}

IL_002b_1:
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_4 = V_0;
			int32_t L_5 = V_2;
			NullCheck(L_4);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
			L_6 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_4, L_5, NULL);
			V_3 = L_6;
			V_4 = (String_t*)NULL;
			V_5 = (String_t*)NULL;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_7 = V_3;
			NullCheck(L_7);
			uint8_t L_8;
			L_8 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_7, NULL);
			V_6 = L_8;
			uint8_t L_9 = V_6;
			if ((((int32_t)L_9) == ((int32_t)((int32_t)129))))
			{
				goto IL_0055_1;
			}
		}
		{
			uint8_t L_10 = V_6;
			if ((((int32_t)L_10) == ((int32_t)((int32_t)130))))
			{
				goto IL_0070_1;
			}
		}
		{
			goto IL_008b_1;
		}

IL_0055_1:
		{
			V_4 = _stringLiteralDE873DB986C802AEB50AD8FEA9D8885FC21EDE3D;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_11;
			L_11 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_3;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_12, NULL);
			NullCheck(L_11);
			String_t* L_14;
			L_14 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_11, L_13);
			V_5 = L_14;
			goto IL_00af_1;
		}

IL_0070_1:
		{
			V_4 = _stringLiteral6EE6BFCFA9B2342B9FF2A513D72A69E2065C4446;
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_15;
			L_15 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16 = V_3;
			NullCheck(L_16);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17;
			L_17 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_16, NULL);
			NullCheck(L_15);
			String_t* L_18;
			L_18 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_15, L_17);
			V_5 = L_18;
			goto IL_00af_1;
		}

IL_008b_1:
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_3;
			NullCheck(L_19);
			uint8_t L_20;
			L_20 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_19, NULL);
			uint8_t L_21 = L_20;
			RuntimeObject* L_22 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_21);
			String_t* L_23;
			L_23 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral08F78B1140DE9B7FF7C3C57BB5C1F10BBD3B15CB, L_22, NULL);
			V_4 = L_23;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_24 = V_3;
			NullCheck(L_24);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
			L_25 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_24, NULL);
			String_t* L_26;
			L_26 = CryptoConvert_ToHex_m1A0AD4D32CEEC47D3C60CB2E4D05A935C62F261A(L_25, NULL);
			V_5 = L_26;
		}

IL_00af_1:
		{
			StringBuilder_t* L_27 = V_1;
			String_t* L_28 = V_4;
			NullCheck(L_27);
			StringBuilder_t* L_29;
			L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, L_28, NULL);
			StringBuilder_t* L_30 = V_1;
			String_t* L_31 = V_5;
			NullCheck(L_30);
			StringBuilder_t* L_32;
			L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, L_31, NULL);
			bool L_33 = ___multiLine0;
			if (!L_33)
			{
				goto IL_00d2_1;
			}
		}
		{
			StringBuilder_t* L_34 = V_1;
			String_t* L_35;
			L_35 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
			NullCheck(L_34);
			StringBuilder_t* L_36;
			L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
			goto IL_00e9_1;
		}

IL_00d2_1:
		{
			int32_t L_37 = V_2;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_38 = V_0;
			NullCheck(L_38);
			int32_t L_39;
			L_39 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_38, NULL);
			if ((((int32_t)L_37) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_39, 1)))))
			{
				goto IL_00e9_1;
			}
		}
		{
			StringBuilder_t* L_40 = V_1;
			NullCheck(L_40);
			StringBuilder_t* L_41;
			L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		}

IL_00e9_1:
		{
			int32_t L_42 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_42, 1));
		}

IL_00ed_1:
		{
			int32_t L_43 = V_2;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_44 = V_0;
			NullCheck(L_44);
			int32_t L_45;
			L_45 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_44, NULL);
			if ((((int32_t)L_43) < ((int32_t)L_45)))
			{
				goto IL_002b_1;
			}
		}
		{
			StringBuilder_t* L_46 = V_1;
			NullCheck(L_46);
			String_t* L_47;
			L_47 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
			V_7 = L_47;
			goto IL_010d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0103;
		}
		throw e;
	}

CATCH_0103:
	{// begin catch(System.Object)
		String_t* L_48 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&String_t_il2cpp_TypeInfo_var))))->___Empty_6;
		V_7 = L_48;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_010d;
	}// end catch (depth: 1)

IL_010d:
	{
		String_t* L_49 = V_7;
		return L_49;
	}
}
// System.String System.Security.Cryptography.AsnEncodedData::NetscapeCertType(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AsnEncodedData_NetscapeCertType_m55E43EBDA7882304E8FE5F3DC134A2719F519373 (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9C2E56B6E7518DF358644E56A37604D9A7C17A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20BFDEE599B675B43C275E62F4062F4333B183F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D33F3CC9AFA97ECECBBF5C0881C8F9C86690251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95E0BCC89582D0EEC7BEA5EEF50AA6E16AA82363);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBE682A549E4FD2504E5F2F69458189FB5C75139);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD30CDE84D4CFDAD1992F4DD1DBC71AE0074AAA08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF0046B99C0F5DFE48BFA77D6703520FE5ECEB63);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t* V_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____raw_1;
		NullCheck(L_0);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____raw_1;
		NullCheck(L_1);
		int32_t L_2 = 0;
		uint8_t L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((uint32_t)L_3) == ((uint32_t)3))))
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____raw_1;
		NullCheck(L_4);
		int32_t L_5 = 1;
		uint8_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0027;
		}
	}

IL_0021:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->____raw_1;
		NullCheck(L_7);
		int32_t L_8 = 3;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->____raw_1;
		NullCheck(L_10);
		int32_t L_11 = 2;
		uint8_t L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____raw_1;
		NullCheck(L_13);
		int32_t L_14 = 2;
		uint8_t L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_0 = ((int32_t)(((int32_t)((int32_t)L_9>>((int32_t)((int32_t)L_12&((int32_t)31)))))<<((int32_t)((int32_t)L_15&((int32_t)31)))));
		StringBuilder_t* L_16 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_16, NULL);
		V_1 = L_16;
		int32_t L_17 = V_0;
		if ((!(((uint32_t)((int32_t)(L_17&((int32_t)128)))) == ((uint32_t)((int32_t)128)))))
		{
			goto IL_0068;
		}
	}
	{
		StringBuilder_t* L_18 = V_1;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, _stringLiteralFF0046B99C0F5DFE48BFA77D6703520FE5ECEB63, NULL);
	}

IL_0068:
	{
		int32_t L_20 = V_0;
		if ((!(((uint32_t)((int32_t)(L_20&((int32_t)64)))) == ((uint32_t)((int32_t)64)))))
		{
			goto IL_0091;
		}
	}
	{
		StringBuilder_t* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_21, NULL);
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		StringBuilder_t* L_23 = V_1;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0085:
	{
		StringBuilder_t* L_25 = V_1;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteral20BFDEE599B675B43C275E62F4062F4333B183F9, NULL);
	}

IL_0091:
	{
		int32_t L_27 = V_0;
		if ((!(((uint32_t)((int32_t)(L_27&((int32_t)32)))) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_00ba;
		}
	}
	{
		StringBuilder_t* L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_28, NULL);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		StringBuilder_t* L_30 = V_1;
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00ae:
	{
		StringBuilder_t* L_32 = V_1;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteralBBE682A549E4FD2504E5F2F69458189FB5C75139, NULL);
	}

IL_00ba:
	{
		int32_t L_34 = V_0;
		if ((!(((uint32_t)((int32_t)(L_34&((int32_t)16)))) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_00e3;
		}
	}
	{
		StringBuilder_t* L_35 = V_1;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_35, NULL);
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_00d7;
		}
	}
	{
		StringBuilder_t* L_37 = V_1;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00d7:
	{
		StringBuilder_t* L_39 = V_1;
		NullCheck(L_39);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, _stringLiteralCE2892956422830EFD61D6B1C95A865ED0BDFF66, NULL);
	}

IL_00e3:
	{
		int32_t L_41 = V_0;
		if ((!(((uint32_t)((int32_t)(L_41&8))) == ((uint32_t)8))))
		{
			goto IL_010a;
		}
	}
	{
		StringBuilder_t* L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_42, NULL);
		if ((((int32_t)L_43) <= ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		StringBuilder_t* L_44 = V_1;
		NullCheck(L_44);
		StringBuilder_t* L_45;
		L_45 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_44, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00fe:
	{
		StringBuilder_t* L_46 = V_1;
		NullCheck(L_46);
		StringBuilder_t* L_47;
		L_47 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_46, _stringLiteralD30CDE84D4CFDAD1992F4DD1DBC71AE0074AAA08, NULL);
	}

IL_010a:
	{
		int32_t L_48 = V_0;
		if ((!(((uint32_t)((int32_t)(L_48&4))) == ((uint32_t)4))))
		{
			goto IL_0131;
		}
	}
	{
		StringBuilder_t* L_49 = V_1;
		NullCheck(L_49);
		int32_t L_50;
		L_50 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_49, NULL);
		if ((((int32_t)L_50) <= ((int32_t)0)))
		{
			goto IL_0125;
		}
	}
	{
		StringBuilder_t* L_51 = V_1;
		NullCheck(L_51);
		StringBuilder_t* L_52;
		L_52 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_51, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0125:
	{
		StringBuilder_t* L_53 = V_1;
		NullCheck(L_53);
		StringBuilder_t* L_54;
		L_54 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_53, _stringLiteral2D33F3CC9AFA97ECECBBF5C0881C8F9C86690251, NULL);
	}

IL_0131:
	{
		int32_t L_55 = V_0;
		if ((!(((uint32_t)((int32_t)(L_55&2))) == ((uint32_t)2))))
		{
			goto IL_0158;
		}
	}
	{
		StringBuilder_t* L_56 = V_1;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_56, NULL);
		if ((((int32_t)L_57) <= ((int32_t)0)))
		{
			goto IL_014c;
		}
	}
	{
		StringBuilder_t* L_58 = V_1;
		NullCheck(L_58);
		StringBuilder_t* L_59;
		L_59 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_58, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_014c:
	{
		StringBuilder_t* L_60 = V_1;
		NullCheck(L_60);
		StringBuilder_t* L_61;
		L_61 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_60, _stringLiteral1B9C2E56B6E7518DF358644E56A37604D9A7C17A, NULL);
	}

IL_0158:
	{
		int32_t L_62 = V_0;
		if ((!(((uint32_t)((int32_t)(L_62&1))) == ((uint32_t)1))))
		{
			goto IL_017f;
		}
	}
	{
		StringBuilder_t* L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_63, NULL);
		if ((((int32_t)L_64) <= ((int32_t)0)))
		{
			goto IL_0173;
		}
	}
	{
		StringBuilder_t* L_65 = V_1;
		NullCheck(L_65);
		StringBuilder_t* L_66;
		L_66 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_65, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0173:
	{
		StringBuilder_t* L_67 = V_1;
		NullCheck(L_67);
		StringBuilder_t* L_68;
		L_68 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_67, _stringLiteral95E0BCC89582D0EEC7BEA5EEF50AA6E16AA82363, NULL);
	}

IL_017f:
	{
		StringBuilder_t* L_69 = V_1;
		String_t* L_70;
		L_70 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_69);
		StringBuilder_t* L_71;
		L_71 = StringBuilder_AppendFormat_mFA88863E4018C2912D1A783E0EA6DAE4F594124F(L_69, _stringLiteralF5FCF7BFB0603BEB0CFB789198783073B2306D9D, L_70, NULL);
		StringBuilder_t* L_72 = V_1;
		NullCheck(L_72);
		String_t* L_73;
		L_73 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_72);
		return L_73;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213 (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____keyValue_0;
		return L_0;
	}
}
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0 (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____params_1;
		return L_0;
	}
}
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = __this->____oid_2;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublicKey__cctor_m1B2E44B5BBF321952E0FD1F19C048E43A6506407 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)0);
		((PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_StaticFields*)il2cpp_codegen_static_fields_for(PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_il2cpp_TypeInfo_var))->___Empty_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_StaticFields*)il2cpp_codegen_static_fields_for(PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405_il2cpp_TypeInfo_var))->___Empty_3), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m672BE9B41107A8C30454BF4CAC120D70512BA89A (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m76C88E8D4C7CCEC7B2C3D56CC58A56352F7729E4 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedBasicConstraints0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___encodedBasicConstraints0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB(__this, L_4, NULL);
		__this->____status_8 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension__ctor_m02334D8CAA280B339CA41E2019CF1F02C8B2E7DE (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, bool ___certificateAuthority0, bool ___hasPathLengthConstraint1, int32_t ___pathLengthConstraint2, bool ___critical3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		bool L_0 = ___hasPathLengthConstraint1;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = ___pathLengthConstraint2;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5D1D45B6F90EF153C0073C0B7E9492B4DBF540F1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension__ctor_m02334D8CAA280B339CA41E2019CF1F02C8B2E7DE_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_3 = ___pathLengthConstraint2;
		__this->____pathLengthConstraint_7 = L_3;
	}

IL_001f:
	{
		bool L_4 = ___hasPathLengthConstraint1;
		__this->____hasPathLengthConstraint_6 = L_4;
		bool L_5 = ___certificateAuthority0;
		__this->____certificateAuthority_5 = L_5;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_6 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_6, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_6);
		bool L_7 = ___critical3;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_7, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = X509BasicConstraintsExtension_Encode_mD7FA31A70B025F67062C3844E4FEB09B14A4DE2B(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_8, NULL);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509BasicConstraintsExtension_get_CertificateAuthority_mB4ECEF43A245E97DA80C6323BE339BE2DF99FF5C (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		bool L_3 = __this->____certificateAuthority_5;
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_get_CertificateAuthority_mB4ECEF43A245E97DA80C6323BE339BE2DF99FF5C_RuntimeMethod_var)));
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m8F7C371EFF99BD110663DB106BEE889955255BC7 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		bool L_3 = __this->____hasPathLengthConstraint_6;
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_get_HasPathLengthConstraint_m8F7C371EFF99BD110663DB106BEE889955255BC7_RuntimeMethod_var)));
	}
}
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m4D3F016E42C243887D07DD955518A818DC14BBC5 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		int32_t L_3 = __this->____pathLengthConstraint_7;
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_get_PathLengthConstraint_m4D3F016E42C243887D07DD955518A818DC14BBC5_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509BasicConstraintsExtension_CopyFrom_mCC603D99CEC828BDF86FDEB3C4650CF4D3753B8E_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, _stringLiteralBCBD089553BED56941C157C4F715B4365F724D7C, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB(__this, L_16, NULL);
		__this->____status_8 = L_17;
		return;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509BasicConstraintsExtension_Decode_m7C50097B6238FEF4DAD6A9A09A449DB0CAFFEBEB (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_2 = NULL;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___extension0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0012;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0012:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___extension0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)3)))
		{
			goto IL_0025;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___extension0;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((uint32_t)2))))
		{
			goto IL_0023;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___extension0;
		NullCheck(L_7);
		int32_t L_8 = 1;
		uint8_t L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (!L_9)
		{
			goto IL_0025;
		}
	}

IL_0023:
	{
		return (int32_t)(3);
	}

IL_0025:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___extension0;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_11 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_11, L_10, NULL);
			V_0 = L_11;
			V_1 = 0;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12 = V_0;
			int32_t L_13 = V_1;
			int32_t L_14 = L_13;
			V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
			NullCheck(L_12);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15;
			L_15 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_12, L_14, NULL);
			V_2 = L_15;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16 = V_2;
			if (!L_16)
			{
				goto IL_0068_1;
			}
		}
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_2;
			NullCheck(L_17);
			uint8_t L_18;
			L_18 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_17, NULL);
			if ((!(((uint32_t)L_18) == ((uint32_t)1))))
			{
				goto IL_0068_1;
			}
		}
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_2;
			NullCheck(L_19);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
			L_20 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_19, NULL);
			NullCheck(L_20);
			int32_t L_21 = 0;
			uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
			__this->____certificateAuthority_5 = (bool)((((int32_t)L_22) == ((int32_t)((int32_t)255)))? 1 : 0);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_23 = V_0;
			int32_t L_24 = V_1;
			int32_t L_25 = L_24;
			V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
			NullCheck(L_23);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_26;
			L_26 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_23, L_25, NULL);
			V_2 = L_26;
		}

IL_0068_1:
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = V_2;
			if (!L_27)
			{
				goto IL_0087_1;
			}
		}
		{
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_28 = V_2;
			NullCheck(L_28);
			uint8_t L_29;
			L_29 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_28, NULL);
			if ((!(((uint32_t)L_29) == ((uint32_t)2))))
			{
				goto IL_0087_1;
			}
		}
		{
			__this->____hasPathLengthConstraint_6 = (bool)1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_30 = V_2;
			int32_t L_31;
			L_31 = ASN1Convert_ToInt32_m956785EB4A235575C21677C16D2F6CBE54787032(L_30, NULL);
			__this->____pathLengthConstraint_7 = L_31;
		}

IL_0087_1:
		{
			goto IL_008e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{// begin catch(System.Object)
		V_3 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0090;
	}// end catch (depth: 1)

IL_008e:
	{
		return (int32_t)(0);
	}

IL_0090:
	{
		int32_t L_32 = V_3;
		return L_32;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509BasicConstraintsExtension_Encode_mD7FA31A70B025F67062C3844E4FEB09B14A4DE2B (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_0 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_0, (uint8_t)((int32_t)48), NULL);
		V_0 = L_0;
		bool L_1 = __this->____certificateAuthority_5;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_2 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)255));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_5, (uint8_t)1, L_4, NULL);
		NullCheck(L_2);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_6;
		L_6 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_2, L_5, NULL);
	}

IL_002b:
	{
		bool L_7 = __this->____hasPathLengthConstraint_6;
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_8 = __this->____pathLengthConstraint_7;
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_11 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_11, (uint8_t)2, L_10, NULL);
		NullCheck(L_9);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_12;
		L_12 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_9, L_11, NULL);
		goto IL_0062;
	}

IL_0050:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_13 = V_0;
		int32_t L_14 = __this->____pathLengthConstraint_7;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_15;
		L_15 = ASN1Convert_FromInt32_mACAC096211E525F124BE0D50D90524ADCB6EA198(L_14, NULL);
		NullCheck(L_13);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16;
		L_16 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_13, L_15, NULL);
	}

IL_0062:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_17);
		return L_18;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509BasicConstraintsExtension_ToString_mBFC61BA07CD2BB8EACCC19A5AE72EA81C11D02E4 (X509BasicConstraintsExtension_t8CC04BD96EBD61494CC89A3272DDBB5F0B3B8A35* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral244BA6FE8878C6A66F7648332C07125DF3AFBC4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324A15BBCCD67A1997F37BF20414A7EB61126AB5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D1E32D587015A9DB04576A49D22A6924F1B9D62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____status_8;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteralEDDFDA94752EB5111EC566E5CAF709B7133C43DA, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
		V_0 = L_11;
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral244BA6FE8878C6A66F7648332C07125DF3AFBC4B, NULL);
		bool L_14 = __this->____certificateAuthority_5;
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514, NULL);
		goto IL_009b;
	}

IL_008f:
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral8D1E32D587015A9DB04576A49D22A6924F1B9D62, NULL);
	}

IL_009b:
	{
		bool L_19 = ___multiLine0;
		if (!L_19)
		{
			goto IL_00ac;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		String_t* L_21;
		L_21 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_20);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, L_21, NULL);
		goto IL_00b8;
	}

IL_00ac:
	{
		StringBuilder_t* L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00b8:
	{
		StringBuilder_t* L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteral324A15BBCCD67A1997F37BF20414A7EB61126AB5, NULL);
		bool L_27 = __this->____hasPathLengthConstraint_6;
		if (!L_27)
		{
			goto IL_00db;
		}
	}
	{
		StringBuilder_t* L_28 = V_0;
		int32_t L_29 = __this->____pathLengthConstraint_7;
		NullCheck(L_28);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_28, L_29, NULL);
		goto IL_00e7;
	}

IL_00db:
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, _stringLiteral548D93DDB2AC6B24373148B19D9A625571AB2318, NULL);
	}

IL_00e7:
	{
		bool L_33 = ___multiLine0;
		if (!L_33)
		{
			goto IL_00f6;
		}
	}
	{
		StringBuilder_t* L_34 = V_0;
		String_t* L_35;
		L_35 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_34);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, L_35, NULL);
	}

IL_00f6:
	{
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_37);
		return L_38;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension__ctor_mBDA55EB3C6594D4F6A06102B4EAF633F86C3E092 (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedEnhancedKeyUsages0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___encodedEnhancedKeyUsages0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C(__this, L_4, NULL);
		__this->____status_4 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_CopyFrom_m9577FF97B8E3074B12B7056BF7E30AA0F84309BF_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, _stringLiteral1EF9E33E97E3023577871E2EA773996440F2F5F9, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C(__this, L_16, NULL);
		__this->____status_4 = L_17;
		return;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___extension0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0012;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0012:
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_5 = __this->____enhKeyUsage_3;
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_6 = (OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3*)il2cpp_codegen_object_new(OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		OidCollection__ctor_m9B8C252AE048962DAD7419597007ABA2793F9D98(L_6, NULL);
		__this->____enhKeyUsage_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____enhKeyUsage_3), (void*)L_6);
	}

IL_0025:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___extension0;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_8 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_8, L_7, NULL);
			V_0 = L_8;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9 = V_0;
			NullCheck(L_9);
			uint8_t L_10;
			L_10 = ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline(L_9, NULL);
			if ((((int32_t)L_10) == ((int32_t)((int32_t)48))))
			{
				goto IL_0047_1;
			}
		}
		{
			String_t* L_11;
			L_11 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral212797907CC7AD095EFEBD10D643DF1F9608C8C1)), NULL);
			CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_12 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
			NullCheck(L_12);
			CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_12, L_11, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509EnhancedKeyUsageExtension_Decode_m1110DD9BD5D717540009DB5D90805458CF07423C_RuntimeMethod_var)));
		}

IL_0047_1:
		{
			V_1 = 0;
			goto IL_006c_1;
		}

IL_004b_1:
		{
			OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_13 = __this->____enhKeyUsage_3;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_14 = V_0;
			int32_t L_15 = V_1;
			NullCheck(L_14);
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_16;
			L_16 = ASN1_get_Item_mF105DA24F3BE9FA3697229CF99B1602B736B647F(L_14, L_15, NULL);
			String_t* L_17;
			L_17 = ASN1Convert_ToOid_mBCE4FD3970C556190FB00A6AD409A6ABB4C627D8(L_16, NULL);
			Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_18 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
			NullCheck(L_18);
			Oid__ctor_m4AF81B9D51BED48AE505251E0874EC654BA07B72(L_18, L_17, NULL);
			NullCheck(L_13);
			int32_t L_19;
			L_19 = OidCollection_Add_m1D4822DF4EA0B912A1DED6AA102D41F7FAEDC8F5(L_13, L_18, NULL);
			int32_t L_20 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
		}

IL_006c_1:
		{
			int32_t L_21 = V_1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = V_0;
			NullCheck(L_22);
			int32_t L_23;
			L_23 = ASN1_get_Count_mBE45E73126FAD2694E9059CAC53B7AC9A5F60833(L_22, NULL);
			if ((((int32_t)L_21) < ((int32_t)L_23)))
			{
				goto IL_004b_1;
			}
		}
		{
			goto IL_007c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Object)
		V_2 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_007e;
	}// end catch (depth: 1)

IL_007c:
	{
		return (int32_t)(0);
	}

IL_007e:
	{
		int32_t L_24 = V_2;
		return L_24;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509EnhancedKeyUsageExtension_ToString_m9576793CE590716A3BB5AAC1632F946DF75605DE (X509EnhancedKeyUsageExtension_t237A41510BAC916B5FFC67B464E1D38980D70BFF* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ECCF64C0782442EC426220868830513FD924C3C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* V_3 = NULL;
	{
		int32_t L_0 = __this->____status_4;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteral5EDC47BC71D706BB11343CC890323569C143CD50, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_11 = __this->____enhKeyUsage_3;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_11, NULL);
		if (L_12)
		{
			goto IL_007a;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_007a:
	{
		StringBuilder_t* L_13 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_13, NULL);
		V_0 = L_13;
		V_2 = 0;
		goto IL_010a;
	}

IL_0087:
	{
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_14 = __this->____enhKeyUsage_3;
		int32_t L_15 = V_2;
		NullCheck(L_14);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_16;
		L_16 = OidCollection_get_Item_m0AEC71C746E735035A05C50EE2721C1E8FE08F7A(L_14, L_15, NULL);
		V_3 = L_16;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_17 = V_3;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_17, NULL);
		bool L_19;
		L_19 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, _stringLiteralE7C7449D840A91B3AF035F43E6106A0BC8372CC6, NULL);
		if (!L_19)
		{
			goto IL_00b4;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteral63DCC50AED43B00BB793B2D0F054171D9D12A15E, NULL);
		goto IL_00c0;
	}

IL_00b4:
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral3ECCF64C0782442EC426220868830513FD924C3C, NULL);
	}

IL_00c0:
	{
		StringBuilder_t* L_24 = V_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_25 = V_3;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_25, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, L_26, NULL);
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		bool L_30 = ___multiLine0;
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		StringBuilder_t* L_31 = V_0;
		String_t* L_32;
		L_32 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_31);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, L_32, NULL);
		goto IL_0106;
	}

IL_00ea:
	{
		int32_t L_34 = V_2;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_35 = __this->____enhKeyUsage_3;
		NullCheck(L_35);
		int32_t L_36;
		L_36 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_35, NULL);
		if ((((int32_t)L_34) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_36, 1)))))
		{
			goto IL_0106;
		}
	}
	{
		StringBuilder_t* L_37 = V_0;
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0106:
	{
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_010a:
	{
		int32_t L_40 = V_2;
		OidCollection_tAAFE5AD288B6365182B7C9D4D66D0DA9A56712B3* L_41 = __this->____enhKeyUsage_3;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = OidCollection_get_Count_m9560D70809087591935904924A15FBEC1FEFEB11(L_41, NULL);
		if ((((int32_t)L_40) < ((int32_t)L_42)))
		{
			goto IL_0087;
		}
	}
	{
		StringBuilder_t* L_43 = V_0;
		NullCheck(L_43);
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_43);
		return L_44;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData__ctor_m90028EC56A5E36272EAA4A9279AE23358D46F547(__this, NULL);
		return;
	}
}
// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::get_Critical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35 (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____critical_2;
		return L_0;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::set_Critical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____critical_2 = L_0;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509Extension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9 (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2AED74A19DD9414DD0792FD340CC531536B8454)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_0028;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3C77EE02D0B62256DB746EEC2F12CB9BC801126A)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509Extension_CopyFrom_m674ABC4ECF701B708C28B546B42B7799CA24D4A9_RuntimeMethod_var)));
	}

IL_0028:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_6 = ___asnEncodedData0;
		AsnEncodedData_CopyFrom_mA5DD4A419C5FC29D82DBE9B69C9F8CBC2872A1F2(__this, L_6, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_7 = V_0;
		NullCheck(L_7);
		bool L_8;
		L_8 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_7, NULL);
		__this->____critical_2 = L_8;
		return;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509Extension::FormatUnkownData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___data0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___data0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_000d;
		}
	}

IL_0007:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_000d:
	{
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0033;
	}

IL_0017:
	{
		StringBuilder_t* L_4 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___data0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), _stringLiteralB4A94E440E57B3321B2097CEC9E046D28EE1C0CD, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, L_7, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0033:
	{
		int32_t L_10 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___data0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_mE0EE68497EDEDD78213EEDC931D68DD35DF6340C (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m1DE9CD768712A07E5803496501CCFDA81CFB2689 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedKeyUsage0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___encodedKeyUsage0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC(__this, L_4, NULL);
		__this->____status_7 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::.ctor(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension__ctor_m2FAA526721435935D0B10E0DB916AF56CFD84751 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, int32_t ___keyUsages0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		bool L_1 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_1, NULL);
		int32_t L_2 = ___keyUsages0;
		int32_t L_3;
		L_3 = X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45(__this, L_2, NULL);
		__this->____keyUsages_6 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_4, NULL);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_0015;
		}
	}

IL_000e:
	{
		int32_t L_3 = __this->____keyUsages_6;
		return L_3;
	}

IL_0015:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_4 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDCE7F577695853459152469012B0121731CD52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509KeyUsageExtension_CopyFrom_mCBCF5CA17676B2030F6C82ED80A008EF029AF733_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, _stringLiteral2FDCE7F577695853459152469012B0121731CD52, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC(__this, L_16, NULL);
		__this->____status_7 = L_17;
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::GetValidFlags(System.Security.Cryptography.X509Certificates.X509KeyUsageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, int32_t ___flags0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___flags0;
		int32_t L_1 = ___flags0;
		if ((((int32_t)((int32_t)((int32_t)L_0&((int32_t)33023)))) == ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		return (int32_t)(0);
	}

IL_000c:
	{
		int32_t L_2 = ___flags0;
		return L_2;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_Decode_mB64239ABDEA862E43E26CF324D3E41ECCF3088BC (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___extension0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		uint8_t L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_0011;
		}
	}
	{
		return (int32_t)(2);
	}

IL_0011:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___extension0;
		NullCheck(L_5);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)3)))
		{
			goto IL_0019;
		}
	}
	{
		return (int32_t)(3);
	}

IL_0019:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___extension0;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0021:
	{
	}
	try
	{// begin try (depth: 1)
		{
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___extension0;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_8 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_8, L_7, NULL);
			V_0 = L_8;
			V_1 = 0;
			V_2 = 1;
			goto IL_0040_1;
		}

IL_002f_1:
		{
			int32_t L_9 = V_1;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_10 = V_0;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_10, NULL);
			int32_t L_12 = V_2;
			int32_t L_13 = L_12;
			V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			NullCheck(L_11);
			int32_t L_14 = L_13;
			uint8_t L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
			V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)(L_9<<8)), (int32_t)L_15));
		}

IL_0040_1:
		{
			int32_t L_16 = V_2;
			ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_17 = V_0;
			NullCheck(L_17);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
			L_18 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_17, NULL);
			NullCheck(L_18);
			if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
			{
				goto IL_002f_1;
			}
		}
		{
			int32_t L_19 = V_1;
			int32_t L_20;
			L_20 = X509KeyUsageExtension_GetValidFlags_m82B1C7DA4F4E0F16090782189E1B4984D133BB45(__this, L_19, NULL);
			__this->____keyUsages_6 = L_20;
			goto IL_005f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005a;
		}
		throw e;
	}

CATCH_005a:
	{// begin catch(System.Object)
		V_3 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0061;
	}// end catch (depth: 1)

IL_005f:
	{
		return (int32_t)(0);
	}

IL_0061:
	{
		int32_t L_21 = V_3;
		return L_21;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509KeyUsageExtension_Encode_m38D20B2FB68EDF3594EDC0D9BA88800ABF305542 (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)NULL;
		int32_t L_0 = __this->____keyUsages_6;
		V_1 = L_0;
		V_2 = (uint8_t)0;
		int32_t L_1 = V_1;
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		uint8_t L_4 = V_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_4);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_5 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_5, (uint8_t)3, L_3, NULL);
		V_0 = L_5;
		goto IL_0081;
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)255))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_7 = V_1;
		G_B5_0 = ((int32_t)(L_7>>8));
		goto IL_002f;
	}

IL_002e:
	{
		int32_t L_8 = V_1;
		G_B5_0 = L_8;
	}

IL_002f:
	{
		V_3 = G_B5_0;
		goto IL_003b;
	}

IL_0032:
	{
		uint8_t L_9 = V_2;
		V_2 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, 1)));
		int32_t L_10 = V_3;
		V_3 = ((int32_t)(L_10>>1));
	}

IL_003b:
	{
		int32_t L_11 = V_3;
		if (((int32_t)(L_11&1)))
		{
			goto IL_0044;
		}
	}
	{
		uint8_t L_12 = V_2;
		if ((((int32_t)L_12) < ((int32_t)8)))
		{
			goto IL_0032;
		}
	}

IL_0044:
	{
		int32_t L_13 = V_1;
		if ((((int32_t)L_13) > ((int32_t)((int32_t)255))))
		{
			goto IL_0064;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = L_14;
		uint8_t L_16 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_16);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = L_15;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_18));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_19, (uint8_t)3, L_17, NULL);
		V_0 = L_19;
		goto IL_0081;
	}

IL_0064:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = L_20;
		uint8_t L_22 = V_2;
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)L_22);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = L_21;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)((int32_t)(uint8_t)L_24));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = L_23;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (uint8_t)((int32_t)(uint8_t)((int32_t)(L_26>>8))));
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_27, (uint8_t)3, L_25, NULL);
		V_0 = L_27;
	}

IL_0081:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_28 = V_0;
		NullCheck(L_28);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29;
		L_29 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_28);
		return L_29;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509KeyUsageExtension_ToString_m270131139984275D7571120A2984F0F5E77E79DC (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t V_3 = 0x0;
	{
		int32_t L_0 = __this->____status_7;
		V_2 = L_0;
		int32_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		int32_t L_11 = __this->____keyUsages_6;
		if (L_11)
		{
			goto IL_0075;
		}
	}
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_0075:
	{
		StringBuilder_t* L_12 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_12, NULL);
		V_0 = L_12;
		int32_t L_13 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_13&((int32_t)128))))
		{
			goto IL_0095;
		}
	}
	{
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, _stringLiteralCABCFE6297E437347D23F1B446C58DD70094E306, NULL);
	}

IL_0095:
	{
		int32_t L_16 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_16&((int32_t)64))))
		{
			goto IL_00c1;
		}
	}
	{
		StringBuilder_t* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_17, NULL);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00b5:
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral91E2D84A2649FBF80361A807D1020FB40280EF31, NULL);
	}

IL_00c1:
	{
		int32_t L_23 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_23&((int32_t)32))))
		{
			goto IL_00ed;
		}
	}
	{
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_24, NULL);
		if ((((int32_t)L_25) <= ((int32_t)0)))
		{
			goto IL_00e1;
		}
	}
	{
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_00e1:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteralEB6BBFD5D01FC65219978A6C56AF3DD9C51AD35E, NULL);
	}

IL_00ed:
	{
		int32_t L_30 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_30&((int32_t)16))))
		{
			goto IL_0119;
		}
	}
	{
		StringBuilder_t* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_31, NULL);
		if ((((int32_t)L_32) <= ((int32_t)0)))
		{
			goto IL_010d;
		}
	}
	{
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_010d:
	{
		StringBuilder_t* L_35 = V_0;
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteral9C1ED970007229D4BBE511BC369FF3ACD197B1F2, NULL);
	}

IL_0119:
	{
		int32_t L_37 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_37&8)))
		{
			goto IL_0144;
		}
	}
	{
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_38, NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0138;
		}
	}
	{
		StringBuilder_t* L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_40, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0138:
	{
		StringBuilder_t* L_42 = V_0;
		NullCheck(L_42);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_42, _stringLiteral001611EA36FEB747E4C160A3E7A402813B416AF1, NULL);
	}

IL_0144:
	{
		int32_t L_44 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_44&4)))
		{
			goto IL_016f;
		}
	}
	{
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_45, NULL);
		if ((((int32_t)L_46) <= ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_47, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0163:
	{
		StringBuilder_t* L_49 = V_0;
		NullCheck(L_49);
		StringBuilder_t* L_50;
		L_50 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, _stringLiteral0B85D604B5CD78CCF01CDA620C0DEF5DCC5C1FD7, NULL);
	}

IL_016f:
	{
		int32_t L_51 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_51&2)))
		{
			goto IL_019a;
		}
	}
	{
		StringBuilder_t* L_52 = V_0;
		NullCheck(L_52);
		int32_t L_53;
		L_53 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_52, NULL);
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_018e;
		}
	}
	{
		StringBuilder_t* L_54 = V_0;
		NullCheck(L_54);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_54, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_018e:
	{
		StringBuilder_t* L_56 = V_0;
		NullCheck(L_56);
		StringBuilder_t* L_57;
		L_57 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_56, _stringLiteral315E5D2D2D07B33F565952A5C0509A988785ABF6, NULL);
	}

IL_019a:
	{
		int32_t L_58 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_58&1)))
		{
			goto IL_01c5;
		}
	}
	{
		StringBuilder_t* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_59, NULL);
		if ((((int32_t)L_60) <= ((int32_t)0)))
		{
			goto IL_01b9;
		}
	}
	{
		StringBuilder_t* L_61 = V_0;
		NullCheck(L_61);
		StringBuilder_t* L_62;
		L_62 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_61, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_01b9:
	{
		StringBuilder_t* L_63 = V_0;
		NullCheck(L_63);
		StringBuilder_t* L_64;
		L_64 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_63, _stringLiteral75C57EB9FD95FB9243FE99EBB78A77B0117BD190, NULL);
	}

IL_01c5:
	{
		int32_t L_65 = __this->____keyUsages_6;
		if (!((int32_t)((int32_t)L_65&((int32_t)32768))))
		{
			goto IL_01f4;
		}
	}
	{
		StringBuilder_t* L_66 = V_0;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_66, NULL);
		if ((((int32_t)L_67) <= ((int32_t)0)))
		{
			goto IL_01e8;
		}
	}
	{
		StringBuilder_t* L_68 = V_0;
		NullCheck(L_68);
		StringBuilder_t* L_69;
		L_69 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_68, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_01e8:
	{
		StringBuilder_t* L_70 = V_0;
		NullCheck(L_70);
		StringBuilder_t* L_71;
		L_71 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_70, _stringLiteral62F92E932A25B80B40DBB89A07F4AD690B6F800D, NULL);
	}

IL_01f4:
	{
		int32_t L_72 = __this->____keyUsages_6;
		V_1 = L_72;
		StringBuilder_t* L_73 = V_0;
		NullCheck(L_73);
		StringBuilder_t* L_74;
		L_74 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_73, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32, NULL);
		StringBuilder_t* L_75 = V_0;
		int32_t L_76 = V_1;
		V_3 = (uint8_t)((int32_t)(uint8_t)L_76);
		String_t* L_77;
		L_77 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&V_3), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_75);
		StringBuilder_t* L_78;
		L_78 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_75, L_77, NULL);
		int32_t L_79 = V_1;
		if ((((int32_t)L_79) <= ((int32_t)((int32_t)255))))
		{
			goto IL_0249;
		}
	}
	{
		StringBuilder_t* L_80 = V_0;
		NullCheck(L_80);
		StringBuilder_t* L_81;
		L_81 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_80, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		StringBuilder_t* L_82 = V_0;
		int32_t L_83 = V_1;
		V_3 = (uint8_t)((int32_t)(uint8_t)((int32_t)(L_83>>8)));
		String_t* L_84;
		L_84 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310((&V_3), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_82);
		StringBuilder_t* L_85;
		L_85 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_82, L_84, NULL);
	}

IL_0249:
	{
		StringBuilder_t* L_86 = V_0;
		NullCheck(L_86);
		StringBuilder_t* L_87;
		L_87 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_86, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, NULL);
		bool L_88 = ___multiLine0;
		if (!L_88)
		{
			goto IL_0264;
		}
	}
	{
		StringBuilder_t* L_89 = V_0;
		String_t* L_90;
		L_90 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_89);
		StringBuilder_t* L_91;
		L_91 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_89, L_90, NULL);
	}

IL_0264:
	{
		StringBuilder_t* L_92 = V_0;
		NullCheck(L_92);
		String_t* L_93;
		L_93 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_92);
		return L_93;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_mFC2A19B1301ABBA5F6C5CE407ABC4F4CA1EB49B1 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m421293DCB67F3A918098962166B8166FD9657D08 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___encodedSubjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_0, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_0);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_1 = ___encodedSubjectKeyIdentifier0;
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_1, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1), (void*)L_2);
		bool L_3 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_5;
		L_5 = X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30(__this, L_4, NULL);
		__this->____status_7 = L_5;
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___subjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___subjectKeyIdentifier0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1_RuntimeMethod_var)));
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___subjectKeyIdentifier0;
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_0023;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_3 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m610C9C804421B7CB519F3A5C7D66827CC1106EE1_RuntimeMethod_var)));
	}

IL_0023:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_4 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_4, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_4);
		bool L_5 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_5, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___subjectKeyIdentifier0;
		NullCheck((RuntimeArray*)L_6);
		RuntimeObject* L_7;
		L_7 = Array_Clone_m66C9D0727C9BAA0995E4142F29B45BC03582E042((RuntimeArray*)L_6, NULL);
		__this->____subjectKeyIdentifier_5 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_7, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_8, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, String_t* ___subjectKeyIdentifier0, bool ___critical1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		String_t* L_0 = ___subjectKeyIdentifier0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = ___subjectKeyIdentifier0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		if ((((int32_t)L_3) >= ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4E1CA5F695C0687C577DB8E17E55E7B5845A445)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_mECF6398B9841FB4533228FE77F51F93316EADE94_RuntimeMethod_var)));
	}

IL_0028:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_5, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_5);
		bool L_6 = ___critical1;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_6, NULL);
		String_t* L_7 = ___subjectKeyIdentifier0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = X509SubjectKeyIdentifierExtension_FromHex_m0C965FECB6AC9330589DBDC182E7EA34EFE4195D(L_7, NULL);
		__this->____subjectKeyIdentifier_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
		L_9 = X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_9, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m3DD2C4E1505A6E625499FBD833BFC076D28D83EB (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___key0, bool ___critical1, const RuntimeMethod* method) 
{
	{
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_0 = ___key0;
		bool L_1 = ___critical1;
		X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::.ctor(System.Security.Cryptography.X509Certificates.PublicKey,System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierHashAlgorithm,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___key0, int32_t ___algorithm1, bool ___critical2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		X509Extension__ctor_mFC88C10C2C6718E6AE74CE37E10D4EBB8FD67BAC(__this, NULL);
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56_RuntimeMethod_var)));
	}

IL_0014:
	{
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_2 = ___key0;
		NullCheck(L_2);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_3;
		L_3 = PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213_inline(L_2, NULL);
		NullCheck(L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_3, NULL);
		V_0 = L_4;
		int32_t L_5 = ___algorithm1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0037;
			}
			case 1:
			{
				goto IL_004d;
			}
			case 2:
			{
				goto IL_008f;
			}
		}
	}
	{
		goto IL_0113;
	}

IL_0037:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_6;
		L_6 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8;
		L_8 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_6, L_7, NULL);
		__this->____subjectKeyIdentifier_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_8);
		goto IL_011e;
	}

IL_004d:
	{
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_9;
		L_9 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_9, L_10, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____subjectKeyIdentifier_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____subjectKeyIdentifier_5;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_11, ((int32_t)12), (RuntimeArray*)L_13, 0, 8, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->____subjectKeyIdentifier_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->____subjectKeyIdentifier_5;
		NullCheck(L_15);
		int32_t L_16 = 0;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_14);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)64)|((int32_t)((int32_t)L_17&((int32_t)15)))))));
		goto IL_011e;
	}

IL_008f:
	{
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_18 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_18, (uint8_t)((int32_t)48), NULL);
		V_1 = L_18;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_19 = V_1;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_20 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ASN1__ctor_mA9AE2197367C1E13DBFDA67E0A383167F52CC114(L_20, (uint8_t)((int32_t)48), NULL);
		NullCheck(L_19);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_21;
		L_21 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_19, L_20, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_22 = L_21;
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_23 = ___key0;
		NullCheck(L_23);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_24;
		L_24 = PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A_inline(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(CryptoConfig_t66E67DD67B2C3224C72C0CBD80A144E29EE016A5_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = CryptoConfig_EncodeOID_mFC779B3B35D074F2804F36F36D9DB4A8E2070CDD(L_25, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_27 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_27, L_26, NULL);
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_28;
		L_28 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_22, L_27, NULL);
		PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* L_29 = ___key0;
		NullCheck(L_29);
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_30;
		L_30 = PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0_inline(L_29, NULL);
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_30, NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_32 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_32, L_31, NULL);
		NullCheck(L_22);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_33;
		L_33 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_22, L_32, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_34 = V_0;
		NullCheck(L_34);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_35 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_34)->max_length)), 1)));
		V_2 = L_35;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = V_0;
		NullCheck(L_38);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_36, 0, (RuntimeArray*)L_37, 1, ((int32_t)(((RuntimeArray*)L_38)->max_length)), NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_39 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_2;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_41 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_41, (uint8_t)3, L_40, NULL);
		NullCheck(L_39);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_42;
		L_42 = ASN1_Add_m4C61487A6CCF48D5CEB0D97B248FE31F9FCD849F(L_39, L_41, NULL);
		SHA1_t0612ADACADC25FB4C22525A579B30354586F0CEE* L_43;
		L_43 = SHA1_Create_m10D40BE4E0A3737F58EB3B7D21B3EB53964BB042(NULL);
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_44 = V_1;
		NullCheck(L_44);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45;
		L_45 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_44);
		NullCheck(L_43);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_46;
		L_46 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_43, L_45, NULL);
		__this->____subjectKeyIdentifier_5 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_46);
		goto IL_011e;
	}

IL_0113:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_47 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_47);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_47, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9AF8D13B64E63A31A01386E007E5C9CF3A6CF5B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_47, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension__ctor_m1858C1B050FAF65946B790737652E874781B4B56_RuntimeMethod_var)));
	}

IL_011e:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_48 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_48, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_48);
		bool L_49 = ___critical2;
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_49, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_50;
		L_50 = X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3(__this, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_50, NULL);
		return;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::get_SubjectKeyIdentifier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____status_7;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)4))))
		{
			goto IL_002e;
		}
	}

IL_000e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->____subjectKeyIdentifier_5;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = __this->____subjectKeyIdentifier_5;
		String_t* L_5;
		L_5 = CryptoConvert_ToHex_m1A0AD4D32CEEC47D3C60CB2E4D05A935C62F261A(L_4, NULL);
		__this->____ski_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ski_6), (void*)L_5);
	}

IL_0027:
	{
		String_t* L_6 = __this->____ski_6;
		return L_6;
	}

IL_002e:
	{
		CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F* L_7 = (CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CryptographicException_tF1AE59E97557B5241330D5998C4D95B6D9D6669F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		CryptographicException__ctor_mE3E5B505DB6A9D573C48AC5BD702E7CF3DE8F01F(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD20A4058B7B405BF173793FAAC54A85874A0CDDE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_get_SubjectKeyIdentifier_mFF2A155072C67F430E7F4B178733A80388943CBA_RuntimeMethod_var)));
	}
}
// System.Void System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* ___asnEncodedData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73);
		s_Il2CppMethodInitialized = true;
	}
	X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* V_0 = NULL;
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = ___asnEncodedData0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A_RuntimeMethod_var)));
	}

IL_000e:
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_2 = ___asnEncodedData0;
		V_0 = ((X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5*)IsInstClass((RuntimeObject*)L_2, X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5_il2cpp_TypeInfo_var));
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_3 = V_0;
		if (L_3)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m7BA18BC14D3028C4C4722E220800563188DA3600(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD615D452AAA84D559E3E5FFF5168A1AF47500E8D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_5, L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC9FB8C73B342D5B3C700EDA7C5212DD547D29E4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&X509SubjectKeyIdentifierExtension_CopyFrom_m959BB16C6973B1B565D02ED9993AF9069019D77A_RuntimeMethod_var)));
	}

IL_002d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_6 = V_0;
		NullCheck(L_6);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_7 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_6)->____oid_0;
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Oid__ctor_m533C0126C7C8D382D3E702287A9AD0CED2D0377D(L_8, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, _stringLiteralDD5A04FDCE8EDE26B5E78DE17CAB2D9DB4D10C73, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_8);
		goto IL_005d;
	}

IL_004c:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_9 = V_0;
		NullCheck(L_9);
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_10 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)L_9)->____oid_0;
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_11 = (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287*)il2cpp_codegen_object_new(Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		Oid__ctor_m3973A5FE5482D45FABC8642E59B655274B0B5D59(L_11, L_10, NULL);
		((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0), (void*)L_11);
	}

IL_005d:
	{
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(L_12, NULL);
		AsnEncodedData_set_RawData_m05F9F17765AD384ECE3A333DCBF6A0572099346B(__this, L_13, NULL);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_14 = V_0;
		NullCheck(L_14);
		bool L_15;
		L_15 = X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline(L_14, NULL);
		X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline(__this, L_15, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline(__this, NULL);
		int32_t L_17;
		L_17 = X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30(__this, L_16, NULL);
		__this->____status_7 = L_17;
		return;
	}
}
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChar(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9 (Il2CppChar ___c0, const RuntimeMethod* method) 
{
	{
		Il2CppChar L_0 = ___c0;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)97))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_1 = ___c0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)102))))
		{
			goto IL_0013;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)97))), ((int32_t)10))));
	}

IL_0013:
	{
		Il2CppChar L_3 = ___c0;
		if ((((int32_t)L_3) < ((int32_t)((int32_t)65))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_4 = ___c0;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)70))))
		{
			goto IL_0026;
		}
	}
	{
		Il2CppChar L_5 = ___c0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, ((int32_t)65))), ((int32_t)10))));
	}

IL_0026:
	{
		Il2CppChar L_6 = ___c0;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)48))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_7 = ___c0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)57))))
		{
			goto IL_0036;
		}
	}
	{
		Il2CppChar L_8 = ___c0;
		return (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_8, ((int32_t)48))));
	}

IL_0036:
	{
		return (uint8_t)((int32_t)255);
	}
}
// System.Byte System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHexChars(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t X509SubjectKeyIdentifierExtension_FromHexChars_mFBC6B2009778633420F9F4FF38D7E641FBF63EFA (Il2CppChar ___c10, Il2CppChar ___c21, const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		Il2CppChar L_0 = ___c10;
		uint8_t L_1;
		L_1 = X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9(L_0, NULL);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)255))))
		{
			goto IL_001b;
		}
	}
	{
		uint8_t L_3 = V_0;
		Il2CppChar L_4 = ___c21;
		uint8_t L_5;
		L_5 = X509SubjectKeyIdentifierExtension_FromHexChar_m6A90ECC8622DD1D2DEA0FB18356E97B15E8371A9(L_4, NULL);
		V_0 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)((int32_t)L_3<<4))|(int32_t)L_5)));
	}

IL_001b:
	{
		uint8_t L_6 = V_0;
		return L_6;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::FromHex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_FromHex_m0C965FECB6AC9330589DBDC182E7EA34EFE4195D (String_t* ___hex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		String_t* L_0 = ___hex0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___hex0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_0 = ((int32_t)(L_2>>1));
		int32_t L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		V_2 = 0;
		V_3 = 0;
		goto IL_003d;
	}

IL_001b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		V_2 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		String_t* L_8 = ___hex0;
		int32_t L_9 = V_3;
		int32_t L_10 = L_9;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		NullCheck(L_8);
		Il2CppChar L_11;
		L_11 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, L_10, NULL);
		String_t* L_12 = ___hex0;
		int32_t L_13 = V_3;
		int32_t L_14 = L_13;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		NullCheck(L_12);
		Il2CppChar L_15;
		L_15 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_12, L_14, NULL);
		uint8_t L_16;
		L_16 = X509SubjectKeyIdentifierExtension_FromHexChars_mFBC6B2009778633420F9F4FF38D7E641FBF63EFA(L_11, L_15, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint8_t)L_16);
	}

IL_003d:
	{
		int32_t L_17 = V_2;
		int32_t L_18 = V_0;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_1;
		return L_19;
	}
}
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Decode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509SubjectKeyIdentifierExtension_Decode_m9E9B87F478F55E202411CBCE3AA314CBF73C7F30 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___extension0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* V_0 = NULL;
	int32_t V_1 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___extension0;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___extension0;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0009;
		}
	}

IL_0007:
	{
		return (int32_t)(1);
	}

IL_0009:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->____ski_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____ski_6), (void*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___extension0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_001c;
		}
	}
	{
		return (int32_t)(2);
	}

IL_001c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___extension0;
		NullCheck(L_6);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((uint32_t)2))))
		{
			goto IL_0024;
		}
	}
	{
		return (int32_t)(4);
	}

IL_0024:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ___extension0;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) >= ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		return (int32_t)(3);
	}

IL_002c:
	{
	}
	try
	{// begin try (depth: 1)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___extension0;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_9 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		ASN1__ctor_m950BFCCF44A987ACBA12142624AA222200EE503E(L_9, L_8, NULL);
		V_0 = L_9;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_10 = V_0;
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = ASN1_get_Value_mA6F9BE5AC19AC060AC42673C8FD5AA864EA046B6(L_10, NULL);
		__this->____subjectKeyIdentifier_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subjectKeyIdentifier_5), (void*)L_11);
		goto IL_0047;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0042;
		}
		throw e;
	}

CATCH_0042:
	{// begin catch(System.Object)
		V_1 = 1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0049;
	}// end catch (depth: 1)

IL_0047:
	{
		return (int32_t)(0);
	}

IL_0049:
	{
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Byte[] System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::Encode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* X509SubjectKeyIdentifierExtension_Encode_m8746D45CE4AC46543D3332BC6001FA1BC7A72CB3 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____subjectKeyIdentifier_5;
		ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* L_1 = (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F*)il2cpp_codegen_object_new(ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ASN1__ctor_mAA538F9E1BE0DE739E9747BC3BC71DC030B018AA(L_1, (uint8_t)4, L_0, NULL);
		NullCheck(L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_1);
		return L_2;
	}
}
// System.String System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509SubjectKeyIdentifierExtension_ToString_m9AE51334149DE6200E554F9C30E2DC5570D36707 (X509SubjectKeyIdentifierExtension_tBF27F0FD0209C19D9AE4A9B04AB313DC48200CE5* __this, bool ___multiLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830B64B4254C502C612E53C83DBEE6238E710499);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->____status_7;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0027;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_003a;
	}

IL_0021:
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_2;
	}

IL_0027:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____raw_1;
		String_t* L_4;
		L_4 = X509Extension_FormatUnkownData_mD0463F5096A6937E95E3165048299CBA9A1A6F7D(__this, L_3, NULL);
		return L_4;
	}

IL_0034:
	{
		return _stringLiteralCD32F08BAB4EE365057213BCC6332DD39C2DE46B;
	}

IL_003a:
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_5 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_5, NULL);
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_6, _stringLiteral830B64B4254C502C612E53C83DBEE6238E710499, NULL);
		if (!L_7)
		{
			goto IL_0067;
		}
	}
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_8 = ((AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8*)__this)->____oid_0;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline(L_8, NULL);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD9B53FE83B364433B53BD1F5712DD31D58258FB4, L_9, NULL);
		return L_10;
	}

IL_0067:
	{
		StringBuilder_t* L_11 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_11, NULL);
		V_0 = L_11;
		V_2 = 0;
		goto IL_00ab;
	}

IL_0071:
	{
		StringBuilder_t* L_12 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->____subjectKeyIdentifier_5;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = Byte_ToString_m793A41EEEB7B422F6FE658E99D2F7683F59EE310(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), _stringLiteral65A0F9B64ACE7C859A284EA54B1190CBF83E1260, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, L_15, NULL);
		int32_t L_17 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->____subjectKeyIdentifier_5;
		NullCheck(L_18);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_18)->max_length)), 1)))))
		{
			goto IL_00a7;
		}
	}
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
	}

IL_00a7:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00ab:
	{
		int32_t L_22 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = __this->____subjectKeyIdentifier_5;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0071;
		}
	}
	{
		bool L_24 = ___multiLine0;
		if (!L_24)
		{
			goto IL_00c5;
		}
	}
	{
		StringBuilder_t* L_25 = V_0;
		String_t* L_26;
		L_26 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_25);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, L_26, NULL);
	}

IL_00c5:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		return L_29;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Net.IPAddress::get_IsIPv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____numbers_9;
		return (bool)((((RuntimeObject*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Boolean System.Net.IPAddress::get_IsIPv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = __this->____numbers_9;
		return (bool)((!(((RuntimeObject*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.UInt32 System.Net.IPAddress::get_PrivateAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
// System.Void System.Net.IPAddress::set_PrivateAddress(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateAddress_m73BD8A117538CBDB80F8FF47D31609FA4855D74E (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		__this->____toString_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toString_10), (void*)(String_t*)NULL);
		__this->____hashCode_11 = 0;
		uint32_t L_0 = ___value0;
		__this->____addressOrScopeId_8 = L_0;
		return;
	}
}
// System.UInt32 System.Net.IPAddress::get_PrivateScopeId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
// System.Void System.Net.IPAddress::set_PrivateScopeId(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress_set_PrivateScopeId_m2BA43F20C3B975BDAC6E330C09E09BFD34594A42 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, uint32_t ___value0, const RuntimeMethod* method) 
{
	{
		__this->____toString_10 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____toString_10), (void*)(String_t*)NULL);
		__this->____hashCode_11 = 0;
		uint32_t L_0 = ___value0;
		__this->____addressOrScopeId_8 = L_0;
		return;
	}
}
// System.Void System.Net.IPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, int64_t ___newAddress0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int64_t L_0 = ___newAddress0;
		if ((((int64_t)L_0) < ((int64_t)((int64_t)0))))
		{
			goto IL_0010;
		}
	}
	{
		int64_t L_1 = ___newAddress0;
		if ((((int64_t)L_1) <= ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))))
		{
			goto IL_001b;
		}
	}

IL_0010:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFC7CE1550BE8A973149B3C0EC550C5A65BDD7413)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B_RuntimeMethod_var)));
	}

IL_001b:
	{
		int64_t L_3 = ___newAddress0;
		IPAddress_set_PrivateAddress_m73BD8A117538CBDB80F8FF47D31609FA4855D74E(__this, ((int32_t)(uint32_t)L_3), NULL);
		return;
	}
}
// System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___address0, int64_t ___scopeid1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B2_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B1_1 = NULL;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___address0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034(NULL);
		G_B2_0 = L_2;
		G_B2_1 = G_B1_1;
	}

IL_000b:
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_3;
		memset((&L_3), 0, sizeof(L_3));
		ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_inline((&L_3), G_B2_0, /*hidden argument*/ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_RuntimeMethod_var);
		int64_t L_4 = ___scopeid1;
		IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19(G_B2_1, L_3, L_4, NULL);
		return;
	}
}
// System.Void System.Net.IPAddress::.ctor(System.ReadOnlySpan`1<System.Byte>,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___address0, int64_t ___scopeid1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0;
		L_0 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___address0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)16))))
		{
			goto IL_0021;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_1 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF8E8E3CB7E102B63C5E2F7011280E4E41798F185)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19_RuntimeMethod_var)));
	}

IL_0021:
	{
		int64_t L_2 = ___scopeid1;
		if ((((int64_t)L_2) < ((int64_t)((int64_t)0))))
		{
			goto IL_002b;
		}
	}
	{
		int64_t L_3 = ___scopeid1;
		if ((((int64_t)L_3) <= ((int64_t)((int64_t)(uint64_t)((uint32_t)(-1))))))
		{
			goto IL_0036;
		}
	}

IL_002b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4818B6292BB54C3BA36849A617241A4C666A6CB8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress__ctor_mFD3C42E1EECC3099D6E347238FB2A0EBE822AF19_RuntimeMethod_var)));
	}

IL_0036:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83_il2cpp_TypeInfo_var, (uint32_t)8);
		__this->____numbers_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____numbers_9), (void*)L_5);
		V_0 = 0;
		goto IL_0072;
	}

IL_0046:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = __this->____numbers_9;
		int32_t L_7 = V_0;
		int32_t L_8 = V_0;
		uint8_t* L_9;
		L_9 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___address0))->____pointer_0))->value, (((int32_t)il2cpp_codegen_multiply(L_8, 2))), ((&___address0))->____length_1);
		int32_t L_10 = *((uint8_t*)L_9);
		int32_t L_11 = V_0;
		uint8_t* L_12;
		L_12 = il2cpp_span_get_item((uint8_t*)((Il2CppByReference*)&(((&___address0))->____pointer_0))->value, (((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_11, 2)), 1))), ((&___address0))->____length_1);
		int32_t L_13 = *((uint8_t*)L_12);
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (uint16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)256))), L_13))));
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0072:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) < ((int32_t)8)))
		{
			goto IL_0046;
		}
	}
	{
		int64_t L_16 = ___scopeid1;
		IPAddress_set_PrivateScopeId_m2BA43F20C3B975BDAC6E330C09E09BFD34594A42(__this, ((int32_t)(uint32_t)L_16), NULL);
		return;
	}
}
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38(__this, NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(((int32_t)23));
	}

IL_000b:
	{
		return (int32_t)(2);
	}
}
// System.String System.Net.IPAddress::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddress_ToString_m91FE727877BEAA0115F497387E2E9CB0B45C3895 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B3_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* G_B4_1 = NULL;
	{
		String_t* L_0 = __this->____toString_10;
		if (L_0)
		{
			goto IL_0034;
		}
	}
	{
		bool L_1;
		L_1 = IPAddress_get_IsIPv4_m912994B89DDE21F85E4FE40381CDFF1688BE3F38(__this, NULL);
		G_B2_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0024;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_2 = __this->____numbers_9;
		uint32_t L_3;
		L_3 = IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline(__this, NULL);
		String_t* L_4;
		L_4 = IPAddressParser_IPv6AddressToString_m7C25DEA2FB9E3F863777653CB9C314BBEDF911A6(L_2, L_3, NULL);
		G_B4_0 = L_4;
		G_B4_1 = G_B2_0;
		goto IL_002f;
	}

IL_0024:
	{
		uint32_t L_5;
		L_5 = IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline(__this, NULL);
		String_t* L_6;
		L_6 = IPAddressParser_IPv4AddressToString_m3D56686708BDA87E76737D94441BF1AE486922D2(L_5, NULL);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_0;
	}

IL_002f:
	{
		NullCheck(G_B4_1);
		G_B4_1->____toString_10 = G_B4_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B4_1->____toString_10), (void*)G_B4_0);
	}

IL_0034:
	{
		String_t* L_7 = __this->____toString_10;
		return L_7;
	}
}
// System.Boolean System.Net.IPAddress::Equals(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, RuntimeObject* ___comparandObj0, bool ___compareScopeId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = ___comparandObj0;
		V_0 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)IsInstClass((RuntimeObject*)L_0, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var));
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = V_0;
		if (L_1)
		{
			goto IL_000c;
		}
	}
	{
		return (bool)0;
	}

IL_000c:
	{
		int32_t L_2;
		L_2 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(__this, NULL);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = IPAddress_get_AddressFamily_m1CE4BCCE499BD70B22F9E37B3F266F9306A98C21(L_3, NULL);
		if ((((int32_t)L_2) == ((int32_t)L_4)))
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		bool L_5;
		L_5 = IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884(__this, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		V_1 = 0;
		goto IL_0040;
	}

IL_0028:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_6 = V_0;
		NullCheck(L_6);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_7 = L_6->____numbers_9;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		uint16_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_11 = __this->____numbers_9;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_10) == ((int32_t)L_14)))
		{
			goto IL_003c;
		}
	}
	{
		return (bool)0;
	}

IL_003c:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0040:
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0028;
		}
	}
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_17 = V_0;
		NullCheck(L_17);
		uint32_t L_18;
		L_18 = IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline(L_17, NULL);
		uint32_t L_19;
		L_19 = IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline(__this, NULL);
		if ((((int32_t)L_18) == ((int32_t)L_19)))
		{
			goto IL_0057;
		}
	}
	{
		bool L_20 = ___compareScopeId1;
		return (bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0);
	}

IL_0057:
	{
		return (bool)1;
	}

IL_0059:
	{
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_21 = V_0;
		NullCheck(L_21);
		uint32_t L_22;
		L_22 = IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline(L_21, NULL);
		uint32_t L_23;
		L_23 = IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline(__this, NULL);
		return (bool)((((int32_t)L_22) == ((int32_t)L_23))? 1 : 0);
	}
}
// System.Boolean System.Net.IPAddress::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IPAddress_Equals_m5EA56A0CBC4F66012C11628D8CC75E03E5A8C462 (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, RuntimeObject* ___comparand0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparand0;
		bool L_1;
		L_1 = IPAddress_Equals_mC4514B3B7F9B95B79A1121706C115AECE61636C7(__this, L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.Int32 System.Net.IPAddress::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddress_GetHashCode_m243850627E81961E58E3A7A0A39A1F365C47A4BA (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->____hashCode_11;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = __this->____hashCode_11;
		return L_1;
	}

IL_000f:
	{
		bool L_2;
		L_2 = IPAddress_get_IsIPv6_m957F80A11C7E40C2CCAE554F12AA547E387B6884(__this, NULL);
		if (!L_2)
		{
			goto IL_0065;
		}
	}
	{
		int8_t* L_3 = (int8_t*) alloca(((uintptr_t)((int32_t)20)));
		memset(L_3, 0, ((uintptr_t)((int32_t)20)));
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_inline((&L_4), (void*)(L_3), ((int32_t)20), /*hidden argument*/Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_RuntimeMethod_var);
		V_1 = L_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = __this->____numbers_9;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_6;
		memset((&L_6), 0, sizeof(L_6));
		ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_inline((&L_6), L_5, /*hidden argument*/ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		L_7 = MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_inline(L_6, MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		V_2 = L_7;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8 = V_1;
		ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462((&V_2), L_8, ReadOnlySpan_1_CopyTo_m8144AA3941DF7B7C2C665680221977E1D15D1462_RuntimeMethod_var);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_9;
		L_9 = Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_inline((&V_1), ((int32_t)16), Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_RuntimeMethod_var);
		uint32_t L_10 = __this->____addressOrScopeId_8;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = BitConverter_TryWriteBytes_mC08570066B061A5EEBC9E54FFE8B4D10EDB3EC9B(L_9, L_10, NULL);
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_12 = V_1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_13;
		L_13 = Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84(L_12, Span_1_op_Implicit_mD249188242C0C9D3192A31E9F7FA74C683F05B84_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		uint64_t L_14;
		L_14 = Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline(NULL);
		int32_t L_15;
		L_15 = Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline(L_13, L_14, NULL);
		V_0 = L_15;
		goto IL_0081;
	}

IL_0065:
	{
		uint32_t* L_16 = (&__this->____addressOrScopeId_8);
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_17;
		L_17 = MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_inline(L_16, 1, MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_18;
		L_18 = MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_inline(L_17, MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		uint64_t L_19;
		L_19 = Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline(NULL);
		int32_t L_20;
		L_20 = Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline(L_18, L_19, NULL);
		V_0 = L_20;
	}

IL_0081:
	{
		int32_t L_21 = V_0;
		__this->____hashCode_11 = L_21;
		int32_t L_22 = __this->____hashCode_11;
		return L_22;
	}
}
// System.Byte[] System.Net.IPAddress::ThrowAddressNullException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034 (const RuntimeMethod* method) 
{
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_0 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8A577A5A6848BEDC7A1DBA1211A06E627EEF0057)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IPAddress_ThrowAddressNullException_m2D5037C15BE289427E4A761A643C4F26C2F3F034_RuntimeMethod_var)));
	}
}
// System.Void System.Net.IPAddress::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddress__cctor_m83F9B947B6C0D0F8DEA3E0C62FCCC2573495D6CA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* L_0 = (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C*)il2cpp_codegen_object_new(ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5(L_0, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Any_0), (void*)L_0);
		ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* L_1 = (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C*)il2cpp_codegen_object_new(ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5(L_1, ((int64_t)((int32_t)16777343)), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Loopback_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Loopback_1), (void*)L_1);
		ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* L_2 = (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C*)il2cpp_codegen_object_new(ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5(L_2, ((int64_t)(uint64_t)((uint32_t)(-1))), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Broadcast_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Broadcast_2), (void*)L_2);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_3 = ((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___Broadcast_2;
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___None_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___None_3), (void*)L_3);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_5 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5(L_5, L_4, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Any_5), (void*)L_5);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (uint8_t)1);
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_8 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5(L_8, L_7, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Loopback_6 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6Loopback_6), (void*)L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_10 = (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484*)il2cpp_codegen_object_new(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		IPAddress__ctor_m8D2578858CF6F8E56591F45C8A14150DEFFA44F5(L_10, L_9, ((int64_t)0), NULL);
		((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6None_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields*)il2cpp_codegen_static_fields_for(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var))->___IPv6None_7), (void*)L_10);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.IPAddress/ReadOnlyIPAddress::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyIPAddress__ctor_m0E47AC9070535FCCC4796C165AC8DAB6FA2B5AC5 (ReadOnlyIPAddress_t1FB2E22B01EEDE37F828218A245EA1FF5960B00C* __this, int64_t ___newAddress0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___newAddress0;
		il2cpp_codegen_runtime_class_init_inline(IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_il2cpp_TypeInfo_var);
		IPAddress__ctor_mC240D2060BA0F5A96D286CDE3772FE4354D7030B(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Net.IPAddressParser::IPv4AddressToString(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv4AddressToString_m3D56686708BDA87E76737D94441BF1AE486922D2 (uint32_t ___address0, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)30)));
		memset(L_0, 0, ((uintptr_t)((int32_t)30)));
		V_0 = (Il2CppChar*)(L_0);
		uint32_t L_1 = ___address0;
		Il2CppChar* L_2 = V_0;
		int32_t L_3;
		L_3 = IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91(L_1, L_2, NULL);
		V_1 = L_3;
		Il2CppChar* L_4 = V_0;
		int32_t L_5 = V_1;
		String_t* L_6;
		L_6 = String_CreateString_m3F8794FEB452558B8A68C65E1F0B603B3D94E0E2(NULL, L_4, 0, L_5, NULL);
		return L_6;
	}
}
// System.Void System.Net.IPAddressParser::IPv4AddressToString(System.UInt32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_IPv4AddressToString_m4113E0673C882A7CB1313639E2836FB24B9BC6A0 (uint32_t ___address0, StringBuilder_t* ___destination1, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)((int32_t)30)));
		memset(L_0, 0, ((uintptr_t)((int32_t)30)));
		V_0 = (Il2CppChar*)(L_0);
		uint32_t L_1 = ___address0;
		Il2CppChar* L_2 = V_0;
		int32_t L_3;
		L_3 = IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91(L_1, L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = ___destination1;
		Il2CppChar* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Int32 System.Net.IPAddressParser::IPv4AddressToStringHelper(System.UInt32,System.Char*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IPAddressParser_IPv4AddressToStringHelper_m4226589AD61857FE45C082110271FFF2D3DF8C91 (uint32_t ___address0, Il2CppChar* ___addressString1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___address0;
		Il2CppChar* L_1 = ___addressString1;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)((int32_t)L_0&((int32_t)255))), L_1, (&V_0), NULL);
		Il2CppChar* L_2 = ___addressString1;
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_2, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_4), 2))))) = (int16_t)((int32_t)46);
		uint32_t L_5 = ___address0;
		Il2CppChar* L_6 = ___addressString1;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)(((int32_t)((uint32_t)L_5>>8))&((int32_t)255))), L_6, (&V_0), NULL);
		Il2CppChar* L_7 = ___addressString1;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), 2))))) = (int16_t)((int32_t)46);
		uint32_t L_10 = ___address0;
		Il2CppChar* L_11 = ___addressString1;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)(((int32_t)((uint32_t)L_10>>((int32_t)16)))&((int32_t)255))), L_11, (&V_0), NULL);
		Il2CppChar* L_12 = ___addressString1;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_12, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_14), 2))))) = (int16_t)((int32_t)46);
		uint32_t L_15 = ___address0;
		Il2CppChar* L_16 = ___addressString1;
		IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F(((int32_t)(((int32_t)((uint32_t)L_15>>((int32_t)24)))&((int32_t)255))), L_16, (&V_0), NULL);
		int32_t L_17 = V_0;
		return L_17;
	}
}
// System.String System.Net.IPAddressParser::IPv6AddressToString(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IPAddressParser_IPv6AddressToString_m7C25DEA2FB9E3F863777653CB9C314BBEDF911A6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, uint32_t ___scopeId1, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___address0;
		uint32_t L_1 = ___scopeId1;
		StringBuilder_t* L_2;
		L_2 = IPAddressParser_IPv6AddressToStringHelper_m405EE1B288D87500878DD96ADAEE31B106CCF930(L_0, L_1, NULL);
		String_t* L_3;
		L_3 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_2, NULL);
		return L_3;
	}
}
// System.Text.StringBuilder System.Net.IPAddressParser::IPv6AddressToStringHelper(System.UInt16[],System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* IPAddressParser_IPv6AddressToStringHelper_m405EE1B288D87500878DD96ADAEE31B106CCF930 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, uint32_t ___scopeId1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0;
		L_0 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)65), NULL);
		V_0 = L_0;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___address0;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_2;
		L_2 = ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54(L_1, ReadOnlySpan_1_op_Implicit_m22DF3B7E5AFF3E8C8902EC1D98CD56CBC8375F54_RuntimeMethod_var);
		bool L_3;
		L_3 = IPv6AddressHelper_ShouldHaveIpv4Embedded_m08BEFD0452A0145779E70931B00F2D6EA15A1E70(L_2, NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___address0;
		StringBuilder_t* L_5 = V_0;
		IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284(L_4, 0, 6, L_5, NULL);
		StringBuilder_t* L_6 = V_0;
		StringBuilder_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_7, NULL);
		NullCheck(L_6);
		Il2CppChar L_9;
		L_9 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_6, ((int32_t)il2cpp_codegen_subtract(L_8, 1)), NULL);
		if ((((int32_t)L_9) == ((int32_t)((int32_t)58))))
		{
			goto IL_0039;
		}
	}
	{
		StringBuilder_t* L_10 = V_0;
		NullCheck(L_10);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)58), NULL);
	}

IL_0039:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_12 = ___address0;
		uint32_t L_13;
		L_13 = IPAddressParser_ExtractIPv4Address_mB79D4899358C69C1FC7C44C81A26BBD976FC2CB6(L_12, NULL);
		StringBuilder_t* L_14 = V_0;
		IPAddressParser_IPv4AddressToString_m4113E0673C882A7CB1313639E2836FB24B9BC6A0(L_13, L_14, NULL);
		goto IL_0050;
	}

IL_0047:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_15 = ___address0;
		StringBuilder_t* L_16 = V_0;
		IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284(L_15, 0, 8, L_16, NULL);
	}

IL_0050:
	{
		uint32_t L_17 = ___scopeId1;
		if (!L_17)
		{
			goto IL_0062;
		}
	}
	{
		StringBuilder_t* L_18 = V_0;
		NullCheck(L_18);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_18, ((int32_t)37), NULL);
		uint32_t L_20 = ___scopeId1;
		NullCheck(L_19);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m3C5F10B877B802CA99FA61EC5360B30631270062(L_19, L_20, NULL);
	}

IL_0062:
	{
		StringBuilder_t* L_22 = V_0;
		return L_22;
	}
}
// System.Void System.Net.IPAddressParser::FormatIPv4AddressNumber(System.Int32,System.Char*,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_FormatIPv4AddressNumber_m716041E973744C431B090589D624C53696FD801F (int32_t ___number0, Il2CppChar* ___addressString1, int32_t* ___offset2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t* G_B4_1 = NULL;
	int32_t G_B1_0 = 0;
	int32_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	int32_t* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	int32_t* G_B2_1 = NULL;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t* G_B5_2 = NULL;
	{
		int32_t* L_0 = ___offset2;
		int32_t* L_1 = ___offset2;
		int32_t L_2 = *((int32_t*)L_1);
		int32_t L_3 = ___number0;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if ((((int32_t)L_3) > ((int32_t)((int32_t)99))))
		{
			G_B4_0 = L_2;
			G_B4_1 = L_0;
			goto IL_0013;
		}
	}
	{
		int32_t L_4 = ___number0;
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		if ((((int32_t)L_4) > ((int32_t)((int32_t)9))))
		{
			G_B3_0 = G_B1_0;
			G_B3_1 = G_B1_1;
			goto IL_0010;
		}
	}
	{
		G_B5_0 = 1;
		G_B5_1 = G_B2_0;
		G_B5_2 = G_B2_1;
		goto IL_0014;
	}

IL_0010:
	{
		G_B5_0 = 2;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0014;
	}

IL_0013:
	{
		G_B5_0 = 3;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0014:
	{
		*((int32_t*)G_B5_2) = (int32_t)((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0));
		int32_t* L_5 = ___offset2;
		int32_t L_6 = *((int32_t*)L_5);
		V_0 = L_6;
	}

IL_0019:
	{
		int32_t L_7 = ___number0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = Math_DivRem_m531807E96CEE227EF54C8C16753B3F05A0F8BCB5(L_7, ((int32_t)10), (&V_1), NULL);
		___number0 = L_8;
		Il2CppChar* L_9 = ___addressString1;
		int32_t L_10 = V_0;
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		V_0 = L_11;
		int32_t L_12 = V_1;
		*((int16_t*)((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_9, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), 2))))) = (int16_t)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_12)));
		int32_t L_13 = ___number0;
		if (L_13)
		{
			goto IL_0019;
		}
	}
	{
		return;
	}
}
// System.Void System.Net.IPAddressParser::AppendSections(System.UInt16[],System.Int32,System.Int32,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendSections_m141C016465F9E7E1538E03340FEC16F89B500284 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, int32_t ___fromInclusive1, int32_t ___toExclusive2, StringBuilder_t* ___buffer3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5295380188F75D696383F8BDB2147F0053791372);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___address0;
		int32_t L_1 = ___fromInclusive1;
		int32_t L_2 = ___toExclusive2;
		int32_t L_3 = ___fromInclusive1;
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_4;
		memset((&L_4), 0, sizeof(L_4));
		ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_inline((&L_4), L_0, L_1, ((int32_t)il2cpp_codegen_subtract(L_2, L_3)), /*hidden argument*/ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_RuntimeMethod_var);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_5;
		L_5 = IPv6AddressHelper_FindCompressionRange_m5BA0C004FA7BE7CB3C520AB47C4D6B6FA6C13C56(L_4, NULL);
		ValueTuple_2_t973F7AB0EF5DD3619E518A966941F10D8098F52D L_6 = L_5;
		int32_t L_7 = L_6.___Item1_0;
		V_0 = L_7;
		int32_t L_8 = L_6.___Item2_1;
		V_1 = L_8;
		V_2 = (bool)0;
		int32_t L_9 = ___fromInclusive1;
		V_3 = L_9;
		goto IL_003d;
	}

IL_0022:
	{
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_002e;
		}
	}
	{
		StringBuilder_t* L_11 = ___buffer3;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)58), NULL);
	}

IL_002e:
	{
		V_2 = (bool)1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_13 = ___address0;
		int32_t L_14 = V_3;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint16_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		StringBuilder_t* L_17 = ___buffer3;
		IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2(L_16, L_17, NULL);
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_003d:
	{
		int32_t L_19 = V_3;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) < ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		StringBuilder_t* L_22 = ___buffer3;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral5295380188F75D696383F8BDB2147F0053791372, NULL);
		V_2 = (bool)0;
		int32_t L_24 = V_1;
		___fromInclusive1 = L_24;
	}

IL_0056:
	{
		int32_t L_25 = ___fromInclusive1;
		V_4 = L_25;
		goto IL_0079;
	}

IL_005b:
	{
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_0067;
		}
	}
	{
		StringBuilder_t* L_27 = ___buffer3;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)58), NULL);
	}

IL_0067:
	{
		V_2 = (bool)1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_29 = ___address0;
		int32_t L_30 = V_4;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint16_t L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		StringBuilder_t* L_33 = ___buffer3;
		IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2(L_32, L_33, NULL);
		int32_t L_34 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0079:
	{
		int32_t L_35 = V_4;
		int32_t L_36 = ___toExclusive2;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_005b;
		}
	}
	{
		return;
	}
}
// System.Void System.Net.IPAddressParser::AppendHex(System.UInt16,System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IPAddressParser_AppendHex_m877259AD615A68FDC55EDC188758E5AA95C124B2 (uint16_t ___value0, StringBuilder_t* ___buffer1, const RuntimeMethod* method) 
{
	Il2CppChar* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Il2CppChar* G_B3_0 = NULL;
	Il2CppChar* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Il2CppChar* G_B4_1 = NULL;
	{
		int8_t* L_0 = (int8_t*) alloca(((uintptr_t)8));
		memset(L_0, 0, ((uintptr_t)8));
		V_0 = (Il2CppChar*)(L_0);
		V_1 = 4;
	}

IL_0007:
	{
		uint16_t L_1 = ___value0;
		V_2 = ((int32_t)((int32_t)L_1%((int32_t)16)));
		uint16_t L_2 = ___value0;
		___value0 = (uint16_t)((int32_t)(uint16_t)((int32_t)((int32_t)L_2/((int32_t)16))));
		Il2CppChar* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		V_1 = L_5;
		int32_t L_6 = V_2;
		G_B2_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 2))));
		if ((((int32_t)L_6) < ((int32_t)((int32_t)10))))
		{
			G_B3_0 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_3, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_5), 2))));
			goto IL_002c;
		}
	}
	{
		int32_t L_7 = V_2;
		G_B4_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)97), ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)10))))));
		G_B4_1 = G_B2_0;
		goto IL_0031;
	}

IL_002c:
	{
		int32_t L_8 = V_2;
		G_B4_0 = ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)48), L_8)));
		G_B4_1 = G_B3_0;
	}

IL_0031:
	{
		*((int16_t*)G_B4_1) = (int16_t)G_B4_0;
		uint16_t L_9 = ___value0;
		if (L_9)
		{
			goto IL_0007;
		}
	}
	{
		StringBuilder_t* L_10 = ___buffer1;
		Il2CppChar* L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = V_1;
		NullCheck(L_10);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_10, ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_11, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_12), 2)))), ((int32_t)il2cpp_codegen_subtract(4, L_13)), NULL);
		return;
	}
}
// System.UInt32 System.Net.IPAddressParser::ExtractIPv4Address(System.UInt16[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t IPAddressParser_ExtractIPv4Address_mB79D4899358C69C1FC7C44C81A26BBD976FC2CB6 (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___address0, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___address0;
		NullCheck(L_0);
		int32_t L_1 = 7;
		uint16_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		uint16_t L_3;
		L_3 = IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E(L_2, NULL);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___address0;
		NullCheck(L_4);
		int32_t L_5 = 6;
		uint16_t L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		uint16_t L_7;
		L_7 = IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E(L_6, NULL);
		return ((int32_t)(((int32_t)((int32_t)L_3<<((int32_t)16)))|(int32_t)L_7));
	}
}
// System.UInt16 System.Net.IPAddressParser::Reverse(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t IPAddressParser_Reverse_mDEBC20FC5D00F7C505E1ADE428CB6967B72B425E (uint16_t ___number0, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = ___number0;
		uint16_t L_1 = ___number0;
		return (uint16_t)((int32_t)(uint16_t)((int32_t)(((int32_t)(((int32_t)((int32_t)L_0>>8))&((int32_t)255)))|((int32_t)(((int32_t)((int32_t)L_1<<8))&((int32_t)65280))))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValueAttribute__ctor_m34A58D59C771D6EB91D55AE4F97413CD711B8FB5 (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___value0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		__this->____value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_2);
		return;
	}
}
// System.Void System.ComponentModel.DefaultValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultValueAttribute__ctor_mC4A9C09859A2DFDDDADB72E3CC91DF3C874A45BB (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		return;
	}
}
// System.Object System.ComponentModel.DefaultValueAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultValueAttribute_get_Value_mE5E6819598048D2585D6DB475918E60ACE802470 (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_0;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DefaultValueAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultValueAttribute_Equals_m61297DB3C3A7E76FC868A653371853B14BC42FC1 (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC*)IsInstClass((RuntimeObject*)L_1, DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC_il2cpp_TypeInfo_var));
		DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, __this);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, __this);
		DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, L_6);
		return L_7;
	}

IL_002a:
	{
		DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object System.ComponentModel.DefaultValueAttribute::get_Value() */, L_8);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}

IL_0034:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DefaultValueAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultValueAttribute_GetHashCode_m74095EF1526DBFB27CF56AFA21690C77A5289A33 (DefaultValueAttribute_tD45612CBB8D83D43A266980AB11467557BF753CC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.EditorBrowsableAttribute::.ctor(System.ComponentModel.EditorBrowsableState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorBrowsableAttribute__ctor_mE6105AD9666A4DF03DB2590C687EAC6B12D908CE (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, int32_t ___state0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___state0;
		__this->___browsableState_0 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.EditorBrowsableAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditorBrowsableAttribute_Equals_m2DFA6ADDE69D95657A8257840C01FCAF74A6B02F (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D*)IsInstSealed((RuntimeObject*)L_1, EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D_il2cpp_TypeInfo_var));
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->___browsableState_0;
		int32_t L_5 = __this->___browsableState_0;
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_001f:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.EditorBrowsableAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EditorBrowsableAttribute_GetHashCode_m1AE50FA45B338D71189AA3C249DB56406DEC798C (EditorBrowsableAttribute_t799D6615373D176F298280AF7FE0434560DB2A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.BrowsableAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035 (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, bool ___browsable0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___browsable0;
		__this->___U3CBrowsableU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.BrowsableAttribute::get_Browsable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0 (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CBrowsableU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.BrowsableAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BrowsableAttribute_Equals_m8EF756EC88F170513772F14FC08BDAD1EC2B863D (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* G_B4_0 = NULL;
	BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* G_B3_0 = NULL;
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* L_2 = ((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76*)IsInstSealed((RuntimeObject*)L_1, BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var));
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01));
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_3 = V_2;
		G_B5_0 = L_3;
		goto IL_0025;
	}

IL_001b:
	{
		NullCheck(G_B4_0);
		bool L_4;
		L_4 = BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline(G_B4_0, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0025:
	{
		V_0 = G_B5_0;
		bool L_6;
		L_6 = BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline(__this, NULL);
		V_1 = L_6;
		bool L_7;
		L_7 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_0), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		bool L_8 = V_1;
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		return (bool)((int32_t)(((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9));
	}
}
// System.Int32 System.ComponentModel.BrowsableAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BrowsableAttribute_GetHashCode_m40CEC719AE0A79F4339009D2E473342E59BAEDD1 (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		return L_1;
	}
}
// System.Void System.ComponentModel.BrowsableAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BrowsableAttribute__cctor_mEE3D932880029AEFB302C723B33DE48D4497A369 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* L_0 = (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76*)il2cpp_codegen_object_new(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035(L_0, (bool)1, NULL);
		((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Yes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Yes_0), (void*)L_0);
		BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* L_1 = (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76*)il2cpp_codegen_object_new(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BrowsableAttribute__ctor_m1828B5114921E3FF83082211F2FBE82517559035(L_1, (bool)0, NULL);
		((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___No_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___No_1), (void*)L_1);
		BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* L_2 = ((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Yes_0;
		((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Default_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_StaticFields*)il2cpp_codegen_static_fields_for(BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76_il2cpp_TypeInfo_var))->___Default_2), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DescriptionAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__ctor_m5A3D1DF34E3AACD9FF690A3CBE78F822F3A2EF97 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___description0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___description0;
		DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800_inline(__this, L_0, NULL);
		return;
	}
}
// System.String System.ComponentModel.DescriptionAttribute::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_Description_m153F27F0911FC88F9DD8856BCA449AF5BE46F100 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline(__this, NULL);
		return L_0;
	}
}
// System.String System.ComponentModel.DescriptionAttribute::get_DescriptionValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDescriptionValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::set_DescriptionValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDescriptionValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean System.ComponentModel.DescriptionAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DescriptionAttribute_Equals_m1CD8A994656358F30F29950E0F51F6FDFCA5306A (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)IsInstClass((RuntimeObject*)L_1, DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var));
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, __this);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DescriptionAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DescriptionAttribute_GetHashCode_m611CD3279B54EE7678ED42409F142DF4303A3357 (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DescriptionAttribute::get_Description() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.DescriptionAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DescriptionAttribute__cctor_m834DAB71B6D455F27EDFF240E854DC175D402775 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* L_0 = (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86*)il2cpp_codegen_object_new(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DescriptionAttribute__ctor_m6140728AB61731BC01DEC122FDAA93854AAC723F(L_0, NULL);
		((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields*)il2cpp_codegen_static_fields_for(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_StaticFields*)il2cpp_codegen_static_fields_for(DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__ctor_mC6EAF0212217A1CEE757459ADDB8D48D3B61A4EB (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CCategoryU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCategoryU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Void System.ComponentModel.DesignerCategoryAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583 (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, String_t* ___category0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___category0;
		__this->___U3CCategoryU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCategoryU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.String System.ComponentModel.DesignerCategoryAttribute::get_Category()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77 (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCategoryU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignerCategoryAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesignerCategoryAttribute_Equals_m1AC49F2D111D21ED13E8BA1F2E40C1F3B859260C (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)IsInstSealed((RuntimeObject*)L_1, DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var));
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline(L_3, NULL);
		String_t* L_5;
		L_5 = DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline(__this, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DesignerCategoryAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DesignerCategoryAttribute_GetHashCode_mAAF7FBB9086B1B80FB129D77C2B2E195235A54FA (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.DesignerCategoryAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerCategoryAttribute__cctor_m2D9C1A5339A186C402AC69970452A5AB62479855 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1842163E600730C192914B1BCFB77A9A809A8070);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60081E4C6B9BD5BBFC2D172205F8D7236FF4A669);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544);
		s_Il2CppMethodInitialized = true;
	}
	{
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_0 = (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)il2cpp_codegen_object_new(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583(L_0, _stringLiteralDEF84EBA6C9A8E7BB2723A279F7980993BF92544, NULL);
		((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Component_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Component_0), (void*)L_0);
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_1 = (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)il2cpp_codegen_object_new(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DesignerCategoryAttribute__ctor_mC6EAF0212217A1CEE757459ADDB8D48D3B61A4EB(L_1, NULL);
		((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Default_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Default_1), (void*)L_1);
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_2 = (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)il2cpp_codegen_object_new(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583(L_2, _stringLiteral1842163E600730C192914B1BCFB77A9A809A8070, NULL);
		((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Form_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Form_2), (void*)L_2);
		DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* L_3 = (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715*)il2cpp_codegen_object_new(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DesignerCategoryAttribute__ctor_mC3C69034E0CFED55C40A25A7AAF09F85CF4BB583(L_3, _stringLiteral60081E4C6B9BD5BBFC2D172205F8D7236FF4A669, NULL);
		((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Generic_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_StaticFields*)il2cpp_codegen_static_fields_for(DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715_il2cpp_TypeInfo_var))->___Generic_3), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.ctor(System.ComponentModel.DesignerSerializationVisibility)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1 (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, int32_t ___visibility0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		int32_t L_0 = ___visibility0;
		__this->___U3CVisibilityU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::get_Visibility()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVisibilityU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DesignerSerializationVisibilityAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DesignerSerializationVisibilityAttribute_Equals_m0BE73F494AEFD4118E82420382640874637AD94F (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD V_2;
	memset((&V_2), 0, sizeof(V_2));
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* G_B4_0 = NULL;
	DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* G_B3_0 = NULL;
	Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_2 = ((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)IsInstSealed((RuntimeObject*)L_1, DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var));
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_001b;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD));
		Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD L_3 = V_2;
		G_B5_0 = L_3;
		goto IL_0025;
	}

IL_001b:
	{
		NullCheck(G_B4_0);
		int32_t L_4;
		L_4 = DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E_inline(G_B4_0, NULL);
		Nullable_1_t90388648579A1BFFFE199D6661A1830A04037BDD L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED((&L_5), L_4, /*hidden argument*/Nullable_1__ctor_mA134D7B58EC7EB68D5F9ED202535F98072274CED_RuntimeMethod_var);
		G_B5_0 = L_5;
	}

IL_0025:
	{
		V_0 = G_B5_0;
		int32_t L_6;
		L_6 = DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E_inline(__this, NULL);
		V_1 = L_6;
		int32_t L_7;
		L_7 = Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_inline((&V_0), Nullable_1_GetValueOrDefault_mF692237E48B1B8AD2C3CBB8197E3500580032F6D_RuntimeMethod_var);
		int32_t L_8 = V_1;
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_inline((&V_0), Nullable_1_get_HasValue_m29692805E9192FDCC37DF37F59872F128A21DA8A_RuntimeMethod_var);
		return (bool)((int32_t)(((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0)&(int32_t)L_9));
	}
}
// System.Int32 System.ComponentModel.DesignerSerializationVisibilityAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DesignerSerializationVisibilityAttribute_GetHashCode_m33E067E26D97A5A40DD224E33230351C6169579F (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
// System.Void System.ComponentModel.DesignerSerializationVisibilityAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DesignerSerializationVisibilityAttribute__cctor_mAD072BAB004E4D3331CE67CBC6D1012D5916101D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_0 = (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)il2cpp_codegen_object_new(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1(L_0, 2, NULL);
		((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Content_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Content_0), (void*)L_0);
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_1 = (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)il2cpp_codegen_object_new(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1(L_1, 0, NULL);
		((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Hidden_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Hidden_1), (void*)L_1);
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_2 = (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83*)il2cpp_codegen_object_new(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DesignerSerializationVisibilityAttribute__ctor_m6E0E13DF36C75007C7917D0B635ACA0FCBFADDC1(L_2, 1, NULL);
		((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Visible_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Visible_2), (void*)L_2);
		DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* L_3 = ((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Visible_2;
		((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Default_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_StaticFields*)il2cpp_codegen_static_fields_for(DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83_il2cpp_TypeInfo_var))->___Default_3), (void*)L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_mE16A1FD5C8425C7F00EC5728A1227AF6FBEFB968 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m396F07353E80428B4AEB85DC66F5B9380A077AE3 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___displayName0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___displayName0;
		DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C_inline(__this, L_0, NULL);
		return;
	}
}
// System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayName_mA3E91855E1EAC0085BF2C1EB501B7801B9563D5D (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC_inline(__this, NULL);
		return L_0;
	}
}
// System.String System.ComponentModel.DisplayNameAttribute::get_DisplayNameValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.ComponentModel.DisplayNameAttribute::set_DisplayNameValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Boolean System.ComponentModel.DisplayNameAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DisplayNameAttribute_Equals_m06E1BC5B48A9D42FECF4BEC20338F8DD6A525E88 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8*)IsInstClass((RuntimeObject*)L_1, DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var));
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, L_3);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, __this);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		return L_6;
	}

IL_0022:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DisplayNameAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DisplayNameAttribute_GetHashCode_m882BB47C783C5D55149DB892F41108D4953B8B16 (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String System.ComponentModel.DisplayNameAttribute::get_DisplayName() */, __this);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.DisplayNameAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__cctor_mD9A9030A1931AD6CDF0428CFEC3E34B91652A8F4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* L_0 = (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8*)il2cpp_codegen_object_new(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DisplayNameAttribute__ctor_mE16A1FD5C8425C7F00EC5728A1227AF6FBEFB968(L_0, NULL);
		((DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields*)il2cpp_codegen_static_fields_for(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_StaticFields*)il2cpp_codegen_static_fields_for(DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* V_0 = NULL;
	{
		V_0 = (ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD*)NULL;
		Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* L_0 = __this->____parent_1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* L_1 = __this->____parent_1;
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_get_CanRaiseEventsInternal_mAF68FD325FA909AEA171953DF83CB1051A9EA3CC(L_1, NULL);
		if (!L_2)
		{
			goto IL_001f;
		}
	}

IL_0017:
	{
		RuntimeObject* L_3 = ___key0;
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_4;
		L_4 = EventHandlerList_Find_m5E0CAB161102D1551CF2E636C8BC7B71C959A5C8(__this, L_3, NULL);
		V_0 = L_4;
	}

IL_001f:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_5 = V_0;
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		return (Delegate_t*)NULL;
	}

IL_0024:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_6 = V_0;
		NullCheck(L_6);
		Delegate_t* L_7 = L_6->____handler_2;
		return L_7;
	}
}
// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::Find(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* EventHandlerList_Find_m5E0CAB161102D1551CF2E636C8BC7B71C959A5C8 (EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* V_0 = NULL;
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_0 = __this->____head_0;
		V_0 = L_0;
		goto IL_0019;
	}

IL_0009:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->____key_1;
		RuntimeObject* L_3 = ___key0;
		if ((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)L_3)))
		{
			goto IL_001c;
		}
	}
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_4 = V_0;
		NullCheck(L_4);
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_5 = L_4->____next_0;
		V_0 = L_5;
	}

IL_0019:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_6 = V_0;
		if (L_6)
		{
			goto IL_0009;
		}
	}

IL_001c:
	{
		ListEntry_t79912EDFEB6393AED2E64F343D55531E643F4EAD* L_7 = V_0;
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.ArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayConverter__ctor_mAA6B57C16F167FF104B8E23402DE87ACA5E13A2B (ArrayConverter_tE417E9DB044C4317BF7F9B7DF5CD0F4C7C38672C* __this, const RuntimeMethod* method) 
{
	{
		CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.BaseNumberConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F (BaseNumberConverter_t303017F656B17940A0669EF225DAE3FBE644F706* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.BooleanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanConverter__ctor_m50990A1CB60D3557199985EF164FF1E8AFCADC87 (BooleanConverter_tC955870C6FB390C432D032E5025342C0BCB2DEE9* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DecimalConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecimalConverter__ctor_mC1E815EF17DE8DBD91FB472C83A4F38514704B46 (DecimalConverter_tCBE948B718842C42CB22DF92D59AB2C1EC0FAEDF* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DefaultEventAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultEventAttribute__ctor_m7FE746F300D84188A24F4CF38A330EA255E5EE46 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String System.ComponentModel.DefaultEventAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DefaultEventAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultEventAttribute_Equals_m1B7CE5677AFA75A3AD6223345C99D5EA796622B2 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07*)IsInstSealed((RuntimeObject*)L_0, DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var));
		DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3_inline(L_2, NULL);
		String_t* L_4;
		L_4 = DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3_inline(__this, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DefaultEventAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultEventAttribute_GetHashCode_mD3A5713780914BA883AF0AB0AD88E5427D910184 (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
// System.Void System.ComponentModel.DefaultEventAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultEventAttribute__cctor_m8F7247E7092040D01936116D0D07453F983A06E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* L_0 = (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07*)il2cpp_codegen_object_new(DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultEventAttribute__ctor_m7FE746F300D84188A24F4CF38A330EA255E5EE46(L_0, (String_t*)NULL, NULL);
		((DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_StaticFields*)il2cpp_codegen_static_fields_for(DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var))->___Default_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_StaticFields*)il2cpp_codegen_static_fields_for(DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07_il2cpp_TypeInfo_var))->___Default_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DefaultPropertyAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPropertyAttribute__ctor_m43FD7A91A431F72713FFA7829DE9BD24A321FD3A (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___U3CNameU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.String System.ComponentModel.DefaultPropertyAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890 (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.DefaultPropertyAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultPropertyAttribute_Equals_mCD709C4B3F90DDDBDB45AE2969732EA3775CF26E (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4*)IsInstSealed((RuntimeObject*)L_0, DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var));
		DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890_inline(L_2, NULL);
		String_t* L_4;
		L_4 = DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890_inline(__this, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.DefaultPropertyAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DefaultPropertyAttribute_GetHashCode_m401BC4A948F7890DDD718B884C6CE06296578BA2 (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
// System.Void System.ComponentModel.DefaultPropertyAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultPropertyAttribute__cctor_mE7CC9E813F3663E5D55E5F2FA52D6E1A8C0040E8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* L_0 = (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4*)il2cpp_codegen_object_new(DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DefaultPropertyAttribute__ctor_m43FD7A91A431F72713FFA7829DE9BD24A321FD3A(L_0, (String_t*)NULL, NULL);
		((DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_StaticFields*)il2cpp_codegen_static_fields_for(DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var))->___Default_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_StaticFields*)il2cpp_codegen_static_fields_for(DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4_il2cpp_TypeInfo_var))->___Default_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.DoubleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleConverter__ctor_m3CA5201BA68AB510BB2112A6755FCFEAB6DE53BA (DoubleConverter_t1FB61A3A8171D3023AA9678231D9C480A67799DE* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.EditorAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorAttribute__ctor_mAD74D6DDDC7752F9BD989300FBE02E1E4FE83FAA (EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* __this, String_t* ___typeName0, String_t* ___baseTypeName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___typeName0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = String_ToUpper_mFC5C17C8BFF52540CC7A73E36DFC9617281325D1(L_0, L_1, NULL);
		String_t* L_3 = ___typeName0;
		__this->___U3CEditorTypeNameU3Ek__BackingField_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEditorTypeNameU3Ek__BackingField_1), (void*)L_3);
		String_t* L_4 = ___baseTypeName1;
		__this->___U3CEditorBaseTypeNameU3Ek__BackingField_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEditorBaseTypeNameU3Ek__BackingField_0), (void*)L_4);
		return;
	}
}
// System.String System.ComponentModel.EditorAttribute::get_EditorBaseTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EditorAttribute_get_EditorBaseTypeName_m1CF77F3AA9AB5AE9CD3585FE86B24E1DD21B1EB4 (EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CEditorBaseTypeNameU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String System.ComponentModel.EditorAttribute::get_EditorTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EditorAttribute_get_EditorTypeName_m587C6D66C4567BC349AC9E2C65FE5E021ED2EB09 (EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CEditorTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.EditorAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EditorAttribute_Equals_mE07449682FEDC2A230A7ECB0A005E1F91F6EF693 (EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		V_0 = ((EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C*)IsInstSealed((RuntimeObject*)L_1, EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C_il2cpp_TypeInfo_var));
		EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = EditorAttribute_get_EditorTypeName_m587C6D66C4567BC349AC9E2C65FE5E021ED2EB09_inline(L_3, NULL);
		String_t* L_5;
		L_5 = EditorAttribute_get_EditorTypeName_m587C6D66C4567BC349AC9E2C65FE5E021ED2EB09_inline(__this, NULL);
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = EditorAttribute_get_EditorBaseTypeName_m1CF77F3AA9AB5AE9CD3585FE86B24E1DD21B1EB4_inline(L_7, NULL);
		String_t* L_9;
		L_9 = EditorAttribute_get_EditorBaseTypeName_m1CF77F3AA9AB5AE9CD3585FE86B24E1DD21B1EB4_inline(__this, NULL);
		bool L_10;
		L_10 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, L_9, NULL);
		return L_10;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.EditorAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EditorAttribute_GetHashCode_mBB45B68F421A996ABBF4B6AC8DC506D4C96CE7DC (EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.ExpandableObjectConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpandableObjectConverter__ctor_mB2F0F20591EA133C5A0BCC4C871CDDD6974730DC (ExpandableObjectConverter_t2D9FF3B389851F14034FBA07A57944EB27C18F63* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Int16Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int16Converter__ctor_m3803A7772B21F49200FC142C193A40DC286C9DFF (Int16Converter_t6513884DE2649E1FA03AC947F80FCE6BE61792BB* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Int32Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Converter__ctor_m88220DA12F6ED6FE4D1232B73C20DECE9EFC63FF (Int32Converter_t461564B848A4566C9E72FED147B4FC64BD4BE6ED* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Int64Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int64Converter__ctor_m3C124DB065F27F6BEAB7ABAF4B3D13E6A9F3E94C (Int64Converter_tF9458770A9BF6718A4866AFEAABCACD022754E23* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.ReferenceConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceConverter__ctor_mECD358A5C07B37EFD8659FDEF4C067A16E51171E (ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		Type_t* L_0 = ___type0;
		__this->____type_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____type_3), (void*)L_0);
		return;
	}
}
// System.Void System.ComponentModel.ReferenceConverter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceConverter__cctor_m7A6A35413E4F4527499053D28FDEFB4BB91AC1A5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B);
		s_Il2CppMethodInitialized = true;
	}
	{
		((ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_StaticFields*)il2cpp_codegen_static_fields_for(ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var))->___s_none_2 = _stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B;
		Il2CppCodeGenWriteBarrier((void**)(&((ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_StaticFields*)il2cpp_codegen_static_fields_for(ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var))->___s_none_2), (void*)_stringLiteral9D254E50F4DE5BE7CA9E72BD2F890B87F910B88B);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.SettingsBindableAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBindableAttribute__ctor_mC0F9613A258449016DF2A53220343DB20A388A91 (SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* __this, bool ___bindable0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___bindable0;
		__this->___U3CBindableU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.SettingsBindableAttribute::get_Bindable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsBindableAttribute_get_Bindable_m448BA41F157DF20B461625E635BAA0DD861668F3 (SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CBindableU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.SettingsBindableAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SettingsBindableAttribute_Equals_mF15B757F5C23A846B04FB2FB277E23572CF6FECB (SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		if (!((SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B*)IsInstSealed((RuntimeObject*)L_2, SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		NullCheck(((SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B*)CastclassSealed((RuntimeObject*)L_3, SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var)));
		bool L_4;
		L_4 = SettingsBindableAttribute_get_Bindable_m448BA41F157DF20B461625E635BAA0DD861668F3_inline(((SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B*)CastclassSealed((RuntimeObject*)L_3, SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var)), NULL);
		bool L_5;
		L_5 = SettingsBindableAttribute_get_Bindable_m448BA41F157DF20B461625E635BAA0DD861668F3_inline(__this, NULL);
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.SettingsBindableAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SettingsBindableAttribute_GetHashCode_m890594467DEA957BDEC69BC6EA32A5728DD84D47 (SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = SettingsBindableAttribute_get_Bindable_m448BA41F157DF20B461625E635BAA0DD861668F3_inline(__this, NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Boolean_GetHashCode_mEDB6904770C962BAF4510E5D24F08083C33900E3((&V_0), NULL);
		return L_1;
	}
}
// System.Void System.ComponentModel.SettingsBindableAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsBindableAttribute__cctor_m7535DF492E918C80ED2CB42AD5ABD1ACB1D57C68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* L_0 = (SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B*)il2cpp_codegen_object_new(SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SettingsBindableAttribute__ctor_mC0F9613A258449016DF2A53220343DB20A388A91(L_0, (bool)1, NULL);
		((SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_StaticFields*)il2cpp_codegen_static_fields_for(SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var))->___Yes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_StaticFields*)il2cpp_codegen_static_fields_for(SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var))->___Yes_0), (void*)L_0);
		SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* L_1 = (SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B*)il2cpp_codegen_object_new(SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SettingsBindableAttribute__ctor_mC0F9613A258449016DF2A53220343DB20A388A91(L_1, (bool)0, NULL);
		((SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_StaticFields*)il2cpp_codegen_static_fields_for(SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var))->___No_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_StaticFields*)il2cpp_codegen_static_fields_for(SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B_il2cpp_TypeInfo_var))->___No_1), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.SingleConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleConverter__ctor_m463B63EB8D945D2D43E5B8099D8F0EC24AEBDA7A (SingleConverter_tF3C0B984505288F214BFECEAD90CA0498B7378C1* __this, const RuntimeMethod* method) 
{
	{
		BaseNumberConverter__ctor_m697E7E5DB315CE6CDA318F256A634BAEF3C7C76F(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.StringConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringConverter__ctor_m074D8686ED6ABC0E64C20D1EFD4406F215E7187A (StringConverter_t1AE794D42AE414C00F2443B76F3EA694C310FF1E* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TimeSpanConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpanConverter__ctor_m7319DCEEDA2578B340AD4FEEE010AE5CEFAC9BD5 (TimeSpanConverter_tB91A0347D2F1228A476F50705D3048A50F1A4B9F* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_m0E1A55E1BD368F0AABCAF766BBCE1D275777A52A (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String System.Type::get_AssemblyQualifiedName() */, L_0);
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_1);
		return;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__ctor_mF1AB0946F2E1E398141ACF79468EA4DB1FE27139 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, String_t* ___typeName0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___typeName0;
		__this->___U3CConverterTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConverterTypeNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String System.ComponentModel.TypeConverterAttribute::get_ConverterTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.TypeConverterAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConverterAttribute_Equals_mA3BF2C8CFA0AE8B5D0F52E066B1141AA53B4E015 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___obj0;
		V_0 = ((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)IsInstSealed((RuntimeObject*)L_0, TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var));
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(L_2, NULL);
		String_t* L_4;
		L_4 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.TypeConverterAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConverterAttribute_GetHashCode_m23ACA2A297447E17150BF490188919676FBD8A01 (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void System.ComponentModel.TypeConverterAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverterAttribute__cctor_m7A206154E18C66B9CEA6934D8AFB1AE9DA4EA666 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* L_0 = (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3*)il2cpp_codegen_object_new(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TypeConverterAttribute__ctor_mEEE3CA7C17555BA93BB76201BA2BCF879E617DA9(L_0, NULL);
		((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_StaticFields*)il2cpp_codegen_static_fields_for(TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.CollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionConverter__ctor_m20ED0C661750EBE427D356F24AED92A407988147 (CollectionConverter_t47EAA5F1386CB891414AB5096CFA50418A5D64B0* __this, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Component::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Finalize_m124F6FA2207E76C9DF18740E653C49D483A6E5C6 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			VirtualActionInvoker1< bool >::Invoke(9 /* System.Void System.ComponentModel.Component::Dispose(System.Boolean) */, __this, (bool)0);
			goto IL_0010;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0010:
	{
		return;
	}
}
// System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_get_CanRaiseEvents_m23993A519269D33F515ADADAB081C6ADF1551AF4 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean System.ComponentModel.Component::get_CanRaiseEventsInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_get_CanRaiseEventsInternal_mAF68FD325FA909AEA171953DF83CB1051A9EA3CC (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.ComponentModel.Component::get_CanRaiseEvents() */, __this);
		return L_0;
	}
}
// System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_get_Site_mAB0D574C04230287AFDEB9E691F885A49E18A80C (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___site_2;
		return L_0;
	}
}
// System.Void System.ComponentModel.Component::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_m7D0C063EA18E1FFA59CB369232131150372DC7B2 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void System.ComponentModel.Component::Dispose(System.Boolean) */, __this, (bool)1);
		il2cpp_codegen_runtime_class_init_inline(GC_t920F9CF6EBB7C787E5010A4352E1B587F356DC58_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m71815DBD5A0CD2EA1BE43317B08B7A14949EDC65(__this, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_Dispose_mD106692D0A494758CFFA2C9ACC0D7F94DD389192 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, bool ___disposing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IContainer_t717EF6801E89E9463045041A0C482723AC06DA86_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* V_0 = NULL;
	bool V_1 = false;
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* V_2 = NULL;
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_006e;
		}
	}
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_006d;
					}
				}
				{
					Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_006d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				RuntimeObject* L_4 = __this->___site_2;
				if (!L_4)
				{
					goto IL_0035_1;
				}
			}
			{
				RuntimeObject* L_5 = __this->___site_2;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container() */, ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var, L_5);
				if (!L_6)
				{
					goto IL_0035_1;
				}
			}
			{
				RuntimeObject* L_7 = __this->___site_2;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.ComponentModel.IContainer System.ComponentModel.ISite::get_Container() */, ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var, L_7);
				NullCheck(L_8);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void System.ComponentModel.IContainer::Remove(System.ComponentModel.IComponent) */, IContainer_t717EF6801E89E9463045041A0C482723AC06DA86_il2cpp_TypeInfo_var, L_8, __this);
			}

IL_0035_1:
			{
				EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* L_9 = __this->___events_3;
				if (!L_9)
				{
					goto IL_0062_1;
				}
			}
			{
				EventHandlerList_t057D7531265C1DF014C8C83AF251E908D1A0B1C8* L_10 = __this->___events_3;
				il2cpp_codegen_runtime_class_init_inline(Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var);
				RuntimeObject* L_11 = ((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields*)il2cpp_codegen_static_fields_for(Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var))->___EventDisposed_1;
				NullCheck(L_10);
				Delegate_t* L_12;
				L_12 = EventHandlerList_get_Item_m9AD24EA65E3832B81146EC24604BABE4FC3CFCC7(L_10, L_11, NULL);
				V_2 = ((EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82*)CastclassSealed((RuntimeObject*)L_12, EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82_il2cpp_TypeInfo_var));
				EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_13 = V_2;
				if (!L_13)
				{
					goto IL_0062_1;
				}
			}
			{
				EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* L_14 = V_2;
				il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
				EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_15 = ((EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var))->___Empty_0;
				NullCheck(L_14);
				EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline(L_14, __this, L_15, NULL);
			}

IL_0062_1:
			{
				goto IL_006e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006e:
	{
		return;
	}
}
// System.Object System.ComponentModel.Component::GetService(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetService_mBAA7A515C81E800F2EEF6B796A5C4AA7C08B0A57 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, Type_t* ___service0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___site_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		Type_t* L_3 = ___service0;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, Type_t* >::Invoke(0 /* System.Object System.IServiceProvider::GetService(System.Type) */, IServiceProvider_t642A40617C0AF43F2D9DF6DF156D3F1809AD2BB6_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}

IL_0012:
	{
		return NULL;
	}
}
// System.Boolean System.ComponentModel.Component::get_DesignMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_get_DesignMode_m1F9F6A7CF2856B86B6571430C7F403A6393B90F0 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___site_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.ComponentModel.ISite::get_DesignMode() */, ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0011:
	{
		return (bool)0;
	}
}
// System.String System.ComponentModel.Component::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_ToString_m6B31E5C41739F547FD9F10B6439E8C3F1E15EBC3 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___site_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = InterfaceFuncInvoker0< String_t* >::Invoke(2 /* System.String System.ComponentModel.ISite::get_Name() */, ISite_t4BB2A7E2B477FC6B1AF9D0554FF8B07204356E93_il2cpp_TypeInfo_var, L_2);
		Type_t* L_4;
		L_4 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_4);
		String_t* L_6;
		L_6 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_3, _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5, L_5, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		return L_6;
	}

IL_002b:
	{
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_7);
		return L_8;
	}
}
// System.Void System.ComponentModel.Component::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component__ctor_mDA70A27899B8D66203C57A3E8678A11E033B4DF6 (Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083* __this, const RuntimeMethod* method) 
{
	{
		MarshalByRefObject__ctor_mCBAD191F9BB35587528256781970FDFEFCDBE538(__this, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Component::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component__cctor_mFA01BE8B3C6836B029B2E607352AF2E0D3D10057 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields*)il2cpp_codegen_static_fields_for(Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var))->___EventDisposed_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_StaticFields*)il2cpp_codegen_static_fields_for(Component_t7DA251DAA9E59801CC5FE8E27F37027143BED083_il2cpp_TypeInfo_var))->___EventDisposed_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.ComponentConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentConverter__ctor_m55556BF96FD3D27C7D9F5B413514A01DF0A3911C (ComponentConverter_tFE75D55373FA41F9E4EC733FEDC24C8166A3D7CE* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(ReferenceConverter_tEE21E5B01337B87A67DD99890A0427DAB108CAD2_il2cpp_TypeInfo_var);
		ReferenceConverter__ctor_mECD358A5C07B37EFD8659FDEF4C067A16E51171E(__this, L_0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.EnumConverter::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumConverter__ctor_m3E3C7D81C8092A5591BAA556288B2A3E22DCA99B (EnumConverter_t2E799BC1F322DBF25DEFEC2C57C006223320182D* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2(__this, NULL);
		Type_t* L_0 = ___type0;
		__this->___type_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_3), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.TypeConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConverter__ctor_mA5B1882A94D0491297B903563E8B03D75B2F67A2 (TypeConverter_t5257E1653EB845D0044BBEDEB7B8AED7A061592C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Win32Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m0B20F25EC4A56A122FF766429AF40AF6292E11B1 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Marshal_GetLastWin32Error_mCD7EBA7503BF36F46DB58D98E96101FB67684379(NULL);
		Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281(__this, L_0, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mFC38F1C99031D227C6BB3CA07099866D39994281 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___error0;
		int32_t L_1 = ___error0;
		String_t* L_2;
		L_2 = Win32Exception_GetErrorMessage_m4DF2B191F4BBBF3B7AC82CE276E3E62F0A9159CC(L_1, NULL);
		Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4(__this, L_0, L_2, NULL);
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_mB0380F996944EDFCF9CACC7F28A18874F19B4FD4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, int32_t ___error0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message1;
		ExternalException__ctor_m289660079DD06ADACDAABE3BC8948AF7C73A8602(__this, L_0, NULL);
		int32_t L_1 = ___error0;
		__this->___nativeErrorCode_18 = L_1;
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception__ctor_m1B3DF3F51BBF050C18F933B36027A8A4902668C4 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_1 = ___context1;
		ExternalException__ctor_m3B89FDD35A0B6E96CE69B2FAD48FB832402167AC(__this, L_0, L_1, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_2, _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836, NULL);
		__this->___nativeErrorCode_18 = L_3;
		return;
	}
}
// System.Void System.ComponentModel.Win32Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2 (Win32Exception_t15A75629914EB77C816D8219D93ED78E50C74BE9* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Win32Exception_GetObjectData_mB7993FD0BE12222D5518373EBAB84F89651D99D2_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		int32_t L_3 = __this->___nativeErrorCode_18;
		NullCheck(L_2);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_2, _stringLiteral3BF6290AF676E80C38F6589505DFD9ECD0590836, L_3, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___info0;
		StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 L_5 = ___context1;
		Exception_GetObjectData_mD69929DB0BB2512240908B9EEE21778CB7B72DA9(__this, L_4, L_5, NULL);
		return;
	}
}
// System.String System.ComponentModel.Win32Exception::GetErrorMessage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Win32Exception_GetErrorMessage_m4DF2B191F4BBBF3B7AC82CE276E3E62F0A9159CC (int32_t ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2802A9301C19413CB7F4E27669891AE233E74AD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral347BD96BC18B22D437A751E98B8B12B9FF171229);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral393675B7B89ED13307BB22662AFC326F6FD7BBA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CAB08554552B91BA981CD02709F3608049743F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F81F92407132C01FCBA0B31D7B46D0565978E58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A83C8F3F967D3600B00869EB5D24C78AFA71C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FCF7A87CABC373319B2F3FA01CF5A0164A66AFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8398C464CEF2A8E224363DAF635848402299705A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89228C2272C203A431928EA4D77EC3641DC74018);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98086E81726E63C07D5EE51033D818164107DDF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1709E965184FB01440CCA167288AABC938DF2B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC705511F599E168CB4A19DE96F050E694A04892);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBACA539D75FA73DDDF3F50DD9184448E7FA5C58D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC55A209603A8816AA928E5D683D66E9AE643A83A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7D3548860AD1BC0D9141620DC4DD9E8A4809A2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8682A75717174CD9261F7BF3E200FB1F95C3C2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD5CDF6F085705A984082B0F14828C1DBE6A2C57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE92258D76E8AE90A5B2808E9FE961A24A4FA1FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE16AFF540287588AFBE93DE74387A9E2AF88621B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE71F295D9CF58DA2D871442B14557E57C3912CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD09EAD139D405830AF16300A6875BA89AF9EB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF428852DD02174C34C4A9A66F6A49711BF8470D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5A333AFDC77CE93EC4EC2C0AB10FDE8EE3695F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCD210A96CF1970B48B92647765BF4F3670D2D23);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___error0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)120))))
		{
			goto IL_00b0;
		}
	}
	{
		int32_t L_1 = ___error0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)33))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_2 = ___error0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_02f1;
			}
			case 1:
			{
				goto IL_04e9;
			}
			case 2:
			{
				goto IL_02f7;
			}
			case 3:
			{
				goto IL_02fd;
			}
			case 4:
			{
				goto IL_0303;
			}
			case 5:
			{
				goto IL_0309;
			}
			case 6:
			{
				goto IL_030f;
			}
			case 7:
			{
				goto IL_04e9;
			}
			case 8:
			{
				goto IL_04e9;
			}
			case 9:
			{
				goto IL_04e9;
			}
			case 10:
			{
				goto IL_04e9;
			}
			case 11:
			{
				goto IL_04e9;
			}
			case 12:
			{
				goto IL_04e9;
			}
			case 13:
			{
				goto IL_0315;
			}
			case 14:
			{
				goto IL_031b;
			}
			case 15:
			{
				goto IL_04e9;
			}
			case 16:
			{
				goto IL_04e9;
			}
			case 17:
			{
				goto IL_0321;
			}
			case 18:
			{
				goto IL_0327;
			}
		}
	}
	{
		int32_t L_3 = ___error0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)24))))
		{
			goto IL_032d;
		}
	}
	{
		int32_t L_4 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, ((int32_t)31))))
		{
			case 0:
			{
				goto IL_0333;
			}
			case 1:
			{
				goto IL_0339;
			}
			case 2:
			{
				goto IL_033f;
			}
		}
	}
	{
		goto IL_04e9;
	}

IL_0081:
	{
		int32_t L_5 = ___error0;
		if ((((int32_t)L_5) > ((int32_t)((int32_t)55))))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_6 = ___error0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)50))))
		{
			goto IL_0345;
		}
	}
	{
		int32_t L_7 = ___error0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)55))))
		{
			goto IL_034b;
		}
	}
	{
		goto IL_04e9;
	}

IL_009b:
	{
		int32_t L_8 = ___error0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)87))))
		{
			goto IL_0351;
		}
	}
	{
		int32_t L_9 = ___error0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)120))))
		{
			goto IL_0357;
		}
	}
	{
		goto IL_04e9;
	}

IL_00b0:
	{
		int32_t L_10 = ___error0;
		if ((((int32_t)L_10) > ((int32_t)((int32_t)267))))
		{
			goto IL_00ed;
		}
	}
	{
		int32_t L_11 = ___error0;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)127))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_12 = ___error0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)123))))
		{
			goto IL_035d;
		}
	}
	{
		int32_t L_13 = ___error0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)127))))
		{
			goto IL_0363;
		}
	}
	{
		goto IL_04e9;
	}

IL_00d2:
	{
		int32_t L_14 = ___error0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)183))))
		{
			goto IL_0369;
		}
	}
	{
		int32_t L_15 = ___error0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)267))))
		{
			goto IL_036f;
		}
	}
	{
		goto IL_04e9;
	}

IL_00ed:
	{
		int32_t L_16 = ___error0;
		if ((((int32_t)L_16) > ((int32_t)((int32_t)6000))))
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_17 = ___error0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)995))))
		{
			goto IL_0375;
		}
	}
	{
		int32_t L_18 = ___error0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)6000))))
		{
			goto IL_037b;
		}
	}
	{
		goto IL_04e9;
	}

IL_0110:
	{
		int32_t L_19 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract(L_19, ((int32_t)10004))))
		{
			case 0:
			{
				goto IL_0381;
			}
			case 1:
			{
				goto IL_04e9;
			}
			case 2:
			{
				goto IL_04e9;
			}
			case 3:
			{
				goto IL_04e9;
			}
			case 4:
			{
				goto IL_04e9;
			}
			case 5:
			{
				goto IL_0387;
			}
			case 6:
			{
				goto IL_04e9;
			}
			case 7:
			{
				goto IL_04e9;
			}
			case 8:
			{
				goto IL_04e9;
			}
			case 9:
			{
				goto IL_038d;
			}
			case 10:
			{
				goto IL_0393;
			}
			case 11:
			{
				goto IL_04e9;
			}
			case 12:
			{
				goto IL_04e9;
			}
			case 13:
			{
				goto IL_04e9;
			}
			case 14:
			{
				goto IL_04e9;
			}
			case 15:
			{
				goto IL_04e9;
			}
			case 16:
			{
				goto IL_04e9;
			}
			case 17:
			{
				goto IL_04e9;
			}
			case 18:
			{
				goto IL_0399;
			}
			case 19:
			{
				goto IL_04e9;
			}
			case 20:
			{
				goto IL_039f;
			}
			case 21:
			{
				goto IL_04e9;
			}
			case 22:
			{
				goto IL_04e9;
			}
			case 23:
			{
				goto IL_04e9;
			}
			case 24:
			{
				goto IL_04e9;
			}
			case 25:
			{
				goto IL_04e9;
			}
			case 26:
			{
				goto IL_04e9;
			}
			case 27:
			{
				goto IL_04e9;
			}
			case 28:
			{
				goto IL_04e9;
			}
			case 29:
			{
				goto IL_04e9;
			}
			case 30:
			{
				goto IL_04e9;
			}
			case 31:
			{
				goto IL_03a5;
			}
			case 32:
			{
				goto IL_03ab;
			}
			case 33:
			{
				goto IL_03b1;
			}
			case 34:
			{
				goto IL_03b7;
			}
			case 35:
			{
				goto IL_03bd;
			}
			case 36:
			{
				goto IL_03c3;
			}
			case 37:
			{
				goto IL_03c9;
			}
			case 38:
			{
				goto IL_03cf;
			}
			case 39:
			{
				goto IL_03d5;
			}
			case 40:
			{
				goto IL_03db;
			}
			case 41:
			{
				goto IL_03e1;
			}
			case 42:
			{
				goto IL_03e7;
			}
			case 43:
			{
				goto IL_03ed;
			}
			case 44:
			{
				goto IL_03f3;
			}
			case 45:
			{
				goto IL_03f9;
			}
			case 46:
			{
				goto IL_03ff;
			}
			case 47:
			{
				goto IL_0405;
			}
			case 48:
			{
				goto IL_040b;
			}
			case 49:
			{
				goto IL_0411;
			}
			case 50:
			{
				goto IL_0417;
			}
			case 51:
			{
				goto IL_041d;
			}
			case 52:
			{
				goto IL_0423;
			}
			case 53:
			{
				goto IL_0429;
			}
			case 54:
			{
				goto IL_042f;
			}
			case 55:
			{
				goto IL_0435;
			}
			case 56:
			{
				goto IL_043b;
			}
			case 57:
			{
				goto IL_0441;
			}
			case 58:
			{
				goto IL_0447;
			}
			case 59:
			{
				goto IL_044d;
			}
			case 60:
			{
				goto IL_0453;
			}
			case 61:
			{
				goto IL_0459;
			}
			case 62:
			{
				goto IL_045f;
			}
			case 63:
			{
				goto IL_0465;
			}
			case 64:
			{
				goto IL_046b;
			}
			case 65:
			{
				goto IL_0471;
			}
			case 66:
			{
				goto IL_0477;
			}
			case 67:
			{
				goto IL_047d;
			}
			case 68:
			{
				goto IL_04e9;
			}
			case 69:
			{
				goto IL_04e9;
			}
			case 70:
			{
				goto IL_04e9;
			}
			case 71:
			{
				goto IL_04e9;
			}
			case 72:
			{
				goto IL_04e9;
			}
			case 73:
			{
				goto IL_04e9;
			}
			case 74:
			{
				goto IL_04e9;
			}
			case 75:
			{
				goto IL_04e9;
			}
			case 76:
			{
				goto IL_04e9;
			}
			case 77:
			{
				goto IL_04e9;
			}
			case 78:
			{
				goto IL_04e9;
			}
			case 79:
			{
				goto IL_04e9;
			}
			case 80:
			{
				goto IL_04e9;
			}
			case 81:
			{
				goto IL_04e9;
			}
			case 82:
			{
				goto IL_04e9;
			}
			case 83:
			{
				goto IL_04e9;
			}
			case 84:
			{
				goto IL_04e9;
			}
			case 85:
			{
				goto IL_04e9;
			}
			case 86:
			{
				goto IL_04e9;
			}
			case 87:
			{
				goto IL_0483;
			}
			case 88:
			{
				goto IL_0489;
			}
			case 89:
			{
				goto IL_048f;
			}
			case 90:
			{
				goto IL_04e9;
			}
			case 91:
			{
				goto IL_04e9;
			}
			case 92:
			{
				goto IL_04e9;
			}
			case 93:
			{
				goto IL_04e9;
			}
			case 94:
			{
				goto IL_04e9;
			}
			case 95:
			{
				goto IL_04e9;
			}
			case 96:
			{
				goto IL_04e9;
			}
			case 97:
			{
				goto IL_0495;
			}
			case 98:
			{
				goto IL_049b;
			}
			case 99:
			{
				goto IL_04a1;
			}
			case 100:
			{
				goto IL_04a7;
			}
			case 101:
			{
				goto IL_04ad;
			}
			case 102:
			{
				goto IL_04b3;
			}
			case 103:
			{
				goto IL_04b9;
			}
			case 104:
			{
				goto IL_04bf;
			}
			case 105:
			{
				goto IL_04c5;
			}
			case 106:
			{
				goto IL_04e9;
			}
			case 107:
			{
				goto IL_04e9;
			}
			case 108:
			{
				goto IL_04cb;
			}
		}
	}
	{
		int32_t L_20 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, ((int32_t)11001))))
		{
			case 0:
			{
				goto IL_04d1;
			}
			case 1:
			{
				goto IL_04d7;
			}
			case 2:
			{
				goto IL_04dd;
			}
			case 3:
			{
				goto IL_04e3;
			}
		}
	}
	{
		goto IL_04e9;
	}

IL_02f1:
	{
		return _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
	}

IL_02f7:
	{
		return _stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429;
	}

IL_02fd:
	{
		return _stringLiteral38D73B1F09B053FB211D51A34FC1EE348E891429;
	}

IL_0303:
	{
		return _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
	}

IL_0309:
	{
		return _stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786;
	}

IL_030f:
	{
		return _stringLiteral5CAB08554552B91BA981CD02709F3608049743F1;
	}

IL_0315:
	{
		return _stringLiteralE1061B8BEC5066C12B1042947D09019BC165E5C1;
	}

IL_031b:
	{
		return _stringLiteral7FCF7A87CABC373319B2F3FA01CF5A0164A66AFA;
	}

IL_0321:
	{
		return _stringLiteralBACA539D75FA73DDDF3F50DD9184448E7FA5C58D;
	}

IL_0327:
	{
		return _stringLiteralE71F295D9CF58DA2D871442B14557E57C3912CAE;
	}

IL_032d:
	{
		return _stringLiteralE16AFF540287588AFBE93DE74387A9E2AF88621B;
	}

IL_0333:
	{
		return _stringLiteral2802A9301C19413CB7F4E27669891AE233E74AD7;
	}

IL_0339:
	{
		return _stringLiteralFCD210A96CF1970B48B92647765BF4F3670D2D23;
	}

IL_033f:
	{
		return _stringLiteralF5A333AFDC77CE93EC4EC2C0AB10FDE8EE3695F6;
	}

IL_0345:
	{
		return _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
	}

IL_034b:
	{
		return _stringLiteral347BD96BC18B22D437A751E98B8B12B9FF171229;
	}

IL_0351:
	{
		return _stringLiteral89228C2272C203A431928EA4D77EC3641DC74018;
	}

IL_0357:
	{
		return _stringLiteralA1709E965184FB01440CCA167288AABC938DF2B5;
	}

IL_035d:
	{
		return _stringLiteralC7D3548860AD1BC0D9141620DC4DD9E8A4809A2C;
	}

IL_0363:
	{
		return _stringLiteral6A83C8F3F967D3600B00869EB5D24C78AFA71C6B;
	}

IL_0369:
	{
		return _stringLiteralF428852DD02174C34C4A9A66F6A49711BF8470D5;
	}

IL_036f:
	{
		return _stringLiteralC55A209603A8816AA928E5D683D66E9AE643A83A;
	}

IL_0375:
	{
		return _stringLiteral5F81F92407132C01FCBA0B31D7B46D0565978E58;
	}

IL_037b:
	{
		return _stringLiteral5A182B180E626C1E1930FEC2AFFF5397AE62013D;
	}

IL_0381:
	{
		return _stringLiteralDE92258D76E8AE90A5B2808E9FE961A24A4FA1FA;
	}

IL_0387:
	{
		return _stringLiteralEFD09EAD139D405830AF16300A6875BA89AF9EB3;
	}

IL_038d:
	{
		return _stringLiteral557F66E529323427EDCAB0B2390FF70FFBAE1786;
	}

IL_0393:
	{
		return _stringLiteralDD5CDF6F085705A984082B0F14828C1DBE6A2C57;
	}

IL_0399:
	{
		return _stringLiteral393675B7B89ED13307BB22662AFC326F6FD7BBA0;
	}

IL_039f:
	{
		return _stringLiteralEA61DF7479C2DD80A2CDC904C4797B8649263D06;
	}

IL_03a5:
	{
		return _stringLiteralC8682A75717174CD9261F7BF3E200FB1F95C3C2B;
	}

IL_03ab:
	{
		return _stringLiteralD9EDAE09EFB19C1354AEFDA553B4B5DC28D5CD87;
	}

IL_03b1:
	{
		return _stringLiteralFCC60170DC9ECA079BBFC781ACD49B93D0E8C4AE;
	}

IL_03b7:
	{
		return _stringLiteralC517A672C519F103745EEF18967AD4081CBFAEE2;
	}

IL_03bd:
	{
		return _stringLiteral2C0C7BE659E23DAFA1146EBB9040344301391983;
	}

IL_03c3:
	{
		return _stringLiteral95FFF748EEEE6E0D4ADA84ED41FB391126B8CFF7;
	}

IL_03c9:
	{
		return _stringLiteral54C50EBA1F9B7D1A0F12E6A2A0DC78BF59231F31;
	}

IL_03cf:
	{
		return _stringLiteral3D578B33304CEDE293DF5286833AF99CB7582472;
	}

IL_03d5:
	{
		return _stringLiteral3F87CFEF1A1BA898EEFCE807810982D16AC01A99;
	}

IL_03db:
	{
		return _stringLiteralA07CCE227D5A4E151B0A5EF141705717C77B8CFE;
	}

IL_03e1:
	{
		return _stringLiteralC0A48EDC742B92D7EFD262D5F90073EE36ECFEFF;
	}

IL_03e7:
	{
		return _stringLiteral8398C464CEF2A8E224363DAF635848402299705A;
	}

IL_03ed:
	{
		return _stringLiteral98086E81726E63C07D5EE51033D818164107DDF6;
	}

IL_03f3:
	{
		return _stringLiteralC54E67FF6B0A0F7026D9F0CA0C1E11CC59B88ADC;
	}

IL_03f9:
	{
		return _stringLiteralDF9B137BC764E0190EA1D7EEB32F2364F3F3A2DF;
	}

IL_03ff:
	{
		return _stringLiteral4ACEC7A42FAB928B0D1510DB60C3D35BC6DC4D9F;
	}

IL_0405:
	{
		return _stringLiteral2F709974418B85825D8E38ADF52E90B7496ED7A3;
	}

IL_040b:
	{
		return _stringLiteral6F60E896CBE94313C35CDF8C33C899216DA269EF;
	}

IL_0411:
	{
		return _stringLiteral5274194BE573E6D86BDC850C768FAEBD25A0C72E;
	}

IL_0417:
	{
		return _stringLiteral6F42498ADE17E452CCFC96AF356C74D51ACA0524;
	}

IL_041d:
	{
		return _stringLiteralF388C7719B1FB6CFBD759164BEE4F33BB420FF6E;
	}

IL_0423:
	{
		return _stringLiteral751F5076C7A89E0EBF4B8BBF42D19173A068D0FE;
	}

IL_0429:
	{
		return _stringLiteral5EFEED0117DD1A53229D6D374013D42D30B1B19E;
	}

IL_042f:
	{
		return _stringLiteral85C411E2A2C61BD26D48EEB5D245D2D203BD74BA;
	}

IL_0435:
	{
		return _stringLiteralAC705511F599E168CB4A19DE96F050E694A04892;
	}

IL_043b:
	{
		return _stringLiteralE6FA6FADCE3B49C8F065918B497F388AB44DA05D;
	}

IL_0441:
	{
		return _stringLiteralA431B02F755D1ADA246246ACF4AD7497CFB57892;
	}

IL_0447:
	{
		return _stringLiteral4FA8C3994CCEF6319AF0BED6CBC74C41F5E23E78;
	}

IL_044d:
	{
		return _stringLiteralCD808C493DAE7E08DD825B3BE75EC7DF375082B6;
	}

IL_0453:
	{
		return _stringLiteralC32ED50300303AD9E773DE5B27CD33A424A6F172;
	}

IL_0459:
	{
		return _stringLiteralCEF86F29033280F9E4D053455DDC08C8746E5E5E;
	}

IL_045f:
	{
		return _stringLiteral254B65344AFC181606CA4DFAD96AD5ECAF4EC1A4;
	}

IL_0465:
	{
		return _stringLiteralEEAB711A5B5FD0EFECB9A5166B548777BDDB7901;
	}

IL_046b:
	{
		return _stringLiteral2A97A21771096701008C3221E4E58C40E34C5D2A;
	}

IL_0471:
	{
		return _stringLiteral10FC672FB9F87F9D6AFF9F8D6BFF4199EF333405;
	}

IL_0477:
	{
		return _stringLiteral20F8CFBBD4C388C4999BC67998CD7310A3357E3F;
	}

IL_047d:
	{
		return _stringLiteral1207530D7D4A8643E4DA91D94090C5B782E8D4AA;
	}

IL_0483:
	{
		return _stringLiteral6A1647F2AA7442466F1E26B4E54D7ACAA785F886;
	}

IL_0489:
	{
		return _stringLiteral36A832BCE093B1C64A8D587D84C04716FC3D8123;
	}

IL_048f:
	{
		return _stringLiteral2243F389E5AA3DE4541A15C92A9BACE59F8BE4E3;
	}

IL_0495:
	{
		return _stringLiteral49FCFEB950E4FC1E14C6AB9024A0D20CC2BEB985;
	}

IL_049b:
	{
		return _stringLiteral3D3AA5822C64FA34CB5E37391CFC58263F937F30;
	}

IL_04a1:
	{
		return _stringLiteral324033F505A57738479E4A50C6C83DD40C3EEC72;
	}

IL_04a7:
	{
		return _stringLiteralB4F44FFF8E8B6A3CA093580564BB4F0DF515EB8E;
	}

IL_04ad:
	{
		return _stringLiteralEB9599E9ABB0C609991C09C03544164393F9661D;
	}

IL_04b3:
	{
		return _stringLiteral6FEF7F07E4E5C8758103389685FF14ABCB30BD0B;
	}

IL_04b9:
	{
		return _stringLiteral1E8AB4D0974C246EABB424179864CCBA5DCEE064;
	}

IL_04bf:
	{
		return _stringLiteralDA0721C1938DB62218B172D4D91AD61AFD6EA65A;
	}

IL_04c5:
	{
		return _stringLiteral7A4031343C4BF504EC9F4A28169986445F910C6A;
	}

IL_04cb:
	{
		return _stringLiteral9610F86E2CB2A021571D9CE9BF9630C0084AAF00;
	}

IL_04d1:
	{
		return _stringLiteralDE9E1E6A7FD6E2514E97545C0BC4A067C0DAD5E7;
	}

IL_04d7:
	{
		return _stringLiteral11F95AF2256BE4BBDBEAF89CB3904A6AB1B3A01D;
	}

IL_04dd:
	{
		return _stringLiteralF64982ECFBBDC20AF3E40B6D5C0B68965820A033;
	}

IL_04e3:
	{
		return _stringLiteral5EF9365F8C43E6AB95C818EEEE9E5EF0D539BF1A;
	}

IL_04e9:
	{
		int32_t L_21 = ___error0;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralAFA84BE1B233FD908181C2B76616E356218E5B31, L_23, NULL);
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.NotifyParentPropertyAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyParentPropertyAttribute__ctor_m921D2426472D2601F59590590DAE1585D8768FD5 (NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* __this, bool ___notifyParent0, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		bool L_0 = ___notifyParent0;
		__this->___notifyParent_3 = L_0;
		return;
	}
}
// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::get_NotifyParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotifyParentPropertyAttribute_get_NotifyParent_m9CE85A9E830D177C945D2E79C8BB15F1E4354A80 (NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___notifyParent_3;
		return L_0;
	}
}
// System.Boolean System.ComponentModel.NotifyParentPropertyAttribute::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NotifyParentPropertyAttribute_Equals_m3E26D4045E9F41428447AAC23326763A6794A810 (NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___obj0;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022*)__this))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		RuntimeObject* L_1 = ___obj0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_2 = ___obj0;
		if (!((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022*)IsInstSealed((RuntimeObject*)L_2, NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var)))
		{
			goto IL_0025;
		}
	}
	{
		RuntimeObject* L_3 = ___obj0;
		NullCheck(((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022*)CastclassSealed((RuntimeObject*)L_3, NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var)));
		bool L_4;
		L_4 = NotifyParentPropertyAttribute_get_NotifyParent_m9CE85A9E830D177C945D2E79C8BB15F1E4354A80_inline(((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022*)CastclassSealed((RuntimeObject*)L_3, NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var)), NULL);
		bool L_5 = __this->___notifyParent_3;
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Int32 System.ComponentModel.NotifyParentPropertyAttribute::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NotifyParentPropertyAttribute_GetHashCode_mD6070F690A4DA9B4E70962FDEE7E5CD9EC1B8FC8 (NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Attribute_GetHashCode_mAE2C17FF608041F608207E2202E1BC0F98919C08(__this, NULL);
		return L_0;
	}
}
// System.Void System.ComponentModel.NotifyParentPropertyAttribute::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotifyParentPropertyAttribute__cctor_mBA4B327F55E2A2DD03A16456139F97628070B152 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* L_0 = (NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022*)il2cpp_codegen_object_new(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NotifyParentPropertyAttribute__ctor_m921D2426472D2601F59590590DAE1585D8768FD5(L_0, (bool)1, NULL);
		((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_StaticFields*)il2cpp_codegen_static_fields_for(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var))->___Yes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_StaticFields*)il2cpp_codegen_static_fields_for(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var))->___Yes_0), (void*)L_0);
		NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* L_1 = (NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022*)il2cpp_codegen_object_new(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NotifyParentPropertyAttribute__ctor_m921D2426472D2601F59590590DAE1585D8768FD5(L_1, (bool)0, NULL);
		((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_StaticFields*)il2cpp_codegen_static_fields_for(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var))->___No_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_StaticFields*)il2cpp_codegen_static_fields_for(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var))->___No_1), (void*)L_1);
		NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* L_2 = ((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_StaticFields*)il2cpp_codegen_static_fields_for(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var))->___No_1;
		((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_StaticFields*)il2cpp_codegen_static_fields_for(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var))->___Default_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_StaticFields*)il2cpp_codegen_static_fields_for(NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022_il2cpp_TypeInfo_var))->___Default_2), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RootDesignerSerializerAttribute__ctor_m52C401C2E19FF1C4E9A8F140811D5AA762C60602 (RootDesignerSerializerAttribute_tE8BCB625ADD575206CBA2D35B367FE47B415B67F* __this, String_t* ___serializerTypeName0, String_t* ___baseSerializerTypeName1, bool ___reloadable2, const RuntimeMethod* method) 
{
	{
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		String_t* L_0 = ___serializerTypeName0;
		__this->___U3CSerializerTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSerializerTypeNameU3Ek__BackingField_1), (void*)L_0);
		String_t* L_1 = ___baseSerializerTypeName1;
		__this->___U3CSerializerBaseTypeNameU3Ek__BackingField_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSerializerBaseTypeNameU3Ek__BackingField_2), (void*)L_1);
		bool L_2 = ___reloadable2;
		__this->___U3CReloadableU3Ek__BackingField_0 = L_2;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mBEC4CCF86E1A22330C31E1C069B2F21695445A10 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600(__this, 0, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_m552AA3E019FF5D93545B5DFFB7B4917C72251600 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___capacity0;
		OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66(__this, L_0, (RuntimeObject*)NULL, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mAF002F0247B65A7CC1A012077622E8A5E97A7BE9 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___comparer0;
		OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66(__this, 0, L_0, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_mF88C40080BA8F436358DE5195BB88C5957A4AC66 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, int32_t ___capacity0, RuntimeObject* ___comparer1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___capacity0;
		__this->____initialCapacity_2 = L_0;
		RuntimeObject* L_1 = ___comparer1;
		__this->____comparer_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_3), (void*)L_1);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary__ctor_m442555F1C427B3EF7DC305AE414FD5EBD90A4861 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		__this->____siInfo_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____siInfo_6), (void*)L_0);
		return;
	}
}
// System.Int32 System.Collections.Specialized.OrderedDictionary::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Specialized.OrderedDictionary::System.Collections.IDictionary.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionary_System_Collections_IDictionary_get_IsFixedSize_mC85A0FC9CF039E7594E4C28C68B0E4BA243E1595 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readOnly_4;
		return L_0;
	}
}
// System.Boolean System.Collections.Specialized.OrderedDictionary::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionary_get_IsReadOnly_m8D512A98345A30BC8BB45818A36FCC20DCE3569A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readOnly_4;
		return L_0;
	}
}
// System.Boolean System.Collections.Specialized.OrderedDictionary::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionary_System_Collections_ICollection_get_IsSynchronized_m68B485D9B7C83F599CDA6CA26D88EBCFE4DBA22B (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_get_Keys_m39D726F42E6E2A524AE555A41AE203F06E4F6792 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* L_1 = (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F*)il2cpp_codegen_object_new(OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64(L_1, L_0, (bool)1, NULL);
		return L_1;
	}
}
// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::get_objectsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objectsArray_0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->____initialCapacity_2;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_2 = (ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A*)il2cpp_codegen_object_new(ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArrayList__ctor_m4637812384C075439BB17EEC1C2DF802BD41EBD0(L_2, L_1, NULL);
		__this->____objectsArray_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectsArray_0), (void*)L_2);
	}

IL_0019:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3 = __this->____objectsArray_0;
		return L_3;
	}
}
// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::get_objectsTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->____objectsTable_1;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_1 = __this->____initialCapacity_2;
		RuntimeObject* L_2 = __this->____comparer_3;
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_3 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Hashtable__ctor_mDE29E5ABF17000F07880AD49D21C42132A5BA7EC(L_3, L_1, L_2, NULL);
		__this->____objectsTable_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectsTable_1), (void*)L_3);
	}

IL_001f:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_4 = __this->____objectsTable_1;
		return L_4;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_System_Collections_ICollection_get_SyncRoot_m67C653BEB9C1E451229203FAE5B6453681E7FBDB (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot_5;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (&__this->____syncRoot_5);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = Interlocked_CompareExchange_mC2F0AEDE6957F175ED944794E7AEECE2AED96B71(L_1, L_2, NULL, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot_5;
		return L_4;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary::get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_get_Item_m5755C415F2E5CAC5A0AE3EFBB5A8D84915B37ED8 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(29 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____readOnly_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_set_Item_m9406B6A94651B7DB301BC383518FC9B37277122E_RuntimeMethod_var)));
	}

IL_0013:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2;
		L_2 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_5;
		L_5 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_6 = ___key0;
		RuntimeObject* L_7 = ___value1;
		NullCheck(L_5);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_5, L_6, L_7);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_8;
		L_8 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		RuntimeObject* L_9 = ___key0;
		int32_t L_10;
		L_10 = OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837(__this, L_9, NULL);
		RuntimeObject* L_11 = ___key0;
		RuntimeObject* L_12 = ___value1;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_13;
		memset((&L_13), 0, sizeof(L_13));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_13), L_11, L_12, /*hidden argument*/NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_14 = L_13;
		RuntimeObject* L_15 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_8);
		VirtualActionInvoker2< int32_t, RuntimeObject* >::Invoke(28 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_8, L_10, L_15);
		return;
	}

IL_004d:
	{
		RuntimeObject* L_16 = ___key0;
		RuntimeObject* L_17 = ___value1;
		OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3(__this, L_16, L_17, NULL);
		return;
	}
}
// System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_get_Values_m14CFA04FF0A8DC8B41386192B029EC604AF551BA (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* L_1 = (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F*)il2cpp_codegen_object_new(OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64(L_1, L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->____readOnly_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Add_m0E0236E85A80AB44EC533F2127F485E88753B4B3_RuntimeMethod_var)));
	}

IL_0013:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2;
		L_2 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_3 = ___key0;
		RuntimeObject* L_4 = ___value1;
		NullCheck(L_2);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_3, L_4);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_5;
		L_5 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		RuntimeObject* L_6 = ___key0;
		RuntimeObject* L_7 = ___value1;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		memset((&L_8), 0, sizeof(L_8));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_8), L_6, L_7, /*hidden argument*/NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_5);
		int32_t L_11;
		L_11 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_5, L_10);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Clear_mCED01246B19A457FAD097372DD7EFA0840D94E07 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____readOnly_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Clear_mCED01246B19A457FAD097372DD7EFA0840D94E07_RuntimeMethod_var)));
	}

IL_0013:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2;
		L_2 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(24 /* System.Void System.Collections.Hashtable::Clear() */, L_2);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_3;
		L_3 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		NullCheck(L_3);
		VirtualActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_3);
		return;
	}
}
// System.Boolean System.Collections.Specialized.OrderedDictionary::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionary_Contains_m63AFE431564000B20908A732633780B192F7F95E (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(26 /* System.Boolean System.Collections.Hashtable::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_CopyTo_m96E73EF7B84BA4D1ABA184134465F41DFFE73C2A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0;
		L_0 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtualActionInvoker2< RuntimeArray*, int32_t >::Invoke(28 /* System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Int32 System.Collections.Specialized.OrderedDictionary::IndexOfKey(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0046;
	}

IL_0004:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(27 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_2, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_3;
		L_3 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = __this->____comparer_3;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_5 = __this->____comparer_3;
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7 = ___key0;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var, L_5, L_6, L_7);
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_9 = V_0;
		return L_9;
	}

IL_0037:
	{
		RuntimeObject* L_10 = V_1;
		RuntimeObject* L_11 = ___key0;
		NullCheck(L_10);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, L_11);
		if (!L_12)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		return L_13;
	}

IL_0042:
	{
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0046:
	{
		int32_t L_15 = V_0;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_16;
		L_16 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___key0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->____readOnly_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_1 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE9300F92FA968642C4C028D2E1DB9FDF0489F53A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject* L_2 = ___key0;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_Remove_mD4DFDFA8710B689C990EEE8EFCC50EC21CE51EA3_RuntimeMethod_var)));
	}

IL_0021:
	{
		RuntimeObject* L_4 = ___key0;
		int32_t L_5;
		L_5 = OrderedDictionary_IndexOfKey_m0A1A8D3EA6A175D722513B7AAD3518A4C1502837(__this, L_4, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		return;
	}

IL_002e:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_7;
		L_7 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_8 = ___key0;
		NullCheck(L_7);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(39 /* System.Void System.Collections.Hashtable::Remove(System.Object) */, L_7, L_8);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_9;
		L_9 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		VirtualActionInvoker1< int32_t >::Invoke(41 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_9, L_10);
		return;
	}
}
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.OrderedDictionary::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_GetEnumerator_mECA50DD161EDC87F84CD75764643826BFF14C16F (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* L_1 = (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775(L_1, L_0, 3, NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionary_System_Collections_IEnumerable_GetEnumerator_m4AC8186C465CF478A39CC2FADBDBA75AA9DA5084 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0;
		L_0 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* L_1 = (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775(L_1, L_0, 3, NULL);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___info0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_GetObjectData_m946A3884AC9A0398EF3CBDA7E5C7C268B01FC02C_RuntimeMethod_var)));
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___info0;
		RuntimeObject* L_3 = __this->____comparer_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		NullCheck(L_2);
		SerializationInfo_AddValue_m1AD59BBF8C3129142943D3F298ADF09FF123C199(L_2, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_3, L_5, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___info0;
		bool L_7 = __this->____readOnly_4;
		NullCheck(L_6);
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_6, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, L_7, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = ___info0;
		int32_t L_9 = __this->____initialCapacity_2;
		NullCheck(L_8);
		SerializationInfo_AddValue_m9D6ADD10966D1FE8D19050F3A269747C23FE9FC4(L_8, _stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7, L_9, NULL);
		int32_t L_10;
		L_10 = OrderedDictionary_get_Count_m9B55DB3275692CD51DE69FA8200D1998BD258A0A(__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_10);
		V_0 = L_11;
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_12 = __this->____objectsArray_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		NullCheck(L_12);
		VirtualActionInvoker1< RuntimeArray* >::Invoke(34 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_12, (RuntimeArray*)L_13);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_14 = ___info0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		NullCheck(L_14);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_14, _stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668, (RuntimeObject*)L_15, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m600671E042DB3E5BD39D5439D3C88010EEA1E95A (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___sender0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(24 /* System.Void System.Collections.Specialized.OrderedDictionary::OnDeserialization(System.Object) */, __this, L_0);
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary::OnDeserialization(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7 (OrderedDictionary_tEED418B3F59A9CD0CCCDEFE6C6A1A179FBE78BDD* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_4;
	memset((&V_4), 0, sizeof(V_4));
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = __this->____siInfo_6;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_1 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAEE8DD47F29A535762B8579D9E3E69D0D84968BB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7_RuntimeMethod_var)));
	}

IL_0013:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = __this->____siInfo_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck(L_2);
		RuntimeObject* L_5;
		L_5 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_2, _stringLiteral3EE17D366C57CBF012064BEF57DC6B58C6B46A88, L_4, NULL);
		__this->____comparer_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->____comparer_3), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_5, IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1_il2cpp_TypeInfo_var)));
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = __this->____siInfo_6;
		NullCheck(L_6);
		bool L_7;
		L_7 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_6, _stringLiteral3C711D5A724A3DA17D92B65BCE5BF5C98DB762FA, NULL);
		__this->____readOnly_4 = L_7;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_8 = __this->____siInfo_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = SerializationInfo_GetInt32_m7731402825C7FC8D0673F7610D555615F95E4FB5(L_8, _stringLiteralA37BABAF77DF95A70A2787B19C22BF16BBEAD7B7, NULL);
		__this->____initialCapacity_2 = L_9;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_10 = __this->____siInfo_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		RuntimeObject* L_13;
		L_13 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_10, _stringLiteral6D54049E84477C75DD8AFAD9B2244E5D4C140668, L_12, NULL);
		V_0 = ((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)Castclass((RuntimeObject*)L_13, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		if (!L_14)
		{
			goto IL_00dd;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		V_1 = L_15;
		V_2 = 0;
		goto IL_00d7;
	}

IL_008d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_3 = L_19;
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_20 = V_3;
		V_4 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_20, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		goto IL_00a7;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009b;
		}
		throw e;
	}

CATCH_009b:
	{// begin catch(System.Object)
		SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7* L_21 = (SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SerializationException_t09D5CC39CEF9CC37AC9D2E0C6DBE050B4E3F8CA7_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		SerializationException__ctor_m0AAFE2ABD0A74F3E783AD5B5FE842DE460168DB0(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1757A05516A315BB0FA6014D44AB4E34D2ECE718)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionary_OnDeserialization_m069DE30CEBE5F11C239DD42383204D14793714D7_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_00a7:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_22;
		L_22 = OrderedDictionary_get_objectsArray_mDA996CFABA5837C3361B0E94C89E6389202A9756(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_23 = V_4;
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_24 = L_23;
		RuntimeObject* L_25 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_22);
		int32_t L_26;
		L_26 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_22, L_25);
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_27;
		L_27 = OrderedDictionary_get_objectsTable_mA667F6EDF6E4E78C7F7AA118F35C86C64A9EFD80(__this, NULL);
		RuntimeObject* L_28;
		L_28 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_4), NULL);
		RuntimeObject* L_29;
		L_29 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_4), NULL);
		NullCheck(L_27);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_27, L_28, L_29);
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d7:
	{
		int32_t L_31 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = V_1;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_008d;
		}
	}

IL_00dd:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::.ctor(System.Collections.ArrayList,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___array0, int32_t ___objectReturnType1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___array0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(36 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		__this->____arrayEnumerator_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____arrayEnumerator_1), (void*)L_1);
		int32_t L_2 = ___objectReturnType1;
		__this->____objectReturnType_0 = L_2;
		return;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Current_m1513DF120F398083CA52B7B330D7FF9D5FD6BC69 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = __this->____objectReturnType_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_1 = __this->____arrayEnumerator_1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_1);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_2, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_3;
		L_3 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		return L_3;
	}

IL_0022:
	{
		int32_t L_4 = __this->____objectReturnType_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_5 = __this->____arrayEnumerator_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_6, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_7;
		L_7 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		return L_7;
	}

IL_0044:
	{
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_8;
		L_8 = OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074(__this, NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_9 = L_8;
		RuntimeObject* L_10 = Box(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var, &L_9);
		return L_10;
	}
}
// System.Collections.DictionaryEntry System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB OrderedDictionaryEnumerator_get_Entry_m70BE070A9125BA894E98803E322A51E34AAB0074 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_1, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2;
		L_2 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		RuntimeObject* L_3 = __this->____arrayEnumerator_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_3);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_4, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_5;
		L_5 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		DictionaryEntry__ctor_m2768353E53A75C4860E34B37DAF1342120C5D1EA((&L_6), L_2, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Key_mAE1632D8B4767AC6A321CDDCECFA3B943CFEB202 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_1, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2;
		L_2 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryEnumerator_get_Value_m3D9DB591978A7EA9C640AD820A301AD176665AB9 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		V_0 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_1, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
		RuntimeObject* L_2;
		L_2 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_0), NULL);
		return L_2;
	}
}
// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_m25E708E43E6B36CEAB84121CB0831590F40985BF (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_m6878E0A1524911AEBEEC87C578C75584DAFD9022 (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____arrayEnumerator_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::.ctor(System.Collections.ArrayList,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryKeyValueCollection__ctor_mA61FF47888F401F7194B3AD6B6F5F81F9FECEA64 (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ___array0, bool ___isKeys1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = ___array0;
		__this->____objects_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objects_0), (void*)L_0);
		bool L_1 = ___isKeys1;
		__this->____isKeys_1 = L_1;
		return;
	}
}
// System.Void System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	RuntimeArray* G_B8_0 = NULL;
	RuntimeArray* G_B7_0 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeArray* G_B9_1 = NULL;
	{
		RuntimeArray* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF_RuntimeMethod_var)));
	}

IL_000e:
	{
		int32_t L_2 = ___index1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___index1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_6 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OrderedDictionaryKeyValueCollection_System_Collections_ICollection_CopyTo_m6B8299303DC7D0A30936938CABE4F81F610077FF_RuntimeMethod_var)));
	}

IL_0028:
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_7 = __this->____objects_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(36 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_7);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0079:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_10 = V_3;
					if (!L_10)
					{
						goto IL_0089;
					}
				}
				{
					RuntimeObject* L_11 = V_3;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0089:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0036_1:
			{
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				V_1 = L_13;
				RuntimeArray* L_14 = ___array0;
				bool L_15 = __this->____isKeys_1;
				G_B7_0 = L_14;
				if (L_15)
				{
					G_B8_0 = L_14;
					goto IL_0056_1;
				}
			}
			{
				RuntimeObject* L_16 = V_1;
				V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_16, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				RuntimeObject* L_17;
				L_17 = DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline((&V_2), NULL);
				G_B9_0 = L_17;
				G_B9_1 = G_B7_0;
				goto IL_0064_1;
			}

IL_0056_1:
			{
				RuntimeObject* L_18 = V_1;
				V_2 = ((*(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)((DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)(DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB*)UnBox(L_18, DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB_il2cpp_TypeInfo_var))));
				RuntimeObject* L_19;
				L_19 = DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline((&V_2), NULL);
				G_B9_0 = L_19;
				G_B9_1 = G_B8_0;
			}

IL_0064_1:
			{
				int32_t L_20 = ___index1;
				NullCheck(G_B9_1);
				Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(G_B9_1, G_B9_0, L_20, NULL);
				int32_t L_21 = ___index1;
				___index1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
			}

IL_006f_1:
			{
				RuntimeObject* L_22 = V_0;
				NullCheck(L_22);
				bool L_23;
				L_23 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_22);
				if (L_23)
				{
					goto IL_0036_1;
				}
			}
			{
				goto IL_008a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008a:
	{
		return;
	}
}
// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_Count_m7E6084DFB4648AD05337326CC87BC5AAAC2B310B (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objects_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_IsSynchronized_mE73CC54355B822C837985F6534050DB9472A42EA (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Object System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryKeyValueCollection_System_Collections_ICollection_get_SyncRoot_m970D75F7E81A1BB6FA21D797A7D0A068D749E511 (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objects_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(26 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OrderedDictionaryKeyValueCollection_System_Collections_IEnumerable_GetEnumerator_m915EACF605AF9EBDC96A2BDB466682095A03154D (OrderedDictionaryKeyValueCollection_t971748E0C0913AD0C2B586470D882372629D287F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* G_B2_0 = NULL;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* G_B3_1 = NULL;
	{
		ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* L_0 = __this->____objects_0;
		bool L_1 = __this->____isKeys_1;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 2;
		G_B3_1 = G_B1_0;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0012:
	{
		OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6* L_2 = (OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6*)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_tFBA72CAA756A52B18001D2184E3CCC4160B3FDA6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OrderedDictionaryEnumerator__ctor_mEC12764C0293A3EFE021BEE4385D537C3C0EB775(L_2, G_B3_1, G_B3_0, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.StringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringDictionary__ctor_mF13D065DE0B8C21DBAB7873436D7D7C879373A7C (StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = (Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D*)il2cpp_codegen_object_new(Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Hashtable__ctor_mD7E2F1EB1BFD683186ECD6EDBE1708AF35C3A87D(L_0, NULL);
		__this->___contents_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___contents_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.StringDictionary::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringDictionary_Add_mE81F28657F0C11A7242C286D10AB4BFA34081FAB (StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringDictionary_Add_mE81F28657F0C11A7242C286D10AB4BFA34081FAB_RuntimeMethod_var)));
	}

IL_000e:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = __this->___contents_0;
		String_t* L_3 = ___key0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_ToLowerInvariant_mBE32C93DE27C5353FEA3FA654FC1DDBE3D0EB0F2(L_3, NULL);
		String_t* L_5 = ___value1;
		NullCheck(L_2);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_4, L_5);
		return;
	}
}
// System.Collections.IEnumerator System.Collections.Specialized.StringDictionary::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StringDictionary_GetEnumerator_m3E900457E2146001383B0E3590FA5FECD3460BC1 (StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE* __this, const RuntimeMethod* method) 
{
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_0 = __this->___contents_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(31 /* System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Specialized.CaseSensitiveStringDictionary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseSensitiveStringDictionary__ctor_m2AF7A1302E4A8EE55E5E98BA342FDC3EF89A3F5E (CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F* __this, const RuntimeMethod* method) 
{
	{
		StringDictionary__ctor_mF13D065DE0B8C21DBAB7873436D7D7C879373A7C(__this, NULL);
		return;
	}
}
// System.Void System.Collections.Specialized.CaseSensitiveStringDictionary::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CaseSensitiveStringDictionary_Add_m9B3BE19D3A3468F470E99F7CC4D553877A81764D (CaseSensitiveStringDictionary_t580762BF4259ED72CCB6E21746B96AFA5C410D0F* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7D028CCE3B6E7B61AE2C752D7AE970DA04AB7C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CaseSensitiveStringDictionary_Add_m9B3BE19D3A3468F470E99F7CC4D553877A81764D_RuntimeMethod_var)));
	}

IL_000e:
	{
		Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* L_2 = ((StringDictionary_t5E04D28BB2830FCBD04F7EB6092E5137EF8495FE*)__this)->___contents_0;
		String_t* L_3 = ___key0;
		String_t* L_4 = ___value1;
		NullCheck(L_2);
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m171C269D828658C44041FA68B6DE8CA290ED517F (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.BypassElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54 (BypassElementCollection_t15465BC07F8DC8BABA6953182904AF762D638DBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(BypassElementCollection__ctor_m344EC8CD2EACA36E1213C5914037BB133E87FE54_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ConnectionManagementElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3 (ConnectionManagementElementCollection_tEEB0BEE8289364CCA1D76DDA3F862429612DE0F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementElementCollection__ctor_m4698342A715032A762FA04B2745BFCA46263BCB3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ConnectionManagementSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection__ctor_m2FA1D29F887BD6498FBEF692BBC0AA727E38E802_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95 (ConnectionManagementSection_t8F4D45BE147F24F54F2124CC800B4594031F41C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ConnectionManagementSection_get_Properties_mFCE0F9418E9E8CD2E1301815CC4D548261F58E95_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.DefaultProxySection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection__ctor_m962B68CEFCDE7DFB7646EF16297CA4BE0097284D_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_get_Properties_m5186F1A2734EB96F065C7BC14A215D17F8325418_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
// System.Void System.Net.Configuration.DefaultProxySection::Reset(System.Configuration.ConfigurationElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77 (DefaultProxySection_tC0247A534955DC9D887B03AA4EFB1C1E01AD1E34* __this, ConfigurationElement_tAE3EE71C256825472831FFBB7F491275DFAF089E* ___parentElement0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DefaultProxySection_Reset_m0B9A1155840E7C55FC24AEDB23FB17A2815EEB77_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ProxyElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70 (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement__ctor_mC1BDF426F97F4F84CB5A34B423F59EC8748EBD70_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A (ProxyElement_t4D277820F9C77333BE8CC6498DE7E06C36868C65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ProxyElement_get_Properties_mBFE6E283FE7E9329B586ACAADC8F2E047C7ABB2A_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.HttpWebRequestElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717 (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement__ctor_mB9DDAC7FF431D4AF4CAFCBC96E1A3572A1F83717_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA (HttpWebRequestElement_t8D2FEEC531D1FBE1B6E3D1077350A1EBDCB77DC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(HttpWebRequestElement_get_Properties_mAA0F11EA73B5397C50809EAC679F2C564F9EC7CA_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.Ipv6Element::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element__ctor_m869AC261E0994A8B3D83CEE25C6CB99E6A5EA4C1_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322 (Ipv6Element_t480208D0E23E612DC1FD1CE19D9FB491F0F66932* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(Ipv6Element_get_Properties_m382D5B5B098EFF19C2A4AC1889CD1C8EAB918322_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.NetSectionGroup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC (NetSectionGroup_tA83DCAF89773087D0E921B92F67441132B71D52F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(NetSectionGroup__ctor_mCD2F0DC2B9F0C6C346BC91BD8750C7111A9528AC_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SettingsSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242 (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection__ctor_mBD94E7E098221DC09775A3AE1713930F6820D242_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F (SettingsSection_tC931BA69B22D5E0ED07698F02778482987319A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SettingsSection_get_Properties_mA774C9C884F4AD5DEC2BBE31DF7E35CAC71EBF8F_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.PerformanceCountersElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement__ctor_m9537195CBC7DC607F7253D06E7B6B1090456E68F_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B (PerformanceCountersElement_tCB62C8CA7C218E35653DC5BB690A5FFD6D608B30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(PerformanceCountersElement_get_Properties_m7C16FBC3E915E8384FB4409209628737B1537C9B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.ServicePointManagerElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement__ctor_m0F1CF21589CA283DA734A472930A9665698B2D36_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58 (ServicePointManagerElement_t98ED8374270537E77E57D014ECEE8B1A3A8EEFF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(ServicePointManagerElement_get_Properties_m70469523AAD1A2C2E9D4F90DDA1BA619FCE68B58_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.SocketElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement__ctor_m4FB4C851F1BB20CED74C206EFB1BA9DDFBE024D2_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3 (SocketElement_tDC83FCE3C280D8D590972F989292C30E2B7F6CC6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(SocketElement_get_Properties_m8AF94DEEDA0EB4092F59FBDC361592E1B9EBDEC3_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebProxyScriptElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821 (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement__ctor_mB613D71DE569317E40726CD8DB9A6ABA0A302821_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B (WebProxyScriptElement_t0C0E2338F7F42D5D386F5AE68FF7F870FA6E7167* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebProxyScriptElement_get_Properties_mF5188225C0C1D64BC136465BB4B0E962FFE9240B_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebRequestModulesSection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection__ctor_mF25CD80A5111A4F87B7FBF7663A3442470B97C0E_RuntimeMethod_var);
		return;
	}
}
// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93* WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6 (WebRequestModulesSection_t4099F9890D7851314C5528C577E4C51B36C97D00* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModulesSection_get_Properties_mBDBDED569E677717FB617CD36B94AE34BF4208F6_RuntimeMethod_var);
		return (ConfigurationPropertyCollection_t1DEB95D3283BB11A46B862E9D13710ED698B6C93*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Net.Configuration.WebRequestModuleElementCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E (WebRequestModuleElementCollection_t5979A19A48B822831C1D351EB2AA25058C7F7463* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(WebRequestModuleElementCollection__ctor_m62C156D78336B2E37EA6F10D477FDEAE4161F99E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Diagnostics.DiagnosticsConfigurationHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3 (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler__ctor_mDFB0000E6218840F66D21BB6C9BF3F647CCBC5A3_RuntimeMethod_var);
		return;
	}
}
// System.Object System.Diagnostics.DiagnosticsConfigurationHandler::Create(System.Object,System.Object,System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB (DiagnosticsConfigurationHandler_t0C4B611E2C6EA17B288C43070FAF65F96DCA96E7* __this, RuntimeObject* ___parent0, RuntimeObject* ___configContext1, XmlNode_t3180B9B3D5C36CD58F5327D9F13458E3B3F030AF* ___section2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_raise_profile_exception(DiagnosticsConfigurationHandler_Create_mF21B1CC68B87DE078690B2B493FCDC5F728CBAAB_RuntimeMethod_var);
		return NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.ThrowStub::ThrowNotSupportedException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2 (const RuntimeMethod* method) 
{
	{
		PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A* L_0 = (PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_tD2BD7EB9278518AA5FE8AE75AD5D0D4298A4631A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		PlatformNotSupportedException__ctor_mD5DBE8E9A6FF4B75EF02671029C6D67A51EAFBD1(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThrowStub_ThrowNotSupportedException_m14168B43936EF78B7B8AC08BD815254DAA1D9FA2_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Key_m09845C00732E530E6FCB9042079E90D3912215FE_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DictionaryEntry_get_Value_m75FD18FE968AE131F28AA2CB0DF4895EBA39075E_inline (DictionaryEntry_t171080F37B311C25AA9E75888F9C9D703FA721BB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Oid_set_Value_m122282994E6EE138CE4284B052EF8BE2086CA72F_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->____value_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____value_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Oid_get_Value_m59D678A83ED4DE7D87FB7450C8CF4084DB506FD3_inline (Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ASN1_get_Tag_m1984CF0DDF54424E61BA3650D93CBA0DCB58F232_inline (ASN1_t33549D58797C9C33AA83F13AD184EAA00C584A6F* __this, const RuntimeMethod* method) 
{
	{
		uint8_t L_0 = __this->___m_nTag_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AsnEncodedData_get_RawData_m629D858D7D20E72C1F46124E5032FE0D3B32AADF_inline (AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____raw_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void X509Extension_set_Critical_m19FBE6E0C8B9069E5A2C232DAAE06046AF18EFEF_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->____critical_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool X509Extension_get_Critical_mEF827F09D95784210C2F8D5FD7BE27BB54803E35_inline (X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____critical_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedKeyValue_m153EF781728D471C55002A40BBDA435F1B3A1213_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____keyValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* PublicKey_get_Oid_mB5796F569C136759CB740F747C6A3B6F8976401A_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* L_0 = __this->____oid_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* PublicKey_get_EncodedParameters_mE338A4A69A15907E38A644D624A07DDD55C521E0_inline (PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* __this, const RuntimeMethod* method) 
{
	{
		AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8* L_0 = __this->____params_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateScopeId_m3C01EDB8971607BAC0398557E295B5A818191532_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t IPAddress_get_PrivateAddress_mE1CD072F1E7BDF981FD71CBD984F5FD2A2EC6399_inline (IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____addressOrScopeId_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t Marvin_get_DefaultSeed_m0CD0484A0C131EF70FE2252570EBE48CE045BA26_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		uint64_t L_0 = ((Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_StaticFields*)il2cpp_codegen_static_fields_for(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var))->___U3CDefaultSeedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Marvin_ComputeHash32_m4A0F0FD95EDFDF78DA2E1FCD47AAC3E39A2EB5B2_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___data0, uint64_t ___seed1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_0 = ___data0;
		uint8_t* L_1;
		L_1 = MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90(L_0, MemoryMarshal_GetReference_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9D86D3A7A7F6A344D16464E6638E2BEAD3F4BC90_RuntimeMethod_var);
		int32_t L_2;
		L_2 = ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_inline((&___data0), ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_RuntimeMethod_var);
		uint64_t L_3 = ___seed1;
		il2cpp_codegen_runtime_class_init_inline(Marvin_t0342A28B10725C354B3E96D240FF68C4D7A0D242_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = Marvin_ComputeHash32_mAB058ED57AEEE83EF8016C0D7C3A5CF96825C08D(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BrowsableAttribute_get_Browsable_m23594845C49373D8D6AB753D89DB39D8285250F0_inline (BrowsableAttribute_t23D64CB326CFFC294A95C80A8A3BE13C878F8F76* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CBrowsableU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DescriptionAttribute_set_DescriptionValue_mE3DE3C009CBEA82A5DC0EFB299943118BF487800_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDescriptionValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DescriptionAttribute_get_DescriptionValue_m1F4A0829E3BE8AF3BBB9A5F2344BA672E07DC975_inline (DescriptionAttribute_t2E1F8370535185D35B32BB7D143C8615391ECA86* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDescriptionValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DesignerCategoryAttribute_get_Category_mDBA8396BD3225636679F3CFBD7ED5724189E7D77_inline (DesignerCategoryAttribute_tDF9CD5388674458859ED7373E5F8C8AF7AA79715* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CCategoryU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DesignerSerializationVisibilityAttribute_get_Visibility_mACD772642393B55DC72E03BB90D67C6C829C4D5E_inline (DesignerSerializationVisibilityAttribute_tA31A916C0B6AEBC3C62EB64562DF733079B7FD83* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVisibilityU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DisplayNameAttribute_set_DisplayNameValue_m2DA6A8AA72F3969BA5639F707AB90A2D363BC49C_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CDisplayNameValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDisplayNameValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DisplayNameAttribute_get_DisplayNameValue_mD9F58F5FFF2B7C682D8470101352BEA88AE0E5AC_inline (DisplayNameAttribute_tECBA9AC4CCBE61186E2B3C397C93AAFA5A2631E8* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CDisplayNameValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DefaultEventAttribute_get_Name_m156545E2B0D123DFD61C375B1CB4987F08D65BF3_inline (DefaultEventAttribute_t23BC5D506847DCF13B26036D08C67BE2807EBF07* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* DefaultPropertyAttribute_get_Name_m1F2C2642F68F489167FB7F2E005CCBDBF9745890_inline (DefaultPropertyAttribute_tCBEFC8DCB03284FE15DF7553F960543ED06A1FD4* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EditorAttribute_get_EditorTypeName_m587C6D66C4567BC349AC9E2C65FE5E021ED2EB09_inline (EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CEditorTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EditorAttribute_get_EditorBaseTypeName_m1CF77F3AA9AB5AE9CD3585FE86B24E1DD21B1EB4_inline (EditorAttribute_t1397B216132A6B45128F224DA0C7113354F8FB3C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CEditorBaseTypeNameU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SettingsBindableAttribute_get_Bindable_m448BA41F157DF20B461625E635BAA0DD861668F3_inline (SettingsBindableAttribute_t2E3B199C3490063EF65B8B2FFD112C3BA2E8F62B* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CBindableU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* TypeConverterAttribute_get_ConverterTypeName_mBBE5335F11FC13345D2828866172BB5DDF9F3E45_inline (TypeConverterAttribute_t2E0AA4000E0B7A66DFC1E10B80ED2386764026C3* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CConverterTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_Invoke_m9D3126CBE291A3E7E7C304094E1DA846832F9B96_inline (EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NotifyParentPropertyAttribute_get_NotifyParent_m9CE85A9E830D177C945D2E79C8BB15F1E4354A80_inline (NotifyParentPropertyAttribute_t3E0C382D7DB73FB384E3405BEF75AF0519011022* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___notifyParent_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m1D3E8C5A560BE65D9A5C3E5D0D891C79F4895B0B_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D));
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___array0;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint8_t>(L_2);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___array0;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m54864A0BB817050A9110E85BB5FB31EF63699982_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mE18EBB601FBFA01BA29FE353364700952A9091FE_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, void* ___pointer0, int32_t ___length1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 4)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		int32_t L_2 = ___length1;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_001f:
	{
		void* L_3 = ___pointer0;
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>((uint8_t*)L_3);
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_5;
		memset((&L_5), 0, sizeof(L_5));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_5), L_4);
		__this->____pointer_0 = L_5;
		int32_t L_6 = ___length1;
		__this->____length_1 = L_6;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mD4ED59BC2ABC1D881B1CFEAD85109BB38AF0BC29_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___array0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		return;
	}

IL_000b:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_1 = ___array0;
		NullCheck((RuntimeArray*)L_1);
		uint8_t* L_2;
		L_2 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_1, NULL);
		uint16_t* L_3;
		L_3 = il2cpp_unsafe_as_ref<uint16_t>(L_2);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_4;
		memset((&L_4), 0, sizeof(L_4));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_4), L_3);
		__this->____pointer_0 = L_4;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = ___array0;
		NullCheck(L_5);
		__this->____length_1 = ((int32_t)(((RuntimeArray*)L_5)->max_length));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F ___span0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F L_2 = ___span0;
		uint16_t* L_3;
		L_3 = ((  uint16_t* (*) (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6;
		L_6 = il2cpp_unsafe_sizeof<uint16_t>();
		if (((int64_t)L_5 * (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 * (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m7E0CA4F0B8AC2C1FEAA2B6D00C2A4B1B075DB08C_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_7), L_4, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 Span_1_Slice_m720734AA48ECB663CAA0594530927B9015A64341_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = (int32_t)__this->____length_1;
		if ((!(((uint32_t)L_0) > ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_2 = (ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC)__this->____pointer_0;
		V_0 = L_2;
		uint8_t* L_3;
		L_3 = IL2CPP_BY_REFERENCE_GET_VALUE(uint8_t, (Il2CppByReference*)(&V_0));
		int32_t L_4 = ___start0;
		uint8_t* L_5;
		L_5 = il2cpp_unsafe_add<uint8_t,int32_t>(L_3, L_4);
		int32_t L_6 = (int32_t)__this->____length_1;
		int32_t L_7 = ___start0;
		Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_inline((&L_8), L_5, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 MemoryMarshal_CreateReadOnlySpan_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m363F8E1E0CC75E2736384E86E770507F7483D649_gshared_inline (uint32_t* ___reference0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___reference0;
		int32_t L_1 = ___length1;
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_2;
		memset((&L_2), 0, sizeof(L_2));
		ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_inline((&L_2), L_0, L_1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 ___span0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		if (!false)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		ThrowHelper_ThrowInvalidTypeWithPointersNotSupported_m5707DE408588F6EAC3FC7D10F9520308CF8C8CCF(L_1, NULL);
	}

IL_0016:
	{
		ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4 L_2 = ___span0;
		uint32_t* L_3;
		L_3 = ((  uint32_t* (*) (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		uint8_t* L_4;
		L_4 = il2cpp_unsafe_as_ref<uint8_t>(L_3);
		int32_t L_5;
		L_5 = ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_inline((&___span0), il2cpp_rgctx_method(method->rgctx_data, 2));
		int32_t L_6;
		L_6 = il2cpp_unsafe_sizeof<uint32_t>();
		if (((int64_t)L_5 * (int64_t)L_6 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 * (int64_t)L_6 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MemoryMarshal_AsBytes_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE5D7D4C294D50AFEE7AF6B303DE7FA7BD156B83A_RuntimeMethod_var);
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_7;
		memset((&L_7), 0, sizeof(L_7));
		ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_inline((&L_7), L_4, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), /*hidden argument*/ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_RuntimeMethod_var);
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0B70907CF5F6B4F10CB2914FEFC34CBE07112698_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___array0, int32_t ___start1, int32_t ___length2, const RuntimeMethod* method) 
{
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_0 = ___array0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = ___start1;
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_2 = ___length2;
		if (!L_2)
		{
			goto IL_000e;
		}
	}

IL_0009:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_000e:
	{
		il2cpp_codegen_initobj(__this, sizeof(ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F));
		return;
	}

IL_0016:
	{
		int32_t L_3 = ___start1;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = ___array0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5 = ___length2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_6 = ___array0;
		NullCheck(L_6);
		int32_t L_7 = ___start1;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), L_7))))))
		{
			goto IL_0029;
		}
	}

IL_0024:
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mD7D90276EDCDF9394A8EA635923E3B48BB71BD56(NULL);
	}

IL_0029:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_8 = ___array0;
		NullCheck((RuntimeArray*)L_8);
		uint8_t* L_9;
		L_9 = Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline((RuntimeArray*)L_8, NULL);
		uint16_t* L_10;
		L_10 = il2cpp_unsafe_as_ref<uint16_t>(L_9);
		int32_t L_11 = ___start1;
		uint16_t* L_12;
		L_12 = il2cpp_unsafe_add<uint16_t,int32_t>(L_10, L_11);
		ByReference_1_t946C8F453CAF957A5339893AAA7FFF61CC68CECE L_13;
		memset((&L_13), 0, sizeof(L_13));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_13), L_12);
		__this->____pointer_0 = L_13;
		int32_t L_14 = ___length2;
		__this->____length_1 = L_14;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_m26287DBB36429B2E2FBCB3F96F439248F8CAA8BB_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t* Array_GetRawSzArrayData_m2F8F5B2A381AEF971F12866D9C0A6C4FBA59F6BB_inline (RuntimeArray* __this, const RuntimeMethod* method) 
{
	{
		RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0* L_0;
		L_0 = il2cpp_unsafe_as<RawData_t37CAF2D3F74B7723974ED7CEEE9B297D8FA64ED0*>(__this);
		NullCheck(L_0);
		uint8_t* L_1 = (&L_0->___Data_2);
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m339FDCE1FC17C2B97AEA44937294504AF706F7FF_gshared_inline (ReadOnlySpan_1_tA2EFC117098BD2B38ADBF809AA976D9F3C13654F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_m0FC0B92549C2968E80B5F75A85F28B96DBFCFD63_gshared_inline (ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_m947BF95D54571BF3897F96822B7A8FDA5853497B_gshared_inline (Span_1_tDADAC65069DFE6B57C458109115ECD795ED39305* __this, uint8_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___ptr0;
		ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReadOnlySpan_1__ctor_mFEB9E8BCBC125E065C80C12FC6037D87DC6FA2FC_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, uint32_t* ___ptr0, int32_t ___length1, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___ptr0;
		ByReference_1_tFE9AF4BD221B916FA525C43965FD23DB6BE5AC45 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer_0 = L_1;
		int32_t L_2 = ___length1;
		__this->____length_1 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReadOnlySpan_1_get_Length_m031225D82859BA85FEE8375AA52B4CE8DF1ACE00_gshared_inline (ReadOnlySpan_1_t57F4BBC957039E8E904443D25F3A78AE60DC94B4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____length_1;
		return L_0;
	}
}
