﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6;
// System.Collections.Generic.Dictionary`2<System.Object,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct Dictionary_2_tEDE1812AF080D310B7E71B3DB1C085858D812133;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter>
struct Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsDirectConverter>
struct Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>
struct Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E;
// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>>
struct Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525;
// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700;
// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Object>
struct Dictionary_2_t12EBB875CF54482585C346EFBACF37B33E3D6F76;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E;
// System.Func`2<System.Type,System.String>
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`3<System.String,System.Reflection.MemberInfo,System.String>
struct Func_3_tBAF9876D881392F517398C8A838D30B270025B3E;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
struct IEnumerable_1_tE0A67F3FB4C800B39F37C976E22371A7DF4DDB1C;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t6686595E4CB7AC210F0EF075F7B1DD4A21D3902B;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
struct IEnumerator_1_t69908BE263733D5C3989BAC671BE4067F7FE66E6;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IEqualityComparer`1<Unity.VisualScripting.FullSerializer.fsConfig>
struct IEqualityComparer_1_t7B7B86B5864C0BA216CDD316C0263BC0A93204AF;
// System.Collections.Generic.IEqualityComparer`1<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery>
struct IEqualityComparer_1_t99E29E1E84DF834D2CD5B6CA55F1CD9A7EC637D6;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.VisualScripting.FullSerializer.fsData>
struct KeyCollection_t48AF048E20386EEBFAF64045EBD7E8B8781B4A8D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct KeyCollection_tBD90273CB39F445411EE482CEC310A1082B0243A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>
struct KeyCollection_t83561E1D5903C4B2EB5D1197ADE688D242BA59E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>>
struct KeyCollection_tC6FC39399FDDF5ACBC9D601EDE4A97DE21E95F8A;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct KeyCollection_t710C6D24841A0513DEF3339081AEDEEEA082B082;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>
struct List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsConverter>
struct List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsMetaProperty>
struct List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>
struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct List_1_t7182E9791DD2596935EC5EBF901871476E91B95D;
// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block>
struct List_1_t85812977073AD90622C1915AAFE06D1EAB782A80;
// System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.VisualScripting.FullSerializer.fsData>
struct ValueCollection_t3E1CE5ECB2504E2AD242D62AEAB2E0FEC5F4178E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct ValueCollection_t454F2DB878B0EFAB63E7E1C92A7F0D126981E341;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>
struct ValueCollection_t5A48AD1BA04733F854F5B3C36BDC375B9DE672AA;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>>
struct ValueCollection_tE9EF826498D477BC24D0E280FDADBC10602EB8F2;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct ValueCollection_t4FAB54BBE698E087FF06EEB537BD0531AF9E8C26;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Object>[]
struct EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.VisualScripting.FullSerializer.fsData>[]
struct EntryU5BU5D_t989376E319D2B29386CA895794C87B67F546A729;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VisualScripting.FullSerializer.fsData>[]
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>[]
struct EntryU5BU5D_t607696182CD414246EE5AE0D9B0CA6E932790F3F;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>[]
struct EntryU5BU5D_t79A9353B9D38553B300A9E3B116A6AEE4E3C199A;
// System.Collections.Generic.Dictionary`2/Entry<Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>>[]
struct EntryU5BU5D_tDC4D6CD057F94DC3B154581458A2695F120B0CE5;
// System.Collections.Generic.Dictionary`2/Entry<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>[]
struct EntryU5BU5D_t930DFD181E8E0F665574C26E7B93C553B56BDEAF;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7;
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName[]
struct ParsedAssemblyQualifiedNameU5BU5D_t97C3ED6927C88C67C59F4F3144C00B6442A0EA37;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.VisualScripting.FullSerializer.fsMetaProperty[]
struct fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98;
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[]
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block[]
struct BlockU5BU5D_t8C4C01F7859CDEFEABA47CEEA229465A8169BAC6;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName
struct ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// Unity.VisualScripting.FullSerializer.Internal.Converters.UnityEvent_Converter
struct UnityEvent_Converter_tD5E136836112018EC719F5845E73129360FD5CE7;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.VisualScripting.FullSerializer.fsConfig
struct fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726;
// Unity.VisualScripting.FullSerializer.fsContext
struct fsContext_t3B227C205D84208E2D8934429C07677542C97B5F;
// Unity.VisualScripting.FullSerializer.fsConverter
struct fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918;
// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager
struct fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsDuplicateVersionNameException
struct fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640;
// Unity.VisualScripting.FullSerializer.fsMetaProperty
struct fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266;
// Unity.VisualScripting.FullSerializer.fsMetaType
struct fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743;
// Unity.VisualScripting.FullSerializer.fsMissingVersionConstructorException
struct fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE;
// Unity.VisualScripting.FullSerializer.fsObjectAttribute
struct fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38;
// Unity.VisualScripting.FullSerializer.fsPropertyAttribute
struct fsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8;
// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/<>c
struct U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701;
// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block
struct Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF;
// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator
struct ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24;
// Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687;
// Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52;
// Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6;
// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18
struct U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8;
// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator
struct AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1;
// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter
struct fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A;
// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7182E9791DD2596935EC5EBF901871476E91B95D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t85812977073AD90622C1915AAFE06D1EAB782A80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptimizedReflection_t7F2A25A36302950D7E078F447B955296D454A9DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsAotCompilationManager_tA4FA5D7D2FC305EE6984E234196A04392EC1B2EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
IL2CPP_EXTERN_C String_t* _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
IL2CPP_EXTERN_C String_t* _stringLiteral0E953F7F0067D39CE0A1E51A23DC123190C4CA2A;
IL2CPP_EXTERN_C String_t* _stringLiteral196B9F158F47A1AD126F637AEA43035DC05202EA;
IL2CPP_EXTERN_C String_t* _stringLiteral24C9260A59416A490E59FCDF0B52885DD5245AB8;
IL2CPP_EXTERN_C String_t* _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
IL2CPP_EXTERN_C String_t* _stringLiteral302E7C11D8C5F5B4DC0CB0C031B76B22322E35FE;
IL2CPP_EXTERN_C String_t* _stringLiteral3A568DD979BA71FD69E8EEE80B144BCDE0D0B023;
IL2CPP_EXTERN_C String_t* _stringLiteral4600E7CD4FD5EB039DB7A0180E7A8E86534BAA24;
IL2CPP_EXTERN_C String_t* _stringLiteral4FDC799B671F321998C604BDD55E7816E8488106;
IL2CPP_EXTERN_C String_t* _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C;
IL2CPP_EXTERN_C String_t* _stringLiteral5AF37723612652CEDB34D520B31C879879237B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
IL2CPP_EXTERN_C String_t* _stringLiteral68CC8A5A68FCAEA1AADD094BD5EC2A1B852D16E0;
IL2CPP_EXTERN_C String_t* _stringLiteral6B26BE7AEB0CE01EB89196BCD5C8E957DA773FCA;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAECB44011C6849DA19ADB265B52E7819342CB7;
IL2CPP_EXTERN_C String_t* _stringLiteral7E5A093F4DCDF31969F32859619D1C80A3D9B34C;
IL2CPP_EXTERN_C String_t* _stringLiteral84FD80DC652F1640A578ADB0C8DE7B65D6D0E376;
IL2CPP_EXTERN_C String_t* _stringLiteral8CFACA9928DEA240B27CC5AE59150FBE2C0E96B6;
IL2CPP_EXTERN_C String_t* _stringLiteral8F6C4B5DED83D8E68C57D65F742AA1A6A7D70567;
IL2CPP_EXTERN_C String_t* _stringLiteral99672067F54E936644EC9C19FECCD6680688628C;
IL2CPP_EXTERN_C String_t* _stringLiteral9CC755E0C646938ADAE69A0EB3359DAAF5D74175;
IL2CPP_EXTERN_C String_t* _stringLiteralA7504EF46F36160E7DBF3DDCF3D029AD4817D3E6;
IL2CPP_EXTERN_C String_t* _stringLiteralB4AFA59984E170FBE2C100DAB9667B97DEBC0E55;
IL2CPP_EXTERN_C String_t* _stringLiteralB964E2ABF1086239D09154067A1805A2E3E74DB5;
IL2CPP_EXTERN_C String_t* _stringLiteralBD25AF8CE65F9B78B53D55B0E5E9E67330F6FFA1;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC974DEBF1FB092B03E1B379DA19800780F65F5F2;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE10C348A0C2B1041ABA9463F48E12ADD6FCE6AA4;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1;
IL2CPP_EXTERN_C String_t* _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF63A36CE5FB4A7C8B148AB4B8427E8FF5A711A65;
IL2CPP_EXTERN_C String_t* _stringLiteralFDE83360537AACA4E9932F93BFEEBE4A2B475AB4;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m6B74698591A4762BEAD893864849B281DF7D3CBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m0036819440584E0AC6A925AF3B9C3FEDFF2A49B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m35963B85D789BB80485A3EA2FC8B2E59AC26AC97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0AFB67D7704902E923426A5AC82862E79065B462_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAE938B6680E59536FE4A7D2673C28D711F07A6ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m56822F1F72A1C08901B5057514AF78C301855A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m70660A887A404007DC70F6F16E1564CBBECCAE35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCA1741446BBCBB6DA1EEE4CBA933503E371880B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB0BA2488A1DF08E6307587E830CDB997507C3BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m71ED19349068C33F36F5C0A77B422CA12ED2736D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA44777DCA745475481576D52B5CDA569AB131344_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC5DEF7CFA5DF166D4B351EAB1FF9A2DC3C996111_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mFE35A0761349CC426A095DB8CCC67C17E84B525E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6260A594649D6139AB78AD552CB3BB96186F6D0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD9CBDA50191DF66243D7FF4BBED51D6B2E982E70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m13CFF17334D157DA18CA0B0061D0A66B6379B945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1B76CD20C4F1CF6BD59E08CF75B4E4CA97F23217_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2FEDD54E41884887830DAAB6459C15D3E39C78F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m80ED8CCB53D255512F570C1FA995FBC08391C468_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m350E9A389D5546A9AF6BA89B1F06AE46371CC59E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m01AC2B6FDF952B7ACF16089D4BA6BA374A728DE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m85069F269FA0297E5B29B2B53C8F6889AF6F19EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8E5B95552F6130227ACC9495422E4C83DD764DFB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m98DCC966FAEB46A63DF2F36389C0EDC164B12DBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA719E4695AE06900A16266CFD7C37B4307F8F537_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD368FAAD467AE577CB33F3C18B05858E74212193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetFlattenedMethodsU3Ed__18_System_Collections_IEnumerator_Reset_m16294D7AAFE21382278CC8476757735C8C4CB1CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__25_0_mC0E3FF0BADCAD1F5B27D17749F8BCB1484154A3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__0_mBDC7709CE09425F240C42147C3BB2FDB7E76FAF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__1_m086012131CD06B409756038400BF39327BF9F233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__2_mCA3D8AC6B0001C61241D0164C6089EE68DF7F245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CCanSerializePropertyU3Eb__0_m9DF628356CB27A717F31CD102E1D609070B00ABB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CCanSerializeFieldU3Eb__0_mFA28917E7AF68FAD4A6A425DF445DD5AC3115D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CCSharpNameU3Eb__0_mB271DB9009C764D4CB33A03876DB554A4EEFB2C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsCyclicReferenceManager_Exit_m91D1DB5745A082CE50E57ABB26B16E0F3661120F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsCyclicReferenceManager_GetReferenceObject_mA7330D4D27E050EE92EC6F5333767307B8E1B7C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsCyclicReferenceManager_MarkSerialized_m8CD82B690712E7EEE90E8B7C15EAF22E2E76B952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsMetaType_CreateInstance_m29B05EF9602FCAE885BBC789C04C5EA32D60AE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsPortableReflection_GetAttribute_TisfsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131_m326FA0FAC14251A0B0C4B8B2207EA52E8D425528_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsReflectionUtility_GetInterface_mECB1C271163A4B35F1CB6F2976818AF0A50AD905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Delegate_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8;;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;;

struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1;
struct ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFE752FEFBBCDEA0ABFB46556A567D61EFF176FD1* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tA19BA39E5042FA7AF8D048D51934DC3BD9F2E952* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t65BBB6F728D41FD4760F6D6C59CC030CF237785F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t989376E319D2B29386CA895794C87B67F546A729* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t48AF048E20386EEBFAF64045EBD7E8B8781B4A8D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3E1CE5ECB2504E2AD242D62AEAB2E0FEC5F4178E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>
struct Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t607696182CD414246EE5AE0D9B0CA6E932790F3F* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tBD90273CB39F445411EE482CEC310A1082B0243A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t454F2DB878B0EFAB63E7E1C92A7F0D126981E341* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>
struct Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t79A9353B9D38553B300A9E3B116A6AEE4E3C199A* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t83561E1D5903C4B2EB5D1197ADE688D242BA59E9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5A48AD1BA04733F854F5B3C36BDC375B9DE672AA* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>>
struct Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDC4D6CD057F94DC3B154581458A2695F120B0CE5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC6FC39399FDDF5ACBC9D601EDE4A97DE21E95F8A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE9EF826498D477BC24D0E280FDADBC10602EB8F2* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t930DFD181E8E0F665574C26E7B93C553B56BDEAF* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t710C6D24841A0513DEF3339081AEDEEEA082B082* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4FAB54BBE698E087FF06EEB537BD0531AF9E8C26* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tC4D7CD3E804DC835CCF2F990797BC1D9AE4330D7* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___s_emptyArray_5;
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

// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>
struct List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParsedAssemblyQualifiedNameU5BU5D_t97C3ED6927C88C67C59F4F3144C00B6442A0EA37* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParsedAssemblyQualifiedNameU5BU5D_t97C3ED6927C88C67C59F4F3144C00B6442A0EA37* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsMetaProperty>
struct List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct List_1_t7182E9791DD2596935EC5EBF901871476E91B95D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7182E9791DD2596935EC5EBF901871476E91B95D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block>
struct List_1_t85812977073AD90622C1915AAFE06D1EAB782A80  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BlockU5BU5D_t8C4C01F7859CDEFEABA47CEEA229465A8169BAC6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t85812977073AD90622C1915AAFE06D1EAB782A80_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BlockU5BU5D_t8C4C01F7859CDEFEABA47CEEA229465A8169BAC6* ___s_emptyArray_5;
};

// System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName
struct ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8  : public RuntimeObject
{
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<AssemblyDescriptionString>k__BackingField
	String_t* ___U3CAssemblyDescriptionStringU3Ek__BackingField_0;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<TypeName>k__BackingField
	String_t* ___U3CTypeNameU3Ek__BackingField_1;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<ShortAssemblyName>k__BackingField
	String_t* ___U3CShortAssemblyNameU3Ek__BackingField_2;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_3;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<Culture>k__BackingField
	String_t* ___U3CCultureU3Ek__BackingField_4;
	// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<PublicKeyToken>k__BackingField
	String_t* ___U3CPublicKeyTokenU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName> Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<GenericParameters>k__BackingField
	List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* ___U3CGenericParametersU3Ek__BackingField_6;
	// System.Int32 Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::<GenericParameterCount>k__BackingField
	int32_t ___U3CGenericParameterCountU3Ek__BackingField_7;
};

// Unity.VisualScripting.PlatformUtility
struct PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6  : public RuntimeObject
{
};

struct PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6_StaticFields
{
	// System.Boolean Unity.VisualScripting.PlatformUtility::supportsJit
	bool ___supportsJit_0;
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

// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	// Unity.VisualScripting.FullSerializer.fsSerializer Unity.VisualScripting.FullSerializer.fsBaseConverter::Serializer
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer_0;
};

// Unity.VisualScripting.FullSerializer.fsConfig
struct fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726  : public RuntimeObject
{
	// System.Type[] Unity.VisualScripting.FullSerializer.fsConfig::SerializeAttributes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___SerializeAttributes_0;
	// System.Type[] Unity.VisualScripting.FullSerializer.fsConfig::IgnoreSerializeAttributes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___IgnoreSerializeAttributes_1;
	// Unity.VisualScripting.FullSerializer.fsMemberSerialization Unity.VisualScripting.FullSerializer.fsConfig::DefaultMemberSerialization
	int32_t ___DefaultMemberSerialization_2;
	// System.Func`3<System.String,System.Reflection.MemberInfo,System.String> Unity.VisualScripting.FullSerializer.fsConfig::GetJsonNameFromMemberName
	Func_3_tBAF9876D881392F517398C8A838D30B270025B3E* ___GetJsonNameFromMemberName_3;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsConfig::EnablePropertySerialization
	bool ___EnablePropertySerialization_4;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsConfig::SerializeNonAutoProperties
	bool ___SerializeNonAutoProperties_5;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsConfig::SerializeNonPublicSetProperties
	bool ___SerializeNonPublicSetProperties_6;
	// System.String Unity.VisualScripting.FullSerializer.fsConfig::CustomDateTimeFormatString
	String_t* ___CustomDateTimeFormatString_7;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsConfig::Serialize64BitIntegerAsString
	bool ___Serialize64BitIntegerAsString_8;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsConfig::SerializeEnumsAsInteger
	bool ___SerializeEnumsAsInteger_9;
};

// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager
struct fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::_objectIds
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ____objectIds_0;
	// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::_nextId
	int32_t ____nextId_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Object> Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::_marked
	Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* ____marked_2;
	// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::_depth
	int32_t ____depth_3;
};

// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	// System.Object Unity.VisualScripting.FullSerializer.fsData::_value
	RuntimeObject* ____value_0;
};

struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::True
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True_1;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::False
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False_2;
	// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsData::Null
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null_3;
};

// Unity.VisualScripting.FullSerializer.fsMetaProperty
struct fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266  : public RuntimeObject
{
	// System.Reflection.MemberInfo Unity.VisualScripting.FullSerializer.fsMetaProperty::_memberInfo
	MemberInfo_t* ____memberInfo_0;
	// System.Type Unity.VisualScripting.FullSerializer.fsMetaProperty::<StorageType>k__BackingField
	Type_t* ___U3CStorageTypeU3Ek__BackingField_1;
	// System.Type Unity.VisualScripting.FullSerializer.fsMetaProperty::<OverrideConverterType>k__BackingField
	Type_t* ___U3COverrideConverterTypeU3Ek__BackingField_2;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::<CanRead>k__BackingField
	bool ___U3CCanReadU3Ek__BackingField_3;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::<CanWrite>k__BackingField
	bool ___U3CCanWriteU3Ek__BackingField_4;
	// System.String Unity.VisualScripting.FullSerializer.fsMetaProperty::<JsonName>k__BackingField
	String_t* ___U3CJsonNameU3Ek__BackingField_5;
	// System.String Unity.VisualScripting.FullSerializer.fsMetaProperty::<MemberName>k__BackingField
	String_t* ___U3CMemberNameU3Ek__BackingField_6;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::<IsPublic>k__BackingField
	bool ___U3CIsPublicU3Ek__BackingField_7;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::<IsReadOnly>k__BackingField
	bool ___U3CIsReadOnlyU3Ek__BackingField_8;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption
struct fsOption_t4278BEF99FB996B0A86CFD73812F3B6AE3D94E9C  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection
struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3  : public RuntimeObject
{
};

struct fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields
{
	// System.Type[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_0;
	// System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute> Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::_cachedAttributeQueries
	RuntimeObject* ____cachedAttributeQueries_1;
	// System.Reflection.BindingFlags Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::DeclaredFlags
	int32_t ___DeclaredFlags_2;
};

// Unity.VisualScripting.FullSerializer.fsReflectionUtility
struct fsReflectionUtility_t3C38ECCA9B4E8A7144D14C28F01E7E74EA2D61C9  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_availableConverters
	List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753* ____availableConverters_0;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsDirectConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_availableDirectConverters
	Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51* ____availableDirectConverters_1;
	// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor> Unity.VisualScripting.FullSerializer.fsSerializer::_processors
	List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* ____processors_2;
	// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager Unity.VisualScripting.FullSerializer.fsSerializer::_references
	fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* ____references_3;
	// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter Unity.VisualScripting.FullSerializer.fsSerializer::_lazyReferenceWriter
	fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A* ____lazyReferenceWriter_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Unity.VisualScripting.FullSerializer.fsSerializer::_abstractTypeRemap
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ____abstractTypeRemap_5;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedConverterTypeInstances
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverterTypeInstances_6;
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedConverters
	Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9* ____cachedConverters_7;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>> Unity.VisualScripting.FullSerializer.fsSerializer::_cachedProcessors
	Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* ____cachedProcessors_8;
	// Unity.VisualScripting.FullSerializer.fsContext Unity.VisualScripting.FullSerializer.fsSerializer::Context
	fsContext_t3B227C205D84208E2D8934429C07677542C97B5F* ___Context_9;
	// Unity.VisualScripting.FullSerializer.fsConfig Unity.VisualScripting.FullSerializer.fsSerializer::Config
	fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___Config_10;
};

struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_StaticFields
{
	// System.Collections.Generic.HashSet`1<System.String> Unity.VisualScripting.FullSerializer.fsSerializer::_reservedKeywords
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____reservedKeywords_11;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_ObjectReference
	String_t* ___Key_ObjectReference_12;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_ObjectDefinition
	String_t* ___Key_ObjectDefinition_13;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_InstanceType
	String_t* ___Key_InstanceType_14;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_Version
	String_t* ___Key_Version_15;
	// System.String Unity.VisualScripting.FullSerializer.fsSerializer::Key_Content
	String_t* ___Key_Content_16;
};

// Unity.VisualScripting.FullSerializer.fsTypeCache
struct fsTypeCache_t4725ADEE499F2DC8A59B78FB446BF4BC34C1FDC8  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions
struct fsTypeExtensions_t2F9B4DAD3A3BE02A6A45CB2FA315123061975E60  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.Internal.fsVersionManager
struct fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3  : public RuntimeObject
{
};

struct fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>> Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::_cache
	Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* ____cache_0;
};

// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/<>c
struct U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701  : public RuntimeObject
{
};

struct U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_StaticFields
{
	// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/<>c Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/<>c::<>9
	U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701* ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/<>c::<>9__25_0
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___U3CU3E9__25_0_1;
};

// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block
struct Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF  : public RuntimeObject
{
	// System.Int32 Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block::startIndex
	int32_t ___startIndex_0;
	// System.Int32 Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block::endIndex
	int32_t ___endIndex_1;
	// System.Int32 Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block::level
	int32_t ___level_2;
	// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block::parentBlock
	Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* ___parentBlock_3;
	// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block> Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block::innerBlocks
	List_1_t85812977073AD90622C1915AAFE06D1EAB782A80* ___innerBlocks_4;
	// Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block::parsedAssemblyQualifiedName
	ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* ___parsedAssemblyQualifiedName_5;
};

// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator
struct ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24  : public RuntimeObject
{
};

struct ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<System.Object> Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::Instance
	RuntimeObject* ___Instance_0;
};

// Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687  : public RuntimeObject
{
	// System.Reflection.MemberInfo Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass16_0::member
	MemberInfo_t* ___member_0;
};

// Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52  : public RuntimeObject
{
	// System.Reflection.PropertyInfo Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass18_0::property
	PropertyInfo_t* ___property_0;
};

// Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6  : public RuntimeObject
{
	// System.Reflection.FieldInfo Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass19_0::field
	FieldInfo_t* ___field_0;
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18
struct U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8  : public RuntimeObject
{
	// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MethodInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::<>2__current
	MethodInfo_t* ___U3CU3E2__current_1;
	// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::type
	Type_t* ___type_3;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.String Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::methodName
	String_t* ___methodName_5;
	// System.String Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::<>3__methodName
	String_t* ___U3CU3E3__methodName_6;
	// System.Reflection.MethodInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::<methods>5__2
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* ___U3CmethodsU3E5__2_7;
	// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::<i>5__3
	int32_t ___U3CiU3E5__3_8;
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator
struct AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1  : public RuntimeObject
{
};

// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter
struct fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.VisualScripting.FullSerializer.fsData> Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter::_pendingDefinitions
	Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* ____pendingDefinitions_0;
	// System.Collections.Generic.HashSet`1<System.Int32> Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter::_references
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ____references_1;
};

// Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9  : public RuntimeObject
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0::includeNamespace
	bool ___includeNamespace_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>
struct Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* ____current_3;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
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

// Unity.VisualScripting.FullSerializer.fsConverter
struct fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};

// Unity.VisualScripting.FullSerializer.fsObjectAttribute
struct fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.Type[] Unity.VisualScripting.FullSerializer.fsObjectAttribute::PreviousModels
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___PreviousModels_0;
	// System.String Unity.VisualScripting.FullSerializer.fsObjectAttribute::VersionString
	String_t* ___VersionString_1;
	// Unity.VisualScripting.FullSerializer.fsMemberSerialization Unity.VisualScripting.FullSerializer.fsObjectAttribute::MemberSerialization
	int32_t ___MemberSerialization_2;
	// System.Type Unity.VisualScripting.FullSerializer.fsObjectAttribute::Converter
	Type_t* ___Converter_3;
	// System.Type Unity.VisualScripting.FullSerializer.fsObjectAttribute::Processor
	Type_t* ___Processor_4;
};

// Unity.VisualScripting.FullSerializer.fsPropertyAttribute
struct fsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String Unity.VisualScripting.FullSerializer.fsPropertyAttribute::Name
	String_t* ___Name_0;
	// System.Type Unity.VisualScripting.FullSerializer.fsPropertyAttribute::Converter
	Type_t* ___Converter_1;
};

// Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::_success
	bool ____success_1;
	// System.Collections.Generic.List`1<System.String> Unity.VisualScripting.FullSerializer.fsResult::_messages
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	// System.String[] Unity.VisualScripting.FullSerializer.fsResult::EmptyStringArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray_0;
	// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Success
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success_3;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.fsResult
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success_1;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[] Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Ancestors
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors_0;
	// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::VersionString
	String_t* ___VersionString_1;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ModelType
	Type_t* ___ModelType_2;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors_0;
	char* ___VersionString_1;
	Type_t* ___ModelType_2;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors_0;
	Il2CppChar* ___VersionString_1;
	Type_t* ___ModelType_2;
};

// Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
struct AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 
{
	// System.Reflection.MemberInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery::MemberInfo
	MemberInfo_t* ___MemberInfo_0;
	// System.Type Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery::AttributeType
	Type_t* ___AttributeType_1;
};
// Native definition for P/Invoke marshalling of Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
struct AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_pinvoke
{
	MemberInfo_t* ___MemberInfo_0;
	Type_t* ___AttributeType_1;
};
// Native definition for COM marshalling of Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
struct AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_com
{
	MemberInfo_t* ___MemberInfo_0;
	Type_t* ___AttributeType_1;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_hasValue
	bool ____hasValue_0;
	// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1::_value
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value_1;
};

struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption`1::Empty
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty_2;
};

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB  : public MethodBase_t
{
};

struct ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_StaticFields
{
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;
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

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.VisualScripting.FullSerializer.Internal.Converters.UnityEvent_Converter
struct UnityEvent_Converter_tD5E136836112018EC719F5845E73129360FD5CE7  : public fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918
{
};

// Unity.VisualScripting.FullSerializer.fsMetaType
struct fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743  : public RuntimeObject
{
	// System.Type Unity.VisualScripting.FullSerializer.fsMetaType::ReflectedType
	Type_t* ___ReflectedType_0;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::_hasEmittedAotData
	bool ____hasEmittedAotData_1;
	// System.Nullable`1<System.Boolean> Unity.VisualScripting.FullSerializer.fsMetaType::_hasDefaultConstructorCache
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____hasDefaultConstructorCache_2;
	// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::_isDefaultConstructorPublic
	bool ____isDefaultConstructorPublic_3;
	// Unity.VisualScripting.FullSerializer.fsMetaProperty[] Unity.VisualScripting.FullSerializer.fsMetaType::<Properties>k__BackingField
	fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___U3CPropertiesU3Ek__BackingField_4;
};

struct fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_StaticFields
{
	// System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>> Unity.VisualScripting.FullSerializer.fsMetaType::_configMetaTypes
	Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525* ____configMetaTypes_5;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
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

// Unity.VisualScripting.FullSerializer.fsDuplicateVersionNameException
struct fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640  : public Exception_t
{
};

// Unity.VisualScripting.FullSerializer.fsMissingVersionConstructorException
struct fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE  : public Exception_t
{
};

// System.Func`2<System.String,System.String>
struct Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.Boolean>
struct Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E  : public MulticastDelegate_t
{
};

// System.Func`2<System.Type,System.String>
struct Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.Func`3<System.String,System.Reflection.MemberInfo,System.String>
struct Func_3_tBAF9876D881392F517398C8A838D30B270025B3E  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.MemberAccessException
struct MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Reflection.TargetInvocationException
struct TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// System.MissingMemberException
struct MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211  : public MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC
{
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_18;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_19;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Signature_20;
};

// System.MissingMethodException
struct MissingMethodException_t3D861B41F6520C32A7994A884343802925703155  : public MissingMemberException_tB9D7B25FF06EEBB52D036DA8B1BE67F67619D211
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// Unity.VisualScripting.FullSerializer.fsMetaProperty[]
struct fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98  : public RuntimeArray
{
	ALIGN_FIELD (8) fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* m_Items[1];

	inline fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1  : public RuntimeArray
{
	ALIGN_FIELD (8) Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* m_Items[1];

	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A  : public RuntimeArray
{
	ALIGN_FIELD (8) ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* m_Items[1];

	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// Unity.VisualScripting.FullSerializer.Internal.fsVersionedType[]
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F  : public RuntimeArray
{
	ALIGN_FIELD (8) fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 m_Items[1];

	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ModelType_2), (void*)NULL);
		#endif
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Ancestors_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___VersionString_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___ModelType_2), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke_back(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke_cleanup(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com_back(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled);
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com_cleanup(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled);

// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method) ;
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m1C0FA5FADFE944AE738700734DAF1F7431F24F2A_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) ;
// TResult System.Func`3<System.Object,System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m75B453F541BD3792F76EBFFFA8C573DA8AB6852C_gshared (Dictionary_2_t12EBB875CF54482585C346EFBACF37B33E3D6F76* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_gshared (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_gshared_inline (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mE2B417D9C0A995CF8505F6CA100FA7FE7A3BEF97_gshared (Dictionary_2_tEDE1812AF080D310B7E71B3DB1C085858D812133* __this, RuntimeObject* ___key0, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* ___value1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption::Just<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_gshared (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mAA16C26DAD891829846EB11127566A04B08650E3_gshared (Dictionary_2_tEDE1812AF080D310B7E71B3DB1C085858D812133* __this, RuntimeObject* ___key0, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_gshared (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_gshared_inline (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE39074646B66E5876B460EFBBC3A4FC84BB0B88A_gshared (Dictionary_2_tEDE1812AF080D310B7E71B3DB1C085858D812133* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
inline bool HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_gshared)(__this, ___item0, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsSerializer::EnsureDictionary(Unity.VisualScripting.FullSerializer.fsData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsSerializer_EnsureDictionary_m852412879A44895491BB671AB6D9A29CCD1E7760 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData> Unity.VisualScripting.FullSerializer.fsData::get_AsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_m144DD5B09AD525C0F94B2E1750A4256495266F66 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, String_t* ___str0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, String_t* ___key0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, String_t*, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.VisualScripting.FullSerializer.fsData>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mC5DEF7CFA5DF166D4B351EAB1FF9A2DC3C996111 (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* __this, int32_t ___key0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6*, int32_t, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Unity.VisualScripting.FullSerializer.fsData>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m0036819440584E0AC6A925AF3B9C3FEDFF2A49B7 (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Unity.VisualScripting.FullSerializer.fsData>::get_Item(TKey)
inline fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* Dictionary_2_get_Item_mB0BA2488A1DF08E6307587E830CDB997507C3BF4 (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* (*) (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Unity.VisualScripting.FullSerializer.fsData>::Remove(TKey)
inline bool Dictionary_2_Remove_m35963B85D789BB80485A3EA2FC8B2E59AC26AC97 (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
inline bool HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, int32_t, const RuntimeMethod*))HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.VisualScripting.FullSerializer.fsData>::Clear()
inline void Dictionary_2_Clear_m6B74698591A4762BEAD893864849B281DF7D3CBF (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6*, const RuntimeMethod*))Dictionary_2_Clear_mE1EFF7C68491EE07D21EE9924475A559BF0A4773_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
inline void HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92 (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.VisualScripting.FullSerializer.fsData>::.ctor()
inline void Dictionary_2__ctor_m56822F1F72A1C08901B5057514AF78C301855A5F (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*, const RuntimeMethod*))HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_StorageType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_StorageType_mBC9EEB04E34352346F970CB36245E0CAC10F29E6_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_MemberName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_MemberName_m910365017A946E12F897AA268E2C54E92D8B0492_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPublic_m73C84BEEAE6C993FACC6199B81DBF2B80D3810E5 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_IsPublic(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_IsPublic_mDDC0D9F1D8C16C97D5A967A66B90C96CF00EFDBA_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsInitOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsInitOnly_m476BB9325A68BDD56B088D3E8407F75FA1388ED9 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_IsReadOnly(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_IsReadOnly_m81F1BE9C4A906FD3A846B032068D8CF2E7C69ED4_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_CanRead(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_CanRead_m29A21E1EC23A8330A771140563638EBE23C01C73_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_CanWrite(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_CanWrite_mCE48F80DD621B06344EE627E0E71B988A63BC694_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::CommonInitialize(Unity.VisualScripting.FullSerializer.fsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_CommonInitialize_mED4CA3EF3000E44A9A61F6FE6F487BAD44B5AE5A (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4 (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<Unity.VisualScripting.FullSerializer.fsPropertyAttribute>(System.Reflection.MemberInfo)
inline fsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131* fsPortableReflection_GetAttribute_TisfsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131_m326FA0FAC14251A0B0C4B8B2207EA52E8D425528 (MemberInfo_t* ___element0, const RuntimeMethod* method)
{
	return ((  fsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131* (*) (MemberInfo_t*, const RuntimeMethod*))fsPortableReflection_GetAttribute_TisRuntimeObject_m1C0FA5FADFE944AE738700734DAF1F7431F24F2A_gshared)(___element0, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_JsonName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_JsonName_mF0BBA2CA8267D1CCEB6AD349EC15006B2FC68ED4_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_OverrideConverterType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_OverrideConverterType_m37267DED2A75405AF6B2E4FF77802820C8F8B04B_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, Type_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.FullSerializer.fsMetaProperty::get_JsonName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* fsMetaProperty_get_JsonName_mA58DF433A59CBE9214939853C7F4E9D4B838A652_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.FullSerializer.fsMetaProperty::get_MemberName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* fsMetaProperty_get_MemberName_mED2E167648A8A76B9C0FD73A6405012D82D9EDBE_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) ;
// TResult System.Func`3<System.String,System.Reflection.MemberInfo,System.String>::Invoke(T1,T2)
inline String_t* Func_3_Invoke_m2003B38A4BF86DEA69B95FE07CF82566961B5328_inline (Func_3_tBAF9876D881392F517398C8A838D30B270025B3E* __this, String_t* ___arg10, MemberInfo_t* ___arg21, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_3_tBAF9876D881392F517398C8A838D30B270025B3E*, String_t*, MemberInfo_t*, const RuntimeMethod*))Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B (FieldInfo_t* ___left0, FieldInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.OptimizedReflection::SetValueOptimized(System.Reflection.FieldInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptimizedReflection_SetValueOptimized_m31D72287894B166E76AB07044AD0577D36872BF9 (FieldInfo_t* ___fieldInfo0, RuntimeObject* ___target1, RuntimeObject* ___value2, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.OptimizedReflection::SetValueOptimized(System.Reflection.PropertyInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptimizedReflection_SetValueOptimized_m90041502530ABB8093833AB1AAF7EAD71CDA42AA (PropertyInfo_t* ___propertyInfo0, RuntimeObject* ___target1, RuntimeObject* ___value2, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsMetaProperty>::.ctor()
inline void List_1__ctor_m98DCC966FAEB46A63DF2F36389C0EDC164B12DBE (List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType::CollectProperties(Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsMetaProperty>,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaType_CollectProperties_m4ED60C5E38D1D5EC03A3A61803D7F60E21ED2D3C (fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* ___properties1, Type_t* ___reflectedType2, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsMetaProperty>::ToArray()
inline fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* List_1_ToArray_m85069F269FA0297E5B29B2B53C8F6889AF6F19EB (List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* __this, const RuntimeMethod* method)
{
	return ((  fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* (*) (List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType::set_Properties(Unity.VisualScripting.FullSerializer.fsMetaProperty[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaType_set_Properties_m75C4CFDD1D8A0844B8E8E61B1028BB013A011A9E_inline (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// System.Type Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::Resolve(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Boolean>::.ctor(T)
inline void Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, bool ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, bool, const RuntimeMethod*))Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_gshared)(__this, ___value0, method);
}
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredConstructor(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* fsPortableReflection_GetDeclaredConstructor_m9F5B44FCB7E14D7E7CF90482A9D1D13C11445C01 (Type_t* ___type0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4 (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___left0, ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* ___right1, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// Unity.VisualScripting.FullSerializer.fsMetaProperty[] Unity.VisualScripting.FullSerializer.fsMetaType::get_Properties()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* fsMetaType_get_Properties_m54618035A54E08C924EB7E8781AA55C1D19F950A_inline (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::get_IsPublic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsMetaProperty_get_IsPublic_m30FEC58C34CBDB5F59B85174A8B4F1CB9D7FFE7D_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::get_IsReadOnly()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsMetaProperty_get_IsReadOnly_m0C3E3C1607BF2EE1BFE02073A743AD580EB0EB5A_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::get_HasDefaultConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaType_get_HasDefaultConstructor_m6AFFF40736CFD48C95681AF3228409840BB4F81E (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsAotCompilationManager::AddAotCompilation(System.Type,Unity.VisualScripting.FullSerializer.fsMetaProperty[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsAotCompilationManager_AddAotCompilation_mC52615432A98FF68630197F195080908FB443A19 (Type_t* ___type0, fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___members1, bool ___isConstructorPublic2, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC (Type_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5 (Type_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.Runtime.Serialization.FormatterServices::GetSafeUninitializedObject(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FormatterServices_GetSafeUninitializedObject_mA5262EEAA53EA4A47A35A22097A65EE061209769 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___elementType0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m2BE3252B26369EA17E06A564F25172F6D002469F (Type_t* ___type0, bool ___nonPublic1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mAE938B6680E59536FE4A7D2673C28D711F07A6ED (Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___key0, Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525*, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726*, Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>::.ctor()
inline void Dictionary_2__ctor_m70660A887A404007DC70F6F16E1564CBBECCAE35 (Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m71ED19349068C33F36F5C0A77B422CA12ED2736D (Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___key0, Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525*, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726*, Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m0AFB67D7704902E923426A5AC82862E79065B462 (Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* __this, Type_t* ___key0, fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E*, Type_t*, fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType::.ctor(Unity.VisualScripting.FullSerializer.fsConfig,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaType__ctor_mC6683E69F4CE1C8FE4BC514BD4ED19E33CE35CF3 (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, Type_t* ___reflectedType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mA44777DCA745475481576D52B5CDA569AB131344 (Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* __this, Type_t* ___key0, fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E*, Type_t*, fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsMetaType>>::.ctor()
inline void Dictionary_2__ctor_mCA1741446BBCBB6DA1EEE4CBA933503E371880B9 (Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<Unity.VisualScripting.FullSerializer.fsObjectAttribute>(System.Reflection.MemberInfo)
inline fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A (MemberInfo_t* ___element0, const RuntimeMethod* method)
{
	return ((  fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* (*) (MemberInfo_t*, const RuntimeMethod*))fsPortableReflection_GetAttribute_TisRuntimeObject_m1C0FA5FADFE944AE738700734DAF1F7431F24F2A_gshared)(___element0, method);
}
// System.Reflection.MemberInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMembers(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* fsPortableReflection_GetDeclaredMembers_m65055614D9291573376917BF3044659CAF23409E (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m538342D591F27E0886D3D9F7969DB43E9F1AC3A0 (U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74 (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline bool Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D (RuntimeObject* ___source0, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_mF6C6AC8DF8971883615734832D09C9210B956F0F_gshared)(___source0, ___predicate1, method);
}
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74 (FieldInfo_t* ___left0, FieldInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::CanSerializeProperty(Unity.VisualScripting.FullSerializer.fsConfig,System.Reflection.PropertyInfo,System.Reflection.MemberInfo[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaType_CanSerializeProperty_mAD3B5D6C4B122AEBA0895E510A69BFDDA00427B2 (fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, PropertyInfo_t* ___property1, MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___members2, bool ___annotationFreeValue3, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::.ctor(Unity.VisualScripting.FullSerializer.fsConfig,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty__ctor_m6C23AFA33EA55557279A069D19DC87FCCEBBBAD1 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, PropertyInfo_t* ___property1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsMetaProperty>::Add(T)
inline void List_1_Add_m80ED8CCB53D255512F570C1FA995FBC08391C468_inline (List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* __this, fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043*, fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::CanSerializeField(Unity.VisualScripting.FullSerializer.fsConfig,System.Reflection.FieldInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaType_CanSerializeField_mD6450E719027D7DC41CA949858689F8B2B87682E (fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, FieldInfo_t* ___field1, bool ___annotationFreeValue2, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::.ctor(Unity.VisualScripting.FullSerializer.fsConfig,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty__ctor_m8EAD810AB5CC9482CE78ACDAA6D7DCC2680022A6 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, FieldInfo_t* ___field1, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973 (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m409998F2ADDDE7B61682E1940C31EB545A5333A9 (U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::IsAutoProperty(System.Reflection.PropertyInfo,System.Reflection.MemberInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaType_IsAutoProperty_mC28CBE4BA104DE04A8D082D781C962C39287CC28 (PropertyInfo_t* ___property0, MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___members1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m577E5745A5BD61B689CD9DF9A336D664BDE608AA (U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Attribute_IsDefined_m5DB4031FBFCC88B85E13217F1323701794B8D42C (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___inherit2, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_gshared)(__this, ___comparer0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
inline void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1 (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*, int32_t, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::GetReferenceId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t fsCyclicReferenceManager_GetReferenceId_m30B91E17BE1C02D89F10F705C0EE3FE8F0E0458F (fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReferenceEqualityComparator__ctor_m609265685F45AFF755A5EF6BCF53C9B2FAF2DF64 (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* __this, const RuntimeMethod* method) ;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* Attribute_GetCustomAttributes_mCB0A3E0F2148A92A0C6444D601F0F19E01B0ED09 (MemberInfo_t* ___element0, Type_t* ___type1, bool ___inherit2, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Attribute>(System.Collections.Generic.IEnumerable`1<TSource>)
inline AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.Reflection.PropertyInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* fsPortableReflection_GetDeclaredProperties_mF26959E95815BD982802EC6160E3DA185B1DC6A7 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMethods(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* fsPortableReflection_GetDeclaredMethods_mF1E5A4D80A892D0E7E9FED20061B23E39E413DB3 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Reflection.ConstructorInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredConstructors(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* fsPortableReflection_GetDeclaredConstructors_mB5B777C7EC535253A345584074FC1D8FBA32160A (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor()
inline void List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::Add(T)
inline void List_1_Add_m1B76CD20C4F1CF6BD59E08CF75B4E4CA97F23217_inline (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* __this, MemberInfo_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*, MemberInfo_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T[] System.Collections.Generic.List`1<System.Reflection.MemberInfo>::ToArray()
inline MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* List_1_ToArray_m01AC2B6FDF952B7ACF16089D4BA6BA374A728DE7 (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* __this, const RuntimeMethod* method)
{
	return ((  MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* (*) (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFlattenedMethodsU3Ed__18__ctor_m7F0BE4CC309547C4870827556E890C1490D2744A (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeQueryComparator__ctor_m97A20B142642A29462C6A1EEC957529E30965B4C (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
inline void Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4 (Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700* __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700*, RuntimeObject*, const RuntimeMethod*))Dictionary_2__ctor_m75B453F541BD3792F76EBFFFA8C573DA8AB6852C_gshared)(__this, ___comparer0, method);
}
// System.Boolean System.Reflection.MemberInfo::op_Equality(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685 (MemberInfo_t* ___left0, MemberInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFlattenedMethodsU3Ed__18_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m9F33A98F7A9AACE36540CC6A70C726AE11DEEAA6 (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions::CSharpName(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsTypeExtensions_CSharpName_m7B9CEB55166AB73F3E8475491EB08E4F91475FE6 (Type_t* ___type0, bool ___includeNamespace1, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m80831530C50B87BB035A96D17E242F8B7011C105 (U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsNested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD (Type_t* __this, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions::CSharpName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsTypeExtensions_CSharpName_mA1935C2EB35A9B042BDC965DA3A75B31F60B5671 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Skip<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
inline RuntimeObject* Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174 (RuntimeObject* ___source0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, int32_t, const RuntimeMethod*))Enumerable_Skip_TisRuntimeObject_mC63F7758979C7B3D3C94A57B8BCD63C5237EA697_gshared)(___source0, ___count1, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Type>(System.Collections.Generic.IEnumerable`1<TSource>)
inline bool Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m67CFBD544CF1D1C0C7E7457FDBDB81649DE26847_gshared)(___source0, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Type,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897 (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Type,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD (RuntimeObject* ___source0, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_mA54265C2C8A0864929ECD300B75E4952D553D17D_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6 (Type_t* ___type0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Migrate(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsVersionedType_Migrate_mA2431BCBC723C85F909F6D50CCC218ABFAED65AB (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, RuntimeObject* ___ancestorInstance0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsVersionedType_ToString_m584F4EBD02BC6D0502664D2047FF3D71270A359F (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionedType_Equals_m051C07595BCB7037C2E668E0E09D0A4C74A2958F (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t fsVersionedType_GetHashCode_m02754D5563950758CECD86BE72D69DD7046C47C6 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor()
inline void List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92 (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D*, const RuntimeMethod*))List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_gshared)(__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionImportPathRecursive(System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>,System.String,Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionManager_GetVersionImportPathRecursive_mB3A3038031C067D3C072AC7FA1A6483F923360B4 (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* ___path0, String_t* ___currentVersion1, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___current2, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::Fail(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD (String_t* ___warning0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Add(T)
inline void List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_inline (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* __this, Type_t* ___key0, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F*, Type_t*, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))Dictionary_2_TryGetValue_mE2B417D9C0A995CF8505F6CA100FA7FE7A3BEF97_gshared)(__this, ___key0, ___value1, method);
}
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType> Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionedType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_gshared)(__this, method);
}
// System.String System.ValueType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueType_ToString_mFE1CB83BECC99D07BEA7EAB25AF73BE5A727C04D (RuntimeObject* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Value()
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A*, const RuntimeMethod*))fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::VerifyUniqueVersionStrings(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___type0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::VerifyConstructors(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___type0, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<T> Unity.VisualScripting.FullSerializer.Internal.fsOption::Just<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>(T)
inline fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___value0, const RuntimeMethod* method)
{
	return ((  fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A (*) (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_gshared)(___value0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* __this, Type_t* ___key0, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F*, Type_t*, fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A, const RuntimeMethod*))Dictionary_2_set_Item_mAA16C26DAD891829846EB11127566A04B08650E3_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsMissingVersionConstructorException::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMissingVersionConstructorException__ctor_m46EA05FE262E8C98465A921D2B2EB6035ED3FEFB (fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE* __this, Type_t* ___versionedType0, Type_t* ___constructorType1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::.ctor()
inline void Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, const RuntimeMethod*))Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Enqueue(T)
inline void Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::Dequeue()
inline fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2 (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method)
{
	return ((  fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, const RuntimeMethod*))Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Type>::get_Item(TKey)
inline Type_t* Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  Type_t* (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsDuplicateVersionNameException::.ctor(System.Type,System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDuplicateVersionNameException__ctor_m0CA794E21F56EBADEED2971C6E9DC603CAA0AF51 (fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640* __this, Type_t* ___typeA0, Type_t* ___typeB1, String_t* ___version2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___key0, Type_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Collections.Generic.Queue`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>::get_Count()
inline int32_t Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_inline (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*, const RuntimeMethod*))Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>>::.ctor()
inline void Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1 (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F*, const RuntimeMethod*))Dictionary_2__ctor_mE39074646B66E5876B460EFBBC3A4FC84BB0B88A_gshared)(__this, method);
}
// System.String Unity.VisualScripting.FullSerializer.fsJsonPrinter::CompressedJson(Unity.VisualScripting.FullSerializer.fsData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsJsonPrinter_CompressedJson_mAD916E32C1E828444E79CE2D32E74BD7892FC767 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, const RuntimeMethod* method) ;
// System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_m6DF4F85BE40F8A96BAFEC189306813ECE30DF44A (String_t* ___json0, Type_t* ___type1, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsData Unity.VisualScripting.FullSerializer.fsJsonParser::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* fsJsonParser_Parse_m8BE8A63CD24E3C0D05A65A977FF70AC8E1D34336 (String_t* ___input0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsConverter__ctor_m3C3DE66DA4A3FA50ED9A7D0F10EF70BB0D5FEA26 (fsConverter_tFCDE4B68CAA0B3317FAC29FAAF380AF759141918* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>::.ctor()
inline void List_1__ctor_m8E5B95552F6130227ACC9495422E4C83DD764DFB (List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block__ctor_m244AF359DB9C35E945F34949B0C751AE74BDB25E (Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block>::Add(T)
inline void List_1_Add_m2FEDD54E41884887830DAAB6459C15D3E39C78F0_inline (List_1_t85812977073AD90622C1915AAFE06D1EAB782A80* __this, Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t85812977073AD90622C1915AAFE06D1EAB782A80*, Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsedAssemblyQualifiedName__ctor_m315CCD24E7F356425EFA2B5D89D924E746449987 (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, String_t* ___AssemblyQualifiedName0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName> Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_GenericParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* ParsedAssemblyQualifiedName_get_GenericParameters_mB90B86B5D8874418CF577CA298C2C306E29F2BD9_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>::Add(T)
inline void List_1_Add_m13CFF17334D157DA18CA0B0061D0A66B6379B945_inline (List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* __this, ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9*, ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::set_TypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParsedAssemblyQualifiedName_set_TypeName_m6DA7C54E5AD807C130846D6855D04CDD0AD9595B_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_TypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_TypeName_m0936BDF09D58E5801C30963AD6A00710D188C96D_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>::get_Count()
inline int32_t List_1_get_Count_mD368FAAD467AE577CB33F3C18B05858E74212193_inline (List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_AssemblyDescriptionString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_AssemblyDescriptionString_mDD1B7B2E04A769B237A6C7569CB08036C0692BF3_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814 (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6 (RuntimeObject* ___source0, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::LookForPairThenRemove(System.Collections.Generic.List`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_LookForPairThenRemove_mB52C7A56627743F09A32D7AD3D369F35A5DA00A7 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___strings0, String_t* ___Name1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>::GetEnumerator()
inline Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7 List_1_GetEnumerator_m350E9A389D5546A9AF6BA89B1F06AE46371CC59E (List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7 (*) (List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>::Dispose()
inline void Enumerator_Dispose_mFE35A0761349CC426A095DB8CCC67C17E84B525E (Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>::get_Current()
inline ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* Enumerator_get_Current_mD9CBDA50191DF66243D7FF4BBED51D6B2E982E70_inline (Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7* __this, const RuntimeMethod* method)
{
	return ((  ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* (*) (Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsedAssemblyQualifiedName_Replace_mCC21E16D96DA9BA55A966F1A1F09FB6539E2B5FE (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, String_t* ___oldTypeName0, String_t* ___newTypeName1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName>::MoveNext()
inline bool Enumerator_MoveNext_m6260A594649D6139AB78AD552CB3BB96186F6D0E (Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_GenericParameterCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParsedAssemblyQualifiedName_get_GenericParameterCount_m44F25295A74A3912CF2C4D6F6386175B62E26FDD_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_ToString_m050616A35FCD939174FD52F283AF9A794C9BD8F4 (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, bool ___includeAssemblyDescription0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block>::.ctor()
inline void List_1__ctor_mA719E4695AE06900A16266CFD7C37B4307F8F537 (List_1_t85812977073AD90622C1915AAFE06D1EAB782A80* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t85812977073AD90622C1915AAFE06D1EAB782A80*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m548D4B502CD6FB161BB96A5511E48DD6B9992C05 (U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701* __this, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter::WriteDefinition(System.Int32,Unity.VisualScripting.FullSerializer.fsData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsLazyCycleDefinitionWriter_WriteDefinition_mE5A307D8E186FF9645CA85A979D7B781C1A8C665 (fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A* __this, int32_t ___id0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mC5DEF7CFA5DF166D4B351EAB1FF9A2DC3C996111_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_references.Contains(id))
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_0 = __this->____references_1;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1(L_0, L_1, HashSet_1_Contains_m98A9F88FF94538B5EECB0F87E1E3B3572E02ACA1_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// EnsureDictionary(data);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_3 = ___data1;
		il2cpp_codegen_runtime_class_init_inline(fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_il2cpp_TypeInfo_var);
		fsSerializer_EnsureDictionary_m852412879A44895491BB671AB6D9A29CCD1E7760(L_3, NULL);
		// data.AsDictionary[Key_ObjectDefinition] = new fsData(id.ToString());
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_4 = ___data1;
		NullCheck(L_4);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5;
		L_5 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_4, NULL);
		String_t* L_6 = ((fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_StaticFields*)il2cpp_codegen_static_fields_for(fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_il2cpp_TypeInfo_var))->___Key_ObjectDefinition_13;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___id0), NULL);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		fsData__ctor_m144DD5B09AD525C0F94B2E1750A4256495266F66(L_8, L_7, NULL);
		NullCheck(L_5);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_5, L_6, L_8, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		return;
	}

IL_0031:
	{
		// _pendingDefinitions[id] = data;
		Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* L_9 = __this->____pendingDefinitions_0;
		int32_t L_10 = ___id0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___data1;
		NullCheck(L_9);
		Dictionary_2_set_Item_mC5DEF7CFA5DF166D4B351EAB1FF9A2DC3C996111(L_9, L_10, L_11, Dictionary_2_set_Item_mC5DEF7CFA5DF166D4B351EAB1FF9A2DC3C996111_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter::WriteReference(System.Int32,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsLazyCycleDefinitionWriter_WriteReference_mACBE88BD37EDA06D992F9FF0A30B0D3BBE33FD74 (fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A* __this, int32_t ___id0, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___dict1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m0036819440584E0AC6A925AF3B9C3FEDFF2A49B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m35963B85D789BB80485A3EA2FC8B2E59AC26AC97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB0BA2488A1DF08E6307587E830CDB997507C3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_pendingDefinitions.ContainsKey(id))
		Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* L_0 = __this->____pendingDefinitions_0;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m0036819440584E0AC6A925AF3B9C3FEDFF2A49B7(L_0, L_1, Dictionary_2_ContainsKey_m0036819440584E0AC6A925AF3B9C3FEDFF2A49B7_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_004a;
		}
	}
	{
		// var data = _pendingDefinitions[id];
		Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* L_3 = __this->____pendingDefinitions_0;
		int32_t L_4 = ___id0;
		NullCheck(L_3);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_5;
		L_5 = Dictionary_2_get_Item_mB0BA2488A1DF08E6307587E830CDB997507C3BF4(L_3, L_4, Dictionary_2_get_Item_mB0BA2488A1DF08E6307587E830CDB997507C3BF4_RuntimeMethod_var);
		// EnsureDictionary(data);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = L_5;
		il2cpp_codegen_runtime_class_init_inline(fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_il2cpp_TypeInfo_var);
		fsSerializer_EnsureDictionary_m852412879A44895491BB671AB6D9A29CCD1E7760(L_6, NULL);
		// data.AsDictionary[Key_ObjectDefinition] = new fsData(id.ToString());
		NullCheck(L_6);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_7;
		L_7 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_6, NULL);
		String_t* L_8 = ((fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_StaticFields*)il2cpp_codegen_static_fields_for(fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_il2cpp_TypeInfo_var))->___Key_ObjectDefinition_13;
		String_t* L_9;
		L_9 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___id0), NULL);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_10 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		fsData__ctor_m144DD5B09AD525C0F94B2E1750A4256495266F66(L_10, L_9, NULL);
		NullCheck(L_7);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_7, L_8, L_10, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		// _pendingDefinitions.Remove(id);
		Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* L_11 = __this->____pendingDefinitions_0;
		int32_t L_12 = ___id0;
		NullCheck(L_11);
		bool L_13;
		L_13 = Dictionary_2_Remove_m35963B85D789BB80485A3EA2FC8B2E59AC26AC97(L_11, L_12, Dictionary_2_Remove_m35963B85D789BB80485A3EA2FC8B2E59AC26AC97_RuntimeMethod_var);
		goto IL_0057;
	}

IL_004a:
	{
		// _references.Add(id);
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_14 = __this->____references_1;
		int32_t L_15 = ___id0;
		NullCheck(L_14);
		bool L_16;
		L_16 = HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB(L_14, L_15, HashSet_1_Add_m9B0DD9902395EE95D3DC522264BE1EBBBD3513EB_RuntimeMethod_var);
	}

IL_0057:
	{
		// dict[Key_ObjectReference] = new fsData(id.ToString());
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_17 = ___dict1;
		il2cpp_codegen_runtime_class_init_inline(fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_il2cpp_TypeInfo_var);
		String_t* L_18 = ((fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_StaticFields*)il2cpp_codegen_static_fields_for(fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC_il2cpp_TypeInfo_var))->___Key_ObjectReference_12;
		String_t* L_19;
		L_19 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___id0), NULL);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_20 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		fsData__ctor_m144DD5B09AD525C0F94B2E1750A4256495266F66(L_20, L_19, NULL);
		NullCheck(L_17);
		Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8(L_17, L_18, L_20, Dictionary_2_set_Item_m1B1A55A00A4ABB8D43D0B03D152776E46A112ED8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsLazyCycleDefinitionWriter_Clear_mF81302B0538AD1FBA244D919EF7429B935B1157C (fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m6B74698591A4762BEAD893864849B281DF7D3CBF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _pendingDefinitions.Clear();
		Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* L_0 = __this->____pendingDefinitions_0;
		NullCheck(L_0);
		Dictionary_2_Clear_m6B74698591A4762BEAD893864849B281DF7D3CBF(L_0, Dictionary_2_Clear_m6B74698591A4762BEAD893864849B281DF7D3CBF_RuntimeMethod_var);
		// _references.Clear();
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_1 = __this->____references_1;
		NullCheck(L_1);
		HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92(L_1, HashSet_1_Clear_m88C3BA6617F6667126635140414D44D76C42AE92_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsLazyCycleDefinitionWriter__ctor_m88404815CC83159CB4B9581C0737F8FE44847A38 (fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m56822F1F72A1C08901B5057514AF78C301855A5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, fsData> _pendingDefinitions = new Dictionary<int, fsData>();
		Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6* L_0 = (Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6*)il2cpp_codegen_object_new(Dictionary_2_t57BFBFEB217716B47C81A0334C62162DDFDB45F6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m56822F1F72A1C08901B5057514AF78C301855A5F(L_0, Dictionary_2__ctor_m56822F1F72A1C08901B5057514AF78C301855A5F_RuntimeMethod_var);
		__this->____pendingDefinitions_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pendingDefinitions_0), (void*)L_0);
		// private HashSet<int> _references = new HashSet<int>();
		HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* L_1 = (HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2*)il2cpp_codegen_object_new(HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF(L_1, HashSet_1__ctor_m90EA29D74B137C5317CDC485AA1D799F0B6726FF_RuntimeMethod_var);
		__this->____references_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____references_1), (void*)L_1);
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
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::.ctor(Unity.VisualScripting.FullSerializer.fsConfig,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty__ctor_m8EAD810AB5CC9482CE78ACDAA6D7DCC2680022A6 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, FieldInfo_t* ___field1, const RuntimeMethod* method) 
{
	{
		// internal fsMetaProperty(fsConfig config, FieldInfo field)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _memberInfo = field;
		FieldInfo_t* L_0 = ___field1;
		__this->____memberInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____memberInfo_0), (void*)L_0);
		// StorageType = field.FieldType;
		FieldInfo_t* L_1 = ___field1;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_1);
		fsMetaProperty_set_StorageType_mBC9EEB04E34352346F970CB36245E0CAC10F29E6_inline(__this, L_2, NULL);
		// MemberName = field.Name;
		FieldInfo_t* L_3 = ___field1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		fsMetaProperty_set_MemberName_m910365017A946E12F897AA268E2C54E92D8B0492_inline(__this, L_4, NULL);
		// IsPublic = field.IsPublic;
		FieldInfo_t* L_5 = ___field1;
		NullCheck(L_5);
		bool L_6;
		L_6 = FieldInfo_get_IsPublic_m73C84BEEAE6C993FACC6199B81DBF2B80D3810E5(L_5, NULL);
		fsMetaProperty_set_IsPublic_mDDC0D9F1D8C16C97D5A967A66B90C96CF00EFDBA_inline(__this, L_6, NULL);
		// IsReadOnly = field.IsInitOnly;
		FieldInfo_t* L_7 = ___field1;
		NullCheck(L_7);
		bool L_8;
		L_8 = FieldInfo_get_IsInitOnly_m476BB9325A68BDD56B088D3E8407F75FA1388ED9(L_7, NULL);
		fsMetaProperty_set_IsReadOnly_m81F1BE9C4A906FD3A846B032068D8CF2E7C69ED4_inline(__this, L_8, NULL);
		// CanRead = true;
		fsMetaProperty_set_CanRead_m29A21E1EC23A8330A771140563638EBE23C01C73_inline(__this, (bool)1, NULL);
		// CanWrite = true;
		fsMetaProperty_set_CanWrite_mCE48F80DD621B06344EE627E0E71B988A63BC694_inline(__this, (bool)1, NULL);
		// CommonInitialize(config);
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_9 = ___config0;
		fsMetaProperty_CommonInitialize_mED4CA3EF3000E44A9A61F6FE6F487BAD44B5AE5A(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::.ctor(Unity.VisualScripting.FullSerializer.fsConfig,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty__ctor_m6C23AFA33EA55557279A069D19DC87FCCEBBBAD1 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, PropertyInfo_t* ___property1, const RuntimeMethod* method) 
{
	fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* G_B4_0 = NULL;
	fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* G_B1_0 = NULL;
	fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* G_B2_0 = NULL;
	fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* G_B5_1 = NULL;
	{
		// internal fsMetaProperty(fsConfig config, PropertyInfo property)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _memberInfo = property;
		PropertyInfo_t* L_0 = ___property1;
		__this->____memberInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____memberInfo_0), (void*)L_0);
		// StorageType = property.PropertyType;
		PropertyInfo_t* L_1 = ___property1;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_1);
		fsMetaProperty_set_StorageType_mBC9EEB04E34352346F970CB36245E0CAC10F29E6_inline(__this, L_2, NULL);
		// MemberName = property.Name;
		PropertyInfo_t* L_3 = ___property1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		fsMetaProperty_set_MemberName_m910365017A946E12F897AA268E2C54E92D8B0492_inline(__this, L_4, NULL);
		// IsPublic = property.GetGetMethod() != null && property.GetGetMethod().IsPublic && property.GetSetMethod() != null && property.GetSetMethod().IsPublic;
		PropertyInfo_t* L_5 = ___property1;
		NullCheck(L_5);
		MethodInfo_t* L_6;
		L_6 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_5, NULL);
		bool L_7;
		L_7 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_6, (MethodInfo_t*)NULL, NULL);
		G_B1_0 = __this;
		if (!L_7)
		{
			G_B4_0 = __this;
			goto IL_005c;
		}
	}
	{
		PropertyInfo_t* L_8 = ___property1;
		NullCheck(L_8);
		MethodInfo_t* L_9;
		L_9 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_8, NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_9, NULL);
		G_B2_0 = G_B1_0;
		if (!L_10)
		{
			G_B4_0 = G_B1_0;
			goto IL_005c;
		}
	}
	{
		PropertyInfo_t* L_11 = ___property1;
		NullCheck(L_11);
		MethodInfo_t* L_12;
		L_12 = PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B(L_11, NULL);
		bool L_13;
		L_13 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_12, (MethodInfo_t*)NULL, NULL);
		G_B3_0 = G_B2_0;
		if (!L_13)
		{
			G_B4_0 = G_B2_0;
			goto IL_005c;
		}
	}
	{
		PropertyInfo_t* L_14 = ___property1;
		NullCheck(L_14);
		MethodInfo_t* L_15;
		L_15 = PropertyInfo_GetSetMethod_mA16842ADAD11B6F70F4EDCA2805C999E378C4C8B(L_14, NULL);
		NullCheck(L_15);
		bool L_16;
		L_16 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_15, NULL);
		G_B5_0 = ((int32_t)(L_16));
		G_B5_1 = G_B3_0;
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = 0;
		G_B5_1 = G_B4_0;
	}

IL_005d:
	{
		NullCheck(G_B5_1);
		fsMetaProperty_set_IsPublic_mDDC0D9F1D8C16C97D5A967A66B90C96CF00EFDBA_inline(G_B5_1, (bool)G_B5_0, NULL);
		// IsReadOnly = false;
		fsMetaProperty_set_IsReadOnly_m81F1BE9C4A906FD3A846B032068D8CF2E7C69ED4_inline(__this, (bool)0, NULL);
		// CanRead = property.CanRead;
		PropertyInfo_t* L_17 = ___property1;
		NullCheck(L_17);
		bool L_18;
		L_18 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_17);
		fsMetaProperty_set_CanRead_m29A21E1EC23A8330A771140563638EBE23C01C73_inline(__this, L_18, NULL);
		// CanWrite = property.CanWrite;
		PropertyInfo_t* L_19 = ___property1;
		NullCheck(L_19);
		bool L_20;
		L_20 = VirtualFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_19);
		fsMetaProperty_set_CanWrite_mCE48F80DD621B06344EE627E0E71B988A63BC694_inline(__this, L_20, NULL);
		// CommonInitialize(config);
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_21 = ___config0;
		fsMetaProperty_CommonInitialize_mED4CA3EF3000E44A9A61F6FE6F487BAD44B5AE5A(__this, L_21, NULL);
		// }
		return;
	}
}
// System.Type Unity.VisualScripting.FullSerializer.fsMetaProperty::get_StorageType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsMetaProperty_get_StorageType_m44BED9C0B89B0A58FF1B29E69582E7B5FF75414E (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public Type StorageType { get; private set; }
		Type_t* L_0 = __this->___U3CStorageTypeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_StorageType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_set_StorageType_mBC9EEB04E34352346F970CB36245E0CAC10F29E6 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type StorageType { get; private set; }
		Type_t* L_0 = ___value0;
		__this->___U3CStorageTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Type Unity.VisualScripting.FullSerializer.fsMetaProperty::get_OverrideConverterType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsMetaProperty_get_OverrideConverterType_mED201398F793429A572BAC96BBCFA8334F63C6A3 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public Type OverrideConverterType { get; private set; }
		Type_t* L_0 = __this->___U3COverrideConverterTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_OverrideConverterType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_set_OverrideConverterType_m37267DED2A75405AF6B2E4FF77802820C8F8B04B (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type OverrideConverterType { get; private set; }
		Type_t* L_0 = ___value0;
		__this->___U3COverrideConverterTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COverrideConverterTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaProperty_get_CanRead_mA2A7D389C2D41C426B303F6A269403879F17964D (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanRead { get; private set; }
		bool L_0 = __this->___U3CCanReadU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_CanRead(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_set_CanRead_m29A21E1EC23A8330A771140563638EBE23C01C73 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanRead { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CCanReadU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaProperty_get_CanWrite_m2BD75237BFBF0A4162BEDF112CF33C6C748EF3D6 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public bool CanWrite { get; private set; }
		bool L_0 = __this->___U3CCanWriteU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_CanWrite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_set_CanWrite_mCE48F80DD621B06344EE627E0E71B988A63BC694 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanWrite { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CCanWriteU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.String Unity.VisualScripting.FullSerializer.fsMetaProperty::get_JsonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsMetaProperty_get_JsonName_mA58DF433A59CBE9214939853C7F4E9D4B838A652 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public string JsonName { get; private set; }
		String_t* L_0 = __this->___U3CJsonNameU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_JsonName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_set_JsonName_mF0BBA2CA8267D1CCEB6AD349EC15006B2FC68ED4 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string JsonName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CJsonNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.String Unity.VisualScripting.FullSerializer.fsMetaProperty::get_MemberName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsMetaProperty_get_MemberName_mED2E167648A8A76B9C0FD73A6405012D82D9EDBE (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public string MemberName { get; private set; }
		String_t* L_0 = __this->___U3CMemberNameU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_MemberName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_set_MemberName_m910365017A946E12F897AA268E2C54E92D8B0492 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string MemberName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMemberNameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMemberNameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::get_IsPublic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaProperty_get_IsPublic_m30FEC58C34CBDB5F59B85174A8B4F1CB9D7FFE7D (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPublic { get; private set; }
		bool L_0 = __this->___U3CIsPublicU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_IsPublic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_set_IsPublic_mDDC0D9F1D8C16C97D5A967A66B90C96CF00EFDBA (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPublic { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPublicU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaProperty::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaProperty_get_IsReadOnly_m0C3E3C1607BF2EE1BFE02073A743AD580EB0EB5A (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsReadOnly { get; private set; }
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::set_IsReadOnly(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_set_IsReadOnly_m81F1BE9C4A906FD3A846B032068D8CF2E7C69ED4 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsReadOnly { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsReadOnlyU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::CommonInitialize(Unity.VisualScripting.FullSerializer.fsConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_CommonInitialize_mED4CA3EF3000E44A9A61F6FE6F487BAD44B5AE5A (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_GetAttribute_TisfsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131_m326FA0FAC14251A0B0C4B8B2207EA52E8D425528_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131* V_0 = NULL;
	{
		// var attr = fsPortableReflection.GetAttribute<fsPropertyAttribute>(_memberInfo);
		MemberInfo_t* L_0 = __this->____memberInfo_0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		fsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131* L_1;
		L_1 = fsPortableReflection_GetAttribute_TisfsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131_m326FA0FAC14251A0B0C4B8B2207EA52E8D425528(L_0, fsPortableReflection_GetAttribute_TisfsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131_m326FA0FAC14251A0B0C4B8B2207EA52E8D425528_RuntimeMethod_var);
		V_0 = L_1;
		// if (attr != null)
		fsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131* L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// JsonName = attr.Name;
		fsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->___Name_0;
		fsMetaProperty_set_JsonName_mF0BBA2CA8267D1CCEB6AD349EC15006B2FC68ED4_inline(__this, L_4, NULL);
		// OverrideConverterType = attr.Converter;
		fsPropertyAttribute_tD332ED5271DAF1CA8779F33711F56DAD20A0A131* L_5 = V_0;
		NullCheck(L_5);
		Type_t* L_6 = L_5->___Converter_1;
		fsMetaProperty_set_OverrideConverterType_m37267DED2A75405AF6B2E4FF77802820C8F8B04B_inline(__this, L_6, NULL);
	}

IL_0027:
	{
		// if (string.IsNullOrEmpty(JsonName))
		String_t* L_7;
		L_7 = fsMetaProperty_get_JsonName_mA58DF433A59CBE9214939853C7F4E9D4B838A652_inline(__this, NULL);
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// JsonName = config.GetJsonNameFromMemberName(MemberName, _memberInfo);
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_9 = ___config0;
		NullCheck(L_9);
		Func_3_tBAF9876D881392F517398C8A838D30B270025B3E* L_10 = L_9->___GetJsonNameFromMemberName_3;
		String_t* L_11;
		L_11 = fsMetaProperty_get_MemberName_mED2E167648A8A76B9C0FD73A6405012D82D9EDBE_inline(__this, NULL);
		MemberInfo_t* L_12 = __this->____memberInfo_0;
		NullCheck(L_10);
		String_t* L_13;
		L_13 = Func_3_Invoke_m2003B38A4BF86DEA69B95FE07CF82566961B5328_inline(L_10, L_11, L_12, NULL);
		fsMetaProperty_set_JsonName_mF0BBA2CA8267D1CCEB6AD349EC15006B2FC68ED4_inline(__this, L_13, NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaProperty::Write(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaProperty_Write_mEA2E2F7E5E785063984023ABD51657C856E60783 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, RuntimeObject* ___context0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptimizedReflection_t7F2A25A36302950D7E078F447B955296D454A9DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	{
		// var field = _memberInfo as FieldInfo;
		MemberInfo_t* L_0 = __this->____memberInfo_0;
		V_0 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_0, FieldInfo_t_il2cpp_TypeInfo_var));
		// var property = _memberInfo as PropertyInfo;
		MemberInfo_t* L_1 = __this->____memberInfo_0;
		V_1 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_1, PropertyInfo_t_il2cpp_TypeInfo_var));
		// if (field != null)
		FieldInfo_t* L_2 = V_0;
		bool L_3;
		L_3 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_2, (FieldInfo_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// if (PlatformUtility.supportsJit)
		il2cpp_codegen_runtime_class_init_inline(PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6_il2cpp_TypeInfo_var);
		bool L_4 = ((PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6_StaticFields*)il2cpp_codegen_static_fields_for(PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6_il2cpp_TypeInfo_var))->___supportsJit_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// field.SetValueOptimized(context, value);
		FieldInfo_t* L_5 = V_0;
		RuntimeObject* L_6 = ___context0;
		RuntimeObject* L_7 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(OptimizedReflection_t7F2A25A36302950D7E078F447B955296D454A9DF_il2cpp_TypeInfo_var);
		OptimizedReflection_SetValueOptimized_m31D72287894B166E76AB07044AD0577D36872BF9(L_5, L_6, L_7, NULL);
		return;
	}

IL_0031:
	{
		// field.SetValue(context, value);
		FieldInfo_t* L_8 = V_0;
		RuntimeObject* L_9 = ___context0;
		RuntimeObject* L_10 = ___value1;
		NullCheck(L_8);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_8, L_9, L_10, NULL);
		return;
	}

IL_003a:
	{
		// else if (property != null)
		PropertyInfo_t* L_11 = V_1;
		bool L_12;
		L_12 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_11, (PropertyInfo_t*)NULL, NULL);
		if (!L_12)
		{
			goto IL_007e;
		}
	}
	{
		// if (PlatformUtility.supportsJit)
		il2cpp_codegen_runtime_class_init_inline(PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6_il2cpp_TypeInfo_var);
		bool L_13 = ((PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6_StaticFields*)il2cpp_codegen_static_fields_for(PlatformUtility_t1848A281AD2DC3383BDF573753827799C3D87EF6_il2cpp_TypeInfo_var))->___supportsJit_0;
		if (!L_13)
		{
			goto IL_005b;
		}
	}
	{
		// if (property.CanWrite)
		PropertyInfo_t* L_14 = V_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_14);
		if (!L_15)
		{
			goto IL_007e;
		}
	}
	{
		// property.SetValueOptimized(context, value);
		PropertyInfo_t* L_16 = V_1;
		RuntimeObject* L_17 = ___context0;
		RuntimeObject* L_18 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(OptimizedReflection_t7F2A25A36302950D7E078F447B955296D454A9DF_il2cpp_TypeInfo_var);
		OptimizedReflection_SetValueOptimized_m90041502530ABB8093833AB1AAF7EAD71CDA42AA(L_16, L_17, L_18, NULL);
		return;
	}

IL_005b:
	{
		// var setMethod = property.GetSetMethod(/*nonPublic:*/ true);
		PropertyInfo_t* L_19 = V_1;
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_19, (bool)1);
		V_2 = L_20;
		// if (setMethod != null)
		MethodInfo_t* L_21 = V_2;
		bool L_22;
		L_22 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_21, (MethodInfo_t*)NULL, NULL);
		if (!L_22)
		{
			goto IL_007e;
		}
	}
	{
		// setMethod.Invoke(context, new[] { value });
		MethodInfo_t* L_23 = V_2;
		RuntimeObject* L_24 = ___context0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_25;
		RuntimeObject* L_27 = ___value1;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_27);
		NullCheck(L_23);
		RuntimeObject* L_28;
		L_28 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_23, L_24, L_26, NULL);
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Object Unity.VisualScripting.FullSerializer.fsMetaProperty::Read(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsMetaProperty_Read_mE5F0AE85092593DE88AEDA717359310E9E06C046 (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, RuntimeObject* ___context0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_memberInfo is PropertyInfo)
		MemberInfo_t* L_0 = __this->____memberInfo_0;
		if (!((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_0, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		// return ((PropertyInfo)_memberInfo).GetValue(context, null); // Attempt fix-1588
		MemberInfo_t* L_1 = __this->____memberInfo_0;
		RuntimeObject* L_2 = ___context0;
		NullCheck(((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_1, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(25 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_1, PropertyInfo_t_il2cpp_TypeInfo_var)), L_2, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return L_3;
	}

IL_0020:
	{
		// return ((FieldInfo)_memberInfo).GetValue(context);
		MemberInfo_t* L_4 = __this->____memberInfo_0;
		RuntimeObject* L_5 = ___context0;
		NullCheck(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(24 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t*)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var)), L_5);
		return L_6;
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
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType::.ctor(Unity.VisualScripting.FullSerializer.fsConfig,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaType__ctor_mC6683E69F4CE1C8FE4BC514BD4ED19E33CE35CF3 (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, Type_t* ___reflectedType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m85069F269FA0297E5B29B2B53C8F6889AF6F19EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m98DCC966FAEB46A63DF2F36389C0EDC164B12DBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* V_0 = NULL;
	{
		// private fsMetaType(fsConfig config, Type reflectedType)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ReflectedType = reflectedType;
		Type_t* L_0 = ___reflectedType1;
		__this->___ReflectedType_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ReflectedType_0), (void*)L_0);
		// var properties = new List<fsMetaProperty>();
		List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* L_1 = (List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043*)il2cpp_codegen_object_new(List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m98DCC966FAEB46A63DF2F36389C0EDC164B12DBE(L_1, List_1__ctor_m98DCC966FAEB46A63DF2F36389C0EDC164B12DBE_RuntimeMethod_var);
		V_0 = L_1;
		// CollectProperties(config, properties, reflectedType);
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_2 = ___config0;
		List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* L_3 = V_0;
		Type_t* L_4 = ___reflectedType1;
		il2cpp_codegen_runtime_class_init_inline(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		fsMetaType_CollectProperties_m4ED60C5E38D1D5EC03A3A61803D7F60E21ED2D3C(L_2, L_3, L_4, NULL);
		// Properties = properties.ToArray();
		List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* L_5 = V_0;
		NullCheck(L_5);
		fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* L_6;
		L_6 = List_1_ToArray_m85069F269FA0297E5B29B2B53C8F6889AF6F19EB(L_5, List_1_ToArray_m85069F269FA0297E5B29B2B53C8F6889AF6F19EB_RuntimeMethod_var);
		fsMetaType_set_Properties_m75C4CFDD1D8A0844B8E8E61B1028BB013A011A9E_inline(__this, L_6, NULL);
		// }
		return;
	}
}
// Unity.VisualScripting.FullSerializer.fsMetaProperty[] Unity.VisualScripting.FullSerializer.fsMetaType::get_Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* fsMetaType_get_Properties_m54618035A54E08C924EB7E8781AA55C1D19F950A (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, const RuntimeMethod* method) 
{
	{
		// public fsMetaProperty[] Properties { get; private set; }
		fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* L_0 = __this->___U3CPropertiesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType::set_Properties(Unity.VisualScripting.FullSerializer.fsMetaProperty[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaType_set_Properties_m75C4CFDD1D8A0844B8E8E61B1028BB013A011A9E (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___value0, const RuntimeMethod* method) 
{
	{
		// public fsMetaProperty[] Properties { get; private set; }
		fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::get_HasDefaultConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaType_get_HasDefaultConstructor_m6AFFF40736CFD48C95681AF3228409840BB4F81E (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_0 = NULL;
	{
		// if (_hasDefaultConstructorCache.HasValue == false)
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_0 = (&__this->____hasDefaultConstructorCache_2);
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline(L_0, Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0096;
		}
	}
	{
		// if (ReflectedType.Resolve().IsArray)
		Type_t* L_2 = __this->___ReflectedType_0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_3, NULL);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// _hasDefaultConstructorCache = true;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_5), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->____hasDefaultConstructorCache_2 = L_5;
		// _isDefaultConstructorPublic = true;
		__this->____isDefaultConstructorPublic_3 = (bool)1;
		goto IL_0096;
	}

IL_0037:
	{
		// else if (ReflectedType.Resolve().IsValueType)
		Type_t* L_6 = __this->___ReflectedType_0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_7, NULL);
		if (!L_8)
		{
			goto IL_005e;
		}
	}
	{
		// _hasDefaultConstructorCache = true;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_9), (bool)1, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->____hasDefaultConstructorCache_2 = L_9;
		// _isDefaultConstructorPublic = true;
		__this->____isDefaultConstructorPublic_3 = (bool)1;
		goto IL_0096;
	}

IL_005e:
	{
		// var ctor = ReflectedType.GetDeclaredConstructor(fsPortableReflection.EmptyTypes);
		Type_t* L_10 = __this->___ReflectedType_0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___EmptyTypes_0;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_12;
		L_12 = fsPortableReflection_GetDeclaredConstructor_m9F5B44FCB7E14D7E7CF90482A9D1D13C11445C01(L_10, L_11, NULL);
		V_0 = L_12;
		// _hasDefaultConstructorCache = ctor != null;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_13, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_15;
		memset((&L_15), 0, sizeof(L_15));
		Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5((&L_15), L_14, /*hidden argument*/Nullable_1__ctor_m4FAA8281CB4EFFD8B817734351FB3AC20A0CD6F5_RuntimeMethod_var);
		__this->____hasDefaultConstructorCache_2 = L_15;
		// if (ctor != null)
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_16 = V_0;
		bool L_17;
		L_17 = ConstructorInfo_op_Inequality_mB3CB8B779FA4400BBF7069097CC64E6CA1D235A4(L_16, (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL, NULL);
		if (!L_17)
		{
			goto IL_0096;
		}
	}
	{
		// _isDefaultConstructorPublic = ctor.IsPublic;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_18 = V_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = MethodBase_get_IsPublic_m471B6CEE0FF2B45843C1F314B624FC7968199AB4(L_18, NULL);
		__this->____isDefaultConstructorPublic_3 = L_19;
	}

IL_0096:
	{
		// return _hasDefaultConstructorCache.Value;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* L_20 = (&__this->____hasDefaultConstructorCache_2);
		bool L_21;
		L_21 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28(L_20, Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		return L_21;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::EmitAotData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaType_EmitAotData_m567914383E93A38ADA1F4D3AE645632CC6982AC4 (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsAotCompilationManager_tA4FA5D7D2FC305EE6984E234196A04392EC1B2EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (_hasEmittedAotData == false)
		bool L_0 = __this->____hasEmittedAotData_1;
		if (L_0)
		{
			goto IL_0067;
		}
	}
	{
		// _hasEmittedAotData = true;
		__this->____hasEmittedAotData_1 = (bool)1;
		// for (var i = 0; i < Properties.Length; ++i)
		V_0 = 0;
		goto IL_0039;
	}

IL_0013:
	{
		// if (Properties[i].IsPublic == false)
		fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* L_1;
		L_1 = fsMetaType_get_Properties_m54618035A54E08C924EB7E8781AA55C1D19F950A_inline(__this, NULL);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		bool L_5;
		L_5 = fsMetaProperty_get_IsPublic_m30FEC58C34CBDB5F59B85174A8B4F1CB9D7FFE7D_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_0024;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0024:
	{
		// if (Properties[i].IsReadOnly)
		fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* L_6;
		L_6 = fsMetaType_get_Properties_m54618035A54E08C924EB7E8781AA55C1D19F950A_inline(__this, NULL);
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		bool L_10;
		L_10 = fsMetaProperty_get_IsReadOnly_m0C3E3C1607BF2EE1BFE02073A743AD580EB0EB5A_inline(L_9, NULL);
		if (!L_10)
		{
			goto IL_0035;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0035:
	{
		// for (var i = 0; i < Properties.Length; ++i)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0039:
	{
		// for (var i = 0; i < Properties.Length; ++i)
		int32_t L_12 = V_0;
		fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* L_13;
		L_13 = fsMetaType_get_Properties_m54618035A54E08C924EB7E8781AA55C1D19F950A_inline(__this, NULL);
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// if (HasDefaultConstructor == false)
		bool L_14;
		L_14 = fsMetaType_get_HasDefaultConstructor_m6AFFF40736CFD48C95681AF3228409840BB4F81E(__this, NULL);
		if (L_14)
		{
			goto IL_004e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004e:
	{
		// fsAotCompilationManager.AddAotCompilation(ReflectedType, Properties, _isDefaultConstructorPublic);
		Type_t* L_15 = __this->___ReflectedType_0;
		fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* L_16;
		L_16 = fsMetaType_get_Properties_m54618035A54E08C924EB7E8781AA55C1D19F950A_inline(__this, NULL);
		bool L_17 = __this->____isDefaultConstructorPublic_3;
		il2cpp_codegen_runtime_class_init_inline(fsAotCompilationManager_tA4FA5D7D2FC305EE6984E234196A04392EC1B2EB_il2cpp_TypeInfo_var);
		fsAotCompilationManager_AddAotCompilation_mC52615432A98FF68630197F195080908FB443A19(L_15, L_16, L_17, NULL);
		// return true;
		return (bool)1;
	}

IL_0067:
	{
		// return false;
		return (bool)0;
	}
}
// System.Object Unity.VisualScripting.FullSerializer.fsMetaType::CreateInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsMetaType_CreateInstance_m29B05EF9602FCAE885BBC789C04C5EA32D60AE72 (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* V_1 = NULL;
	TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* V_2 = NULL;
	MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Type_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	Type_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	Type_t* G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	Type_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	String_t* G_B19_0 = NULL;
	String_t* G_B19_1 = NULL;
	Type_t* G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	Type_t* G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	String_t* G_B23_0 = NULL;
	String_t* G_B23_1 = NULL;
	Type_t* G_B26_0 = NULL;
	String_t* G_B26_1 = NULL;
	Type_t* G_B25_0 = NULL;
	String_t* G_B25_1 = NULL;
	String_t* G_B27_0 = NULL;
	String_t* G_B27_1 = NULL;
	{
		// if (ReflectedType.Resolve().IsInterface || ReflectedType.Resolve().IsAbstract)
		Type_t* L_0 = __this->___ReflectedType_0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Type_get_IsInterface_m484A7D9321E72758EABE7F36AE266EB0905957EC(L_1, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Type_t* L_3 = __this->___ReflectedType_0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsAbstract_m16FA83463867635ED9DECAE1C5F6BE96B4579CE5(L_4, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}

IL_0024:
	{
		// throw new Exception("Cannot create an instance of an interface or abstract type for " + ReflectedType);
		Type_t* L_6 = __this->___ReflectedType_0;
		Type_t* L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84FD80DC652F1640A578ADB0C8DE7B65D6D0E376));
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84FD80DC652F1640A578ADB0C8DE7B65D6D0E376));
			goto IL_0036;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B3_1;
		goto IL_003b;
	}

IL_0036:
	{
		NullCheck(G_B4_0);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B4_0);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
	}

IL_003b:
	{
		String_t* L_9;
		L_9 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B5_1, G_B5_0, NULL);
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsMetaType_CreateInstance_m29B05EF9602FCAE885BBC789C04C5EA32D60AE72_RuntimeMethod_var)));
	}

IL_0046:
	{
		// if (typeof(UnityEngine.ScriptableObject).IsAssignableFrom(ReflectedType))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		Type_t* L_13 = __this->___ReflectedType_0;
		NullCheck(L_12);
		bool L_14;
		L_14 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_12, L_13);
		if (!L_14)
		{
			goto IL_0069;
		}
	}
	{
		// return UnityEngine.ScriptableObject.CreateInstance(ReflectedType);
		Type_t* L_15 = __this->___ReflectedType_0;
		ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* L_16;
		L_16 = ScriptableObject_CreateInstance_mE015043D7EC19654FDFB830A9393B3914FF5FC24(L_15, NULL);
		return L_16;
	}

IL_0069:
	{
		// if (typeof(string) == ReflectedType)
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		Type_t* L_19 = __this->___ReflectedType_0;
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_18, L_19, NULL);
		if (!L_20)
		{
			goto IL_0086;
		}
	}
	{
		// return string.Empty;
		String_t* L_21 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_21;
	}

IL_0086:
	{
		// if (HasDefaultConstructor == false)
		bool L_22;
		L_22 = fsMetaType_get_HasDefaultConstructor_m6AFFF40736CFD48C95681AF3228409840BB4F81E(__this, NULL);
		if (L_22)
		{
			goto IL_009a;
		}
	}
	{
		// return System.Runtime.Serialization.FormatterServices.GetSafeUninitializedObject(ReflectedType);
		Type_t* L_23 = __this->___ReflectedType_0;
		il2cpp_codegen_runtime_class_init_inline(FormatterServices_t37D3EFB704B4375FE9A0F532B7DEDE0A43FDF0E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_24;
		L_24 = FormatterServices_GetSafeUninitializedObject_mA5262EEAA53EA4A47A35A22097A65EE061209769(L_23, NULL);
		return L_24;
	}

IL_009a:
	{
		// if (ReflectedType.Resolve().IsArray)
		Type_t* L_25 = __this->___ReflectedType_0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_25, NULL);
		NullCheck(L_26);
		bool L_27;
		L_27 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_26, NULL);
		if (!L_27)
		{
			goto IL_00be;
		}
	}
	{
		// return Array.CreateInstance(ReflectedType.GetElementType(), 0);
		Type_t* L_28 = __this->___ReflectedType_0;
		NullCheck(L_28);
		Type_t* L_29;
		L_29 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_28);
		RuntimeArray* L_30;
		L_30 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_29, 0, NULL);
		return L_30;
	}

IL_00be:
	{
	}
	try
	{// begin try (depth: 1)
		// return Activator.CreateInstance(ReflectedType, /*nonPublic:*/ true);
		Type_t* L_31 = __this->___ReflectedType_0;
		RuntimeObject* L_32;
		L_32 = Activator_CreateInstance_m2BE3252B26369EA17E06A564F25172F6D002469F(L_31, (bool)1, NULL);
		V_0 = L_32;
		goto IL_0144;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingMethodException_t3D861B41F6520C32A7994A884343802925703155_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ce;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00f7;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0120;
		}
		throw e;
	}

CATCH_00ce:
	{// begin catch(System.MissingMethodException)
		{
			// catch (MissingMethodException e)
			V_1 = ((MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*)IL2CPP_GET_ACTIVE_EXCEPTION(MissingMethodException_t3D861B41F6520C32A7994A884343802925703155*));
			// throw new InvalidOperationException("Unable to create instance of " + ReflectedType + "; there is no default constructor", e);
			Type_t* L_33 = __this->___ReflectedType_0;
			Type_t* L_34 = L_33;
			G_B17_0 = L_34;
			G_B17_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E5A093F4DCDF31969F32859619D1C80A3D9B34C));
			if (L_34)
			{
				G_B18_0 = L_34;
				G_B18_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7E5A093F4DCDF31969F32859619D1C80A3D9B34C));
				goto IL_00e1;
			}
		}
		{
			G_B19_0 = ((String_t*)(NULL));
			G_B19_1 = G_B17_1;
			goto IL_00e6;
		}

IL_00e1:
		{
			NullCheck(G_B18_0);
			String_t* L_35;
			L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B18_0);
			G_B19_0 = L_35;
			G_B19_1 = G_B18_1;
		}

IL_00e6:
		{
			String_t* L_36;
			L_36 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B19_1, G_B19_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B26BE7AEB0CE01EB89196BCD5C8E957DA773FCA)), NULL);
			MissingMethodException_t3D861B41F6520C32A7994A884343802925703155* L_37 = V_1;
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_38 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			NullCheck(L_38);
			InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_38, L_36, L_37, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsMetaType_CreateInstance_m29B05EF9602FCAE885BBC789C04C5EA32D60AE72_RuntimeMethod_var)));
		}
	}// end catch (depth: 1)

CATCH_00f7:
	{// begin catch(System.Reflection.TargetInvocationException)
		{
			// catch (TargetInvocationException e)
			V_2 = ((TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*)IL2CPP_GET_ACTIVE_EXCEPTION(TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2*));
			// throw new InvalidOperationException("Constructor of " + ReflectedType + " threw an exception when creating an instance", e);
			Type_t* L_39 = __this->___ReflectedType_0;
			Type_t* L_40 = L_39;
			G_B21_0 = L_40;
			G_B21_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E953F7F0067D39CE0A1E51A23DC123190C4CA2A));
			if (L_40)
			{
				G_B22_0 = L_40;
				G_B22_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0E953F7F0067D39CE0A1E51A23DC123190C4CA2A));
				goto IL_010a;
			}
		}
		{
			G_B23_0 = ((String_t*)(NULL));
			G_B23_1 = G_B21_1;
			goto IL_010f;
		}

IL_010a:
		{
			NullCheck(G_B22_0);
			String_t* L_41;
			L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B22_0);
			G_B23_0 = L_41;
			G_B23_1 = G_B22_1;
		}

IL_010f:
		{
			String_t* L_42;
			L_42 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B23_1, G_B23_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68CC8A5A68FCAEA1AADD094BD5EC2A1B852D16E0)), NULL);
			TargetInvocationException_t46C470A37ED9947AFD45BD814387DF64665B69F2* L_43 = V_2;
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_44 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			NullCheck(L_44);
			InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_44, L_42, L_43, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsMetaType_CreateInstance_m29B05EF9602FCAE885BBC789C04C5EA32D60AE72_RuntimeMethod_var)));
		}
	}// end catch (depth: 1)

CATCH_0120:
	{// begin catch(System.MemberAccessException)
		{
			// catch (MemberAccessException e)
			V_3 = ((MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC*)IL2CPP_GET_ACTIVE_EXCEPTION(MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC*));
			// throw new InvalidOperationException("Unable to access constructor of " + ReflectedType, e);
			Type_t* L_45 = __this->___ReflectedType_0;
			Type_t* L_46 = L_45;
			G_B25_0 = L_46;
			G_B25_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6C4B5DED83D8E68C57D65F742AA1A6A7D70567));
			if (L_46)
			{
				G_B26_0 = L_46;
				G_B26_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6C4B5DED83D8E68C57D65F742AA1A6A7D70567));
				goto IL_0133;
			}
		}
		{
			G_B27_0 = ((String_t*)(NULL));
			G_B27_1 = G_B25_1;
			goto IL_0138;
		}

IL_0133:
		{
			NullCheck(G_B26_0);
			String_t* L_47;
			L_47 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B26_0);
			G_B27_0 = L_47;
			G_B27_1 = G_B26_1;
		}

IL_0138:
		{
			String_t* L_48;
			L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B27_1, G_B27_0, NULL);
			MemberAccessException_t4BB9AF02B906BB4818600FC8988DECA4D37F2EFC* L_49 = V_3;
			InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_50 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
			NullCheck(L_50);
			InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(L_50, L_48, L_49, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_50, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsMetaType_CreateInstance_m29B05EF9602FCAE885BBC789C04C5EA32D60AE72_RuntimeMethod_var)));
		}
	}// end catch (depth: 1)

IL_0144:
	{
		// }
		RuntimeObject* L_51 = V_0;
		return L_51;
	}
}
// Unity.VisualScripting.FullSerializer.fsMetaType Unity.VisualScripting.FullSerializer.fsMetaType::Get(Unity.VisualScripting.FullSerializer.fsConfig,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* fsMetaType_Get_m5622F5FF2787C35C795789C1373F6013DCAB4363 (fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, Type_t* ___type1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0AFB67D7704902E923426A5AC82862E79065B462_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAE938B6680E59536FE4A7D2673C28D711F07A6ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m70660A887A404007DC70F6F16E1564CBBECCAE35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m71ED19349068C33F36F5C0A77B422CA12ED2736D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA44777DCA745475481576D52B5CDA569AB131344_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* V_0 = NULL;
	fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* V_1 = NULL;
	Type_t* V_2 = NULL;
	bool V_3 = false;
	Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* V_4 = NULL;
	{
		// lock (typeof(fsMetaType))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_2 = L_1;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_3;
					if (!L_2)
					{
						goto IL_0045;
					}
				}
				{
					Type_t* L_3 = V_2;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0045:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Type_t* L_4 = V_2;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_3), NULL);
				// if (_configMetaTypes.TryGetValue(config, out metaTypes) == false)
				il2cpp_codegen_runtime_class_init_inline(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
				Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525* L_5 = ((fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_StaticFields*)il2cpp_codegen_static_fields_for(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var))->____configMetaTypes_5;
				fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_6 = ___config0;
				NullCheck(L_5);
				bool L_7;
				L_7 = Dictionary_2_TryGetValue_mAE938B6680E59536FE4A7D2673C28D711F07A6ED(L_5, L_6, (&V_0), Dictionary_2_TryGetValue_mAE938B6680E59536FE4A7D2673C28D711F07A6ED_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_003a_1;
				}
			}
			{
				// metaTypes = _configMetaTypes[config] = new Dictionary<Type, fsMetaType>();
				il2cpp_codegen_runtime_class_init_inline(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
				Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525* L_8 = ((fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_StaticFields*)il2cpp_codegen_static_fields_for(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var))->____configMetaTypes_5;
				fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_9 = ___config0;
				Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* L_10 = (Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E*)il2cpp_codegen_object_new(Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				Dictionary_2__ctor_m70660A887A404007DC70F6F16E1564CBBECCAE35(L_10, Dictionary_2__ctor_m70660A887A404007DC70F6F16E1564CBBECCAE35_RuntimeMethod_var);
				Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* L_11 = L_10;
				V_4 = L_11;
				NullCheck(L_8);
				Dictionary_2_set_Item_m71ED19349068C33F36F5C0A77B422CA12ED2736D(L_8, L_9, L_11, Dictionary_2_set_Item_m71ED19349068C33F36F5C0A77B422CA12ED2736D_RuntimeMethod_var);
				Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* L_12 = V_4;
				V_0 = L_12;
			}

IL_003a_1:
			{
				// }
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// if (metaTypes.TryGetValue(type, out metaType) == false)
		Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* L_13 = V_0;
		Type_t* L_14 = ___type1;
		NullCheck(L_13);
		bool L_15;
		L_15 = Dictionary_2_TryGetValue_m0AFB67D7704902E923426A5AC82862E79065B462(L_13, L_14, (&V_1), Dictionary_2_TryGetValue_m0AFB67D7704902E923426A5AC82862E79065B462_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0061;
		}
	}
	{
		// metaType = new fsMetaType(config, type);
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_16 = ___config0;
		Type_t* L_17 = ___type1;
		fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* L_18 = (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743*)il2cpp_codegen_object_new(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		fsMetaType__ctor_mC6683E69F4CE1C8FE4BC514BD4ED19E33CE35CF3(L_18, L_16, L_17, NULL);
		V_1 = L_18;
		// metaTypes[type] = metaType;
		Dictionary_2_tA74D83D57545F34B694A3C941D5A5CED5DE5F54E* L_19 = V_0;
		Type_t* L_20 = ___type1;
		fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* L_21 = V_1;
		NullCheck(L_19);
		Dictionary_2_set_Item_mA44777DCA745475481576D52B5CDA569AB131344(L_19, L_20, L_21, Dictionary_2_set_Item_mA44777DCA745475481576D52B5CDA569AB131344_RuntimeMethod_var);
	}

IL_0061:
	{
		// return metaType;
		fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* L_22 = V_1;
		return L_22;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType::ClearCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaType_ClearCache_mC06B8136FCE8E8CC0A0F7DA75C72EAFD571DDD52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCA1741446BBCBB6DA1EEE4CBA933503E371880B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (typeof(fsMetaType))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0021:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002a;
					}
				}
				{
					Type_t* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Type_t* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// _configMetaTypes = new Dictionary<fsConfig, Dictionary<Type, fsMetaType>>();
			Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525* L_5 = (Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525*)il2cpp_codegen_object_new(Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525_il2cpp_TypeInfo_var);
			NullCheck(L_5);
			Dictionary_2__ctor_mCA1741446BBCBB6DA1EEE4CBA933503E371880B9(L_5, Dictionary_2__ctor_mCA1741446BBCBB6DA1EEE4CBA933503E371880B9_RuntimeMethod_var);
			il2cpp_codegen_runtime_class_init_inline(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
			((fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_StaticFields*)il2cpp_codegen_static_fields_for(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var))->____configMetaTypes_5 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&((fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_StaticFields*)il2cpp_codegen_static_fields_for(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var))->____configMetaTypes_5), (void*)L_5);
			// }
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType::CollectProperties(Unity.VisualScripting.FullSerializer.fsConfig,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsMetaProperty>,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaType_CollectProperties_m4ED60C5E38D1D5EC03A3A61803D7F60E21ED2D3C (fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* ___properties1, Type_t* ___reflectedType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m80ED8CCB53D255512F570C1FA995FBC08391C468_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__0_mBDC7709CE09425F240C42147C3BB2FDB7E76FAF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__1_m086012131CD06B409756038400BF39327BF9F233_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__2_mCA3D8AC6B0001C61241D0164C6089EE68DF7F245_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* V_2 = NULL;
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_3 = NULL;
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_4 = NULL;
	int32_t V_5 = 0;
	U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* V_6 = NULL;
	PropertyInfo_t* V_7 = NULL;
	FieldInfo_t* V_8 = NULL;
	{
		// var requireOptIn = config.DefaultMemberSerialization == fsMemberSerialization.OptIn;
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_0 = ___config0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___DefaultMemberSerialization_2;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// var requireOptOut = config.DefaultMemberSerialization == fsMemberSerialization.OptOut;
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_2 = ___config0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___DefaultMemberSerialization_2;
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		// var attr = fsPortableReflection.GetAttribute<fsObjectAttribute>(reflectedType);
		Type_t* L_4 = ___reflectedType2;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_5;
		L_5 = fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A(L_4, fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A_RuntimeMethod_var);
		V_2 = L_5;
		// if (attr != null)
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0032;
		}
	}
	{
		// requireOptIn = attr.MemberSerialization == fsMemberSerialization.OptIn;
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->___MemberSerialization_2;
		V_0 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		// requireOptOut = attr.MemberSerialization == fsMemberSerialization.OptOut;
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_9 = V_2;
		NullCheck(L_9);
		int32_t L_10 = L_9->___MemberSerialization_2;
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)1))? 1 : 0);
	}

IL_0032:
	{
		// var members = reflectedType.GetDeclaredMembers();
		Type_t* L_11 = ___reflectedType2;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_12;
		L_12 = fsPortableReflection_GetDeclaredMembers_m65055614D9291573376917BF3044659CAF23409E(L_11, NULL);
		V_3 = L_12;
		// foreach (var member in members)
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_13 = V_3;
		V_4 = L_13;
		V_5 = 0;
		goto IL_0145;
	}

IL_0044:
	{
		U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* L_14 = (U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		U3CU3Ec__DisplayClass16_0__ctor_m538342D591F27E0886D3D9F7969DB43E9F1AC3A0(L_14, NULL);
		V_6 = L_14;
		// foreach (var member in members)
		U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* L_15 = V_6;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_16 = V_4;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		MemberInfo_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_15);
		L_15->___member_0 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___member_0), (void*)L_19);
		// if (config.IgnoreSerializeAttributes.Any(t => fsPortableReflection.HasAttribute(member, t)))
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_20 = ___config0;
		NullCheck(L_20);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_21 = L_20->___IgnoreSerializeAttributes_1;
		U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* L_22 = V_6;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_23 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__0_mBDC7709CE09425F240C42147C3BB2FDB7E76FAF5_RuntimeMethod_var), NULL);
		bool L_24;
		L_24 = Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D((RuntimeObject*)L_21, L_23, Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		if (L_24)
		{
			goto IL_013f;
		}
	}
	{
		// var property = member as PropertyInfo;
		U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* L_25 = V_6;
		NullCheck(L_25);
		MemberInfo_t* L_26 = L_25->___member_0;
		V_7 = ((PropertyInfo_t*)IsInstClass((RuntimeObject*)L_26, PropertyInfo_t_il2cpp_TypeInfo_var));
		// var field = member as FieldInfo;
		U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* L_27 = V_6;
		NullCheck(L_27);
		MemberInfo_t* L_28 = L_27->___member_0;
		V_8 = ((FieldInfo_t*)IsInstClass((RuntimeObject*)L_28, FieldInfo_t_il2cpp_TypeInfo_var));
		// if (property == null && field == null)
		PropertyInfo_t* L_29 = V_7;
		bool L_30;
		L_30 = PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F(L_29, (PropertyInfo_t*)NULL, NULL);
		if (!L_30)
		{
			goto IL_00a7;
		}
	}
	{
		FieldInfo_t* L_31 = V_8;
		bool L_32;
		L_32 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_31, (FieldInfo_t*)NULL, NULL);
		if (L_32)
		{
			goto IL_013f;
		}
	}

IL_00a7:
	{
		// if (property != null && !config.EnablePropertySerialization)
		PropertyInfo_t* L_33 = V_7;
		bool L_34;
		L_34 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_33, (PropertyInfo_t*)NULL, NULL);
		if (!L_34)
		{
			goto IL_00bc;
		}
	}
	{
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_35 = ___config0;
		NullCheck(L_35);
		bool L_36 = L_35->___EnablePropertySerialization_4;
		if (!L_36)
		{
			goto IL_013f;
		}
	}

IL_00bc:
	{
		// if (requireOptIn &&
		//     !config.SerializeAttributes.Any(t => fsPortableReflection.HasAttribute(member, t)))
		bool L_37 = V_0;
		if (!L_37)
		{
			goto IL_00d9;
		}
	}
	{
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_38 = ___config0;
		NullCheck(L_38);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_39 = L_38->___SerializeAttributes_0;
		U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* L_40 = V_6;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_41 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_41, L_40, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__1_m086012131CD06B409756038400BF39327BF9F233_RuntimeMethod_var), NULL);
		bool L_42;
		L_42 = Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D((RuntimeObject*)L_39, L_41, Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		if (!L_42)
		{
			goto IL_013f;
		}
	}

IL_00d9:
	{
		// if (requireOptOut &&
		//     config.IgnoreSerializeAttributes.Any(t => fsPortableReflection.HasAttribute(member, t)))
		bool L_43 = V_1;
		if (!L_43)
		{
			goto IL_00f6;
		}
	}
	{
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_44 = ___config0;
		NullCheck(L_44);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_45 = L_44->___IgnoreSerializeAttributes_1;
		U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* L_46 = V_6;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_47 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_47);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_47, L_46, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__2_mCA3D8AC6B0001C61241D0164C6089EE68DF7F245_RuntimeMethod_var), NULL);
		bool L_48;
		L_48 = Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D((RuntimeObject*)L_45, L_47, Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		if (L_48)
		{
			goto IL_013f;
		}
	}

IL_00f6:
	{
		// if (property != null)
		PropertyInfo_t* L_49 = V_7;
		bool L_50;
		L_50 = PropertyInfo_op_Inequality_mE75A4F14CC678D8A670730FBD4338C718CACB51B(L_49, (PropertyInfo_t*)NULL, NULL);
		if (!L_50)
		{
			goto IL_011c;
		}
	}
	{
		// if (CanSerializeProperty(config, property, members, requireOptOut))
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_51 = ___config0;
		PropertyInfo_t* L_52 = V_7;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_53 = V_3;
		bool L_54 = V_1;
		il2cpp_codegen_runtime_class_init_inline(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = fsMetaType_CanSerializeProperty_mAD3B5D6C4B122AEBA0895E510A69BFDDA00427B2(L_51, L_52, L_53, L_54, NULL);
		if (!L_55)
		{
			goto IL_013f;
		}
	}
	{
		// properties.Add(new fsMetaProperty(config, property));
		List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* L_56 = ___properties1;
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_57 = ___config0;
		PropertyInfo_t* L_58 = V_7;
		fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* L_59 = (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266*)il2cpp_codegen_object_new(fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266_il2cpp_TypeInfo_var);
		NullCheck(L_59);
		fsMetaProperty__ctor_m6C23AFA33EA55557279A069D19DC87FCCEBBBAD1(L_59, L_57, L_58, NULL);
		NullCheck(L_56);
		List_1_Add_m80ED8CCB53D255512F570C1FA995FBC08391C468_inline(L_56, L_59, List_1_Add_m80ED8CCB53D255512F570C1FA995FBC08391C468_RuntimeMethod_var);
		goto IL_013f;
	}

IL_011c:
	{
		// else if (field != null)
		FieldInfo_t* L_60 = V_8;
		bool L_61;
		L_61 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_60, (FieldInfo_t*)NULL, NULL);
		if (!L_61)
		{
			goto IL_013f;
		}
	}
	{
		// if (CanSerializeField(config, field, requireOptOut))
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_62 = ___config0;
		FieldInfo_t* L_63 = V_8;
		bool L_64 = V_1;
		il2cpp_codegen_runtime_class_init_inline(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		bool L_65;
		L_65 = fsMetaType_CanSerializeField_mD6450E719027D7DC41CA949858689F8B2B87682E(L_62, L_63, L_64, NULL);
		if (!L_65)
		{
			goto IL_013f;
		}
	}
	{
		// properties.Add(new fsMetaProperty(config, field));
		List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* L_66 = ___properties1;
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_67 = ___config0;
		FieldInfo_t* L_68 = V_8;
		fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* L_69 = (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266*)il2cpp_codegen_object_new(fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		fsMetaProperty__ctor_m8EAD810AB5CC9482CE78ACDAA6D7DCC2680022A6(L_69, L_67, L_68, NULL);
		NullCheck(L_66);
		List_1_Add_m80ED8CCB53D255512F570C1FA995FBC08391C468_inline(L_66, L_69, List_1_Add_m80ED8CCB53D255512F570C1FA995FBC08391C468_RuntimeMethod_var);
	}

IL_013f:
	{
		int32_t L_70 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0145:
	{
		// foreach (var member in members)
		int32_t L_71 = V_5;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_72 = V_4;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		// if (reflectedType.Resolve().BaseType != null)
		Type_t* L_73 = ___reflectedType2;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_74;
		L_74 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_73, NULL);
		NullCheck(L_74);
		Type_t* L_75;
		L_75 = VirtualFuncInvoker0< Type_t* >::Invoke(112 /* System.Type System.Type::get_BaseType() */, L_74);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_75, (Type_t*)NULL, NULL);
		if (!L_76)
		{
			goto IL_0175;
		}
	}
	{
		// CollectProperties(config, properties, reflectedType.Resolve().BaseType);
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_77 = ___config0;
		List_1_t9F06BD3141B39A6FF9DD30E497BC5A8F132B0043* L_78 = ___properties1;
		Type_t* L_79 = ___reflectedType2;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_80;
		L_80 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_79, NULL);
		NullCheck(L_80);
		Type_t* L_81;
		L_81 = VirtualFuncInvoker0< Type_t* >::Invoke(112 /* System.Type System.Type::get_BaseType() */, L_80);
		il2cpp_codegen_runtime_class_init_inline(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		fsMetaType_CollectProperties_m4ED60C5E38D1D5EC03A3A61803D7F60E21ED2D3C(L_77, L_78, L_81, NULL);
	}

IL_0175:
	{
		// }
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::IsAutoProperty(System.Reflection.PropertyInfo,System.Reflection.MemberInfo[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaType_IsAutoProperty_mC28CBE4BA104DE04A8D082D781C962C39287CC28 (PropertyInfo_t* ___property0, MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___members1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     property.CanWrite && property.CanRead &&
		//     fsPortableReflection.HasAttribute(
		//     property.GetGetMethod(), typeof(CompilerGeneratedAttribute), /*shouldCache:*/ false);
		PropertyInfo_t* L_0 = ___property0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_0);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		PropertyInfo_t* L_2 = ___property0;
		NullCheck(L_2);
		bool L_3;
		L_3 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_2);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		PropertyInfo_t* L_4 = ___property0;
		NullCheck(L_4);
		MethodInfo_t* L_5;
		L_5 = PropertyInfo_GetGetMethod_mE0D6C0811D404DD977B53E68C0D36BA8CB889F74(L_4, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973(L_5, L_7, (bool)0, NULL);
		return L_8;
	}

IL_0027:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::CanSerializeProperty(Unity.VisualScripting.FullSerializer.fsConfig,System.Reflection.PropertyInfo,System.Reflection.MemberInfo[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaType_CanSerializeProperty_mAD3B5D6C4B122AEBA0895E510A69BFDDA00427B2 (fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, PropertyInfo_t* ___property1, MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___members2, bool ___annotationFreeValue3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CCanSerializePropertyU3Eb__0_m9DF628356CB27A717F31CD102E1D609070B00ABB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_0 = (U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass18_0__ctor_m409998F2ADDDE7B61682E1940C31EB545A5333A9(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_1 = V_0;
		PropertyInfo_t* L_2 = ___property1;
		NullCheck(L_1);
		L_1->___property_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___property_0), (void*)L_2);
		// if (typeof(Delegate).IsAssignableFrom(property.PropertyType))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Delegate_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_5 = V_0;
		NullCheck(L_5);
		PropertyInfo_t* L_6 = L_5->___property_0;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_6);
		NullCheck(L_4);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_7);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// var publicGetMethod = property.GetGetMethod(/*nonPublic:*/ false);
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_9 = V_0;
		NullCheck(L_9);
		PropertyInfo_t* L_10 = L_9->___property_0;
		NullCheck(L_10);
		MethodInfo_t* L_11;
		L_11 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(22 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_10, (bool)0);
		V_1 = L_11;
		// var publicSetMethod = property.GetSetMethod(/*nonPublic:*/ false);
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_12 = V_0;
		NullCheck(L_12);
		PropertyInfo_t* L_13 = L_12->___property_0;
		NullCheck(L_13);
		MethodInfo_t* L_14;
		L_14 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(24 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_13, (bool)0);
		V_2 = L_14;
		// if ((publicGetMethod != null && publicGetMethod.IsStatic) ||
		//     (publicSetMethod != null && publicSetMethod.IsStatic))
		MethodInfo_t* L_15 = V_1;
		bool L_16;
		L_16 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_15, (MethodInfo_t*)NULL, NULL);
		if (!L_16)
		{
			goto IL_0056;
		}
	}
	{
		MethodInfo_t* L_17 = V_1;
		NullCheck(L_17);
		bool L_18;
		L_18 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_17, NULL);
		if (L_18)
		{
			goto IL_0067;
		}
	}

IL_0056:
	{
		MethodInfo_t* L_19 = V_2;
		bool L_20;
		L_20 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_19, (MethodInfo_t*)NULL, NULL);
		if (!L_20)
		{
			goto IL_0069;
		}
	}
	{
		MethodInfo_t* L_21 = V_2;
		NullCheck(L_21);
		bool L_22;
		L_22 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_21, NULL);
		if (!L_22)
		{
			goto IL_0069;
		}
	}

IL_0067:
	{
		// return false;
		return (bool)0;
	}

IL_0069:
	{
		// if (property.GetIndexParameters().Length > 0)
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_23 = V_0;
		NullCheck(L_23);
		PropertyInfo_t* L_24 = L_23->___property_0;
		NullCheck(L_24);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_25;
		L_25 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(16 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_24);
		NullCheck(L_25);
		if (!(((RuntimeArray*)L_25)->max_length))
		{
			goto IL_0079;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0079:
	{
		// if (config.SerializeAttributes.Any(t => fsPortableReflection.HasAttribute(property, t)))
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_26 = ___config0;
		NullCheck(L_26);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = L_26->___SerializeAttributes_0;
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_28 = V_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_29 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass18_0_U3CCanSerializePropertyU3Eb__0_m9DF628356CB27A717F31CD102E1D609070B00ABB_RuntimeMethod_var), NULL);
		bool L_30;
		L_30 = Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D((RuntimeObject*)L_27, L_29, Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_0094;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0094:
	{
		// if (property.CanRead == false || property.CanWrite == false)
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_31 = V_0;
		NullCheck(L_31);
		PropertyInfo_t* L_32 = L_31->___property_0;
		NullCheck(L_32);
		bool L_33;
		L_33 = VirtualFuncInvoker0< bool >::Invoke(19 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_32);
		if (!L_33)
		{
			goto IL_00ae;
		}
	}
	{
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_34 = V_0;
		NullCheck(L_34);
		PropertyInfo_t* L_35 = L_34->___property_0;
		NullCheck(L_35);
		bool L_36;
		L_36 = VirtualFuncInvoker0< bool >::Invoke(20 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_35);
		if (L_36)
		{
			goto IL_00b0;
		}
	}

IL_00ae:
	{
		// return false;
		return (bool)0;
	}

IL_00b0:
	{
		// if ((publicGetMethod != null && (config.SerializeNonPublicSetProperties || publicSetMethod != null)) &&
		//     (config.SerializeNonAutoProperties || IsAutoProperty(property, members)))
		MethodInfo_t* L_37 = V_1;
		bool L_38;
		L_38 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_37, (MethodInfo_t*)NULL, NULL);
		if (!L_38)
		{
			goto IL_00e2;
		}
	}
	{
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_39 = ___config0;
		NullCheck(L_39);
		bool L_40 = L_39->___SerializeNonPublicSetProperties_6;
		if (L_40)
		{
			goto IL_00ca;
		}
	}
	{
		MethodInfo_t* L_41 = V_2;
		bool L_42;
		L_42 = MethodInfo_op_Inequality_mB73597A1FCC2F906DBCADDEC68A1B7D5B7E89FA8(L_41, (MethodInfo_t*)NULL, NULL);
		if (!L_42)
		{
			goto IL_00e2;
		}
	}

IL_00ca:
	{
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_43 = ___config0;
		NullCheck(L_43);
		bool L_44 = L_43->___SerializeNonAutoProperties_5;
		if (L_44)
		{
			goto IL_00e0;
		}
	}
	{
		U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* L_45 = V_0;
		NullCheck(L_45);
		PropertyInfo_t* L_46 = L_45->___property_0;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_47 = ___members2;
		il2cpp_codegen_runtime_class_init_inline(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = fsMetaType_IsAutoProperty_mC28CBE4BA104DE04A8D082D781C962C39287CC28(L_46, L_47, NULL);
		if (!L_48)
		{
			goto IL_00e2;
		}
	}

IL_00e0:
	{
		// return true;
		return (bool)1;
	}

IL_00e2:
	{
		// return annotationFreeValue;
		bool L_49 = ___annotationFreeValue3;
		return L_49;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType::CanSerializeField(Unity.VisualScripting.FullSerializer.fsConfig,System.Reflection.FieldInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsMetaType_CanSerializeField_mD6450E719027D7DC41CA949858689F8B2B87682E (fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* ___config0, FieldInfo_t* ___field1, bool ___annotationFreeValue2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CCanSerializeFieldU3Eb__0_mFA28917E7AF68FAD4A6A425DF445DD5AC3115D07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* L_0 = (U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass19_0__ctor_m577E5745A5BD61B689CD9DF9A336D664BDE608AA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* L_1 = V_0;
		FieldInfo_t* L_2 = ___field1;
		NullCheck(L_1);
		L_1->___field_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___field_0), (void*)L_2);
		// if (typeof(Delegate).IsAssignableFrom(field.FieldType))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Delegate_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* L_5 = V_0;
		NullCheck(L_5);
		FieldInfo_t* L_6 = L_5->___field_0;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_6);
		NullCheck(L_4);
		bool L_8;
		L_8 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_4, L_7);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002b:
	{
		// if (Attribute.IsDefined(field, typeof(CompilerGeneratedAttribute), false))
		U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* L_9 = V_0;
		NullCheck(L_9);
		FieldInfo_t* L_10 = L_9->___field_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (CompilerGeneratedAttribute_t0153EC5D2142E566E2D896C49F598756BCAEE771_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Attribute_IsDefined_m5DB4031FBFCC88B85E13217F1323701794B8D42C(L_10, L_12, (bool)0, NULL);
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0045:
	{
		// if (field.IsStatic)
		U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* L_14 = V_0;
		NullCheck(L_14);
		FieldInfo_t* L_15 = L_14->___field_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_15, NULL);
		if (!L_16)
		{
			goto IL_0054;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0054:
	{
		// if (config.SerializeAttributes.Any(t => fsPortableReflection.HasAttribute(field, t)))
		fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726* L_17 = ___config0;
		NullCheck(L_17);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18 = L_17->___SerializeAttributes_0;
		U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* L_19 = V_0;
		Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E* L_20 = (Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E*)il2cpp_codegen_object_new(Func_2_t7AF8146EC94DFCBB0F1B3E70111C1FB21D39F00E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Func_2__ctor_mAFDFA2B152082BBF5E0626BF143EDACD61DE9D74(L_20, L_19, (intptr_t)((void*)U3CU3Ec__DisplayClass19_0_U3CCanSerializeFieldU3Eb__0_mFA28917E7AF68FAD4A6A425DF445DD5AC3115D07_RuntimeMethod_var), NULL);
		bool L_21;
		L_21 = Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D((RuntimeObject*)L_18, L_20, Enumerable_Any_TisType_t_mD8597B059A2354F3F7C115AEC22CD569D67D9E5D_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_006f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_006f:
	{
		// if (!annotationFreeValue && !field.IsPublic)
		bool L_22 = ___annotationFreeValue2;
		if (L_22)
		{
			goto IL_0081;
		}
	}
	{
		U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* L_23 = V_0;
		NullCheck(L_23);
		FieldInfo_t* L_24 = L_23->___field_0;
		NullCheck(L_24);
		bool L_25;
		L_25 = FieldInfo_get_IsPublic_m73C84BEEAE6C993FACC6199B81DBF2B80D3810E5(L_24, NULL);
		if (L_25)
		{
			goto IL_0081;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0081:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsMetaType__cctor_mE583D07A7F203890BAF8361A65C8885B0155B781 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCA1741446BBCBB6DA1EEE4CBA933503E371880B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Dictionary<fsConfig, Dictionary<Type, fsMetaType>> _configMetaTypes =
		//     new Dictionary<fsConfig, Dictionary<Type, fsMetaType>>();
		Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525* L_0 = (Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525*)il2cpp_codegen_object_new(Dictionary_2_tFE5F76A37152304D01BB6476659D5D42230E8525_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mCA1741446BBCBB6DA1EEE4CBA933503E371880B9(L_0, Dictionary_2__ctor_mCA1741446BBCBB6DA1EEE4CBA933503E371880B9_RuntimeMethod_var);
		((fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_StaticFields*)il2cpp_codegen_static_fields_for(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var))->____configMetaTypes_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_StaticFields*)il2cpp_codegen_static_fields_for(fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743_il2cpp_TypeInfo_var))->____configMetaTypes_5), (void*)L_0);
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
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m538342D591F27E0886D3D9F7969DB43E9F1AC3A0 (U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass16_0::<CollectProperties>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__0_mBDC7709CE09425F240C42147C3BB2FDB7E76FAF5 (U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (config.IgnoreSerializeAttributes.Any(t => fsPortableReflection.HasAttribute(member, t)))
		MemberInfo_t* L_0 = __this->___member_0;
		Type_t* L_1 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass16_0::<CollectProperties>b__1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__1_m086012131CD06B409756038400BF39327BF9F233 (U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// !config.SerializeAttributes.Any(t => fsPortableReflection.HasAttribute(member, t)))
		MemberInfo_t* L_0 = __this->___member_0;
		Type_t* L_1 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass16_0::<CollectProperties>b__2(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass16_0_U3CCollectPropertiesU3Eb__2_mCA3D8AC6B0001C61241D0164C6089EE68DF7F245 (U3CU3Ec__DisplayClass16_0_t1F2AD01733C50A5C8F3EED40EC24B1EF3D170687* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// config.IgnoreSerializeAttributes.Any(t => fsPortableReflection.HasAttribute(member, t)))
		MemberInfo_t* L_0 = __this->___member_0;
		Type_t* L_1 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477(L_0, L_1, NULL);
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
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m409998F2ADDDE7B61682E1940C31EB545A5333A9 (U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass18_0::<CanSerializeProperty>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass18_0_U3CCanSerializePropertyU3Eb__0_m9DF628356CB27A717F31CD102E1D609070B00ABB (U3CU3Ec__DisplayClass18_0_t7A23E8400AD5D3DB797826E6FDCC44E7EFDA6B52* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (config.SerializeAttributes.Any(t => fsPortableReflection.HasAttribute(property, t)))
		PropertyInfo_t* L_0 = __this->___property_0;
		Type_t* L_1 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477(L_0, L_1, NULL);
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
// System.Void Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_m577E5745A5BD61B689CD9DF9A336D664BDE608AA (U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.fsMetaType/<>c__DisplayClass19_0::<CanSerializeField>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass19_0_U3CCanSerializeFieldU3Eb__0_mFA28917E7AF68FAD4A6A425DF445DD5AC3115D07 (U3CU3Ec__DisplayClass19_0_t045F379B05DE64CD5859B6F851C39D5E8A0F84D6* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (config.SerializeAttributes.Any(t => fsPortableReflection.HasAttribute(field, t)))
		FieldInfo_t* L_0 = __this->___field_0;
		Type_t* L_1 = ___t0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477(L_0, L_1, NULL);
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
// System.Type Unity.VisualScripting.FullSerializer.fsReflectionUtility::GetInterface(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsReflectionUtility_GetInterface_mECB1C271163A4B35F1CB6F2976818AF0A50AD905 (Type_t* ___type0, Type_t* ___interfaceType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	{
		// if (interfaceType.Resolve().IsGenericType &&
		//     interfaceType.Resolve().IsGenericTypeDefinition == false)
		Type_t* L_0 = ___interfaceType1;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_1);
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		Type_t* L_3 = ___interfaceType1;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_3, NULL);
		NullCheck(L_4);
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_4);
		if (L_5)
		{
			goto IL_0073;
		}
	}
	{
		// throw new ArgumentException("GetInterface requires that if the interface " +
		//     "type is generic, then it must be the generic type definition, not a " +
		//     "specific generic type instantiation");
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A568DD979BA71FD69E8EEE80B144BCDE0D0B023)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsReflectionUtility_GetInterface_mECB1C271163A4B35F1CB6F2976818AF0A50AD905_RuntimeMethod_var)));
	}

IL_0025:
	{
		// foreach (var iface in type.GetInterfaces())
		Type_t* L_7 = ___type0;
		NullCheck(L_7);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8;
		L_8 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(114 /* System.Type[] System.Type::GetInterfaces() */, L_7);
		V_0 = L_8;
		V_1 = 0;
		goto IL_0060;
	}

IL_0030:
	{
		// foreach (var iface in type.GetInterfaces())
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Type_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// if (iface.Resolve().IsGenericType)
		Type_t* L_13 = V_2;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_13, NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_14);
		if (!L_15)
		{
			goto IL_0051;
		}
	}
	{
		// if (interfaceType == iface.GetGenericTypeDefinition())
		Type_t* L_16 = ___interfaceType1;
		Type_t* L_17 = V_2;
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(47 /* System.Type System.Type::GetGenericTypeDefinition() */, L_17);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		// return iface;
		Type_t* L_20 = V_2;
		return L_20;
	}

IL_0051:
	{
		// else if (interfaceType == iface)
		Type_t* L_21 = ___interfaceType1;
		Type_t* L_22 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_005c;
		}
	}
	{
		// return iface;
		Type_t* L_24 = V_2;
		return L_24;
	}

IL_005c:
	{
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0060:
	{
		// foreach (var iface in type.GetInterfaces())
		int32_t L_26 = V_1;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))))
		{
			goto IL_0030;
		}
	}
	{
		// type = type.Resolve().BaseType;
		Type_t* L_28 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_28, NULL);
		NullCheck(L_29);
		Type_t* L_30;
		L_30 = VirtualFuncInvoker0< Type_t* >::Invoke(112 /* System.Type System.Type::get_BaseType() */, L_29);
		___type0 = L_30;
	}

IL_0073:
	{
		// while (type != null)
		Type_t* L_31 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_31, (Type_t*)NULL, NULL);
		if (L_32)
		{
			goto IL_0025;
		}
	}
	{
		// return null;
		return (Type_t*)NULL;
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
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::Enter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsCyclicReferenceManager_Enter_m28863BBFD4BDEF23F1DCBC9D2FC71D797EB2FDB4 (fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* __this, const RuntimeMethod* method) 
{
	{
		// _depth++;
		int32_t L_0 = __this->____depth_3;
		__this->____depth_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// }
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsCyclicReferenceManager_Exit_m91D1DB5745A082CE50E57ABB26B16E0F3661120F (fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _depth--;
		int32_t L_0 = __this->____depth_3;
		__this->____depth_3 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// if (_depth == 0)
		int32_t L_1 = __this->____depth_3;
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		// _objectIds = new Dictionary<object, int>(ObjectReferenceEqualityComparator.Instance);
		il2cpp_codegen_runtime_class_init_inline(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var))->___Instance_0;
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_3 = (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*)il2cpp_codegen_object_new(Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D(L_3, L_2, Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_RuntimeMethod_var);
		__this->____objectIds_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectIds_0), (void*)L_3);
		// _nextId = 0;
		__this->____nextId_1 = 0;
		// _marked = new Dictionary<int, object>();
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_4 = (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*)il2cpp_codegen_object_new(Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7(L_4, Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		__this->____marked_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____marked_2), (void*)L_4);
	}

IL_0038:
	{
		// if (_depth < 0)
		int32_t L_5 = __this->____depth_3;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// _depth = 0;
		__this->____depth_3 = 0;
		// throw new InvalidOperationException("Internal Error - Mismatched Enter/Exit. Please report a bug at https://github.com/jacobdufault/fullserializer/issues with the serialization data.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral196B9F158F47A1AD126F637AEA43035DC05202EA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsCyclicReferenceManager_Exit_m91D1DB5745A082CE50E57ABB26B16E0F3661120F_RuntimeMethod_var)));
	}

IL_0053:
	{
		// return _depth == 0;
		int32_t L_7 = __this->____depth_3;
		return (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::GetReferenceObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsCyclicReferenceManager_GetReferenceObject_mA7330D4D27E050EE92EC6F5333767307B8E1B7C4 (fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* __this, int32_t ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_marked.ContainsKey(id) == false)
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = __this->____marked_2;
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25(L_0, L_1, Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		// throw new InvalidOperationException("Internal Deserialization Error - Object " +
		//     "definition has not been encountered for object with id=" + id +
		//     "; have you reordered or modified the serialized data? If this is an issue " +
		//     "with an unmodified Full Serializer implementation and unmodified serialization " +
		//     "data, please report an issue with an included test case.");
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___id0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB964E2ABF1086239D09154067A1805A2E3E74DB5)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4FDC799B671F321998C604BDD55E7816E8488106)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsCyclicReferenceManager_GetReferenceObject_mA7330D4D27E050EE92EC6F5333767307B8E1B7C4_RuntimeMethod_var)));
	}

IL_002a:
	{
		// return _marked[id];
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_6 = __this->____marked_2;
		int32_t L_7 = ___id0;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514(L_6, L_7, Dictionary_2_get_Item_mC3FEA647E750C27367C990777D8890E0E712E514_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::AddReferenceWithId(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsCyclicReferenceManager_AddReferenceWithId_mEC4A2DE046EF97033AE58B86AA1AADBA88A170C5 (fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* __this, int32_t ___id0, RuntimeObject* ___reference1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _marked[id] = reference;
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = __this->____marked_2;
		int32_t L_1 = ___id0;
		RuntimeObject* L_2 = ___reference1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1(L_0, L_1, L_2, Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::GetReferenceId(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t fsCyclicReferenceManager_GetReferenceId_m30B91E17BE1C02D89F10F705C0EE3FE8F0E0458F (fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (_objectIds.TryGetValue(item, out id) == false)
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_0 = __this->____objectIds_0;
		RuntimeObject* L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_002f;
		}
	}
	{
		// id = _nextId++;
		int32_t L_3 = __this->____nextId_1;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->____nextId_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		V_0 = L_5;
		// _objectIds[item] = id;
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_6 = __this->____objectIds_0;
		RuntimeObject* L_7 = ___item0;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13(L_6, L_7, L_8, Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_RuntimeMethod_var);
	}

IL_002f:
	{
		// return id;
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::IsReference(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsCyclicReferenceManager_IsReference_mCE7FC77905F712E503F2CBE8D6F02244C74D9437 (fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _marked.ContainsKey(GetReferenceId(item));
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_0 = __this->____marked_2;
		RuntimeObject* L_1 = ___item0;
		int32_t L_2;
		L_2 = fsCyclicReferenceManager_GetReferenceId_m30B91E17BE1C02D89F10F705C0EE3FE8F0E0458F(__this, L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25(L_0, L_2, Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::MarkSerialized(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsCyclicReferenceManager_MarkSerialized_m8CD82B690712E7EEE90E8B7C15EAF22E2E76B952 (fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	{
		// var referenceId = GetReferenceId(item);
		RuntimeObject* L_0 = ___item0;
		int32_t L_1;
		L_1 = fsCyclicReferenceManager_GetReferenceId_m30B91E17BE1C02D89F10F705C0EE3FE8F0E0458F(__this, L_0, NULL);
		V_0 = L_1;
		// if (_marked.ContainsKey(referenceId))
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_2 = __this->____marked_2;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25(L_2, L_3, Dictionary_2_ContainsKey_mED5C451F158CDDD2B3F4B0720CD248DA9DB27B25_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		// throw new InvalidOperationException("Internal Error - " + item +
		//     " has already been marked as serialized");
		RuntimeObject* L_5 = ___item0;
		G_B2_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC974DEBF1FB092B03E1B379DA19800780F65F5F2));
		if (L_5)
		{
			G_B3_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC974DEBF1FB092B03E1B379DA19800780F65F5F2));
			goto IL_0021;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_0;
		goto IL_0027;
	}

IL_0021:
	{
		RuntimeObject* L_6 = ___item0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		G_B4_0 = L_7;
		G_B4_1 = G_B3_0;
	}

IL_0027:
	{
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B4_1, G_B4_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AF37723612652CEDB34D520B31C879879237B1E)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_9 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsCyclicReferenceManager_MarkSerialized_m8CD82B690712E7EEE90E8B7C15EAF22E2E76B952_RuntimeMethod_var)));
	}

IL_0037:
	{
		// _marked[referenceId] = item;
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_10 = __this->____marked_2;
		int32_t L_11 = V_0;
		RuntimeObject* L_12 = ___item0;
		NullCheck(L_10);
		Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1(L_10, L_11, L_12, Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsCyclicReferenceManager__ctor_m4904103AD3F430576C520F7C2C412C35C10BC1D0 (fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<object, int> _objectIds = new Dictionary<object, int>(ObjectReferenceEqualityComparator.Instance);
		il2cpp_codegen_runtime_class_init_inline(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var))->___Instance_0;
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_1 = (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*)il2cpp_codegen_object_new(Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D(L_1, L_0, Dictionary_2__ctor_m89AC42CD88BC0ED965D36B7028EF3DE23D290E1D_RuntimeMethod_var);
		__this->____objectIds_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____objectIds_0), (void*)L_1);
		// private Dictionary<int, object> _marked = new Dictionary<int, object>();
		Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* L_2 = (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907*)il2cpp_codegen_object_new(Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7(L_2, Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_RuntimeMethod_var);
		__this->____marked_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____marked_2), (void*)L_2);
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::System.Collections.Generic.IEqualityComparer<System.Object>.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ObjectReferenceEqualityComparator_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_Equals_mCF77DB060539A6992A81D2700283385C08751EB6 (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* __this, RuntimeObject* ___x0, RuntimeObject* ___y1, const RuntimeMethod* method) 
{
	{
		// return ReferenceEquals(x, y);
		RuntimeObject* L_0 = ___x0;
		RuntimeObject* L_1 = ___y1;
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)L_1))? 1 : 0);
	}
}
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectReferenceEqualityComparator_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_GetHashCode_mFB4BE9ACD40DEAE98F69833C25B3533F8DFED864 (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		// return RuntimeHelpers.GetHashCode(obj);
		RuntimeObject* L_0 = ___obj0;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_m7B5D57E1EE2A59EDFA1BD237E9B37C6C836D774B(L_0, NULL);
		return L_1;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReferenceEqualityComparator__ctor_m609265685F45AFF755A5EF6BCF53C9B2FAF2DF64 (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager/ObjectReferenceEqualityComparator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectReferenceEqualityComparator__cctor_m8B819E32F9065E54766F626C4A17B330217E2D51 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly IEqualityComparer<object> Instance = new ObjectReferenceEqualityComparator();
		ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24* L_0 = (ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24*)il2cpp_codegen_object_new(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ObjectReferenceEqualityComparator__ctor_m609265685F45AFF755A5EF6BCF53C9B2FAF2DF64(L_0, NULL);
		((ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_StaticFields*)il2cpp_codegen_static_fields_for(ObjectReferenceEqualityComparator_t16C6855ED0469BF805B533C786AA35E60E43BC24_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return HasAttribute(element, attributeType, true);
		MemberInfo_t* L_0 = ___element0;
		Type_t* L_1 = ___attributeType1;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973(L_0, L_1, (bool)1, NULL);
		return L_2;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973 (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method) 
{
	{
		// return Attribute.IsDefined(element, attributeType, true);
		MemberInfo_t* L_0 = ___element0;
		Type_t* L_1 = ___attributeType1;
		bool L_2;
		L_2 = Attribute_IsDefined_m5DB4031FBFCC88B85E13217F1323701794B8D42C(L_0, L_1, (bool)1, NULL);
		return L_2;
	}
}
// System.Attribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* fsPortableReflection_GetAttribute_m54325D68CE95535644F25CD39FAA3D4858745EB8 (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* V_1 = NULL;
	AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* V_3 = NULL;
	{
		// var query = new AttributeQuery
		// {
		//     MemberInfo = element,
		//     AttributeType = attributeType
		// };
		il2cpp_codegen_initobj((&V_2), sizeof(AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7));
		MemberInfo_t* L_0 = ___element0;
		(&V_2)->___MemberInfo_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___MemberInfo_0), (void*)L_0);
		Type_t* L_1 = ___attributeType1;
		(&V_2)->___AttributeType_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_2)->___AttributeType_1), (void*)L_1);
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_2 = V_2;
		V_0 = L_2;
		// if (_cachedAttributeQueries.TryGetValue(query, out attribute) == false)
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->____cachedAttributeQueries_1;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA** >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>::TryGetValue(TKey,TValue&) */, IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07_il2cpp_TypeInfo_var, L_3, L_4, (&V_1));
		if (L_5)
		{
			goto IL_004e;
		}
	}
	{
		// var attributes = Attribute.GetCustomAttributes(element, attributeType, true).ToArray();
		MemberInfo_t* L_6 = ___element0;
		Type_t* L_7 = ___attributeType1;
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_8;
		L_8 = Attribute_GetCustomAttributes_mCB0A3E0F2148A92A0C6444D601F0F19E01B0ED09(L_6, L_7, (bool)1, NULL);
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_9;
		L_9 = Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258((RuntimeObject*)L_8, Enumerable_ToArray_TisAttribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA_m1386E5D9BE2299D956F8334023BB11BC76318258_RuntimeMethod_var);
		V_3 = L_9;
		// if (attributes.Length > 0)
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_10 = V_3;
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_003f;
		}
	}
	{
		// attribute = (Attribute)attributes[0];
		AttributeU5BU5D_t0F73488E6F1249C889608E8DCC0BCC28A874E8F1* L_11 = V_3;
		NullCheck(L_11);
		int32_t L_12 = 0;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_1 = L_13;
	}

IL_003f:
	{
		// if (shouldCache)
		bool L_14 = ___shouldCache2;
		if (!L_14)
		{
			goto IL_004e;
		}
	}
	{
		// _cachedAttributeQueries[query] = attribute;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		RuntimeObject* L_15 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->____cachedAttributeQueries_1;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_16 = V_0;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_17 = V_1;
		NullCheck(L_15);
		InterfaceActionInvoker2< AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7, Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* >::Invoke(0 /* System.Void System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>::set_Item(TKey,TValue) */, IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07_il2cpp_TypeInfo_var, L_15, L_16, L_17);
	}

IL_004e:
	{
		// return attribute;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_18 = V_1;
		return L_18;
	}
}
// System.Reflection.PropertyInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* fsPortableReflection_GetDeclaredProperty_m78691C838C06D0C4ADCE259161DE2323504862FC (Type_t* ___type0, String_t* ___propertyName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var props = GetDeclaredProperties(type);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_1;
		L_1 = fsPortableReflection_GetDeclaredProperties_mF26959E95815BD982802EC6160E3DA185B1DC6A7(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < props.Length; ++i)
		V_1 = 0;
		goto IL_0023;
	}

IL_000b:
	{
		// if (props[i].Name == propertyName)
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PropertyInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7 = ___propertyName1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_001f;
		}
	}
	{
		// return props[i];
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		PropertyInfo_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_001f:
	{
		// for (var i = 0; i < props.Length; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0023:
	{
		// for (var i = 0; i < props.Length; ++i)
		int32_t L_14 = V_1;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (PropertyInfo_t*)NULL;
	}
}
// System.Reflection.MethodInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMethod(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* fsPortableReflection_GetDeclaredMethod_mDC22CDA0777452C8D2FE05B2FB07B14B697A1E5B (Type_t* ___type0, String_t* ___methodName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var methods = GetDeclaredMethods(type);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_1;
		L_1 = fsPortableReflection_GetDeclaredMethods_mF1E5A4D80A892D0E7E9FED20061B23E39E413DB3(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < methods.Length; ++i)
		V_1 = 0;
		goto IL_0023;
	}

IL_000b:
	{
		// if (methods[i].Name == methodName)
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MethodInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7 = ___methodName1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_001f;
		}
	}
	{
		// return methods[i];
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		MethodInfo_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_001f:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0023:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_14 = V_1;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (MethodInfo_t*)NULL;
	}
}
// System.Reflection.ConstructorInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredConstructor(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* fsPortableReflection_GetDeclaredConstructor_m9F5B44FCB7E14D7E7CF90482A9D1D13C11445C01 (Type_t* ___type0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___parameters1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* V_0 = NULL;
	int32_t V_1 = 0;
	ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* V_2 = NULL;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// var ctors = GetDeclaredConstructors(type);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_1;
		L_1 = fsPortableReflection_GetDeclaredConstructors_mB5B777C7EC535253A345584074FC1D8FBA32160A(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < ctors.Length; ++i)
		V_1 = 0;
		goto IL_0049;
	}

IL_000b:
	{
		// var ctor = ctors[i];
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// var ctorParams = ctor.GetParameters();
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_6 = V_2;
		NullCheck(L_6);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_7;
		L_7 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_6);
		V_3 = L_7;
		// if (parameters.Length != ctorParams.Length)
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_8 = ___parameters1;
		NullCheck(L_8);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_9 = V_3;
		NullCheck(L_9);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((uint32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		// for (var j = 0; j < ctorParams.Length; ++j)
		V_4 = 0;
		goto IL_003c;
	}

IL_0023:
	{
		// if (ctorParams[j].ParameterType != parameters[j])
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Type_t* L_14;
		L_14 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_15 = ___parameters1;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Type_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_14, L_18, NULL);
		// for (var j = 0; j < ctorParams.Length; ++j)
		int32_t L_20 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_003c:
	{
		// for (var j = 0; j < ctorParams.Length; ++j)
		int32_t L_21 = V_4;
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_22 = V_3;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0023;
		}
	}
	{
		// return ctor;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_23 = V_2;
		return L_23;
	}

IL_0045:
	{
		// for (var i = 0; i < ctors.Length; ++i)
		int32_t L_24 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0049:
	{
		// for (var i = 0; i < ctors.Length; ++i)
		int32_t L_25 = V_1;
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_26 = V_0;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB*)NULL;
	}
}
// System.Reflection.ConstructorInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredConstructors(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* fsPortableReflection_GetDeclaredConstructors_mB5B777C7EC535253A345584074FC1D8FBA32160A (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.GetConstructors(DeclaredFlags & ~BindingFlags.Static); // LUDIQ: Exclude static constructors
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_2;
		L_2 = VirtualFuncInvoker1< ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A*, int32_t >::Invoke(81 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, L_0, ((int32_t)((int32_t)L_1&((int32_t)-9))));
		return L_2;
	}
}
// System.Reflection.MemberInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetFlattenedMember(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* fsPortableReflection_GetFlattenedMember_m256C2194223720C664CD98A743944C0C8E4A2A1B (Type_t* ___type0, String_t* ___memberName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1B76CD20C4F1CF6BD59E08CF75B4E4CA97F23217_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m01AC2B6FDF952B7ACF16089D4BA6BA374A728DE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* V_0 = NULL;
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// var result = new List<MemberInfo>();
		List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* L_0 = (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*)il2cpp_codegen_object_new(List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A(L_0, List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0043;
	}

IL_0008:
	{
		// var members = GetDeclaredMembers(type);
		Type_t* L_1 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_2;
		L_2 = fsPortableReflection_GetDeclaredMembers_m65055614D9291573376917BF3044659CAF23409E(L_1, NULL);
		V_1 = L_2;
		// for (var i = 0; i < members.Length; ++i)
		V_2 = 0;
		goto IL_0030;
	}

IL_0013:
	{
		// if (members[i].Name == memberName)
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		MemberInfo_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		String_t* L_8 = ___memberName1;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_002c;
		}
	}
	{
		// result.Add(members[i]);
		List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* L_10 = V_0;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_11 = V_1;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MemberInfo_t* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_10);
		List_1_Add_m1B76CD20C4F1CF6BD59E08CF75B4E4CA97F23217_inline(L_10, L_14, List_1_Add_m1B76CD20C4F1CF6BD59E08CF75B4E4CA97F23217_RuntimeMethod_var);
	}

IL_002c:
	{
		// for (var i = 0; i < members.Length; ++i)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0030:
	{
		// for (var i = 0; i < members.Length; ++i)
		int32_t L_16 = V_2;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_17 = V_1;
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length)))))
		{
			goto IL_0013;
		}
	}
	{
		// type = type.Resolve().BaseType;
		Type_t* L_18 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_18, NULL);
		NullCheck(L_19);
		Type_t* L_20;
		L_20 = VirtualFuncInvoker0< Type_t* >::Invoke(112 /* System.Type System.Type::get_BaseType() */, L_19);
		___type0 = L_20;
	}

IL_0043:
	{
		// while (type != null)
		Type_t* L_21 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_21, (Type_t*)NULL, NULL);
		if (L_22)
		{
			goto IL_0008;
		}
	}
	{
		// return result.ToArray();
		List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* L_23 = V_0;
		NullCheck(L_23);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_24;
		L_24 = List_1_ToArray_m01AC2B6FDF952B7ACF16089D4BA6BA374A728DE7(L_23, List_1_ToArray_m01AC2B6FDF952B7ACF16089D4BA6BA374A728DE7_RuntimeMethod_var);
		return L_24;
	}
}
// System.Reflection.MethodInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetFlattenedMethod(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* fsPortableReflection_GetFlattenedMethod_mE5EF30F98C8A994F7581740E8ECEDBA6E42C8072 (Type_t* ___type0, String_t* ___methodName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* V_0 = NULL;
	int32_t V_1 = 0;
	{
		goto IL_0038;
	}

IL_0002:
	{
		// var methods = GetDeclaredMethods(type);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_1;
		L_1 = fsPortableReflection_GetDeclaredMethods_mF1E5A4D80A892D0E7E9FED20061B23E39E413DB3(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < methods.Length; ++i)
		V_1 = 0;
		goto IL_0025;
	}

IL_000d:
	{
		// if (methods[i].Name == methodName)
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MethodInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7 = ___methodName1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0021;
		}
	}
	{
		// return methods[i];
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		MethodInfo_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_0021:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0025:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_14 = V_1;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// type = type.Resolve().BaseType;
		Type_t* L_16 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_16, NULL);
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(112 /* System.Type System.Type::get_BaseType() */, L_17);
		___type0 = L_18;
	}

IL_0038:
	{
		// while (type != null)
		Type_t* L_19 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_19, (Type_t*)NULL, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		// return null;
		return (MethodInfo_t*)NULL;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo> Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetFlattenedMethods(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetFlattenedMethods_m870F6D5B997FE4FF32A953D21FEAB4426B0A7C3F (Type_t* ___type0, String_t* ___methodName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* L_0 = (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8*)il2cpp_codegen_object_new(U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetFlattenedMethodsU3Ed__18__ctor_m7F0BE4CC309547C4870827556E890C1490D2744A(L_0, ((int32_t)-2), NULL);
		U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* L_1 = L_0;
		Type_t* L_2 = ___type0;
		NullCheck(L_1);
		L_1->___U3CU3E3__type_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E3__type_4), (void*)L_2);
		U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* L_3 = L_1;
		String_t* L_4 = ___methodName1;
		NullCheck(L_3);
		L_3->___U3CU3E3__methodName_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E3__methodName_6), (void*)L_4);
		return L_3;
	}
}
// System.Reflection.PropertyInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetFlattenedProperty(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* fsPortableReflection_GetFlattenedProperty_m2EEED0D98B03C3D763A13F22DAA28EB19D837452 (Type_t* ___type0, String_t* ___propertyName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		goto IL_0038;
	}

IL_0002:
	{
		// var properties = GetDeclaredProperties(type);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_1;
		L_1 = fsPortableReflection_GetDeclaredProperties_mF26959E95815BD982802EC6160E3DA185B1DC6A7(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < properties.Length; ++i)
		V_1 = 0;
		goto IL_0025;
	}

IL_000d:
	{
		// if (properties[i].Name == propertyName)
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PropertyInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7 = ___propertyName1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0021;
		}
	}
	{
		// return properties[i];
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		PropertyInfo_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_0021:
	{
		// for (var i = 0; i < properties.Length; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0025:
	{
		// for (var i = 0; i < properties.Length; ++i)
		int32_t L_14 = V_1;
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// type = type.Resolve().BaseType;
		Type_t* L_16 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_16, NULL);
		NullCheck(L_17);
		Type_t* L_18;
		L_18 = VirtualFuncInvoker0< Type_t* >::Invoke(112 /* System.Type System.Type::get_BaseType() */, L_17);
		___type0 = L_18;
	}

IL_0038:
	{
		// while (type != null)
		Type_t* L_19 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_19, (Type_t*)NULL, NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		// return null;
		return (PropertyInfo_t*)NULL;
	}
}
// System.Reflection.MemberInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMember(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* fsPortableReflection_GetDeclaredMember_m9D3EBC3250D57900AAAEF9647298F35764D03182 (Type_t* ___type0, String_t* ___memberName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var members = GetDeclaredMembers(type);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_1;
		L_1 = fsPortableReflection_GetDeclaredMembers_m65055614D9291573376917BF3044659CAF23409E(L_0, NULL);
		V_0 = L_1;
		// for (var i = 0; i < members.Length; ++i)
		V_1 = 0;
		goto IL_0023;
	}

IL_000b:
	{
		// if (members[i].Name == memberName)
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MemberInfo_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7 = ___memberName1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_001f;
		}
	}
	{
		// return members[i];
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		MemberInfo_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}

IL_001f:
	{
		// for (var i = 0; i < members.Length; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0023:
	{
		// for (var i = 0; i < members.Length; ++i)
		int32_t L_14 = V_1;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (MemberInfo_t*)NULL;
	}
}
// System.Reflection.MethodInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMethods(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* fsPortableReflection_GetDeclaredMethods_mF1E5A4D80A892D0E7E9FED20061B23E39E413DB3 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.GetMethods(DeclaredFlags);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, int32_t >::Invoke(99 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.PropertyInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* fsPortableReflection_GetDeclaredProperties_mF26959E95815BD982802EC6160E3DA185B1DC6A7 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.GetProperties(DeclaredFlags);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_2;
		L_2 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(109 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.FieldInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredFields(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* fsPortableReflection_GetDeclaredFields_m8FCC0F8F72BA45796F5C46E49F74E6187790D89B (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.GetFields(DeclaredFlags);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_2;
		L_2 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(85 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.MemberInfo[] Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetDeclaredMembers(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* fsPortableReflection_GetDeclaredMembers_m65055614D9291573376917BF3044659CAF23409E (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return type.GetMembers(DeclaredFlags);
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		int32_t L_1 = ((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2;
		NullCheck(L_0);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_2;
		L_2 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(90 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.MemberInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::AsMemberInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* fsPortableReflection_AsMemberInfo_m1946DBE25EE3BD47D336CD64258ECD41B4BB6C7A (Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		// return type;
		Type_t* L_0 = ___type0;
		return L_0;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::IsType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_IsType_m6A7FC85AB4E8D514EC4B764CDD328DC299CBD46F (MemberInfo_t* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return member is Type;
		MemberInfo_t* L_0 = ___member0;
		return (bool)((!(((RuntimeObject*)(Type_t*)((Type_t*)IsInstClass((RuntimeObject*)L_0, Type_t_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}
}
// System.Type Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::AsType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsPortableReflection_AsType_m9178246723D7842134DCE05F9B6F51B660C7CA86 (MemberInfo_t* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (Type)member;
		MemberInfo_t* L_0 = ___member0;
		return ((Type_t*)CastclassClass((RuntimeObject*)L_0, Type_t_il2cpp_TypeInfo_var));
	}
}
// System.Type Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::Resolve(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3 (Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		// return type;
		Type_t* L_0 = ___type0;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsPortableReflection__cctor_m809A0F036D94DD50B44E6986C9AC53DA8215DE41 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Type[] EmptyTypes = { };
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)0);
		((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___EmptyTypes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___EmptyTypes_0), (void*)L_0);
		// private static IDictionary<AttributeQuery, Attribute> _cachedAttributeQueries =
		//     new Dictionary<AttributeQuery, Attribute>(new AttributeQueryComparator());
		AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* L_1 = (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1*)il2cpp_codegen_object_new(AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AttributeQueryComparator__ctor_m97A20B142642A29462C6A1EEC957529E30965B4C(L_1, NULL);
		Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700* L_2 = (Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700*)il2cpp_codegen_object_new(Dictionary_2_t6F7C5D1D47078EB234FB37466D2A9394EAA78700_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4(L_2, L_1, Dictionary_2__ctor_m9CFE7D3EA7000C67AD7CA81BB321AA10E1469FE4_RuntimeMethod_var);
		((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->____cachedAttributeQueries_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->____cachedAttributeQueries_1), (void*)L_2);
		// private static BindingFlags DeclaredFlags =
		//     BindingFlags.NonPublic |
		//     BindingFlags.Public |
		//     BindingFlags.Instance |
		//     BindingFlags.Static |
		//     BindingFlags.DeclaredOnly;
		((fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_StaticFields*)il2cpp_codegen_static_fields_for(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var))->___DeclaredFlags_2 = ((int32_t)62);
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
// Conversion methods for marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_pinvoke(const AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7& unmarshaled, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_pinvoke& marshaled)
{
	Exception_t* ___MemberInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'MemberInfo' of type 'AttributeQuery': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MemberInfo_0Exception, NULL);
}
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_pinvoke_back(const AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_pinvoke& marshaled, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7& unmarshaled)
{
	Exception_t* ___MemberInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'MemberInfo' of type 'AttributeQuery': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MemberInfo_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_pinvoke_cleanup(AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_com(const AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7& unmarshaled, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_com& marshaled)
{
	Exception_t* ___MemberInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'MemberInfo' of type 'AttributeQuery': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MemberInfo_0Exception, NULL);
}
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_com_back(const AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_com& marshaled, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7& unmarshaled)
{
	Exception_t* ___MemberInfo_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'MemberInfo' of type 'AttributeQuery': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___MemberInfo_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery
IL2CPP_EXTERN_C void AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshal_com_cleanup(AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7_marshaled_com& marshaled)
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator::Equals(Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeQueryComparator_Equals_m27EA6B949A2AAF440EFE865A87E20FB9CED53635 (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* __this, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 ___x0, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     x.MemberInfo == y.MemberInfo &&
		//     x.AttributeType == y.AttributeType;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_0 = ___x0;
		MemberInfo_t* L_1 = L_0.___MemberInfo_0;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_2 = ___y1;
		MemberInfo_t* L_3 = L_2.___MemberInfo_0;
		bool L_4;
		L_4 = MemberInfo_op_Equality_m4B4F1AF29C9361D125F6D7FAB3D227ED3FECE685(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_5 = ___x0;
		Type_t* L_6 = L_5.___AttributeType_1;
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_7 = ___y1;
		Type_t* L_8 = L_7.___AttributeType_1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		return L_9;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator::GetHashCode(Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AttributeQueryComparator_GetHashCode_m538CC0620B54C1478F4B17229A036FADB11E4359 (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* __this, AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 ___obj0, const RuntimeMethod* method) 
{
	{
		// return
		//     obj.MemberInfo.GetHashCode() +
		//     (17 * obj.AttributeType.GetHashCode());
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_0 = ___obj0;
		MemberInfo_t* L_1 = L_0.___MemberInfo_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		AttributeQuery_tCBA10DD34B1CEA7A75740A1B98020B551D8445C7 L_3 = ___obj0;
		Type_t* L_4 = L_3.___AttributeType_1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		return ((int32_t)il2cpp_codegen_add(L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)17), L_5))));
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQueryComparator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeQueryComparator__ctor_m97A20B142642A29462C6A1EEC957529E30965B4C (AttributeQueryComparator_t2FBE0BC91DB3A9551CE2E00214ADEFA9000EA7E1* __this, const RuntimeMethod* method) 
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
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFlattenedMethodsU3Ed__18__ctor_m7F0BE4CC309547C4870827556E890C1490D2744A (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFlattenedMethodsU3Ed__18_System_IDisposable_Dispose_m19043E561F795B54EAD95D6D55C2850086C7C47A (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetFlattenedMethodsU3Ed__18_MoveNext_m666D577C002579E158E70ACED569A87B46A24F76 (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_00b5;
	}

IL_001c:
	{
		// var methods = GetDeclaredMethods(type);
		Type_t* L_3 = __this->___type_3;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_4;
		L_4 = fsPortableReflection_GetDeclaredMethods_mF1E5A4D80A892D0E7E9FED20061B23E39E413DB3(L_3, NULL);
		__this->___U3CmethodsU3E5__2_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmethodsU3E5__2_7), (void*)L_4);
		// for (var i = 0; i < methods.Length; ++i)
		__this->___U3CiU3E5__3_8 = 0;
		goto IL_0088;
	}

IL_0036:
	{
		// if (methods[i].Name == methodName)
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_5 = __this->___U3CmethodsU3E5__2_7;
		int32_t L_6 = __this->___U3CiU3E5__3_8;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		MethodInfo_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		String_t* L_10 = __this->___methodName_5;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0078;
		}
	}
	{
		// yield return methods[i];
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_12 = __this->___U3CmethodsU3E5__2_7;
		int32_t L_13 = __this->___U3CiU3E5__3_8;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		MethodInfo_t* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0071:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0078:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_16 = __this->___U3CiU3E5__3_8;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
		int32_t L_17 = V_1;
		__this->___U3CiU3E5__3_8 = L_17;
	}

IL_0088:
	{
		// for (var i = 0; i < methods.Length; ++i)
		int32_t L_18 = __this->___U3CiU3E5__3_8;
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_19 = __this->___U3CmethodsU3E5__2_7;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0036;
		}
	}
	{
		// type = type.Resolve().BaseType;
		Type_t* L_20 = __this->___type_3;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_20, NULL);
		NullCheck(L_21);
		Type_t* L_22;
		L_22 = VirtualFuncInvoker0< Type_t* >::Invoke(112 /* System.Type System.Type::get_BaseType() */, L_21);
		__this->___type_3 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___type_3), (void*)L_22);
		// }
		__this->___U3CmethodsU3E5__2_7 = (MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CmethodsU3E5__2_7), (void*)(MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*)NULL);
	}

IL_00b5:
	{
		// while (type != null)
		Type_t* L_23 = __this->___type_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_23, (Type_t*)NULL, NULL);
		if (L_24)
		{
			goto IL_001c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Reflection.MethodInfo Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::System.Collections.Generic.IEnumerator<System.Reflection.MethodInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* U3CGetFlattenedMethodsU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MethodInfoU3E_get_Current_mC639E4E6A5387ED89CB1BCEABA98D3C6C283A194 (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetFlattenedMethodsU3Ed__18_System_Collections_IEnumerator_Reset_m16294D7AAFE21382278CC8476757735C8C4CB1CF (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetFlattenedMethodsU3Ed__18_System_Collections_IEnumerator_Reset_m16294D7AAFE21382278CC8476757735C8C4CB1CF_RuntimeMethod_var)));
	}
}
// System.Object Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFlattenedMethodsU3Ed__18_System_Collections_IEnumerator_get_Current_m92677A00E18102A11A9622778BBD048A9A260305 (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo> Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::System.Collections.Generic.IEnumerable<System.Reflection.MethodInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFlattenedMethodsU3Ed__18_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m9F33A98F7A9AACE36540CC6A70C726AE11DEEAA6 (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* L_3 = (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8*)il2cpp_codegen_object_new(U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetFlattenedMethodsU3Ed__18__ctor_m7F0BE4CC309547C4870827556E890C1490D2744A(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		NullCheck(L_4);
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* L_6 = V_0;
		String_t* L_7 = __this->___U3CU3E3__methodName_6;
		NullCheck(L_6);
		L_6->___methodName_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___methodName_5), (void*)L_7);
		U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/<GetFlattenedMethods>d__18::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetFlattenedMethodsU3Ed__18_System_Collections_IEnumerable_GetEnumerator_m685FD0717AF9751145A9D3A5D44DDC593367EA49 (U3CGetFlattenedMethodsU3Ed__18_t70831644C1EC3C21994E34FEB71B2D71B7BE57F8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetFlattenedMethodsU3Ed__18_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MethodInfoU3E_GetEnumerator_m9F33A98F7A9AACE36540CC6A70C726AE11DEEAA6(__this, NULL);
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
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions::CSharpName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsTypeExtensions_CSharpName_mA1935C2EB35A9B042BDC965DA3A75B31F60B5671 (Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		// return CSharpName(type, /*includeNamespace:*/ false);
		Type_t* L_0 = ___type0;
		String_t* L_1;
		L_1 = fsTypeExtensions_CSharpName_m7B9CEB55166AB73F3E8475491EB08E4F91475FE6(L_0, (bool)0, NULL);
		return L_1;
	}
}
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions::CSharpName(System.Type,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsTypeExtensions_CSharpName_m49752530E5F80BA4B4B6E966655E505D47FAD092 (Type_t* ___type0, bool ___includeNamespace1, bool ___ensureSafeDeclarationName2, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	{
		// var name = CSharpName(type, includeNamespace);
		Type_t* L_0 = ___type0;
		bool L_1 = ___includeNamespace1;
		String_t* L_2;
		L_2 = fsTypeExtensions_CSharpName_m7B9CEB55166AB73F3E8475491EB08E4F91475FE6(L_0, L_1, NULL);
		V_0 = L_2;
		// if (ensureSafeDeclarationName)
		bool L_3 = ___ensureSafeDeclarationName2;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// name = name.Replace('>', '_').Replace('<', '_').Replace('.', '_');
		String_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_4, ((int32_t)62), ((int32_t)95), NULL);
		NullCheck(L_5);
		String_t* L_6;
		L_6 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_5, ((int32_t)60), ((int32_t)95), NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_6, ((int32_t)46), ((int32_t)95), NULL);
		V_0 = L_7;
	}

IL_0028:
	{
		// return name;
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions::CSharpName(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsTypeExtensions_CSharpName_m7B9CEB55166AB73F3E8475491EB08E4F91475FE6 (Type_t* ___type0, bool ___includeNamespace1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CCSharpNameU3Eb__0_mB271DB9009C764D4CB33A03876DB554A4EEFB2C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* V_0 = NULL;
	String_t* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	{
		U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* L_0 = (U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m80831530C50B87BB035A96D17E242F8B7011C105(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* L_1 = V_0;
		bool L_2 = ___includeNamespace1;
		NullCheck(L_1);
		L_1->___includeNamespace_0 = L_2;
		// if (type == typeof(void))
		Type_t* L_3 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (Void_t4861ACF8F4594C3437BB48B6E56783494B843915_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0025;
		}
	}
	{
		// return "void";
		return _stringLiteral6ECB47BAE746457DBE91D0BA044A27960D4563D9;
	}

IL_0025:
	{
		// if (type == typeof(int))
		Type_t* L_7 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		bool L_10;
		L_10 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_9, NULL);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// return "int";
		return _stringLiteral0BA8CB3B900ECEF5E697192B8CDA6B626EB0CE72;
	}

IL_003d:
	{
		// if (type == typeof(float))
		Type_t* L_11 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_0055;
		}
	}
	{
		// return "float";
		return _stringLiteralE3DFC065B6A6D9931B797808DD066491AAB82B29;
	}

IL_0055:
	{
		// if (type == typeof(bool))
		Type_t* L_15 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_006d;
		}
	}
	{
		// return "bool";
		return _stringLiteral673CC9996FD90AFE21BD8D0E6E6824353AF4BDA2;
	}

IL_006d:
	{
		// if (type == typeof(double))
		Type_t* L_19 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_0085;
		}
	}
	{
		// return "double";
		return _stringLiteral007174B876FA7EECC4152046B9308966D3E2B5B8;
	}

IL_0085:
	{
		// if (type == typeof(string))
		Type_t* L_23 = ___type0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009d;
		}
	}
	{
		// return "string";
		return _stringLiteral2F1705A1AA8BA6FCE863E7F2CBA4BC28458C77AE;
	}

IL_009d:
	{
		// if (type.IsGenericParameter)
		Type_t* L_27 = ___type0;
		NullCheck(L_27);
		bool L_28;
		L_28 = VirtualFuncInvoker0< bool >::Invoke(37 /* System.Boolean System.Type::get_IsGenericParameter() */, L_27);
		if (!L_28)
		{
			goto IL_00ac;
		}
	}
	{
		// return type.ToString();
		Type_t* L_29 = ___type0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		return L_30;
	}

IL_00ac:
	{
		// var name = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// var genericArguments = (IEnumerable<Type>)type.GetGenericArguments();
		Type_t* L_31 = ___type0;
		NullCheck(L_31);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_32;
		L_32 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_31);
		V_2 = (RuntimeObject*)L_32;
		// if (type.IsNested)
		Type_t* L_33 = ___type0;
		NullCheck(L_33);
		bool L_34;
		L_34 = Type_get_IsNested_mCF57E6A68BA5CEDDB9DA81CB34B6945F414FB3FD(L_33, NULL);
		if (!L_34)
		{
			goto IL_00fa;
		}
	}
	{
		// name += type.DeclaringType.CSharpName() + ".";
		String_t* L_35 = V_1;
		Type_t* L_36 = ___type0;
		NullCheck(L_36);
		Type_t* L_37;
		L_37 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_36);
		String_t* L_38;
		L_38 = fsTypeExtensions_CSharpName_mA1935C2EB35A9B042BDC965DA3A75B31F60B5671(L_37, NULL);
		String_t* L_39;
		L_39 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_35, L_38, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_1 = L_39;
		// if (type.DeclaringType.GetGenericArguments().Length > 0)
		Type_t* L_40 = ___type0;
		NullCheck(L_40);
		Type_t* L_41;
		L_41 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_40);
		NullCheck(L_41);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_42;
		L_42 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_41);
		NullCheck(L_42);
		if (!(((RuntimeArray*)L_42)->max_length))
		{
			goto IL_00fa;
		}
	}
	{
		// genericArguments = genericArguments.Skip(type.DeclaringType.GetGenericArguments().Length);
		RuntimeObject* L_43 = V_2;
		Type_t* L_44 = ___type0;
		NullCheck(L_44);
		Type_t* L_45;
		L_45 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_44);
		NullCheck(L_45);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_46;
		L_46 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(49 /* System.Type[] System.Type::GetGenericArguments() */, L_45);
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174(L_43, ((int32_t)(((RuntimeArray*)L_46)->max_length)), Enumerable_Skip_TisType_t_m7D71748DB6853797A890979775BC2B668679D174_RuntimeMethod_var);
		V_2 = L_47;
	}

IL_00fa:
	{
		// if (genericArguments.Any() == false)
		RuntimeObject* L_48 = V_2;
		bool L_49;
		L_49 = Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517(L_48, Enumerable_Any_TisType_t_m73AC0FF907FFC6B1E9B1C9E8804176B00EB92517_RuntimeMethod_var);
		if (L_49)
		{
			goto IL_0111;
		}
	}
	{
		// name += type.Name;
		String_t* L_50 = V_1;
		Type_t* L_51 = ___type0;
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_51);
		String_t* L_53;
		L_53 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_50, L_52, NULL);
		V_1 = L_53;
		goto IL_0169;
	}

IL_0111:
	{
		// var genericsTic = type.Name.IndexOf('`');
		Type_t* L_54 = ___type0;
		NullCheck(L_54);
		String_t* L_55;
		L_55 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_54);
		NullCheck(L_55);
		int32_t L_56;
		L_56 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_55, ((int32_t)96), NULL);
		V_3 = L_56;
		// if (genericsTic > 0)
		int32_t L_57 = V_3;
		if ((((int32_t)L_57) <= ((int32_t)0)))
		{
			goto IL_0137;
		}
	}
	{
		// name += type.Name.Substring(0, genericsTic);
		String_t* L_58 = V_1;
		Type_t* L_59 = ___type0;
		NullCheck(L_59);
		String_t* L_60;
		L_60 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_59);
		int32_t L_61 = V_3;
		NullCheck(L_60);
		String_t* L_62;
		L_62 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_60, 0, L_61, NULL);
		String_t* L_63;
		L_63 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_58, L_62, NULL);
		V_1 = L_63;
	}

IL_0137:
	{
		// name += "<" + String.Join(",", genericArguments.Select(t => CSharpName(t, includeNamespace)).ToArray()) + ">";
		String_t* L_64 = V_1;
		RuntimeObject* L_65 = V_2;
		U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* L_66 = V_0;
		Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121* L_67 = (Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121*)il2cpp_codegen_object_new(Func_2_t9D09D397B043BC5218B2565C13BA5AA81CABC121_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		Func_2__ctor_m059A8C7FD3318EFF79FD145F9FDA4C44E4192897(L_67, L_66, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CCSharpNameU3Eb__0_mB271DB9009C764D4CB33A03876DB554A4EEFB2C3_RuntimeMethod_var), NULL);
		RuntimeObject* L_68;
		L_68 = Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD(L_65, L_67, Enumerable_Select_TisType_t_TisString_t_m502CBD7F0EB7537D4C51DA8071B417FC79622BBD_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_69;
		L_69 = Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194(L_68, Enumerable_ToArray_TisString_t_m3B23EE2DD15B2996E7D2ECA6E74696DA892AA194_RuntimeMethod_var);
		String_t* L_70;
		L_70 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_69, NULL);
		String_t* L_71;
		L_71 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_64, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11, L_70, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_1 = L_71;
	}

IL_0169:
	{
		// if (includeNamespace && type.Namespace != null)
		U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* L_72 = V_0;
		NullCheck(L_72);
		bool L_73 = L_72->___includeNamespace_0;
		if (!L_73)
		{
			goto IL_018b;
		}
	}
	{
		Type_t* L_74 = ___type0;
		NullCheck(L_74);
		String_t* L_75;
		L_75 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Type::get_Namespace() */, L_74);
		if (!L_75)
		{
			goto IL_018b;
		}
	}
	{
		// name = type.Namespace + "." + name;
		Type_t* L_76 = ___type0;
		NullCheck(L_76);
		String_t* L_77;
		L_77 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Type::get_Namespace() */, L_76);
		String_t* L_78 = V_1;
		String_t* L_79;
		L_79 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_77, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, L_78, NULL);
		V_1 = L_79;
	}

IL_018b:
	{
		// return name;
		String_t* L_80 = V_1;
		return L_80;
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
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m80831530C50B87BB035A96D17E242F8B7011C105 (U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Unity.VisualScripting.FullSerializer.Internal.fsTypeExtensions/<>c__DisplayClass2_0::<CSharpName>b__0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass2_0_U3CCSharpNameU3Eb__0_mB271DB9009C764D4CB33A03876DB554A4EEFB2C3 (U3CU3Ec__DisplayClass2_0_tAB0840C77123F2A797DA2837B414E58DEE35E9A9* __this, Type_t* ___t0, const RuntimeMethod* method) 
{
	{
		// name += "<" + String.Join(",", genericArguments.Select(t => CSharpName(t, includeNamespace)).ToArray()) + ">";
		Type_t* L_0 = ___t0;
		bool L_1 = __this->___includeNamespace_0;
		String_t* L_2;
		L_2 = fsTypeExtensions_CSharpName_m7B9CEB55166AB73F3E8475491EB08E4F91475FE6(L_0, L_1, NULL);
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


// Conversion methods for marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Ancestors_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Ancestors' of type 'fsVersionedType'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Ancestors_0Exception, NULL);
}
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke_back(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled)
{
	Exception_t* ___Ancestors_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Ancestors' of type 'fsVersionedType'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Ancestors_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_pinvoke_cleanup(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled)
{
	Exception_t* ___Ancestors_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Ancestors' of type 'fsVersionedType'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Ancestors_0Exception, NULL);
}
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com_back(const fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8& unmarshaled)
{
	Exception_t* ___Ancestors_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Ancestors' of type 'fsVersionedType'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Ancestors_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.VisualScripting.FullSerializer.Internal.fsVersionedType
IL2CPP_EXTERN_C void fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshal_com_cleanup(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com& marshaled)
{
}
// System.Object Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Migrate(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsVersionedType_Migrate_mA2431BCBC723C85F909F6D50CCC218ABFAED65AB (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, RuntimeObject* ___ancestorInstance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Activator.CreateInstance(ModelType, ancestorInstance);
		Type_t* L_0 = __this->___ModelType_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___ancestorInstance0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = Activator_CreateInstance_mDBC65647828F8A3D3E63807B5AEA4A4ECDE397E6(L_0, L_2, NULL);
		return L_4;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* fsVersionedType_Migrate_mA2431BCBC723C85F909F6D50CCC218ABFAED65AB_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___ancestorInstance0, const RuntimeMethod* method)
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = fsVersionedType_Migrate_mA2431BCBC723C85F909F6D50CCC218ABFAED65AB(_thisAdjusted, ___ancestorInstance0, method);
	return _returnValue;
}
// System.String Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* fsVersionedType_ToString_m584F4EBD02BC6D0502664D2047FF3D71270A359F (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAECB44011C6849DA19ADB265B52E7819342CB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99672067F54E936644EC9C19FECCD6680688628C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4AFA59984E170FBE2C100DAB9667B97DEBC0E55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_3 = NULL;
	Type_t* G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	{
		// return "fsVersionedType [ModelType=" + ModelType + ", VersionString=" + VersionString + ", Ancestors.Length=" + Ancestors.Length + "]";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral99672067F54E936644EC9C19FECCD6680688628C);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral99672067F54E936644EC9C19FECCD6680688628C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		Type_t* L_3 = __this->___ModelType_2;
		Type_t* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = 1;
			G_B2_2 = L_2;
			G_B2_3 = L_2;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		G_B3_3 = G_B1_3;
		goto IL_0022;
	}

IL_001d:
	{
		NullCheck(G_B2_0);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
		G_B3_3 = G_B2_3;
	}

IL_0022:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = G_B3_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralB4AFA59984E170FBE2C100DAB9667B97DEBC0E55);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB4AFA59984E170FBE2C100DAB9667B97DEBC0E55);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8 = __this->___VersionString_1;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral7DAECB44011C6849DA19ADB265B52E7819342CB7);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7DAECB44011C6849DA19ADB265B52E7819342CB7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_11 = __this->___Ancestors_0;
		NullCheck(L_11);
		V_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		String_t* L_14;
		L_14 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		return L_14;
	}
}
IL2CPP_EXTERN_C  String_t* fsVersionedType_ToString_m584F4EBD02BC6D0502664D2047FF3D71270A359F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = fsVersionedType_ToString_m584F4EBD02BC6D0502664D2047FF3D71270A359F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::op_Equality(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType,Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionedType_op_Equality_mAF3B2FB598AEF17A48568258E5E6DD971A47F30B (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___a0, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return a.ModelType == b.ModelType;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___a0;
		Type_t* L_1 = L_0.___ModelType_2;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = ___b1;
		Type_t* L_3 = L_2.___ModelType_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::op_Inequality(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType,Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionedType_op_Inequality_mA18B11606615674838B3FB7388C787DA11B459C6 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___a0, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return a.ModelType != b.ModelType;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___a0;
		Type_t* L_1 = L_0.___ModelType_2;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = ___b1;
		Type_t* L_3 = L_2.___ModelType_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, L_3, NULL);
		return L_4;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionedType_Equals_m051C07595BCB7037C2E668E0E09D0A4C74A2958F (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return
		//     obj is fsVersionedType &&
		//     ModelType == ((fsVersionedType)obj).ModelType;
		RuntimeObject* L_0 = ___obj0;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		Type_t* L_1 = __this->___ModelType_2;
		RuntimeObject* L_2 = ___obj0;
		Type_t* L_3 = ((fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*)UnBox(L_2, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_il2cpp_TypeInfo_var))->___ModelType_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		return L_4;
	}

IL_001f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool fsVersionedType_Equals_m051C07595BCB7037C2E668E0E09D0A4C74A2958F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsVersionedType_Equals_m051C07595BCB7037C2E668E0E09D0A4C74A2958F(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Int32 Unity.VisualScripting.FullSerializer.Internal.fsVersionedType::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t fsVersionedType_GetHashCode_m02754D5563950758CECD86BE72D69DD7046C47C6 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* __this, const RuntimeMethod* method) 
{
	{
		// return ModelType.GetHashCode();
		Type_t* L_0 = __this->___ModelType_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t fsVersionedType_GetHashCode_m02754D5563950758CECD86BE72D69DD7046C47C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = fsVersionedType_GetHashCode_m02754D5563950758CECD86BE72D69DD7046C47C6(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionImportPath(System.String,Unity.VisualScripting.FullSerializer.Internal.fsVersionedType,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsVersionManager_GetVersionImportPath_mF78001EFBFAB16E1FB6D627FB2327FAA6382BCC6 (String_t* ___currentVersion0, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___targetVersion1, List_1_t7182E9791DD2596935EC5EBF901871476E91B95D** ___path2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7182E9791DD2596935EC5EBF901871476E91B95D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE10C348A0C2B1041ABA9463F48E12ADD6FCE6AA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF63A36CE5FB4A7C8B148AB4B8427E8FF5A711A65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// path = new List<fsVersionedType>();
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D** L_0 = ___path2;
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_1 = (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D*)il2cpp_codegen_object_new(List_1_t7182E9791DD2596935EC5EBF901871476E91B95D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92(L_1, List_1__ctor_m9E93111D8C1F56BE86EFCF88046DA5F7C5B95E92_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// if (GetVersionImportPathRecursive(path, currentVersion, targetVersion) == false)
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D** L_2 = ___path2;
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_3 = *((List_1_t7182E9791DD2596935EC5EBF901871476E91B95D**)L_2);
		String_t* L_4 = ___currentVersion0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_5 = ___targetVersion1;
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = fsVersionManager_GetVersionImportPathRecursive_mB3A3038031C067D3C072AC7FA1A6483F923360B4(L_3, L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_0048;
		}
	}
	{
		// return fsResult.Fail("There is no migration path from \"" + currentVersion + "\" to \"" + targetVersion.VersionString + "\"");
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralE10C348A0C2B1041ABA9463F48E12ADD6FCE6AA4);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE10C348A0C2B1041ABA9463F48E12ADD6FCE6AA4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10 = ___currentVersion0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralF63A36CE5FB4A7C8B148AB4B8427E8FF5A711A65);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF63A36CE5FB4A7C8B148AB4B8427E8FF5A711A65);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_13 = ___targetVersion1;
		String_t* L_14 = L_13.___VersionString_1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		String_t* L_16;
		L_16 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17;
		L_17 = fsResult_Fail_m3315594F29830C02FD560F7401D311F99DA241CD(L_16, NULL);
		return L_17;
	}

IL_0048:
	{
		// path.Add(targetVersion);
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D** L_18 = ___path2;
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_19 = *((List_1_t7182E9791DD2596935EC5EBF901871476E91B95D**)L_18);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_20 = ___targetVersion1;
		NullCheck(L_19);
		List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_inline(L_19, L_20, List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var);
		// return fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_21 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		return L_21;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionImportPathRecursive(System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType>,System.String,Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsVersionManager_GetVersionImportPathRecursive_mB3A3038031C067D3C072AC7FA1A6483F923360B4 (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* ___path0, String_t* ___currentVersion1, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___current2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (var i = 0; i < current.Ancestors.Length; ++i)
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		// var ancestor = current.Ancestors[i];
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___current2;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = L_0.___Ancestors_0;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// if (ancestor.VersionString == currentVersion ||
		//     GetVersionImportPathRecursive(path, currentVersion, ancestor))
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_5 = V_1;
		String_t* L_6 = L_5.___VersionString_1;
		String_t* L_7 = ___currentVersion1;
		bool L_8;
		L_8 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_0029;
		}
	}
	{
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_9 = ___path0;
		String_t* L_10 = ___currentVersion1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = fsVersionManager_GetVersionImportPathRecursive_mB3A3038031C067D3C072AC7FA1A6483F923360B4(L_9, L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_0032;
		}
	}

IL_0029:
	{
		// path.Add(ancestor);
		List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* L_13 = ___path0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_inline(L_13, L_14, List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}

IL_0032:
	{
		// for (var i = 0; i < current.Ancestors.Length; ++i)
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0036:
	{
		// for (var i = 0; i < current.Ancestors.Length; ++i)
		int32_t L_16 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_17 = ___current2;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_18 = L_17.___Ancestors_0;
		NullCheck(L_18);
		if ((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// return false;
		return (bool)0;
	}
}
// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.VisualScripting.FullSerializer.Internal.fsVersionedType> Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::GetVersionedType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A V_0;
	memset((&V_0), 0, sizeof(V_0));
	fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* V_1 = NULL;
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_2 = NULL;
	int32_t V_3 = 0;
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A V_4;
	memset((&V_4), 0, sizeof(V_4));
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Type_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	Type_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	int32_t G_B13_0 = 0;
	{
		// if (_cache.TryGetValue(type, out optionalVersionedType) == false)
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* L_0 = ((fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields*)il2cpp_codegen_static_fields_for(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var))->____cache_0;
		Type_t* L_1 = ___type0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mC7D09AD7C3ECF89B60DA6860146520364EB8405C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0122;
		}
	}
	{
		// var attr = fsPortableReflection.GetAttribute<fsObjectAttribute>(type);
		Type_t* L_3 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_4;
		L_4 = fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A(L_3, fsPortableReflection_GetAttribute_TisfsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38_m05C71253753EF477CA25996DA4B7A36E67881A2A_RuntimeMethod_var);
		V_1 = L_4;
		// if (attr != null)
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_5 = V_1;
		if (!L_5)
		{
			goto IL_0116;
		}
	}
	{
		// if (string.IsNullOrEmpty(attr.VersionString) == false || attr.PreviousModels != null)
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = L_6->___VersionString_1;
		bool L_8;
		L_8 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_7, NULL);
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_9 = V_1;
		NullCheck(L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = L_9->___PreviousModels_0;
		if (!L_10)
		{
			goto IL_0116;
		}
	}

IL_0037:
	{
		// if (attr.PreviousModels != null && string.IsNullOrEmpty(attr.VersionString))
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_11 = V_1;
		NullCheck(L_11);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = L_11->___PreviousModels_0;
		if (!L_12)
		{
			goto IL_006e;
		}
	}
	{
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = L_13->___VersionString_1;
		bool L_15;
		L_15 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_14, NULL);
		if (!L_15)
		{
			goto IL_006e;
		}
	}
	{
		// throw new Exception("fsObject attribute on " + type + " contains a PreviousModels specifier - it must also include a VersionString modifier");
		Type_t* L_16 = ___type0;
		Type_t* L_17 = L_16;
		G_B7_0 = L_17;
		G_B7_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7504EF46F36160E7DBF3DDCF3D029AD4817D3E6));
		if (L_17)
		{
			G_B8_0 = L_17;
			G_B8_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7504EF46F36160E7DBF3DDCF3D029AD4817D3E6));
			goto IL_0059;
		}
	}
	{
		G_B9_0 = ((String_t*)(NULL));
		G_B9_1 = G_B7_1;
		goto IL_005e;
	}

IL_0059:
	{
		NullCheck(G_B8_0);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B8_0);
		G_B9_0 = L_18;
		G_B9_1 = G_B8_1;
	}

IL_005e:
	{
		String_t* L_19;
		L_19 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(G_B9_1, G_B9_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8CFACA9928DEA240B27CC5AE59150FBE2C0E96B6)), NULL);
		Exception_t* L_20 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_20);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_20, L_19, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484_RuntimeMethod_var)));
	}

IL_006e:
	{
		// var ancestors = new fsVersionedType[attr.PreviousModels != null ? attr.PreviousModels.Length : 0];
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_21 = V_1;
		NullCheck(L_21);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = L_21->___PreviousModels_0;
		if (L_22)
		{
			goto IL_0079;
		}
	}
	{
		G_B13_0 = 0;
		goto IL_0081;
	}

IL_0079:
	{
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_23 = V_1;
		NullCheck(L_23);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_24 = L_23->___PreviousModels_0;
		NullCheck(L_24);
		G_B13_0 = ((int32_t)(((RuntimeArray*)L_24)->max_length));
	}

IL_0081:
	{
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_25 = (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)SZArrayNew(fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F_il2cpp_TypeInfo_var, (uint32_t)G_B13_0);
		V_2 = L_25;
		// for (var i = 0; i < ancestors.Length; ++i)
		V_3 = 0;
		goto IL_00d7;
	}

IL_008b:
	{
		// var ancestorType = GetVersionedType(attr.PreviousModels[i]);
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_26 = V_1;
		NullCheck(L_26);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_27 = L_26->___PreviousModels_0;
		int32_t L_28 = V_3;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Type_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_31;
		L_31 = fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484(L_30, NULL);
		V_4 = L_31;
		// if (ancestorType.IsEmpty)
		bool L_32;
		L_32 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E((&V_4), fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E_RuntimeMethod_var);
		if (!L_32)
		{
			goto IL_00c5;
		}
	}
	{
		// throw new Exception("Unable to create versioned type for ancestor " + ancestorType + "; please add an [fsObject(VersionString=\"...\")] attribute");
		Il2CppFakeBox<fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A> L_33(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_il2cpp_TypeInfo_var)), (&V_4));
		String_t* L_34;
		L_34 = ValueType_ToString_mFE1CB83BECC99D07BEA7EAB25AF73BE5A727C04D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_33), NULL);
		String_t* L_35;
		L_35 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral302E7C11D8C5F5B4DC0CB0C031B76B22322E35FE)), L_34, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4600E7CD4FD5EB039DB7A0180E7A8E86534BAA24)), NULL);
		Exception_t* L_36 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_36);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_36, L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_36, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsVersionManager_GetVersionedType_m4CF940685782769880C5341A1C3D2FC703906484_RuntimeMethod_var)));
	}

IL_00c5:
	{
		// ancestors[i] = ancestorType.Value;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_37 = V_2;
		int32_t L_38 = V_3;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_39;
		L_39 = fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241((&V_4), fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241_RuntimeMethod_var);
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)L_39);
		// for (var i = 0; i < ancestors.Length; ++i)
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00d7:
	{
		// for (var i = 0; i < ancestors.Length; ++i)
		int32_t L_41 = V_3;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_42 = V_2;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_008b;
		}
	}
	{
		// var versionedType = new fsVersionedType
		// {
		//     Ancestors = ancestors,
		//     VersionString = attr.VersionString,
		//     ModelType = type
		// };
		il2cpp_codegen_initobj((&V_5), sizeof(fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8));
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_43 = V_2;
		(&V_5)->___Ancestors_0 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___Ancestors_0), (void*)L_43);
		fsObjectAttribute_t01E43E525187363F108B146EC18F42D731E84E38* L_44 = V_1;
		NullCheck(L_44);
		String_t* L_45 = L_44->___VersionString_1;
		(&V_5)->___VersionString_1 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___VersionString_1), (void*)L_45);
		Type_t* L_46 = ___type0;
		(&V_5)->___ModelType_2 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_5)->___ModelType_2), (void*)L_46);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_47 = V_5;
		// VerifyUniqueVersionStrings(versionedType);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_48 = L_47;
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276(L_48, NULL);
		// VerifyConstructors(versionedType);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_49 = L_48;
		fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7(L_49, NULL);
		// optionalVersionedType = fsOption.Just(versionedType);
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_50;
		L_50 = fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0(L_49, fsOption_Just_TisfsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_m2924676A18A4C69DA6F8C6EEB7A1DAFA576EB5B0_RuntimeMethod_var);
		V_0 = L_50;
	}

IL_0116:
	{
		// _cache[type] = optionalVersionedType;
		il2cpp_codegen_runtime_class_init_inline(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* L_51 = ((fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields*)il2cpp_codegen_static_fields_for(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var))->____cache_0;
		Type_t* L_52 = ___type0;
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_53 = V_0;
		NullCheck(L_51);
		Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E(L_51, L_52, L_53, Dictionary_2_set_Item_mF86E918079AEE87DD62ADFBB36F4135E40F2E24E_RuntimeMethod_var);
	}

IL_0122:
	{
		// return optionalVersionedType;
		fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A L_54 = V_0;
		return L_54;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::VerifyConstructors(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* V_5 = NULL;
	{
		// var publicConstructors = type.ModelType.GetDeclaredConstructors();
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___type0;
		Type_t* L_1 = L_0.___ModelType_2;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_2;
		L_2 = fsPortableReflection_GetDeclaredConstructors_mB5B777C7EC535253A345584074FC1D8FBA32160A(L_1, NULL);
		V_0 = L_2;
		// for (var i = 0; i < type.Ancestors.Length; ++i)
		V_1 = 0;
		goto IL_0071;
	}

IL_0010:
	{
		// var requiredConstructorType = type.Ancestors[i].ModelType;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_3 = ___type0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_4 = L_3.___Ancestors_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Type_t* L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___ModelType_2;
		V_2 = L_6;
		// var found = false;
		V_3 = (bool)0;
		// for (var j = 0; j < publicConstructors.Length; ++j)
		V_4 = 0;
		goto IL_0056;
	}

IL_0029:
	{
		// var parameters = publicConstructors[j].GetParameters();
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_7 = V_0;
		int32_t L_8 = V_4;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		ConstructorInfo_t1B5967EE7E5554272F79F8880183C70AD240EEEB* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_11;
		L_11 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(15 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_10);
		V_5 = L_11;
		// if (parameters.Length == 1 && parameters[0].ParameterType == requiredConstructorType)
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_12 = V_5;
		NullCheck(L_12);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_13 = V_5;
		NullCheck(L_13);
		int32_t L_14 = 0;
		ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = VirtualFuncInvoker0< Type_t* >::Invoke(10 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_15);
		Type_t* L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0050;
		}
	}
	{
		// found = true;
		V_3 = (bool)1;
		// break;
		goto IL_005d;
	}

IL_0050:
	{
		// for (var j = 0; j < publicConstructors.Length; ++j)
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0056:
	{
		// for (var j = 0; j < publicConstructors.Length; ++j)
		int32_t L_20 = V_4;
		ConstructorInfoU5BU5D_t515A0B944728842263B6033C9A62F6392C3BCD8A* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0029;
		}
	}

IL_005d:
	{
		// if (found == false)
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_006d;
		}
	}
	{
		// throw new fsMissingVersionConstructorException(type.ModelType, requiredConstructorType);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_23 = ___type0;
		Type_t* L_24 = L_23.___ModelType_2;
		Type_t* L_25 = V_2;
		fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE* L_26 = (fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsMissingVersionConstructorException_tE6DE04E84EDA9AFAB8D627E6BCA19BE39C7235DE_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		fsMissingVersionConstructorException__ctor_m46EA05FE262E8C98465A921D2B2EB6035ED3FEFB(L_26, L_24, L_25, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsVersionManager_VerifyConstructors_m8411C5605527031779BFE91B425DF200A968ACD7_RuntimeMethod_var)));
	}

IL_006d:
	{
		// for (var i = 0; i < type.Ancestors.Length; ++i)
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0071:
	{
		// for (var i = 0; i < type.Ancestors.Length; ++i)
		int32_t L_28 = V_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_29 = ___type0;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_30 = L_29.___Ancestors_0;
		NullCheck(L_30);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::VerifyUniqueVersionStrings(Unity.VisualScripting.FullSerializer.Internal.fsVersionedType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276 (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* V_0 = NULL;
	Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* V_1 = NULL;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_3 = NULL;
	int32_t V_4 = 0;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// var found = new Dictionary<string, Type>();
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_0 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428(L_0, Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		V_0 = L_0;
		// var remaining = new Queue<fsVersionedType>();
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_1 = (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A*)il2cpp_codegen_object_new(Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19(L_1, Queue_1__ctor_mF9F0CCD361DD36335F701637DB0A91CDFCD40E19_RuntimeMethod_var);
		V_1 = L_1;
		// remaining.Enqueue(type);
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_2 = V_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_3 = ___type0;
		NullCheck(L_2);
		Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F(L_2, L_3, Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_RuntimeMethod_var);
		goto IL_00a1;
	}

IL_0018:
	{
		// var item = remaining.Dequeue();
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_4 = V_1;
		NullCheck(L_4);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_5;
		L_5 = Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2(L_4, Queue_1_Dequeue_m54E80CEB7DA8D9BE61571B0F602A47B14C0FC0C2_RuntimeMethod_var);
		V_2 = L_5;
		// if (found.ContainsKey(item.VersionString) && found[item.VersionString] != item.ModelType)
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_6 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_7 = V_2;
		String_t* L_8 = L_7.___VersionString_1;
		NullCheck(L_6);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933(L_6, L_8, Dictionary_2_ContainsKey_m4EC9A321B5DBDCB0E9249FFE9074D45472E5D933_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_10 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_11 = V_2;
		String_t* L_12 = L_11.___VersionString_1;
		NullCheck(L_10);
		Type_t* L_13;
		L_13 = Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9(L_10, L_12, Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var);
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_14 = V_2;
		Type_t* L_15 = L_14.___ModelType_2;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_13, L_15, NULL);
		if (!L_16)
		{
			goto IL_0064;
		}
	}
	{
		// throw new fsDuplicateVersionNameException(found[item.VersionString], item.ModelType, item.VersionString);
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_17 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_18 = V_2;
		String_t* L_19 = L_18.___VersionString_1;
		NullCheck(L_17);
		Type_t* L_20;
		L_20 = Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9(L_17, L_19, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dictionary_2_get_Item_mEE2A06608BDDA14C7170B0039FF13E2DCE84EEE9_RuntimeMethod_var)));
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_21 = V_2;
		Type_t* L_22 = L_21.___ModelType_2;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_23 = V_2;
		String_t* L_24 = L_23.___VersionString_1;
		fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640* L_25 = (fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsDuplicateVersionNameException_tAC800EE7692EB781843D91C2158A431897E11640_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		fsDuplicateVersionNameException__ctor_m0CA794E21F56EBADEED2971C6E9DC603CAA0AF51(L_25, L_20, L_22, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsVersionManager_VerifyUniqueVersionStrings_m930312E5E49A7FEFFAED1994F0B9633BC9BE4276_RuntimeMethod_var)));
	}

IL_0064:
	{
		// found[item.VersionString] = item.ModelType;
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_26 = V_0;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_27 = V_2;
		String_t* L_28 = L_27.___VersionString_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_29 = V_2;
		Type_t* L_30 = L_29.___ModelType_2;
		NullCheck(L_26);
		Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_26, L_28, L_30, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		// foreach (var ancestor in item.Ancestors)
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_31 = V_2;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_32 = L_31.___Ancestors_0;
		V_3 = L_32;
		V_4 = 0;
		goto IL_009a;
	}

IL_0082:
	{
		// foreach (var ancestor in item.Ancestors)
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_33 = V_3;
		int32_t L_34 = V_4;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_5 = L_36;
		// remaining.Enqueue(ancestor);
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_37 = V_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_38 = V_5;
		NullCheck(L_37);
		Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F(L_37, L_38, Queue_1_Enqueue_m18D26287FE9A32E930D02B66939DFB31D5FCF78F_RuntimeMethod_var);
		int32_t L_39 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_009a:
	{
		// foreach (var ancestor in item.Ancestors)
		int32_t L_40 = V_4;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_41 = V_3;
		NullCheck(L_41);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))
		{
			goto IL_0082;
		}
	}

IL_00a1:
	{
		// while (remaining.Count > 0)
		Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_inline(L_42, Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_RuntimeMethod_var);
		if ((((int32_t)L_43) > ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsVersionManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsVersionManager__cctor_m54A1308F62862C4480603F2633A6DAB7362EBF92 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<Type, fsOption<fsVersionedType>> _cache = new Dictionary<Type, fsOption<fsVersionedType>>();
		Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F* L_0 = (Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F*)il2cpp_codegen_object_new(Dictionary_2_t01172F6C8656F6A4EC35BC23F314D690D75BC84F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1(L_0, Dictionary_2__ctor_mC2BE576BC0A6111C417951E5B8D2B17B28D6E3E1_RuntimeMethod_var);
		((fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields*)il2cpp_codegen_static_fields_for(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var))->____cache_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_StaticFields*)il2cpp_codegen_static_fields_for(fsVersionManager_tE7F82D8ACD918E0A88D0ACD0E6B7F2F84755BEC3_il2cpp_TypeInfo_var))->____cache_0), (void*)L_0);
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.Converters.UnityEvent_Converter::CanProcess(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEvent_Converter_CanProcess_mF33E0BCD3D574E605A042AE18FF9AFA98E3A8A17 (UnityEvent_Converter_tD5E136836112018EC719F5845E73129360FD5CE7* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return typeof(UnityEvent).Resolve().IsAssignableFrom(type.Resolve()) && type.Resolve().IsGenericType == false;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_1, NULL);
		Type_t* L_3 = ___type0;
		Type_t* L_4;
		L_4 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_2, L_4);
		if (!L_5)
		{
			goto IL_002b;
		}
	}
	{
		Type_t* L_6 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = fsPortableReflection_Resolve_m995640D6EA5B5B1268075371EC800CF8720BF9C3(L_6, NULL);
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(39 /* System.Boolean System.Type::get_IsGenericType() */, L_7);
		return (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.Converters.UnityEvent_Converter::RequestCycleSupport(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityEvent_Converter_RequestCycleSupport_mC04BC3D9FFA6A8379930309C1B0AA784E383CA16 (UnityEvent_Converter_tD5E136836112018EC719F5845E73129360FD5CE7* __this, Type_t* ___storageType0, const RuntimeMethod* method) 
{
	{
		// return false;
		return (bool)0;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.Internal.Converters.UnityEvent_Converter::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 UnityEvent_Converter_TryDeserialize_mF282933A6D6E144C5A62D119971C9E0F248D0F46 (UnityEvent_Converter_tD5E136836112018EC719F5845E73129360FD5CE7* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		// Type objectType = (Type)instance;
		RuntimeObject** L_0 = ___instance1;
		RuntimeObject* L_1 = *((RuntimeObject**)L_0);
		V_0 = ((Type_t*)CastclassClass((RuntimeObject*)L_1, Type_t_il2cpp_TypeInfo_var));
		// fsResult result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_2 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		// instance = JsonUtility.FromJson(fsJsonPrinter.CompressedJson(data), objectType);
		RuntimeObject** L_3 = ___instance1;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_4 = ___data0;
		String_t* L_5;
		L_5 = fsJsonPrinter_CompressedJson_mAD916E32C1E828444E79CE2D32E74BD7892FC767(L_4, NULL);
		Type_t* L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = JsonUtility_FromJson_m6DF4F85BE40F8A96BAFEC189306813ECE30DF44A(L_5, L_6, NULL);
		*((RuntimeObject**)L_3) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)L_7);
		// return result;
		return L_2;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.Internal.Converters.UnityEvent_Converter::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 UnityEvent_Converter_TrySerialize_m6CD4D0DC6D17598539EFA307927488B75D84DF35 (UnityEvent_Converter_tD5E136836112018EC719F5845E73129360FD5CE7* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fsResult result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		// serialized = fsJsonParser.Parse(JsonUtility.ToJson(instance));
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_1 = ___serialized1;
		RuntimeObject* L_2 = ___instance0;
		String_t* L_3;
		L_3 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_2, NULL);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_4;
		L_4 = fsJsonParser_Parse_m8BE8A63CD24E3C0D05A65A977FF70AC8E1D34336(L_3, NULL);
		*((RuntimeObject**)L_1) = (RuntimeObject*)L_4;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_1, (void*)(RuntimeObject*)L_4);
		// return result;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.Converters.UnityEvent_Converter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Converter__ctor_m0A71D6EB6E2E88D3C169C846139E958E799465E4 (UnityEvent_Converter_tD5E136836112018EC719F5845E73129360FD5CE7* __this, const RuntimeMethod* method) 
{
	{
		fsConverter__ctor_m3C3DE66DA4A3FA50ED9A7D0F10EF70BB0D5FEA26(__this, NULL);
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
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_AssemblyDescriptionString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_AssemblyDescriptionString_mDD1B7B2E04A769B237A6C7569CB08036C0692BF3 (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public string AssemblyDescriptionString { get; }
		String_t* L_0 = __this->___U3CAssemblyDescriptionStringU3Ek__BackingField_0;
		return L_0;
	}
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_TypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_TypeName_m0936BDF09D58E5801C30963AD6A00710D188C96D (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeName { get; private set; }
		String_t* L_0 = __this->___U3CTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::set_TypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsedAssemblyQualifiedName_set_TypeName_m6DA7C54E5AD807C130846D6855D04CDD0AD9595B (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string TypeName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_ShortAssemblyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_ShortAssemblyName_mB0679285F4E7E777B9B01D8412917EEA8A72A92E (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public string ShortAssemblyName { get; }
		String_t* L_0 = __this->___U3CShortAssemblyNameU3Ek__BackingField_2;
		return L_0;
	}
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_Version()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_Version_mB5D6313EA08302F5BA346DA662D4AEA06D2601B1 (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public string Version { get; }
		String_t* L_0 = __this->___U3CVersionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_Culture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_Culture_mA75E05DA2B2430A0AB144013B9A4A8B83B71C4CE (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public string Culture { get; }
		String_t* L_0 = __this->___U3CCultureU3Ek__BackingField_4;
		return L_0;
	}
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_PublicKeyToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_PublicKeyToken_mBA4564B8953EDB3F62897858D15FDB032D5E4DF1 (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public string PublicKeyToken { get; }
		String_t* L_0 = __this->___U3CPublicKeyTokenU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Collections.Generic.List`1<Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName> Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_GenericParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* ParsedAssemblyQualifiedName_get_GenericParameters_mB90B86B5D8874418CF577CA298C2C306E29F2BD9 (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public List<ParsedAssemblyQualifiedName> GenericParameters { get; } = new List<ParsedAssemblyQualifiedName>();
		List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* L_0 = __this->___U3CGenericParametersU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::get_GenericParameterCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParsedAssemblyQualifiedName_get_GenericParameterCount_m44F25295A74A3912CF2C4D6F6386175B62E26FDD (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public int GenericParameterCount { get; }
		int32_t L_0 = __this->___U3CGenericParameterCountU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsedAssemblyQualifiedName__ctor_m315CCD24E7F356425EFA2B5D89D924E746449987 (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, String_t* ___AssemblyQualifiedName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m13CFF17334D157DA18CA0B0061D0A66B6379B945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2FEDD54E41884887830DAAB6459C15D3E39C78F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8E5B95552F6130227ACC9495422E4C83DD764DFB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD368FAAD467AE577CB33F3C18B05858E74212193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__25_0_mC0E3FF0BADCAD1F5B27D17749F8BCB1484154A3C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C9260A59416A490E59FCDF0B52885DD5245AB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD25AF8CE65F9B78B53D55B0E5E9E67330F6FFA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* V_4 = NULL;
	int32_t V_5 = 0;
	Il2CppChar V_6 = 0x0;
	Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* V_7 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_8 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B22_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_1 = NULL;
	Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* G_B21_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_1 = NULL;
	{
		// public List<ParsedAssemblyQualifiedName> GenericParameters { get; } = new List<ParsedAssemblyQualifiedName>();
		List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* L_0 = (List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9*)il2cpp_codegen_object_new(List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8E5B95552F6130227ACC9495422E4C83DD764DFB(L_0, List_1__ctor_m8E5B95552F6130227ACC9495422E4C83DD764DFB_RuntimeMethod_var);
		__this->___U3CGenericParametersU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGenericParametersU3Ek__BackingField_6), (void*)L_0);
		// public ParsedAssemblyQualifiedName(string AssemblyQualifiedName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var typeNameLength = AssemblyQualifiedName.Length;
		String_t* L_1 = ___AssemblyQualifiedName0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_0 = L_2;
		// var hasAssemblyDescription = false;
		V_1 = (bool)0;
		// var rootBlock = new Block();
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_3 = (Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF*)il2cpp_codegen_object_new(Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Block__ctor_m244AF359DB9C35E945F34949B0C751AE74BDB25E(L_3, NULL);
		// var depth = 0;
		V_3 = 0;
		// var currentBlock = rootBlock;
		V_4 = L_3;
		// for (var index = 0; index < AssemblyQualifiedName.Length; ++index)
		V_5 = 0;
		goto IL_0112;
	}

IL_002b:
	{
		// var c = AssemblyQualifiedName[index];
		String_t* L_4 = ___AssemblyQualifiedName0;
		int32_t L_5 = V_5;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		V_6 = L_6;
		// if (c == '[')
		Il2CppChar L_7 = V_6;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0092;
		}
	}
	{
		// if (AssemblyQualifiedName[index + 1] == ']') // Array type // TODO (LAZLO): This won't detect multidimensional array, but FS can't handle them anyway
		String_t* L_8 = ___AssemblyQualifiedName0;
		int32_t L_9 = V_5;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)), NULL);
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0054;
		}
	}
	{
		// index++;
		int32_t L_11 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		goto IL_010c;
	}

IL_0054:
	{
		// if (depth == 0)
		int32_t L_12 = V_3;
		if (L_12)
		{
			goto IL_005a;
		}
	}
	{
		// typeNameLength = index;
		int32_t L_13 = V_5;
		V_0 = L_13;
	}

IL_005a:
	{
		// ++depth;
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// var innerBlock = new Block
		// {
		//     startIndex = index + 1,
		//     level = depth,
		//     parentBlock = currentBlock
		// };
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_15 = (Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF*)il2cpp_codegen_object_new(Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Block__ctor_m244AF359DB9C35E945F34949B0C751AE74BDB25E(L_15, NULL);
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_16 = L_15;
		int32_t L_17 = V_5;
		NullCheck(L_16);
		L_16->___startIndex_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_18 = L_16;
		int32_t L_19 = V_3;
		NullCheck(L_18);
		L_18->___level_2 = L_19;
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_20 = L_18;
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_21 = V_4;
		NullCheck(L_20);
		L_20->___parentBlock_3 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&L_20->___parentBlock_3), (void*)L_21);
		V_7 = L_20;
		// currentBlock.innerBlocks.Add(innerBlock);
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_22 = V_4;
		NullCheck(L_22);
		List_1_t85812977073AD90622C1915AAFE06D1EAB782A80* L_23 = L_22->___innerBlocks_4;
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_24 = V_7;
		NullCheck(L_23);
		List_1_Add_m2FEDD54E41884887830DAAB6459C15D3E39C78F0_inline(L_23, L_24, List_1_Add_m2FEDD54E41884887830DAAB6459C15D3E39C78F0_RuntimeMethod_var);
		// currentBlock = innerBlock;
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_25 = V_7;
		V_4 = L_25;
		goto IL_010c;
	}

IL_0092:
	{
		// else if (c == ']')
		Il2CppChar L_26 = V_6;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_00fc;
		}
	}
	{
		// currentBlock.endIndex = index - 1;
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_27 = V_4;
		int32_t L_28 = V_5;
		NullCheck(L_27);
		L_27->___endIndex_1 = ((int32_t)il2cpp_codegen_subtract(L_28, 1));
		// if (AssemblyQualifiedName[currentBlock.startIndex] != '[')
		String_t* L_29 = ___AssemblyQualifiedName0;
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_30 = V_4;
		NullCheck(L_30);
		int32_t L_31 = L_30->___startIndex_0;
		NullCheck(L_29);
		Il2CppChar L_32;
		L_32 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_29, L_31, NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)91))))
		{
			goto IL_00ed;
		}
	}
	{
		// currentBlock.parsedAssemblyQualifiedName = new ParsedAssemblyQualifiedName(AssemblyQualifiedName.Substring(currentBlock.startIndex, index - currentBlock.startIndex));
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_33 = V_4;
		String_t* L_34 = ___AssemblyQualifiedName0;
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_35 = V_4;
		NullCheck(L_35);
		int32_t L_36 = L_35->___startIndex_0;
		int32_t L_37 = V_5;
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_38 = V_4;
		NullCheck(L_38);
		int32_t L_39 = L_38->___startIndex_0;
		NullCheck(L_34);
		String_t* L_40;
		L_40 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_34, L_36, ((int32_t)il2cpp_codegen_subtract(L_37, L_39)), NULL);
		ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* L_41 = (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8*)il2cpp_codegen_object_new(ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		ParsedAssemblyQualifiedName__ctor_m315CCD24E7F356425EFA2B5D89D924E746449987(L_41, L_40, NULL);
		NullCheck(L_33);
		L_33->___parsedAssemblyQualifiedName_5 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&L_33->___parsedAssemblyQualifiedName_5), (void*)L_41);
		// if (depth == 2)
		int32_t L_42 = V_3;
		if ((!(((uint32_t)L_42) == ((uint32_t)2))))
		{
			goto IL_00ed;
		}
	}
	{
		// GenericParameters.Add(currentBlock.parsedAssemblyQualifiedName);
		List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* L_43;
		L_43 = ParsedAssemblyQualifiedName_get_GenericParameters_mB90B86B5D8874418CF577CA298C2C306E29F2BD9_inline(__this, NULL);
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_44 = V_4;
		NullCheck(L_44);
		ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* L_45 = L_44->___parsedAssemblyQualifiedName_5;
		NullCheck(L_43);
		List_1_Add_m13CFF17334D157DA18CA0B0061D0A66B6379B945_inline(L_43, L_45, List_1_Add_m13CFF17334D157DA18CA0B0061D0A66B6379B945_RuntimeMethod_var);
	}

IL_00ed:
	{
		// currentBlock = currentBlock.parentBlock;
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_46 = V_4;
		NullCheck(L_46);
		Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* L_47 = L_46->___parentBlock_3;
		V_4 = L_47;
		// --depth;
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
		goto IL_010c;
	}

IL_00fc:
	{
		// else if (depth == 0 && c == ',')
		int32_t L_49 = V_3;
		if (L_49)
		{
			goto IL_010c;
		}
	}
	{
		Il2CppChar L_50 = V_6;
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)44)))))
		{
			goto IL_010c;
		}
	}
	{
		// typeNameLength = index;
		int32_t L_51 = V_5;
		V_0 = L_51;
		// hasAssemblyDescription = true;
		V_1 = (bool)1;
		// break;
		goto IL_011f;
	}

IL_010c:
	{
		// for (var index = 0; index < AssemblyQualifiedName.Length; ++index)
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_0112:
	{
		// for (var index = 0; index < AssemblyQualifiedName.Length; ++index)
		int32_t L_53 = V_5;
		String_t* L_54 = ___AssemblyQualifiedName0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_54, NULL);
		if ((((int32_t)L_53) < ((int32_t)L_55)))
		{
			goto IL_002b;
		}
	}

IL_011f:
	{
		// TypeName = AssemblyQualifiedName.Substring(0, typeNameLength);
		String_t* L_56 = ___AssemblyQualifiedName0;
		int32_t L_57 = V_0;
		NullCheck(L_56);
		String_t* L_58;
		L_58 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_56, 0, L_57, NULL);
		ParsedAssemblyQualifiedName_set_TypeName_m6DA7C54E5AD807C130846D6855D04CDD0AD9595B_inline(__this, L_58, NULL);
		// var tickIndex = TypeName.IndexOf('`');
		String_t* L_59;
		L_59 = ParsedAssemblyQualifiedName_get_TypeName_m0936BDF09D58E5801C30963AD6A00710D188C96D_inline(__this, NULL);
		NullCheck(L_59);
		int32_t L_60;
		L_60 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_59, ((int32_t)96), NULL);
		V_2 = L_60;
		// if (tickIndex >= 0)
		int32_t L_61 = V_2;
		if ((((int32_t)L_61) < ((int32_t)0)))
		{
			goto IL_0163;
		}
	}
	{
		// TypeName = TypeName.Substring(0, tickIndex);
		String_t* L_62;
		L_62 = ParsedAssemblyQualifiedName_get_TypeName_m0936BDF09D58E5801C30963AD6A00710D188C96D_inline(__this, NULL);
		int32_t L_63 = V_2;
		NullCheck(L_62);
		String_t* L_64;
		L_64 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_62, 0, L_63, NULL);
		ParsedAssemblyQualifiedName_set_TypeName_m6DA7C54E5AD807C130846D6855D04CDD0AD9595B_inline(__this, L_64, NULL);
		// GenericParameterCount = GenericParameters.Count;
		List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* L_65;
		L_65 = ParsedAssemblyQualifiedName_get_GenericParameters_mB90B86B5D8874418CF577CA298C2C306E29F2BD9_inline(__this, NULL);
		NullCheck(L_65);
		int32_t L_66;
		L_66 = List_1_get_Count_mD368FAAD467AE577CB33F3C18B05858E74212193_inline(L_65, List_1_get_Count_mD368FAAD467AE577CB33F3C18B05858E74212193_RuntimeMethod_var);
		__this->___U3CGenericParameterCountU3Ek__BackingField_7 = L_66;
	}

IL_0163:
	{
		// if (hasAssemblyDescription)
		bool L_67 = V_1;
		if (!L_67)
		{
			goto IL_01ff;
		}
	}
	{
		// AssemblyDescriptionString = AssemblyQualifiedName.Substring(typeNameLength + 2);
		String_t* L_68 = ___AssemblyQualifiedName0;
		int32_t L_69 = V_0;
		NullCheck(L_68);
		String_t* L_70;
		L_70 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_68, ((int32_t)il2cpp_codegen_add(L_69, 2)), NULL);
		__this->___U3CAssemblyDescriptionStringU3Ek__BackingField_0 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAssemblyDescriptionStringU3Ek__BackingField_0), (void*)L_70);
		// var parts = AssemblyDescriptionString.Split(',')
		//     .Select(x => x.Trim())
		//     .ToList();
		String_t* L_71;
		L_71 = ParsedAssemblyQualifiedName_get_AssemblyDescriptionString_mDD1B7B2E04A769B237A6C7569CB08036C0692BF3_inline(__this, NULL);
		NullCheck(L_71);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_72;
		L_72 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_71, ((int32_t)44), 0, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_73 = ((U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_1;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_74 = L_73;
		G_B21_0 = L_74;
		G_B21_1 = L_72;
		if (L_74)
		{
			G_B22_0 = L_74;
			G_B22_1 = L_72;
			goto IL_01a5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701* L_75 = ((U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_76 = (Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93*)il2cpp_codegen_object_new(Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		Func_2__ctor_m6A29D0BC8A4BCF6079AD2737B4119D3802B41814(L_76, L_75, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__25_0_mC0E3FF0BADCAD1F5B27D17749F8BCB1484154A3C_RuntimeMethod_var), NULL);
		Func_2_t85D1F7C2022B349817C22FC72C474CD33FFABE93* L_77 = L_76;
		((U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_1 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var))->___U3CU3E9__25_0_1), (void*)L_77);
		G_B22_0 = L_77;
		G_B22_1 = G_B21_1;
	}

IL_01a5:
	{
		RuntimeObject* L_78;
		L_78 = Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6((RuntimeObject*)G_B22_1, G_B22_0, Enumerable_Select_TisString_t_TisString_t_mFD118DAE211D26D1F9416E64403E9182543D9AF6_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_79;
		L_79 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_78, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		V_8 = L_79;
		// Version = LookForPairThenRemove(parts, "Version");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_80 = V_8;
		String_t* L_81;
		L_81 = ParsedAssemblyQualifiedName_LookForPairThenRemove_mB52C7A56627743F09A32D7AD3D369F35A5DA00A7(L_80, _stringLiteralE200AC1425952F4F5CEAAA9C773B6D17B90E47C1, NULL);
		__this->___U3CVersionU3Ek__BackingField_3 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CVersionU3Ek__BackingField_3), (void*)L_81);
		// Culture = LookForPairThenRemove(parts, "Culture");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_82 = V_8;
		String_t* L_83;
		L_83 = ParsedAssemblyQualifiedName_LookForPairThenRemove_mB52C7A56627743F09A32D7AD3D369F35A5DA00A7(L_82, _stringLiteral24C9260A59416A490E59FCDF0B52885DD5245AB8, NULL);
		__this->___U3CCultureU3Ek__BackingField_4 = L_83;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCultureU3Ek__BackingField_4), (void*)L_83);
		// PublicKeyToken = LookForPairThenRemove(parts, "PublicKeyToken");
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_84 = V_8;
		String_t* L_85;
		L_85 = ParsedAssemblyQualifiedName_LookForPairThenRemove_mB52C7A56627743F09A32D7AD3D369F35A5DA00A7(L_84, _stringLiteralBD25AF8CE65F9B78B53D55B0E5E9E67330F6FFA1, NULL);
		__this->___U3CPublicKeyTokenU3Ek__BackingField_5 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPublicKeyTokenU3Ek__BackingField_5), (void*)L_85);
		// if (parts.Count > 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_86 = V_8;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_86, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_87) <= ((int32_t)0)))
		{
			goto IL_01ff;
		}
	}
	{
		// ShortAssemblyName = parts[0];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_88 = V_8;
		NullCheck(L_88);
		String_t* L_89;
		L_89 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_88, 0, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		__this->___U3CShortAssemblyNameU3Ek__BackingField_2 = L_89;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CShortAssemblyNameU3Ek__BackingField_2), (void*)L_89);
	}

IL_01ff:
	{
		// }
		return;
	}
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::LookForPairThenRemove(System.Collections.Generic.List`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_LookForPairThenRemove_mB52C7A56627743F09A32D7AD3D369F35A5DA00A7 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___strings0, String_t* ___Name1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// for (var istr = 0; istr < strings.Count; istr++)
		V_0 = 0;
		goto IL_0037;
	}

IL_0004:
	{
		// var s = strings[istr];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___strings0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_0, L_1, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_1 = L_2;
		// var i = s.IndexOf(Name);
		String_t* L_3 = V_1;
		String_t* L_4 = ___Name1;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_3, L_4, NULL);
		// if (i == 0)
		if (L_5)
		{
			goto IL_0033;
		}
	}
	{
		// var i2 = s.IndexOf('=');
		String_t* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_6, ((int32_t)61), NULL);
		V_2 = L_7;
		// if (i2 > 0)
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		// var ret = s.Substring(i2 + 1);
		String_t* L_9 = V_1;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
		// strings.RemoveAt(istr);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = ___strings0;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D(L_12, L_13, List_1_RemoveAt_m031D3A21689276A872FCA7566C8F2F79F9581F0D_RuntimeMethod_var);
		// return ret;
		return L_11;
	}

IL_0033:
	{
		// for (var istr = 0; istr < strings.Count; istr++)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0037:
	{
		// for (var istr = 0; istr < strings.Count; istr++)
		int32_t L_15 = V_0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_16 = ___strings0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_16, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0004;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParsedAssemblyQualifiedName_Replace_mCC21E16D96DA9BA55A966F1A1F09FB6539E2B5FE (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, String_t* ___oldTypeName0, String_t* ___newTypeName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFE35A0761349CC426A095DB8CCC67C17E84B525E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6260A594649D6139AB78AD552CB3BB96186F6D0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD9CBDA50191DF66243D7FF4BBED51D6B2E982E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m350E9A389D5546A9AF6BA89B1F06AE46371CC59E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TypeName == oldTypeName)
		String_t* L_0;
		L_0 = ParsedAssemblyQualifiedName_get_TypeName_m0936BDF09D58E5801C30963AD6A00710D188C96D_inline(__this, NULL);
		String_t* L_1 = ___oldTypeName0;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// TypeName = newTypeName;
		String_t* L_3 = ___newTypeName1;
		ParsedAssemblyQualifiedName_set_TypeName_m6DA7C54E5AD807C130846D6855D04CDD0AD9595B_inline(__this, L_3, NULL);
	}

IL_0015:
	{
		// foreach (var genericParameter in GenericParameters)
		List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* L_4;
		L_4 = ParsedAssemblyQualifiedName_get_GenericParameters_mB90B86B5D8874418CF577CA298C2C306E29F2BD9_inline(__this, NULL);
		NullCheck(L_4);
		Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7 L_5;
		L_5 = List_1_GetEnumerator_m350E9A389D5546A9AF6BA89B1F06AE46371CC59E(L_4, List_1_GetEnumerator_m350E9A389D5546A9AF6BA89B1F06AE46371CC59E_RuntimeMethod_var);
		V_0 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003c:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFE35A0761349CC426A095DB8CCC67C17E84B525E((&V_0), Enumerator_Dispose_mFE35A0761349CC426A095DB8CCC67C17E84B525E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0031_1;
			}

IL_0023_1:
			{
				// foreach (var genericParameter in GenericParameters)
				ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* L_6;
				L_6 = Enumerator_get_Current_mD9CBDA50191DF66243D7FF4BBED51D6B2E982E70_inline((&V_0), Enumerator_get_Current_mD9CBDA50191DF66243D7FF4BBED51D6B2E982E70_RuntimeMethod_var);
				// genericParameter.Replace(oldTypeName, newTypeName);
				String_t* L_7 = ___oldTypeName0;
				String_t* L_8 = ___newTypeName1;
				NullCheck(L_6);
				ParsedAssemblyQualifiedName_Replace_mCC21E16D96DA9BA55A966F1A1F09FB6539E2B5FE(L_6, L_7, L_8, NULL);
			}

IL_0031_1:
			{
				// foreach (var genericParameter in GenericParameters)
				bool L_9;
				L_9 = Enumerator_MoveNext_m6260A594649D6139AB78AD552CB3BB96186F6D0E((&V_0), Enumerator_MoveNext_m6260A594649D6139AB78AD552CB3BB96186F6D0E_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_004a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::ToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_ToString_m050616A35FCD939174FD52F283AF9A794C9BD8F4 (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, bool ___includeAssemblyDescription0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mFE35A0761349CC426A095DB8CCC67C17E84B525E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6260A594649D6139AB78AD552CB3BB96186F6D0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD9CBDA50191DF66243D7FF4BBED51D6B2E982E70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m350E9A389D5546A9AF6BA89B1F06AE46371CC59E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD368FAAD467AE577CB33F3C18B05858E74212193_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CC755E0C646938ADAE69A0EB3359DAAF5D74175);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDE83360537AACA4E9932F93BFEEBE4A2B475AB4);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* V_2 = NULL;
	{
		// var sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// sb.Append(TypeName);
		StringBuilder_t* L_1 = V_0;
		String_t* L_2;
		L_2 = ParsedAssemblyQualifiedName_get_TypeName_m0936BDF09D58E5801C30963AD6A00710D188C96D_inline(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_2, NULL);
		// if (GenericParameters.Count > 0)
		List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* L_4;
		L_4 = ParsedAssemblyQualifiedName_get_GenericParameters_mB90B86B5D8874418CF577CA298C2C306E29F2BD9_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_mD368FAAD467AE577CB33F3C18B05858E74212193_inline(L_4, List_1_get_Count_mD368FAAD467AE577CB33F3C18B05858E74212193_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_008f;
		}
	}
	{
		// sb.Append("`");
		StringBuilder_t* L_6 = V_0;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral54F4AAE0436CBCC0163FCF662535D64F6E0BB00C, NULL);
		// sb.Append(GenericParameterCount);
		StringBuilder_t* L_8 = V_0;
		int32_t L_9;
		L_9 = ParsedAssemblyQualifiedName_get_GenericParameterCount_m44F25295A74A3912CF2C4D6F6386175B62E26FDD_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_8, L_9, NULL);
		// sb.Append("[[");
		StringBuilder_t* L_11 = V_0;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteralFDE83360537AACA4E9932F93BFEEBE4A2B475AB4, NULL);
		// foreach (var genericParameter in GenericParameters)
		List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* L_13;
		L_13 = ParsedAssemblyQualifiedName_get_GenericParameters_mB90B86B5D8874418CF577CA298C2C306E29F2BD9_inline(__this, NULL);
		NullCheck(L_13);
		Enumerator_t51259A7EAC9FC0A67A0FCDA0D5680385F2122CD7 L_14;
		L_14 = List_1_GetEnumerator_m350E9A389D5546A9AF6BA89B1F06AE46371CC59E(L_13, List_1_GetEnumerator_m350E9A389D5546A9AF6BA89B1F06AE46371CC59E_RuntimeMethod_var);
		V_1 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mFE35A0761349CC426A095DB8CCC67C17E84B525E((&V_1), Enumerator_Dispose_mFE35A0761349CC426A095DB8CCC67C17E84B525E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006a_1;
			}

IL_0054_1:
			{
				// foreach (var genericParameter in GenericParameters)
				ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* L_15;
				L_15 = Enumerator_get_Current_mD9CBDA50191DF66243D7FF4BBED51D6B2E982E70_inline((&V_1), Enumerator_get_Current_mD9CBDA50191DF66243D7FF4BBED51D6B2E982E70_RuntimeMethod_var);
				V_2 = L_15;
				// sb.Append(genericParameter.ToString(true));
				StringBuilder_t* L_16 = V_0;
				ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* L_17 = V_2;
				NullCheck(L_17);
				String_t* L_18;
				L_18 = ParsedAssemblyQualifiedName_ToString_m050616A35FCD939174FD52F283AF9A794C9BD8F4(L_17, (bool)1, NULL);
				NullCheck(L_16);
				StringBuilder_t* L_19;
				L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_18, NULL);
			}

IL_006a_1:
			{
				// foreach (var genericParameter in GenericParameters)
				bool L_20;
				L_20 = Enumerator_MoveNext_m6260A594649D6139AB78AD552CB3BB96186F6D0E((&V_1), Enumerator_MoveNext_m6260A594649D6139AB78AD552CB3BB96186F6D0E_RuntimeMethod_var);
				if (L_20)
				{
					goto IL_0054_1;
				}
			}
			{
				goto IL_0083;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0083:
	{
		// sb.Append("]]");
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteral9CC755E0C646938ADAE69A0EB3359DAAF5D74175, NULL);
	}

IL_008f:
	{
		// if (includeAssemblyDescription)
		bool L_23 = ___includeAssemblyDescription0;
		if (!L_23)
		{
			goto IL_00ab;
		}
	}
	{
		// sb.Append(", ");
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
		// sb.Append(AssemblyDescriptionString);
		StringBuilder_t* L_26 = V_0;
		String_t* L_27;
		L_27 = ParsedAssemblyQualifiedName_get_AssemblyDescriptionString_mDD1B7B2E04A769B237A6C7569CB08036C0692BF3_inline(__this, NULL);
		NullCheck(L_26);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, L_27, NULL);
	}

IL_00ab:
	{
		// return sb.ToString();
		StringBuilder_t* L_29 = V_0;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_29);
		return L_30;
	}
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_ToString_m310458C0B895B8067DF9768429AC09C6C48ED182 (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// return ToString(false);
		String_t* L_0;
		L_0 = ParsedAssemblyQualifiedName_ToString_m050616A35FCD939174FD52F283AF9A794C9BD8F4(__this, (bool)0, NULL);
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
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/Block::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Block__ctor_m244AF359DB9C35E945F34949B0C751AE74BDB25E (Block_t98EA2E64F5912FCF6445957B8FD5468D31E51DBF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA719E4695AE06900A16266CFD7C37B4307F8F537_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t85812977073AD90622C1915AAFE06D1EAB782A80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal readonly List<Block> innerBlocks = new List<Block>();
		List_1_t85812977073AD90622C1915AAFE06D1EAB782A80* L_0 = (List_1_t85812977073AD90622C1915AAFE06D1EAB782A80*)il2cpp_codegen_object_new(List_1_t85812977073AD90622C1915AAFE06D1EAB782A80_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mA719E4695AE06900A16266CFD7C37B4307F8F537(L_0, List_1__ctor_mA719E4695AE06900A16266CFD7C37B4307F8F537_RuntimeMethod_var);
		__this->___innerBlocks_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___innerBlocks_4), (void*)L_0);
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
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mFFA8631D1FFBBA191FC7C4FAADD021C474EA8ABB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701* L_0 = (U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701*)il2cpp_codegen_object_new(U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m548D4B502CD6FB161BB96A5511E48DD6B9992C05(L_0, NULL);
		((U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m548D4B502CD6FB161BB96A5511E48DD6B9992C05 (U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Unity.VisualScripting.AssemblyQualifiedNameParser.ParsedAssemblyQualifiedName/<>c::<.ctor>b__25_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3C_ctorU3Eb__25_0_mC0E3FF0BADCAD1F5B27D17749F8BCB1484154A3C (U3CU3Ec_tDDC890DE4A0BCB833741E07D5C2D5F93290D7701* __this, String_t* ___x0, const RuntimeMethod* method) 
{
	{
		// .Select(x => x.Trim())
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_StorageType_mBC9EEB04E34352346F970CB36245E0CAC10F29E6_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type StorageType { get; private set; }
		Type_t* L_0 = ___value0;
		__this->___U3CStorageTypeU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CStorageTypeU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_MemberName_m910365017A946E12F897AA268E2C54E92D8B0492_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string MemberName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CMemberNameU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMemberNameU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_IsPublic_mDDC0D9F1D8C16C97D5A967A66B90C96CF00EFDBA_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsPublic { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsPublicU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_IsReadOnly_m81F1BE9C4A906FD3A846B032068D8CF2E7C69ED4_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsReadOnly { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsReadOnlyU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_CanRead_m29A21E1EC23A8330A771140563638EBE23C01C73_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanRead { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CCanReadU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_CanWrite_mCE48F80DD621B06344EE627E0E71B988A63BC694_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool CanWrite { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CCanWriteU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_JsonName_mF0BBA2CA8267D1CCEB6AD349EC15006B2FC68ED4_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string JsonName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CJsonNameU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CJsonNameU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaProperty_set_OverrideConverterType_m37267DED2A75405AF6B2E4FF77802820C8F8B04B_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, Type_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public Type OverrideConverterType { get; private set; }
		Type_t* L_0 = ___value0;
		__this->___U3COverrideConverterTypeU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COverrideConverterTypeU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* fsMetaProperty_get_JsonName_mA58DF433A59CBE9214939853C7F4E9D4B838A652_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public string JsonName { get; private set; }
		String_t* L_0 = __this->___U3CJsonNameU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* fsMetaProperty_get_MemberName_mED2E167648A8A76B9C0FD73A6405012D82D9EDBE_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public string MemberName { get; private set; }
		String_t* L_0 = __this->___U3CMemberNameU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void fsMetaType_set_Properties_m75C4CFDD1D8A0844B8E8E61B1028BB013A011A9E_inline (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* ___value0, const RuntimeMethod* method) 
{
	{
		// public fsMetaProperty[] Properties { get; private set; }
		fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* L_0 = ___value0;
		__this->___U3CPropertiesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPropertiesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* fsMetaType_get_Properties_m54618035A54E08C924EB7E8781AA55C1D19F950A_inline (fsMetaType_t8AFD73AF409551D5F98120D64017EF5A6963A743* __this, const RuntimeMethod* method) 
{
	{
		// public fsMetaProperty[] Properties { get; private set; }
		fsMetaPropertyU5BU5D_t03BF317FB567AFD189BDBDC0F128AC96E7D25F98* L_0 = __this->___U3CPropertiesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsMetaProperty_get_IsPublic_m30FEC58C34CBDB5F59B85174A8B4F1CB9D7FFE7D_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPublic { get; private set; }
		bool L_0 = __this->___U3CIsPublicU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsMetaProperty_get_IsReadOnly_m0C3E3C1607BF2EE1BFE02073A743AD580EB0EB5A_inline (fsMetaProperty_t521F69311410D624C0468C57AFB52101D2229266* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsReadOnly { get; private set; }
		bool L_0 = __this->___U3CIsReadOnlyU3Ek__BackingField_8;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* ParsedAssemblyQualifiedName_get_GenericParameters_mB90B86B5D8874418CF577CA298C2C306E29F2BD9_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public List<ParsedAssemblyQualifiedName> GenericParameters { get; } = new List<ParsedAssemblyQualifiedName>();
		List_1_tEFA322F48B03785A6AFA90D4676E16328FF6C4E9* L_0 = __this->___U3CGenericParametersU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParsedAssemblyQualifiedName_set_TypeName_m6DA7C54E5AD807C130846D6855D04CDD0AD9595B_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string TypeName { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CTypeNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTypeNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_TypeName_m0936BDF09D58E5801C30963AD6A00710D188C96D_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public string TypeName { get; private set; }
		String_t* L_0 = __this->___U3CTypeNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ParsedAssemblyQualifiedName_get_AssemblyDescriptionString_mDD1B7B2E04A769B237A6C7569CB08036C0692BF3_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public string AssemblyDescriptionString { get; }
		String_t* L_0 = __this->___U3CAssemblyDescriptionStringU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ParsedAssemblyQualifiedName_get_GenericParameterCount_m44F25295A74A3912CF2C4D6F6386175B62E26FDD_inline (ParsedAssemblyQualifiedName_tB768816007386BC77077F505470B9B98BDD176D8* __this, const RuntimeMethod* method) 
{
	{
		// public int GenericParameterCount { get; }
		int32_t L_0 = __this->___U3CGenericParameterCountU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_3_Invoke_m31D9E56C7CAE538FD8564F34CABA2C2A537ED393_gshared_inline (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mAF53B32DBF05898F4578B6DA990EAF6492B8366F_gshared_inline (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___item0, const RuntimeMethod* method) 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_1 = (fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* L_6 = V_0;
		int32_t L_7 = V_1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8)L_8);
		return;
	}

IL_0034:
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_9 = ___item0;
		((  void (*) (List_1_t7182E9791DD2596935EC5EBF901871476E91B95D*, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m651F8A9D673A33075773C8090B4EA59E2C4916BB_gshared_inline (Queue_1_t66D4A65BAEEC35917BB5E09E63B6FDB1F110200A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
