#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41;
// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571;
// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44;
// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Google.XR.ARCoreExtensions.VpsAvailabilityPromise
struct VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c
struct U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62
struct U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55
struct U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63
struct U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsAssemblyU2DCSharp[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_CoreModule[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_XR_ARFoundation[];
IL2CPP_EXTERN_C RuntimeClass* ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainAnchorState_tAA75FC29D5E05B159FB4B825A67F7ADEACDE0C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VpsAvailability_t45DB38FE9BF4135673CE5455506068164625A197_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral072A3A99BF91D3581396944AD57B4BB254BF43AD;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABC0AF5010BE71FECDAD9A690FA25A94F0B1495;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD5241E070B724D1D5CE76F8E905B1B2E830A43;
IL2CPP_EXTERN_C String_t* _stringLiteral1ABCB9A2CA1FE87C833C0D42EF5790DE5D6D5D7A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B34A45352A1F9AB3E6BCFB17173317AFF631C89;
IL2CPP_EXTERN_C String_t* _stringLiteral1CD8725749511AED54A82B7EEB159755F15D7128;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral7DBA97D072F0A39EE526621BF8EDC2AD83D9BB3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA1E32C34EADE26834700EF4ADABB38561179CEBE;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA796EB4404F7FE0A210545E10CD3705E9368E0;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F;
IL2CPP_EXTERN_C String_t* _stringLiteralED772B549705A1BF599485764F40D84130414B4B;
IL2CPP_EXTERN_C String_t* _stringLiteralEE2F1BFE1BE99B9017E10F89B16590A5D791925A;
IL2CPP_EXTERN_C const RuntimeMethod* ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeAreaScaler_Update_m4C02B57A221CB119573B865749FAEFB0E75F569A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SafeAreaScaler__ctor_m61ED2F6F927714C4ED11AA2AEE2A0B9EA79B484B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAvailabilityCheckU3Ed__62_MoveNext_mB4E697D0A20DA1FE17D7B5A47CFD37D9A8F4D599_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAvailabilityCheckU3Ed__62_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m503EE05EDCEF0432FE66763F39C96BDC508ACE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_Reset_mC7BE82AF639BDF9B11B59B0173CDB4A0065F8A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_get_Current_m664DC683300CCA8715CBAE58ED391458FA6F3EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAvailabilityCheckU3Ed__62_System_IDisposable_Dispose_mB1D539BF47B24ABB87CB197C41FC2874768BB27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAvailabilityCheckU3Ed__62__ctor_m224E05104B55CBC623C7383CEBA521F580316D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckTerrainAnchorStateU3Ed__55_MoveNext_mCBC9120F5DBAA54987974A273A7AAC968999A834_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC3FBB1D8FA1D6EB4A0ECECF6213D193A013030A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_Reset_m51425ECE54B7ADD4A0691C79D2FFE7625E730955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_get_Current_m94B82FE79DB79EEE978E3ABAC7FB40880B313BBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckTerrainAnchorStateU3Ed__55_System_IDisposable_Dispose_m0ADDB752FD9579133DB2767578B62238E1BCC370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckTerrainAnchorStateU3Ed__55__ctor_m9E5219C260204A9A77AF728DB09C35CDA89F655A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartLocationServiceU3Ed__63_MoveNext_m8C1D5DE53F7DE281A1D7B7AA77AFEA71EAD82C83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartLocationServiceU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m44036CDC29C45DD97F22C426CB18023631767C97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_Reset_m3465864CBA8D60384D7A2FCCE4F2495A0D25EC97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_get_Current_m40BA25B8C1C02F78ACED96E86C010AE4655E0831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartLocationServiceU3Ed__63_System_IDisposable_Dispose_m1F2C91A9C549004FBF38FEE87CD26E8EE1F566E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartLocationServiceU3Ed__63__ctor_m9155B6DD409AFDC92573E1346A62BE99084EB071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__60_0_mE2C05EFFFD63EAFBCE22ECA9B6F52DD78DB13572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_mD4E003F3D47C2403D68D5E7653300A70D8BAB182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_0__ctor_m6F22441024D90C2CF796D64DD0097D8F04B68703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__cctor_mF33920987DC5FA14E7DC0240B2361237B504622C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2  : public RuntimeObject
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c
struct U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA  : public RuntimeObject
{
};

struct U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields
{
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<>9
	U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* ___U3CU3E9_0;
	// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<>9__60_0
	Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* ___U3CU3E9__60_0_1;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55
struct U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C  : public RuntimeObject
{
	// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::anchor
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___anchor_2;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::<>4__this
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* ___U3CU3E4__this_3;
	// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::<retry>5__1
	int32_t ___U3CretryU3E5__1_4;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63
struct U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C  : public RuntimeObject
{
	// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::<>4__this
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* ___U3CU3E4__this_2;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.LocationInfo
struct LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 
{
	// System.Double UnityEngine.LocationInfo::m_Timestamp
	double ___m_Timestamp_0;
	// System.Single UnityEngine.LocationInfo::m_Latitude
	float ___m_Latitude_1;
	// System.Single UnityEngine.LocationInfo::m_Longitude
	float ___m_Longitude_2;
	// System.Single UnityEngine.LocationInfo::m_Altitude
	float ___m_Altitude_3;
	// System.Single UnityEngine.LocationInfo::m_HorizontalAccuracy
	float ___m_HorizontalAccuracy_4;
	// System.Single UnityEngine.LocationInfo::m_VerticalAccuracy
	float ___m_VerticalAccuracy_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>
struct InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// Google.XR.ARCoreExtensions.PromiseState Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_state
	int32_t ____state_0;
	// T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_result
	int32_t ____result_1;
	// System.IntPtr Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1::_future
	intptr_t ____future_2;
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

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C 
{
	// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::SerializedTime
	String_t* ___SerializedTime_0;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Latitude
	double ___Latitude_1;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Longitude
	double ___Longitude_2;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Altitude
	double ___Altitude_3;
	// System.Double Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::Heading
	double ___Heading_4;
	// UnityEngine.Quaternion Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::EunRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___EunRotation_5;
};
// Native definition for P/Invoke marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke
{
	char* ___SerializedTime_0;
	double ___Latitude_1;
	double ___Longitude_2;
	double ___Altitude_3;
	double ___Heading_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___EunRotation_5;
};
// Native definition for COM marshalling of Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
struct GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com
{
	Il2CppChar* ___SerializedTime_0;
	double ___Latitude_1;
	double ___Longitude_2;
	double ___Altitude_3;
	double ___Heading_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___EunRotation_5;
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

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass59_0
struct U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90  : public RuntimeObject
{
	// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass59_0::current
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___current_0;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62
struct U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9  : public RuntimeObject
{
	// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::<>4__this
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* ___U3CU3E4__this_2;
	// UnityEngine.LocationInfo Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::<location>5__1
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 ___U3ClocationU3E5__1_3;
	// Google.XR.ARCoreExtensions.VpsAvailabilityPromise Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::<vpsAvailabilityPromise>5__2
	VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* ___U3CvpsAvailabilityPromiseU3E5__2_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Google.XR.ARCoreExtensions.VpsAvailabilityPromise
struct VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1  : public InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRSessionSubsystem,UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3903923EFB501C3A0672A0E60558673B85435D8E* ___s_SubsystemInstances_6;
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_4;
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_5;
	// UnityEngine.XR.ARFoundation.ARAnchorManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::AnchorManager
	ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___AnchorManager_6;
	// UnityEngine.XR.ARFoundation.ARRaycastManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::RaycastManager
	ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* ___RaycastManager_7;
	// Google.XR.ARCoreExtensions.AREarthManager Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::EarthManager
	AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* ___EarthManager_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ARCoreExtensions
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___ARCoreExtensions_9;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::GeospatialPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GeospatialPrefab_10;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::TerrainPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TerrainPrefab_11;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PrivacyPromptCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PrivacyPromptCanvas_12;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::VPSCheckCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___VPSCheckCanvas_13;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ARViewCanvas
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ARViewCanvas_14;
	// UnityEngine.UI.Button Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ClearAllButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ClearAllButton_15;
	// UnityEngine.UI.Button Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SetAnchorButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___SetAnchorButton_16;
	// UnityEngine.UI.Toggle Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::TerrainToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___TerrainToggle_17;
	// UnityEngine.GameObject Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::InfoPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___InfoPanel_18;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::InfoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___InfoText_19;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SnackBarText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SnackBarText_20;
	// UnityEngine.UI.Text Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::DebugText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DebugText_21;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_waitingForLocationService
	bool ____waitingForLocationService_36;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isInARView
	bool ____isInARView_37;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isReturning
	bool ____isReturning_38;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_isLocalizing
	bool ____isLocalizing_39;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_enablingGeospatial
	bool ____enablingGeospatial_40;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_shouldResolvingHistory
	bool ____shouldResolvingHistory_41;
	// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_usingTerrainAnchor
	bool ____usingTerrainAnchor_42;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_localizationPassedTime
	float ____localizationPassedTime_43;
	// System.Single Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_configurePrepareTime
	float ____configurePrepareTime_44;
	// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_historyCollection
	GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* ____historyCollection_45;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_anchorObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____anchorObjects_46;
	// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_startLocationService
	RuntimeObject* ____startLocationService_47;
	// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::_asyncCheck
	RuntimeObject* ____asyncCheck_48;
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler
struct SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rect Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::_screenSafeArea
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ____screenSafeArea_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARSession
struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014  : public SubsystemLifecycleManager_3_t7AC7A0198786D712CE4FE49E3789EE14BCC2DFD5
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_AttemptUpdate
	bool ___m_AttemptUpdate_7;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_MatchFrameRate
	bool ___m_MatchFrameRate_8;
	// UnityEngine.XR.ARFoundation.TrackingMode UnityEngine.XR.ARFoundation.ARSession::m_TrackingMode
	int32_t ___m_TrackingMode_9;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_VSyncCount
	int32_t ___m_VSyncCount_11;
	// System.Int32 UnityEngine.XR.ARFoundation.ARSession::m_TargetFrameRate
	int32_t ___m_TargetFrameRate_12;
	// System.Boolean UnityEngine.XR.ARFoundation.ARSession::m_WasFrameRateSet
	bool ___m_WasFrameRateSet_13;
};

struct ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields
{
	// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs> UnityEngine.XR.ARFoundation.ARSession::stateChanged
	Action_1_t325C602D999E964DB72210E493635E83F8D6CE68* ___stateChanged_10;
	// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::s_State
	int32_t ___s_State_14;
	// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARFoundation.ARSession::s_NotTrackingReason
	int32_t ___s_NotTrackingReason_15;
	// UnityEngine.XR.ARSubsystems.SessionAvailability UnityEngine.XR.ARFoundation.ARSession::s_Availability
	int32_t ___s_Availability_16;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
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


// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___item0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerable_Last_TisIl2CppFullySharedGenericAny_mB9ABB6ECA57F2592ABCE0EE92365A4FCB3CDAB43_gshared (RuntimeObject* ___source0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___item0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARGeospatialAnchor_get_trackableId_m8560D0B2C6E8D602B97A0B61EA92499AAD683939 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<TSource>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* il2cppRetVal;
	((  void (*) (RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerable_Last_TisIl2CppFullySharedGenericAny_mB9ABB6ECA57F2592ABCE0EE92365A4FCB3CDAB43_gshared)((RuntimeObject*)___source0, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.TerrainAnchorState Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_terrainAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::get_CreatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::CheckAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_CheckAvailability_m7090FD96E8580EB3E6CAB97B8344BF845B254D0A (const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::Install()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_Install_m9C4DCECEA000E16F4992376B7E40DA0C95B58166 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.LocationInfo UnityEngine.LocationService::get_lastData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_latitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.LocationInfo::get_longitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2 (LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.VpsAvailabilityPromise Google.XR.ARCoreExtensions.AREarthManager::CheckVpsAvailability(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* AREarthManager_CheckVpsAvailability_m05CD87D382FD14B2014B2A87FC0687B765EBC543 (double ___latitude0, double ___longitude1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.LocationService::get_isEnabledByUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96 (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Screen::get_safeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lhs0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rhs1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64 (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_offsetMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__55__ctor_m9E5219C260204A9A77AF728DB09C35CDA89F655A (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__55__ctor_m9E5219C260204A9A77AF728DB09C35CDA89F655A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCheckTerrainAnchorStateU3Ed__55__ctor_m9E5219C260204A9A77AF728DB09C35CDA89F655A_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__55_System_IDisposable_Dispose_m0ADDB752FD9579133DB2767578B62238E1BCC370 (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__55_System_IDisposable_Dispose_m0ADDB752FD9579133DB2767578B62238E1BCC370_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCheckTerrainAnchorStateU3Ed__55_System_IDisposable_Dispose_m0ADDB752FD9579133DB2767578B62238E1BCC370_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCheckTerrainAnchorStateU3Ed__55_MoveNext_mCBC9120F5DBAA54987974A273A7AAC968999A834 (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainAnchorState_tAA75FC29D5E05B159FB4B825A67F7ADEACDE0C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__55_MoveNext_mCBC9120F5DBAA54987974A273A7AAC968999A834_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD5241E070B724D1D5CE76F8E905B1B2E830A43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CD8725749511AED54A82B7EEB159755F15D7128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDA796EB4404F7FE0A210545E10CD3705E9368E0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCheckTerrainAnchorStateU3Ed__55_MoveNext_mCBC9120F5DBAA54987974A273A7AAC968999A834_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6529));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6530));
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B21_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B28_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B27_0 = NULL;
	int32_t G_B29_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B29_1 = NULL;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6531));
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0116;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6532));
		// if (anchor == null || _anchorObjects == null)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6533));
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_3 = __this->___anchor_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6534));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6534));
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_5 = __this->___U3CU3E4__this_3;
		NullCheck(L_5);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = L_5->____anchorObjects_46;
		G_B10_0 = ((((RuntimeObject*)(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)L_6) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B10_0 = 1;
	}

IL_0042:
	{
		V_1 = (bool)G_B10_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6535));
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6536));
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6537));
		return (bool)0;
	}

IL_0049:
	{
		// int retry = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6538));
		__this->___U3CretryU3E5__1_4 = 0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6539));
		goto IL_0133;
	}

IL_0055:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6540));
		// if (_anchorObjects.Count == 0 || !_anchorObjects.Contains(anchor.gameObject))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6541));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_8 = __this->___U3CU3E4__this_3;
		NullCheck(L_8);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = L_8->____anchorObjects_46;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6542));
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_9, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6542));
		if (!L_10)
		{
			goto IL_0088;
		}
	}
	{
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_11 = __this->___U3CU3E4__this_3;
		NullCheck(L_11);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = L_11->____anchorObjects_46;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_13 = __this->___anchor_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6543));
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6543));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6544));
		NullCheck(L_12);
		bool L_15;
		L_15 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_12, L_14, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6544));
		G_B16_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_0089;
	}

IL_0088:
	{
		G_B16_0 = 1;
	}

IL_0089:
	{
		V_2 = (bool)G_B16_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6545));
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_00b4;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6546));
		// Debug.LogFormat(
		//     "{0} has been removed, exist terrain anchor state check.",
		//     anchor.trackableId);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6547));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_19 = __this->___anchor_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6548));
		NullCheck(L_19);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_20;
		L_20 = ARGeospatialAnchor_get_trackableId_m8560D0B2C6E8D602B97A0B61EA92499AAD683939(L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6548));
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_21 = L_20;
		RuntimeObject* L_22 = Box(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_22);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_22);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6549));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral1CD8725749511AED54A82B7EEB159755F15D7128, L_18, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6549));
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6550));
		return (bool)0;
	}

IL_00b4:
	{
		// if (retry == 100 && _anchorObjects.Last().Equals(anchor.gameObject))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6551));
		int32_t L_23 = __this->___U3CretryU3E5__1_4;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_00e0;
		}
	}
	{
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_24 = __this->___U3CU3E4__this_3;
		NullCheck(L_24);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_25 = L_24->____anchorObjects_46;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6552));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B(L_25, Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6552));
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_27 = __this->___anchor_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6553));
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6553));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6554));
		NullCheck(L_26);
		bool L_29;
		L_29 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_26, L_28);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6554));
		G_B21_0 = ((int32_t)(L_29));
		goto IL_00e1;
	}

IL_00e0:
	{
		G_B21_0 = 0;
	}

IL_00e1:
	{
		V_3 = (bool)G_B21_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6555));
		bool L_30 = V_3;
		if (!L_30)
		{
			goto IL_00fd;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6556));
		// SnackBarText.text = _resolvingTimeoutMessage;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6557));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_31 = __this->___U3CU3E4__this_3;
		NullCheck(L_31);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = L_31->___SnackBarText_20;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6558));
		NullCheck(L_32);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, _stringLiteral0AD5241E070B724D1D5CE76F8E905B1B2E830A43);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6558));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6559));
	}

IL_00fd:
	{
		// yield return new WaitForSeconds(0.1f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6560));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6561));
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_33 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_33, (0.100000001f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6561));
		__this->___U3CU3E2__current_1 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_33);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0116:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6562));
		__this->___U3CU3E1__state_0 = (-1);
		// retry = Math.Min(retry + 1, 100);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6563));
		int32_t L_34 = __this->___U3CretryU3E5__1_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6564));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_35;
		L_35 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_34, 1)), ((int32_t)100), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6564));
		__this->___U3CretryU3E5__1_4 = L_35;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6565));
	}

IL_0133:
	{
		// while (anchor.terrainAnchorState == TerrainAnchorState.TaskInProgress)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6566));
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_36 = __this->___anchor_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6567));
		NullCheck(L_36);
		int32_t L_37;
		L_37 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_36, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6567));
		V_4 = (bool)((((int32_t)L_37) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6568));
		bool L_38 = V_4;
		if (L_38)
		{
			goto IL_0055;
		}
	}
	{
		// anchor.gameObject.SetActive(
		//     !_isLocalizing && anchor.terrainAnchorState == TerrainAnchorState.Success);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6569));
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_39 = __this->___anchor_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6570));
		NullCheck(L_39);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40;
		L_40 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_39, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6570));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_41 = __this->___U3CU3E4__this_3;
		NullCheck(L_41);
		bool L_42 = L_41->____isLocalizing_39;
		G_B27_0 = L_40;
		if (L_42)
		{
			G_B28_0 = L_40;
			goto IL_0172;
		}
	}
	{
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_43 = __this->___anchor_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6571));
		NullCheck(L_43);
		int32_t L_44;
		L_44 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_43, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6571));
		G_B29_0 = ((((int32_t)L_44) == ((int32_t)2))? 1 : 0);
		G_B29_1 = G_B27_0;
		goto IL_0173;
	}

IL_0172:
	{
		G_B29_0 = 0;
		G_B29_1 = G_B28_0;
	}

IL_0173:
	{
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6572));
		NullCheck(G_B29_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B29_1, (bool)G_B29_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6572));
		// if (_anchorObjects.Last().Equals(anchor.gameObject))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6573));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_45 = __this->___U3CU3E4__this_3;
		NullCheck(L_45);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_46 = L_45->____anchorObjects_46;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6574));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B(L_46, Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6574));
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_48 = __this->___anchor_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6575));
		NullCheck(L_48);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_48, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6575));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6576));
		NullCheck(L_47);
		bool L_50;
		L_50 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_47, L_49);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6576));
		V_5 = L_50;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6577));
		bool L_51 = V_5;
		if (!L_51)
		{
			goto IL_01cc;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6578));
		// SnackBarText.text = $"Terrain anchor state: {anchor.terrainAnchorState}";
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6579));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_52 = __this->___U3CU3E4__this_3;
		NullCheck(L_52);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_53 = L_52->___SnackBarText_20;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_54 = __this->___anchor_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6580));
		NullCheck(L_54);
		int32_t L_55;
		L_55 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_54, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6580));
		int32_t L_56 = L_55;
		RuntimeObject* L_57 = Box(TerrainAnchorState_tAA75FC29D5E05B159FB4B825A67F7ADEACDE0C1D_il2cpp_TypeInfo_var, &L_56);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6581));
		String_t* L_58;
		L_58 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCDA796EB4404F7FE0A210545E10CD3705E9368E0, L_57, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6581));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6582));
		NullCheck(L_53);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_53, L_58);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6582));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6583));
	}

IL_01cc:
	{
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6584));
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC3FBB1D8FA1D6EB4A0ECECF6213D193A013030A2 (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC3FBB1D8FA1D6EB4A0ECECF6213D193A013030A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC3FBB1D8FA1D6EB4A0ECECF6213D193A013030A2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_Reset_m51425ECE54B7ADD4A0691C79D2FFE7625E730955 (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_Reset_m51425ECE54B7ADD4A0691C79D2FFE7625E730955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_Reset_m51425ECE54B7ADD4A0691C79D2FFE7625E730955_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_Reset_m51425ECE54B7ADD4A0691C79D2FFE7625E730955_RuntimeMethod_var)));
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_get_Current_m94B82FE79DB79EEE978E3ABAC7FB40880B313BBE (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_get_Current_m94B82FE79DB79EEE978E3ABAC7FB40880B313BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_get_Current_m94B82FE79DB79EEE978E3ABAC7FB40880B313BBE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m6F22441024D90C2CF796D64DD0097D8F04B68703 (U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass59_0__ctor_m6F22441024D90C2CF796D64DD0097D8F04B68703_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass59_0__ctor_m6F22441024D90C2CF796D64DD0097D8F04B68703_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass59_0::<LoadGeospatialAnchorHistory>b__0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass59_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_mD4E003F3D47C2403D68D5E7653300A70D8BAB182 (U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass59_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_mD4E003F3D47C2403D68D5E7653300A70D8BAB182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___data0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__DisplayClass59_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_mD4E003F3D47C2403D68D5E7653300A70D8BAB182_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6585));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6586));
	{
		// data => current.Subtract(data.CreatedTime).Days > 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6587));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___current_0);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6588));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___data0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6588));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6589));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A(L_0, L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6589));
		V_0 = L_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6590));
		int32_t L_3;
		L_3 = TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107((&V_0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6590));
		return (bool)((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF33920987DC5FA14E7DC0240B2361237B504622C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__cctor_mF33920987DC5FA14E7DC0240B2361237B504622C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__cctor_mF33920987DC5FA14E7DC0240B2361237B504622C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* L_0 = (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA*)il2cpp_codegen_object_new(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC(L_0, NULL);
		((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<SaveGeospatialAnchorHistory>b__60_0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory,Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__60_0_mE2C05EFFFD63EAFBCE22ECA9B6F52DD78DB13572 (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___left0, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___right1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__60_0_mE2C05EFFFD63EAFBCE22ECA9B6F52DD78DB13572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___left0), (&___right1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__60_0_mE2C05EFFFD63EAFBCE22ECA9B6F52DD78DB13572_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6591));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6592));
	{
		// right.CreatedTime.CompareTo(left.CreatedTime));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6593));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6594));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___right1), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6594));
		V_0 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6595));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___left0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6595));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6596));
		int32_t L_2;
		L_2 = DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D((&V_0), L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6596));
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAvailabilityCheckU3Ed__62__ctor_m224E05104B55CBC623C7383CEBA521F580316D95 (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAvailabilityCheckU3Ed__62__ctor_m224E05104B55CBC623C7383CEBA521F580316D95_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CAvailabilityCheckU3Ed__62__ctor_m224E05104B55CBC623C7383CEBA521F580316D95_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAvailabilityCheckU3Ed__62_System_IDisposable_Dispose_mB1D539BF47B24ABB87CB197C41FC2874768BB27B (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAvailabilityCheckU3Ed__62_System_IDisposable_Dispose_mB1D539BF47B24ABB87CB197C41FC2874768BB27B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CAvailabilityCheckU3Ed__62_System_IDisposable_Dispose_mB1D539BF47B24ABB87CB197C41FC2874768BB27B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAvailabilityCheckU3Ed__62_MoveNext_mB4E697D0A20DA1FE17D7B5A47CFD37D9A8F4D599 (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAvailabilityCheckU3Ed__62_MoveNext_mB4E697D0A20DA1FE17D7B5A47CFD37D9A8F4D599_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VpsAvailability_t45DB38FE9BF4135673CE5455506068164625A197_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1ABCB9A2CA1FE87C833C0D42EF5790DE5D6D5D7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B34A45352A1F9AB3E6BCFB17173317AFF631C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1E32C34EADE26834700EF4ADABB38561179CEBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED772B549705A1BF599485764F40D84130414B4B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CAvailabilityCheckU3Ed__62_MoveNext_mB4E697D0A20DA1FE17D7B5A47CFD37D9A8F4D599_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6597));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6598));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6599));
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002f;
			}
			case 1:
			{
				goto IL_0031;
			}
			case 2:
			{
				goto IL_0033;
			}
			case 3:
			{
				goto IL_0035;
			}
			case 4:
			{
				goto IL_0037;
			}
			case 5:
			{
				goto IL_003c;
			}
			case 6:
			{
				goto IL_0041;
			}
			case 7:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_004b;
	}

IL_002f:
	{
		goto IL_004d;
	}

IL_0031:
	{
		goto IL_0076;
	}

IL_0033:
	{
		goto IL_008e;
	}

IL_0035:
	{
		goto IL_00b6;
	}

IL_0037:
	{
		goto IL_00ce;
	}

IL_003c:
	{
		goto IL_0116;
	}

IL_0041:
	{
		goto IL_0152;
	}

IL_0046:
	{
		goto IL_01eb;
	}

IL_004b:
	{
		return (bool)0;
	}

IL_004d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6600));
		// if (ARSession.state == ARSessionState.None)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6601));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6602));
		int32_t L_2;
		L_2 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6602));
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6603));
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6604));
		// yield return ARSession.CheckAvailability();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6605));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6606));
		RuntimeObject* L_4;
		L_4 = ARSession_CheckAvailability_m7090FD96E8580EB3E6CAB97B8344BF845B254D0A(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6606));
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0076:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6607));
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6608));
	}

IL_007e:
	{
		// yield return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6609));
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_008e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6610));
		__this->___U3CU3E1__state_0 = (-1);
		// if (ARSession.state == ARSessionState.NeedsInstall)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6611));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6612));
		int32_t L_5;
		L_5 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6612));
		V_2 = (bool)((((int32_t)L_5) == ((int32_t)3))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6613));
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_00be;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6614));
		// yield return ARSession.Install();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6615));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6616));
		RuntimeObject* L_7;
		L_7 = ARSession_Install_m9C4DCECEA000E16F4992376B7E40DA0C95B58166(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6616));
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00b6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6617));
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6618));
	}

IL_00be:
	{
		// yield return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6619));
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_00ce:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6620));
		__this->___U3CU3E1__state_0 = (-1);
		// if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6621));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6622));
		bool L_8;
		L_8 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6622));
		V_3 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6623));
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_011e;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6624));
		// Debug.Log("Requesting camera permission.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6625));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6626));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA1E32C34EADE26834700EF4ADABB38561179CEBE, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6626));
		// Permission.RequestUserPermission(Permission.Camera);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6627));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6628));
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6628));
		// yield return new WaitForSeconds(3.0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6629));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6630));
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, (3.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6630));
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_0116:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6631));
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6632));
	}

IL_011e:
	{
		// if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6633));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6634));
		bool L_11;
		L_11 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6634));
		V_4 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6635));
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_013f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6636));
		// Debug.LogWarning(
		//     "Failed to get camera permission. VPS availability check is not available.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6637));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6638));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1ABCB9A2CA1FE87C833C0D42EF5790DE5D6D5D7A, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6638));
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6639));
		return (bool)0;
	}

IL_013f:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6640));
		goto IL_015a;
	}

IL_0141:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6641));
		// yield return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6642));
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_0152:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6643));
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6644));
	}

IL_015a:
	{
		// while (_waitingForLocationService)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6645));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_13 = __this->___U3CU3E4__this_2;
		NullCheck(L_13);
		bool L_14 = L_13->____waitingForLocationService_36;
		V_5 = L_14;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6646));
		bool L_15 = V_5;
		if (L_15)
		{
			goto IL_0141;
		}
	}
	{
		// if (Input.location.status != LocationServiceStatus.Running)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6647));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6648));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_16;
		L_16 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6648));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6649));
		NullCheck(L_16);
		int32_t L_17;
		L_17 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_16, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6649));
		V_6 = (bool)((((int32_t)((((int32_t)L_17) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6650));
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_018f;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6651));
		// Debug.LogWarning(
		//     "Location service is not running. VPS availability check is not available.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6652));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6653));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1B34A45352A1F9AB3E6BCFB17173317AFF631C89, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6653));
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6654));
		return (bool)0;
	}

IL_018f:
	{
		// if (_isReturning)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6655));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_19 = __this->___U3CU3E4__this_2;
		NullCheck(L_19);
		bool L_20 = L_19->____isReturning_38;
		V_7 = L_20;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6656));
		bool L_21 = V_7;
		if (!L_21)
		{
			goto IL_01a3;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6657));
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6658));
		return (bool)0;
	}

IL_01a3:
	{
		// var location = Input.location.lastData;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6659));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6660));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_22;
		L_22 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6660));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6661));
		NullCheck(L_22);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_23;
		L_23 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_22, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6661));
		__this->___U3ClocationU3E5__1_3 = L_23;
		// var vpsAvailabilityPromise =
		//     AREarthManager.CheckVpsAvailability(location.latitude, location.longitude);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6662));
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_24 = (&__this->___U3ClocationU3E5__1_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6663));
		float L_25;
		L_25 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863(L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6663));
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_26 = (&__this->___U3ClocationU3E5__1_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6664));
		float L_27;
		L_27 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2(L_26, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6664));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6665));
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_28;
		L_28 = AREarthManager_CheckVpsAvailability_m05CD87D382FD14B2014B2A87FC0687B765EBC543(((double)L_25), ((double)L_27), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6665));
		__this->___U3CvpsAvailabilityPromiseU3E5__2_4 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvpsAvailabilityPromiseU3E5__2_4), (void*)L_28);
		// yield return vpsAvailabilityPromise;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6666));
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_29 = __this->___U3CvpsAvailabilityPromiseU3E5__2_4;
		__this->___U3CU3E2__current_1 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_29);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_01eb:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6667));
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.LogFormat("VPS Availability at ({0}, {1}): {2}",
		//     location.latitude, location.longitude, vpsAvailabilityPromise.Result);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6668));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_30;
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_32 = (&__this->___U3ClocationU3E5__1_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6669));
		float L_33;
		L_33 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863(L_32, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6669));
		float L_34 = L_33;
		RuntimeObject* L_35 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_35);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = L_31;
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_37 = (&__this->___U3ClocationU3E5__1_3);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6670));
		float L_38;
		L_38 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2(L_37, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6670));
		float L_39 = L_38;
		RuntimeObject* L_40 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_40);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_40);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_41 = L_36;
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_42 = __this->___U3CvpsAvailabilityPromiseU3E5__2_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6671));
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>::get_Result() */, L_42);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6671));
		int32_t L_44 = L_43;
		RuntimeObject* L_45 = Box(VpsAvailability_t45DB38FE9BF4135673CE5455506068164625A197_il2cpp_TypeInfo_var, &L_44);
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_45);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_45);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6672));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralED772B549705A1BF599485764F40D84130414B4B, L_41, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6672));
		// VPSCheckCanvas.SetActive(vpsAvailabilityPromise.Result != VpsAvailability.Available);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6673));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_46 = __this->___U3CU3E4__this_2;
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = L_46->___VPSCheckCanvas_13;
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_48 = __this->___U3CvpsAvailabilityPromiseU3E5__2_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6674));
		NullCheck(L_48);
		int32_t L_49;
		L_49 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>::get_Result() */, L_48);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6674));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6675));
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)((((int32_t)((((int32_t)L_49) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6675));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6676));
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAvailabilityCheckU3Ed__62_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m503EE05EDCEF0432FE66763F39C96BDC508ACE09 (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAvailabilityCheckU3Ed__62_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m503EE05EDCEF0432FE66763F39C96BDC508ACE09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CAvailabilityCheckU3Ed__62_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m503EE05EDCEF0432FE66763F39C96BDC508ACE09_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_Reset_mC7BE82AF639BDF9B11B59B0173CDB4A0065F8A7B (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_Reset_mC7BE82AF639BDF9B11B59B0173CDB4A0065F8A7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_Reset_mC7BE82AF639BDF9B11B59B0173CDB4A0065F8A7B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_Reset_mC7BE82AF639BDF9B11B59B0173CDB4A0065F8A7B_RuntimeMethod_var)));
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_get_Current_m664DC683300CCA8715CBAE58ED391458FA6F3EDE (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_get_Current_m664DC683300CCA8715CBAE58ED391458FA6F3EDE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_get_Current_m664DC683300CCA8715CBAE58ED391458FA6F3EDE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartLocationServiceU3Ed__63__ctor_m9155B6DD409AFDC92573E1346A62BE99084EB071 (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartLocationServiceU3Ed__63__ctor_m9155B6DD409AFDC92573E1346A62BE99084EB071_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CStartLocationServiceU3Ed__63__ctor_m9155B6DD409AFDC92573E1346A62BE99084EB071_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartLocationServiceU3Ed__63_System_IDisposable_Dispose_m1F2C91A9C549004FBF38FEE87CD26E8EE1F566E4 (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartLocationServiceU3Ed__63_System_IDisposable_Dispose_m1F2C91A9C549004FBF38FEE87CD26E8EE1F566E4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CStartLocationServiceU3Ed__63_System_IDisposable_Dispose_m1F2C91A9C549004FBF38FEE87CD26E8EE1F566E4_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartLocationServiceU3Ed__63_MoveNext_m8C1D5DE53F7DE281A1D7B7AA77AFEA71EAD82C83 (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartLocationServiceU3Ed__63_MoveNext_m8C1D5DE53F7DE281A1D7B7AA77AFEA71EAD82C83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072A3A99BF91D3581396944AD57B4BB254BF43AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ABC0AF5010BE71FECDAD9A690FA25A94F0B1495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DBA97D072F0A39EE526621BF8EDC2AD83D9BB3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE2F1BFE1BE99B9017E10F89B16590A5D791925A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CStartLocationServiceU3Ed__63_MoveNext_m8C1D5DE53F7DE281A1D7B7AA77AFEA71EAD82C83_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6677));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6678));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6679));
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_007b;
	}

IL_001f:
	{
		goto IL_00d7;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6680));
		// _waitingForLocationService = true;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6681));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		L_2->____waitingForLocationService_36 = (bool)1;
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6682));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6683));
		bool L_3;
		L_3 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6683));
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6684));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0083;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6685));
		// Debug.Log("Requesting fine location permission.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6686));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6687));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0ABC0AF5010BE71FECDAD9A690FA25A94F0B1495, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6687));
		// Permission.RequestUserPermission(Permission.FineLocation);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6688));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6689));
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6689));
		// yield return new WaitForSeconds(3.0f);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6690));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6691));
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (3.0f), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6691));
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_007b:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6692));
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6693));
	}

IL_0083:
	{
		// if (!Input.location.isEnabledByUser)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6694));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6695));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_6;
		L_6 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6695));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6696));
		NullCheck(L_6);
		bool L_7;
		L_7 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6696));
		V_2 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6697));
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_00ae;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6698));
		// Debug.Log("Location service is disabled by User.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6699));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6700));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7DBA97D072F0A39EE526621BF8EDC2AD83D9BB3A, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6700));
		// _waitingForLocationService = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6701));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		L_9->____waitingForLocationService_36 = (bool)0;
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6702));
		return (bool)0;
	}

IL_00ae:
	{
		// Debug.Log("Start location service.");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6703));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6704));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral072A3A99BF91D3581396944AD57B4BB254BF43AD, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6704));
		// Input.location.Start();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6705));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6706));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_10;
		L_10 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6706));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6707));
		NullCheck(L_10);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6707));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6708));
		goto IL_00df;
	}

IL_00c6:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6709));
		// yield return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6710));
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d7:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6711));
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6712));
	}

IL_00df:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6713));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6714));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_11;
		L_11 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6714));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6715));
		NullCheck(L_11);
		int32_t L_12;
		L_12 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_11, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6715));
		V_3 = (bool)((((int32_t)L_12) == ((int32_t)1))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6716));
		bool L_13 = V_3;
		if (L_13)
		{
			goto IL_00c6;
		}
	}
	{
		// _waitingForLocationService = false;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6717));
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_14 = __this->___U3CU3E4__this_2;
		NullCheck(L_14);
		L_14->____waitingForLocationService_36 = (bool)0;
		// if (Input.location.status != LocationServiceStatus.Running)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6718));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6719));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_15;
		L_15 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6719));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6720));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_15, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6720));
		V_4 = (bool)((((int32_t)((((int32_t)L_16) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6721));
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0142;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6722));
		// Debug.LogWarningFormat(
		//     "Location service ends with {0} status.", Input.location.status);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6723));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = L_18;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6724));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_20;
		L_20 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6724));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6725));
		NullCheck(L_20);
		int32_t L_21;
		L_21 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_20, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6725));
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6726));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteralEE2F1BFE1BE99B9017E10F89B16590A5D791925A, L_19, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6726));
		// Input.location.Stop();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6727));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6728));
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_24;
		L_24 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6728));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6729));
		NullCheck(L_24);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_24, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6729));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6730));
	}

IL_0142:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6731));
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartLocationServiceU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m44036CDC29C45DD97F22C426CB18023631767C97 (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartLocationServiceU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m44036CDC29C45DD97F22C426CB18023631767C97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CStartLocationServiceU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m44036CDC29C45DD97F22C426CB18023631767C97_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_Reset_m3465864CBA8D60384D7A2FCCE4F2495A0D25EC97 (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_Reset_m3465864CBA8D60384D7A2FCCE4F2495A0D25EC97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_Reset_m3465864CBA8D60384D7A2FCCE4F2495A0D25EC97_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_Reset_m3465864CBA8D60384D7A2FCCE4F2495A0D25EC97_RuntimeMethod_var)));
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_get_Current_m40BA25B8C1C02F78ACED96E86C010AE4655E0831 (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_get_Current_m40BA25B8C1C02F78ACED96E86C010AE4655E0831_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_get_Current_m40BA25B8C1C02F78ACED96E86C010AE4655E0831_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_Update_m4C02B57A221CB119573B865749FAEFB0E75F569A (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeAreaScaler_Update_m4C02B57A221CB119573B865749FAEFB0E75F569A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SafeAreaScaler_Update_m4C02B57A221CB119573B865749FAEFB0E75F569A_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6732));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6733));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6734));
		// safeArea = Screen.safeArea;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6735));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6736));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6736));
		V_0 = L_0;
		// if (_screenSafeArea != safeArea)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6737));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = __this->____screenSafeArea_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6738));
		bool L_3;
		L_3 = Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D(L_1, L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6738));
		V_1 = L_3;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6739));
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6740));
		// _screenSafeArea = safeArea;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6741));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5 = V_0;
		__this->____screenSafeArea_4 = L_5;
		// MatchRectTransformToSafeArea();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6742));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6743));
		SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6743));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6744));
	}

IL_0027:
	{
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6745));
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64 (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1), (&V_2));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6746));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6747));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6748));
		// RectTransform rectTransform = GetComponent<RectTransform>();
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6749));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6750));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6750));
		V_0 = L_0;
		// Vector2 offsetMin = new Vector2(_screenSafeArea.xMin,
		//     Screen.height - _screenSafeArea.yMax);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6751));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&__this->____screenSafeArea_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6752));
		float L_2;
		L_2 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D(L_1, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6752));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6753));
		int32_t L_3;
		L_3 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6753));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&__this->____screenSafeArea_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6754));
		float L_5;
		L_5 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6754));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6755));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), L_2, ((float)il2cpp_codegen_subtract(((float)L_3), L_5)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6755));
		// Vector2 offsetMax = new Vector2(
		//     _screenSafeArea.xMax - Screen.width,
		//     -_screenSafeArea.yMin);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6756));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = (&__this->____screenSafeArea_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6757));
		float L_7;
		L_7 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6757));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6758));
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6758));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&__this->____screenSafeArea_4);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6759));
		float L_10;
		L_10 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_9, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6759));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6760));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_2), ((float)il2cpp_codegen_subtract(L_7, ((float)L_8))), ((-L_10)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6760));
		// rectTransform.offsetMin = offsetMin;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6761));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6762));
		NullCheck(L_11);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_11, L_12, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6762));
		// rectTransform.offsetMax = offsetMax;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6763));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = V_2;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6764));
		NullCheck(L_13);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_13, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6764));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6765));
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler__ctor_m61ED2F6F927714C4ED11AA2AEE2A0B9EA79B484B (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeAreaScaler__ctor_m61ED2F6F927714C4ED11AA2AEE2A0B9EA79B484B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SafeAreaScaler__ctor_m61ED2F6F927714C4ED11AA2AEE2A0B9EA79B484B_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6766));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6767));
	{
		// private Rect _screenSafeArea = new Rect(0, 0, 0, 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6768));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6769));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6769));
		__this->____screenSafeArea_4 = L_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6770));
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsAssemblyU2DCSharp + 6770));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 7445));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 7446));
	{
		// get => s_State;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnity_XR_ARFoundation + 7447));
		int32_t L_0 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_State_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_PARAMS(methodExecutionContextParameters, (&___x0), (&___y1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_RuntimeMethod_var, methodExecutionContextThis, methodExecutionContextParameters, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7263));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7264));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7265));
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7266));
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7267));
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsUnityEngine_CoreModule + 7268));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
