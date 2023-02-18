#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3;
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2*, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>
struct Action_1_t50A1540EA73609CB8D3B72EE418EEFE3BFD8F892;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`3<UnityEngine.XR.ARCore.ArSession,UnityEngine.XR.ARCore.ArConfig,System.IntPtr>
struct Action_3_t9E9F00CC6AC96764CAB10CF74EBB4050022802E3;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsBaseConverter>
struct Dictionary_2_t2D6F98B40EECAA8060D2BCF6EA2281CEF7255AE9;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.VisualScripting.FullSerializer.fsDirectConverter>
struct Dictionary_2_tE2FB86855847810E74AE4F09A6480D6AE3251A51;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87;
// System.Collections.Generic.IDictionary`2<Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection/AttributeQuery,System.Attribute>
struct IDictionary_2_tF2ECBB7A1A6D5DBB7D72E7B2F8E55A1159709C07;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_tF5487DDC9BFE72D77C0A279762BD5851F02B4F03;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct KeyCollection_tA5A51C0A64CC4FC487C25315BEC828D08EA6BCCB;
// System.Collections.Generic.List`1<System.Attribute>
struct List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsConverter>
struct List_1_t2914BC22C8C5E8C02F2AB4FA0C6EBD117DA2A753;
// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>
struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371;
// UnityEngine.XR.ARSubsystems.Promise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct ValueCollection_tC846C7A49A946B31C69E32D006EC09E80202370B;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>[]
struct EntryU5BU5D_tFEDE80687C5442B827987E1B460C2287A5CDFB29;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Unity.VisualScripting.FullSerializer.fsObjectProcessor[]
struct fsObjectProcessorU5BU5D_tB29FB66B7E02F2E896D0FABF9BD635CF141E2215;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// UniRx.ICancelable
struct ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
// Unity.VisualScripting.FullSerializer.fsConfig
struct fsConfig_tB8F11CB8B2C89E00C261FD356AD7B68AD0EE0726;
// Unity.VisualScripting.FullSerializer.fsContext
struct fsContext_t3B227C205D84208E2D8934429C07677542C97B5F;
// Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager
struct fsCyclicReferenceManager_tED0335497D4376E432D911F842D977B9D52B5EA0;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsObjectProcessor
struct fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;
// Unity.VisualScripting.AttributeUtility/AttributeCache
struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663;
// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3;
// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F;
// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586;
// UniRx.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_tD70CA88940F9339327969057F716FA31BE56F840;
// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB;
// Unity.VisualScripting.FullSerializer.fsSerializer/fsLazyCycleDefinitionWriter
struct fsLazyCycleDefinitionWriter_t8DA7FBB3131ECC4D5F09CC4D66DE74961DA5511A;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D;
IL2CPP_EXTERN_C String_t* _stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CU3Ec__DisplayClass7_0_1_tB88116DE26821AEDB89100D6C2F86180195505C2  : public RuntimeObject
{
	// UniRx.ICancelable UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1::cancel
	RuntimeObject* ___cancel_0;
	// System.Action`1<T> UniRx.Scheduler/ThreadPoolScheduler/<>c__DisplayClass7_0`1::action
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action_1;
};

// UniRx.Scheduler/EndOfFrameMainThreadScheduler/<ImmediateAction>d__1`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CImmediateActionU3Ed__1_1_t7BB5674E06A719D753BE665AD53A7AC92A8FD550 : public RuntimeObject {};

// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<ImmediateAction>d__1`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct U3CImmediateActionU3Ed__1_1_t17A6F199025E6C101D7B650D11B5482CF165C9B5 : public RuntimeObject {};

// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>
struct Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tFEDE80687C5442B827987E1B460C2287A5CDFB29* ____entries_1;
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
	KeyCollection_tA5A51C0A64CC4FC487C25315BEC828D08EA6BCCB* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC846C7A49A946B31C69E32D006EC09E80202370B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
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

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>
struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	fsObjectProcessorU5BU5D_tB29FB66B7E02F2E896D0FABF9BD635CF141E2215* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	fsObjectProcessorU5BU5D_tB29FB66B7E02F2E896D0FABF9BD635CF141E2215* ___s_emptyArray_5;
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct QueuedAction_1_tB6DB4848C11A82316B92DFA2FEF824196FF03F75  : public RuntimeObject
{
};

struct QueuedAction_1_tB6DB4848C11A82316B92DFA2FEF824196FF03F75_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// UniRx.Scheduler/MainThreadScheduler/QueuedAction`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct QueuedAction_1_tE4E6CC6C11DA2F8A086A1CFFF20AFA7209F33942  : public RuntimeObject
{
};

struct QueuedAction_1_tE4E6CC6C11DA2F8A086A1CFFF20AFA7209F33942_StaticFields
{
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler/QueuedAction`1::Instance
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___Instance_0;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Tuple`3<UniRx.ICancelable,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578 : public RuntimeObject {};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
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

// Unity.VisualScripting.FullSerializer.fsObjectProcessor
struct fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E  : public RuntimeObject
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

// Unity.VisualScripting.AttributeUtility/AttributeCache
struct AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::<inheritedAttributes>k__BackingField
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CinheritedAttributesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::<definedAttributes>k__BackingField
	List_1_t4A27DCC9A4080D8DA642DEA4EFFEBA72D6471715* ___U3CdefinedAttributesU3Ek__BackingField_1;
};

// UniRx.Scheduler/EndOfFrameMainThreadScheduler
struct EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663  : public RuntimeObject
{
};

// UniRx.Scheduler/FixedUpdateMainThreadScheduler
struct FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3  : public RuntimeObject
{
};

// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler
struct IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F  : public RuntimeObject
{
	// System.Action`1<System.Object> UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::scheduleAction
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___scheduleAction_0;
};

// UniRx.Scheduler/MainThreadScheduler
struct MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586  : public RuntimeObject
{
	// System.Action`1<System.Object> UniRx.Scheduler/MainThreadScheduler::scheduleAction
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___scheduleAction_0;
};

// UniRx.Scheduler/ThreadPoolScheduler
struct ThreadPoolScheduler_tD70CA88940F9339327969057F716FA31BE56F840  : public RuntimeObject
{
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/Api
struct Api_tAE210A8378E537AFD1FA4B99562229CE842377FB  : public RuntimeObject
{
};

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.XR.ARSubsystems.Promise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
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

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
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

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// UnityEngine.XR.ARCore.ARCorePromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

struct ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68_StaticFields
{
	// System.Int32 UnityEngine.XR.ARCore.ARCorePromise`1::s_LastFrameUpdated
	int32_t ___s_LastFrameUpdated_2;
};

// System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// UnityEngine.XR.ARSubsystems.Promise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Promise_1_t84779850E1895A40CC6BD94468F1EF05CA84D0D5 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	// UnityEngine.RectInt UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_InputRect
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect_0;
	// UnityEngine.Vector2Int UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_OutputDimensions
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions_1;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Format
	int32_t ___m_Format_2;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Transformation UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams::m_Transformation
	int32_t ___m_Transformation_3;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5  : public SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F
{
};

// UnityEngine.XR.ARCore.ARCorePromise`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652 : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617 {};

struct ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652_StaticFields
{
	// System.Int32 UnityEngine.XR.ARCore.ARCorePromise`1::s_LastFrameUpdated
	int32_t ___s_LastFrameUpdated_2;
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

// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider
struct ARCoreProvider_tD2E93A65CCD3E86D401DF128FD49F8B050F21492  : public Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5
{
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_ProviderHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_ProviderHandle_1;
	// System.Action`3<UnityEngine.XR.ARCore.ArSession,UnityEngine.XR.ARCore.ArConfig,System.IntPtr> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_SetConfigurationCallback
	Action_3_t9E9F00CC6AC96764CAB10CF74EBB4050022802E3* ___m_SetConfigurationCallback_2;
	// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::beforeSetConfiguration
	Action_1_t50A1540EA73609CB8D3B72EE418EEFE3BFD8F892* ___beforeSetConfiguration_3;
	// System.IntPtr UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_RenderEventFunc
	intptr_t ___m_RenderEventFunc_5;
};

// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2 
{
	// UnityEngine.XR.ARSubsystems.XRCpuImage/Api UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_Api
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::m_RequestId
	int32_t ___m_RequestId_1;
	// UnityEngine.XR.ARSubsystems.XRCpuImage/ConversionParams UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::<conversionParams>k__BackingField
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_pinvoke
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion
struct AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2_marshaled_com
{
	Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* ___m_Api_0;
	int32_t ___m_RequestId_1;
	ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___U3CconversionParamsU3Ek__BackingField_2;
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Threading.WaitCallback
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Attribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* fsPortableReflection_GetAttribute_m54325D68CE95535644F25CD39FAA3D4858745EB8 (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477 (MemberInfo_t* ___element0, Type_t* ___attributeType1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973 (MemberInfo_t* ___element0, Type_t* ___attributeType1, bool ___shouldCache2, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>::get_Item(System.Int32)
inline fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E* List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4 (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* __this, int32_t ___index0, const RuntimeMethod* method)
{
	fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E* il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9 (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1_RemoveAt_mF6C23E9072D8CBE2872705E7E4D08BDB78770F5C_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>::get_Count()
inline int32_t List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_inline (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.List`1<Unity.VisualScripting.FullSerializer.fsObjectProcessor>>::.ctor()
inline void Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6 (Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Type,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_mBBA19D9240A719A58C3DA23F2D8D4C538C5C81F2 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, Type_t* ___storageType1, RuntimeObject** ___result2, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::get_Succeeded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize(System.Type,System.Object,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006 (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, Type_t* ___storageType0, RuntimeObject* ___instance1, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data2, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___obj0, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Attribute Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Attribute> Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_m1CD217D40A4463684936A49453828BF294D2CD6F (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.AttributeUtility/AttributeCache::HasAttribute(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7 (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
	return (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, const RuntimeMethod*))HashSet_1__ctor_m5E12B490550D90B0686D55F8F4E7B0506BD07120_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))HashSet_1_Add_m73E14DB94D21272EEE1E28E4D74704B0095D8064_gshared)((HashSet_1_t2E820DA94CC6D5A61CA29EBD9BE297C43D691C87*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Stack_1_Push_m072EF82431D7D7E164213D822010141A4C00050D_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* il2cppRetVal;
	((  void (*) (Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Stack_1_Pop_m8E5FF1B4CFD9ADF4D8A7C4CFF4713C83E163A34A_gshared)((Stack_1_tF3E5E7101E929741300A1CF7C159A6ED9B61621A*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UniRx.MainThreadDispatcher::StartEndOfFrameMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mF882DADDE3048CBA9A2B2CFB706C7DA7732B4880 (RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::StartFixedUpdateMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m7B5A7DD59FB62E461CDDEFFE178DBDE0A6570DF9 (RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::Post(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// System.Void System.Threading.WaitCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.ThreadPool::QueueUserWorkItem(System.Threading.WaitCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___callBack0, RuntimeObject* ___state1, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversionStatus UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF (intptr_t ___value0, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*, const RuntimeMethod*))AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared)((AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*)__this, method);
}
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1 (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___length0, ___allocator1, ___options2, method);
}
// TAttribute Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::GetAttribute<System.Object>(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* fsPortableReflection_GetAttribute_TisRuntimeObject_m6854932ED6F763F1AB235CC3DFA9790D981825C2_gshared (MemberInfo_t* ___element0, bool ___shouldCache1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return (TAttribute)GetAttribute(element, typeof(TAttribute), shouldCache);
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3 = ___shouldCache1;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_4;
		L_4 = fsPortableReflection_GetAttribute_m54325D68CE95535644F25CD39FAA3D4858745EB8(L_0, L_2, L_3, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_TisIl2CppFullySharedGenericAny_mA1C841F0D830838BFD7F5B7F3853A6B2F04B26BA_gshared (MemberInfo_t* ___element0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return HasAttribute(element, typeof(TAttribute));
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = fsPortableReflection_HasAttribute_mD4F1A8E233F51111056C7383B81BB3C2F6034477(L_0, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsPortableReflection::HasAttribute<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsPortableReflection_HasAttribute_TisIl2CppFullySharedGenericAny_m6014F94511870DB31B1749606A8168803AE915AF_gshared (MemberInfo_t* ___element0, bool ___shouldCache1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return HasAttribute(element, typeof(TAttribute), shouldCache);
		MemberInfo_t* L_0 = ___element0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		bool L_3 = ___shouldCache1;
		il2cpp_codegen_runtime_class_init_inline(fsPortableReflection_tA45F2E2021B8A940160FB5D846AF5B9A610C9ED3_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = fsPortableReflection_HasAttribute_m1F9C28B7432B2B5C3DE18ACDF7E12F2318E52973(L_0, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsSerializer::RemoveProcessor<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsSerializer_RemoveProcessor_TisIl2CppFullySharedGenericAny_m03043ABAEDFAE8695A48DB25E081FE6F138A4185_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		// var i = 0;
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		// if (_processors[i] is TProcessor)
		List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* L_0 = (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*)__this->____processors_2;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		fsObjectProcessor_t9E572207DB5D24F4D84D95A87256118309A4886E* L_2;
		L_2 = List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4(L_0, L_1, List_1_get_Item_mD24AAD8C088B52787627EFD12BB53604867221C4_RuntimeMethod_var);
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0))))
		{
			goto IL_0025;
		}
	}
	{
		// _processors.RemoveAt(i);
		List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* L_3 = (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*)__this->____processors_2;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9(L_3, L_4, List_1_RemoveAt_m231460B39547133BA7961C06402C673B61B26AD9_RuntimeMethod_var);
		goto IL_0029;
	}

IL_0025:
	{
		// ++i;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0029:
	{
		// while (i < _processors.Count)
		int32_t L_6 = V_0;
		List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371* L_7 = (List_1_t0966830171D2398ACB9E46D5533F6E16E0E17371*)__this->____processors_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_inline(L_7, List_1_get_Count_mDFDAF5D5B8BD27C034F5F7A5067D22DA484476AC_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}
	{
		// _cachedProcessors = new Dictionary<Type, List<fsObjectProcessor>>();
		Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04* L_9 = (Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04*)il2cpp_codegen_object_new(Dictionary_2_tE3EF7F86044FEAF4A82EDAA759940ACF6ABF5A04_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6(L_9, Dictionary_2__ctor_m9B08040784329C4F968B639FF122E79580D7C4C6_RuntimeMethod_var);
		__this->____cachedProcessors_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cachedProcessors_8), (void*)L_9);
		// }
		return;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TryDeserialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.VisualScripting.FullSerializer.fsData,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TryDeserialize_TisIl2CppFullySharedGenericAny_m8F46C3E4472E3EACA5D9F7A58E397A6D10546582_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___instance1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
	const Il2CppFullySharedGenericAny L_10 = L_1;
	RuntimeObject* V_0 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// object boxed = instance;
		Il2CppFullySharedGenericAny* L_0 = ___instance1;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_1);
		V_0 = L_2;
		// var fail = TryDeserialize(data, typeof(T), ref boxed);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_3 = ___data0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_6;
		L_6 = fsSerializer_TryDeserialize_mBBA19D9240A719A58C3DA23F2D8D4C538C5C81F2(__this, L_3, L_5, (&V_0), NULL);
		V_1 = L_6;
		// if (fail.Succeeded)
		bool L_7;
		L_7 = fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline((&V_1), NULL);
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// instance = (T)boxed;
		Il2CppFullySharedGenericAny* L_8 = ___instance1;
		RuntimeObject* L_9 = V_0;
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_8, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_11))), SizeOf_T_t594BBE454D274A88EA1B5E96B1F70F1AFAB8E1AC);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_8, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_11))));
	}

IL_0035:
	{
		// return fail;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_1;
		return L_12;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsSerializer::TrySerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T,Unity.VisualScripting.FullSerializer.fsData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsSerializer_TrySerialize_TisIl2CppFullySharedGenericAny_mD467C2221EABCCED5F049B2996388895D66CD6A3_gshared (fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___data1, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
	{
		// return TrySerialize(typeof(T), instance, out data);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 1)) ? ___instance0 : &___instance0), SizeOf_T_tEB7E9E00FDC44AE50752B1BF0E0F507EF4AFFBAB);
		RuntimeObject* L_3 = Box(il2cpp_rgctx_data(method->rgctx_data, 1), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___data1;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = fsSerializer_TrySerialize_mADDE6667080A2E2C69A54662C47111A08A7EC006(__this, L_1, L_3, L_4, NULL);
		return L_5;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::ExecuteAsync<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278* ARCoreProvider_ExecuteAsync_TisIl2CppFullySharedGenericAny_m0D23733EC9E3A64357A761F04DB9AFA28BCF3AF7_gshared (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___apiMethod0, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var promise = new ARCorePromise<T>();
		ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* L_0 = (ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		// GCHandle gch = GCHandle.Alloc(promise);
		ARCorePromise_1_t5218B2F0D50CFBF4FA8E9C605D6916EA0E398B68* L_1 = L_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D((RuntimeObject*)L_1, NULL);
		V_0 = L_2;
		// apiMethod(GCHandle.ToIntPtr(gch));
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___apiMethod0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = V_0;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m45294AA913461A070BD555F81103A8BF2E5ED976(L_4, NULL);
		NullCheck(L_3);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_3, L_5, NULL);
		// return promise;
		return (Promise_1_tDF175E3233C815DA21D8B6CA42B9C7728AFDF278*)L_1;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::ResolvePromise<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.IntPtr,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_ResolvePromise_TisIl2CppFullySharedGenericStruct_mF698EFE2E47A93FD93F871AD6CF706D0AF22B46C_gshared (intptr_t ___context0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___arg1, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tA4622C9D57959DCC87554997E413E664F64EEAD8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_tA4622C9D57959DCC87554997E413E664F64EEAD8);
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652* V_1 = NULL;
	{
		// GCHandle gch = GCHandle.FromIntPtr(context);
		intptr_t L_0 = ___context0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mA7848A4285D007CADC52B6272DB243C8FDFD5FAC(L_0, NULL);
		V_0 = L_1;
		// var promise = (ARCorePromise<T>)gch.Target;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652*)CastclassClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		// if (promise != null)
		ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// promise.Resolve(arg);
		ARCorePromise_1_tE55D73D68682BEA1BB9337185633F0FF44128652* L_4 = V_1;
		il2cpp_codegen_memcpy(L_5, ___arg1, SizeOf_T_tA4622C9D57959DCC87554997E413E664F64EEAD8);
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, L_5);
	}

IL_001e:
	{
		// gch.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// }
		return;
	}
}
// TAttribute Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttribute_TisRuntimeObject_m8D7B16DA8433AA2FD4CC676A84EA8FE6D90195FC_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return (TAttribute)GetAttribute(typeof(TAttribute), inherit);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___inherit0;
		Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* L_3;
		L_3 = AttributeCache_GetAttribute_m1B367E0EC1D06BB18254A3C357B7547316F26AA9(__this, L_1, L_2, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Collections.Generic.IEnumerable`1<TAttribute> Unity.VisualScripting.AttributeUtility/AttributeCache::GetAttributes<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AttributeCache_GetAttributes_TisRuntimeObject_mF38C8F9E5ADBB7CCB1F9A885311EB62F139E4063_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return GetAttributes(typeof(TAttribute), inherit).Cast<TAttribute>();
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___inherit0;
		RuntimeObject* L_3;
		L_3 = AttributeCache_GetAttributes_m1CD217D40A4463684936A49453828BF294D2CD6F(__this, L_1, L_2, NULL);
		RuntimeObject* L_4;
		L_4 = InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (RuntimeObject*)L_3);
		return L_4;
	}
}
// System.Boolean Unity.VisualScripting.AttributeUtility/AttributeCache::HasAttribute<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AttributeCache_HasAttribute_TisRuntimeObject_m33C55B47DD3C264A03B4158F49782290B1B7E4FD_gshared (AttributeCache_t0BC5D6E5B36544E84257D0B9CDAD5C0A3C23476F* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		// return HasAttribute(typeof(TAttribute), inherit);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		bool L_2 = ___inherit0;
		bool L_3;
		L_3 = AttributeCache_HasAttribute_m6DE0BA7A52D8EB2284ED28B641AF6F41C53C8AA7(__this, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisIl2CppFullySharedGenericAny_m3A43E5E58A18E3D2892C620B8AED19012BA4E57B_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m3FAA05D641D29AC345AA871116A0E236549DB39F_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = InvokerFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15);
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisIl2CppFullySharedGenericAny_m0060183C8192066670005792D19D2EC19C50DBB7_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* ___node0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4* L_28;
		L_28 = VirtualFuncInvoker2Invoker< Expression_1_t0FC093B0DDEA1EB4F5EF3152CC33F1B785E80EA4*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/EndOfFrameMainThreadScheduler::ImmediateAction<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EndOfFrameMainThreadScheduler_ImmediateAction_TisIl2CppFullySharedGenericAny_m8DE6FC7A108919C66EF0E807E2757A6804327C01_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state0, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t6A91BEC642AEA775A9A7152FF8AECB74C0A3302F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t6A91BEC642AEA775A9A7152FF8AECB74C0A3302F);
	{
		U3CImmediateActionU3Ed__1_1_t7BB5674E06A719D753BE665AD53A7AC92A8FD550* L_0 = (U3CImmediateActionU3Ed__1_1_t7BB5674E06A719D753BE665AD53A7AC92A8FD550*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, 0);
		U3CImmediateActionU3Ed__1_1_t7BB5674E06A719D753BE665AD53A7AC92A8FD550* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___state0 : &___state0), SizeOf_T_t6A91BEC642AEA775A9A7152FF8AECB74C0A3302F);
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4), L_2, SizeOf_T_t6A91BEC642AEA775A9A7152FF8AECB74C0A3302F);
		U3CImmediateActionU3Ed__1_1_t7BB5674E06A719D753BE665AD53A7AC92A8FD550* L_3 = L_1;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = ___action1;
		NullCheck(L_3);
		il2cpp_codegen_write_instance_field_data<Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3), L_4);
		U3CImmediateActionU3Ed__1_1_t7BB5674E06A719D753BE665AD53A7AC92A8FD550* L_5 = L_3;
		RuntimeObject* L_6 = ___cancellation2;
		NullCheck(L_5);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2), L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Void UniRx.Scheduler/EndOfFrameMainThreadScheduler::ScheduleQueueing<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EndOfFrameMainThreadScheduler_ScheduleQueueing_TisIl2CppFullySharedGenericAny_m4C6AD21182A8E1351131B2929FEB39BF8FB4A229_gshared (EndOfFrameMainThreadScheduler_tDEB00F3663F7A0E73714B59763FB10C194429663* __this, RuntimeObject* ___cancel0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state1, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t2527AE7D3C752CC471AFEEF2FDF53D03AC765D1F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t2527AE7D3C752CC471AFEEF2FDF53D03AC765D1F);
	{
		// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(ImmediateAction(state, action, cancel));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___state1 : &___state1), SizeOf_T_t2527AE7D3C752CC471AFEEF2FDF53D03AC765D1F);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0), L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartEndOfFrameMicroCoroutine_mF882DADDE3048CBA9A2B2CFB706C7DA7732B4880(L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UniRx.Scheduler/FixedUpdateMainThreadScheduler::ImmediateAction<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T,System.Action`1<T>,UniRx.ICancelable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FixedUpdateMainThreadScheduler_ImmediateAction_TisIl2CppFullySharedGenericAny_mF308640A18B4C438A7A251C51989F7625C838D4E_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state0, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action1, RuntimeObject* ___cancellation2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t1C8A7AC5A577ED7EB7CC455B5731F61812BAEB5A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t1C8A7AC5A577ED7EB7CC455B5731F61812BAEB5A);
	{
		U3CImmediateActionU3Ed__1_1_t17A6F199025E6C101D7B650D11B5482CF165C9B5* L_0 = (U3CImmediateActionU3Ed__1_1_t17A6F199025E6C101D7B650D11B5482CF165C9B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0, 0);
		U3CImmediateActionU3Ed__1_1_t17A6F199025E6C101D7B650D11B5482CF165C9B5* L_1 = L_0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___state0 : &___state0), SizeOf_T_t1C8A7AC5A577ED7EB7CC455B5731F61812BAEB5A);
		NullCheck(L_1);
		il2cpp_codegen_write_instance_field_data(L_1, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),4), L_2, SizeOf_T_t1C8A7AC5A577ED7EB7CC455B5731F61812BAEB5A);
		U3CImmediateActionU3Ed__1_1_t17A6F199025E6C101D7B650D11B5482CF165C9B5* L_3 = L_1;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = ___action1;
		NullCheck(L_3);
		il2cpp_codegen_write_instance_field_data<Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*>(L_3, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),3), L_4);
		U3CImmediateActionU3Ed__1_1_t17A6F199025E6C101D7B650D11B5482CF165C9B5* L_5 = L_3;
		RuntimeObject* L_6 = ___cancellation2;
		NullCheck(L_5);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(L_5, il2cpp_rgctx_field(il2cpp_rgctx_data(method->rgctx_data, 0),2), L_6);
		return (RuntimeObject*)L_5;
	}
}
// System.Void UniRx.Scheduler/FixedUpdateMainThreadScheduler::ScheduleQueueing<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedUpdateMainThreadScheduler_ScheduleQueueing_TisIl2CppFullySharedGenericAny_m1D66D4516D0BDDCD190B149EB194B80881F1458D_gshared (FixedUpdateMainThreadScheduler_tCA7241F8BC3311A70DD07CFD2748CDFC2DEA11E3* __this, RuntimeObject* ___cancel0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state1, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t74E18B51868BF973C781CCA0A3103FBE908935A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t74E18B51868BF973C781CCA0A3103FBE908935A6);
	{
		// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(ImmediateAction(state, action, cancel));
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? ___state1 : &___state1), SizeOf_T_t74E18B51868BF973C781CCA0A3103FBE908935A6);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_1 = ___action2;
		RuntimeObject* L_2 = ___cancel0;
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 0)) ? L_0: *(void**)L_0), L_1, L_2);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m7B5A7DD59FB62E461CDDEFFE178DBDE0A6570DF9(L_3, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler::ScheduleQueueing<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IgnoreTimeScaleMainThreadScheduler_ScheduleQueueing_TisIl2CppFullySharedGenericAny_m794BCD1A75B3F11AFC572FACAE10726BBA46A7F4_gshared (IgnoreTimeScaleMainThreadScheduler_t15A43252BE809D3C28FB0C3D1BE5A3D8B4E9614F* __this, RuntimeObject* ___cancel0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state1, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tDFA7D379B0B07DF37BE5A00393A12BD15A80684B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tDFA7D379B0B07DF37BE5A00393A12BD15A80684B);
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_tB6DB4848C11A82316B92DFA2FEF824196FF03F75_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Instance_0;
		RuntimeObject* L_1 = ___cancel0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___state1 : &___state1), SizeOf_T_tDFA7D379B0B07DF37BE5A00393A12BD15A80684B);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_3 = ___action2;
		Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578* L_4;
		L_4 = InvokerFuncInvoker3< Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578*, RuntimeObject*, Il2CppFullySharedGenericAny, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2), L_3);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisIl2CppFullySharedGenericAny_mA1AC73868A64CE371D539A82FE11900158AE1032_gshared (MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// T
	// sizeof(T)
	const uint32_t SizeOf_T_tE2C1F6C591B401D07C7365CECB9707DD71E4D3FF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tE2C1F6C591B401D07C7365CECB9707DD71E4D3FF);
	Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578* V_0 = NULL;
	{
		// var t = (Tuple<ICancelable, T, Action<T>>)state;
		RuntimeObject* L_0 = ___state0;
		V_0 = ((Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0)));
		// if (!t.Item1.IsDisposed)
		Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578* L_1 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_1);
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UniRx.ICancelable::get_IsDisposed() */, ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		// t.Item3(t.Item2);
		Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578* L_4 = V_0;
		NullCheck(L_4);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_5;
		L_5 = InvokerFuncInvoker0< Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4);
		Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578* L_6 = V_0;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_6, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_5);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 5)) ? L_7: *(void**)L_7));
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/MainThreadScheduler::ScheduleQueueing<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadScheduler_ScheduleQueueing_TisIl2CppFullySharedGenericAny_m8C1E6F0FBDC84B49D4E3078E84125B07E9268F13_gshared (MainThreadScheduler_t79381B64713DB60DDBD10B86155CEBD9AFF8C586* __this, RuntimeObject* ___cancel0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state1, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t8F5E77C864E66B3B19EEC481176910216B82BEC2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_t8F5E77C864E66B3B19EEC481176910216B82BEC2);
	{
		// MainThreadDispatcher.Post(QueuedAction<T>.Instance, Tuple.Create(cancel, state, action));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ((QueuedAction_1_tE4E6CC6C11DA2F8A086A1CFFF20AFA7209F33942_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___Instance_0;
		RuntimeObject* L_1 = ___cancel0;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? ___state1 : &___state1), SizeOf_T_t8F5E77C864E66B3B19EEC481176910216B82BEC2);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_3 = ___action2;
		Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578* L_4;
		L_4 = InvokerFuncInvoker3< Tuple_3_t05AC38C645342E97ACEF96718AE5BC90C074C578*, RuntimeObject*, Il2CppFullySharedGenericAny, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 2)) ? L_2: *(void**)L_2), L_3);
		il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		MainThreadDispatcher_Post_m34EA78B903F2F3282D9B5080E7C7FDEBB36EB25F(L_0, (RuntimeObject*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UniRx.Scheduler/ThreadPoolScheduler::ScheduleQueueing<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(UniRx.ICancelable,T,System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadPoolScheduler_ScheduleQueueing_TisIl2CppFullySharedGenericAny_m84201C808FC2D033CC3FF9C42F62077BD92331BC_gshared (ThreadPoolScheduler_tD70CA88940F9339327969057F716FA31BE56F840* __this, RuntimeObject* ___cancel0, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___state1, Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___action2, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tCF1581051DEEAC994B51A6B78FA75E197F5A0DE3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tCF1581051DEEAC994B51A6B78FA75E197F5A0DE3);
	{
		U3CU3Ec__DisplayClass7_0_1_tB88116DE26821AEDB89100D6C2F86180195505C2* L_0 = (U3CU3Ec__DisplayClass7_0_1_tB88116DE26821AEDB89100D6C2F86180195505C2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		U3CU3Ec__DisplayClass7_0_1_tB88116DE26821AEDB89100D6C2F86180195505C2* L_1 = L_0;
		RuntimeObject* L_2 = ___cancel0;
		NullCheck(L_1);
		L_1->___cancel_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___cancel_0), (void*)L_2);
		U3CU3Ec__DisplayClass7_0_1_tB88116DE26821AEDB89100D6C2F86180195505C2* L_3 = L_1;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = ___action2;
		NullCheck(L_3);
		L_3->___action_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___action_1), (void*)L_4);
		// System.Threading.ThreadPool.QueueUserWorkItem(callBackState =>
		// {
		//     if (!cancel.IsDisposed)
		//     {
		//         action((T)callBackState);
		//     }
		// }, state);
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_5 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_5, (RuntimeObject*)L_3, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->rgctx_data, 4)) ? ___state1 : &___state1), SizeOf_T_tCF1581051DEEAC994B51A6B78FA75E197F5A0DE3);
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data(method->rgctx_data, 4), L_6);
		bool L_8;
		L_8 = ThreadPool_QueueUserWorkItem_mE534D14C47699D1D37288AE0710B19FC7EC02BAB(L_5, L_7, NULL);
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.XR.ARSubsystems.XRCpuImage/AsyncConversion::GetData<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_gshared (AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// if (status != AsyncConversionStatus.Ready)
		int32_t L_0;
		L_0 = AsyncConversion_get_status_mB3A873407AF4E202A39758599DCEE52BEC196E2A(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		// throw new InvalidOperationException("Async request is not ready.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3E9DC9108B87A8D625803B99E31E1FF1628D278D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (m_Api.TryGetAsyncRequestData(m_RequestId, out dataPtr, out dataLength))
		Api_tAE210A8378E537AFD1FA4B99562229CE842377FB* L_2 = (Api_tAE210A8378E537AFD1FA4B99562229CE842377FB*)__this->___m_Api_0;
		int32_t L_3 = (int32_t)__this->___m_RequestId_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = VirtualFuncInvoker3< bool, int32_t, intptr_t*, int32_t* >::Invoke(9 /* System.Boolean UnityEngine.XR.ARSubsystems.XRCpuImage/Api::TryGetAsyncRequestData(System.Int32,System.IntPtr&,System.Int32&) */, L_2, L_3, (&V_0), (&V_1));
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		// int stride = UnsafeUtility.SizeOf<T>();
		int32_t L_5;
		L_5 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_2 = L_5;
		// var array = NativeArrayUnsafeUtility.ConvertExistingDataToNativeArray<T>(
		//     (void*)dataPtr, dataLength / stride, Allocator.None);
		intptr_t L_6 = V_0;
		void* L_7;
		L_7 = IntPtr_op_Explicit_m2728CBA081E79B97DDCF1D4FAD77B309CA1E94BF(L_6, NULL);
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_10;
		L_10 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, void*, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_7, ((int32_t)(L_8/L_9)), (int32_t)1);
		// return array;
		return L_10;
	}

IL_0041:
	{
		// throw new InvalidOperationException("The XRAsyncCameraImageConversion is not valid.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_11 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8753E91E57F4AF26C69DF5B5A006924AF1E9F9C2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_RuntimeMethod_var)));
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncConversion_t559EB9321AFB2B096C619203286FEDC6868DE9C2*>(__this + _offset);
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 _returnValue;
	_returnValue = AsyncConversion_GetData_TisIl2CppFullySharedGenericStruct_m55B782125B0D4D0B65C9018372619ED6941CDFDA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisIl2CppFullySharedGenericStruct_mA59758011A49ED37FE547FB2E7C71E29DA35A08E_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___array2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// if (array.IsCreated)
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_0 = ___array2;
		bool L_1;
		L_1 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_0);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_2 = ___array2;
		int32_t L_3;
		L_3 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_2);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_5 = ___array2;
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_5);
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_9), L_7, L_8, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1((&L_13), L_11, L_12, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 5));
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsResult_get_Succeeded_m01E08C3B731D94618B867B7B55DCC0061CD11769_inline (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) 
{
	{
		// public bool Succeeded => _success;
		bool L_0 = __this->____success_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___item0 : &___item0), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
