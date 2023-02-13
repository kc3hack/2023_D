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

// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs>
struct Action_1_t11340E5174173030E076A75316E18A395082F8A5;
// System.Action`1<UnityEngine.XR.ARFoundation.ARSessionStateChangedEventArgs>
struct Action_1_t325C602D999E964DB72210E493635E83F8D6CE68;
// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs>
struct Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB;
// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0;
// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARAnchor>
struct Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARRaycast>
struct Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD;
// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906;
// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct Func_4_t0755A61145E99905AC47DF85416091FB30758B8A;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject>
struct IEnumerable_1_t73E24A3585FE00B560A12D422A7066F996ACD0A0;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>>
struct List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARAnchor>
struct List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycast>
struct List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster>
struct List_1_t50405350B03FC84D28784364F500CB08B82435B5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem>
struct List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor>
struct List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem>
struct List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor>
struct List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct List_1_t3903923EFB501C3A0672A0E60558673B85435D8E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct List_1_tC86363A0A1DF8199DB382C6CDB5A1254F8660A34;
// System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.XR.ARFoundation.ARRaycastHit[]
struct ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory[]
struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E;
// UnityEngine.XR.ARFoundation.ARCameraManager
struct ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F;
// UnityEngine.XR.ARCore.ARCoreCameraSubsystem
struct ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9;
// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41;
// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter
struct ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3;
// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD;
// UnityEngine.XR.ARCore.ARCoreSessionSubsystem
struct ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349;
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
// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD;
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController
struct GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.LocationService
struct LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
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
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
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
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
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
// UnityEngine.XR.ARSubsystems.XRAnchorSubsystem
struct XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF;
// UnityEngine.XR.ARSubsystems.XRRaycastSubsystem
struct XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t1E6E6CD0C279BA8BC4E4ED94E539552036B9C399;
// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent
struct OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
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
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FeatureSupported_tC15463343F78E985BF776995FBE804EC3D2991A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TerrainAnchorState_tAA75FC29D5E05B159FB4B825A67F7ADEACDE0C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VpsAvailability_t45DB38FE9BF4135673CE5455506068164625A197_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E;
IL2CPP_EXTERN_C String_t* _stringLiteral072A3A99BF91D3581396944AD57B4BB254BF43AD;
IL2CPP_EXTERN_C String_t* _stringLiteral098533C94B14961259EF414728C4A68C6289E9AE;
IL2CPP_EXTERN_C String_t* _stringLiteral0ABC0AF5010BE71FECDAD9A690FA25A94F0B1495;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD5241E070B724D1D5CE76F8E905B1B2E830A43;
IL2CPP_EXTERN_C String_t* _stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68;
IL2CPP_EXTERN_C String_t* _stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral1ABCB9A2CA1FE87C833C0D42EF5790DE5D6D5D7A;
IL2CPP_EXTERN_C String_t* _stringLiteral1B34A45352A1F9AB3E6BCFB17173317AFF631C89;
IL2CPP_EXTERN_C String_t* _stringLiteral1CD8725749511AED54A82B7EEB159755F15D7128;
IL2CPP_EXTERN_C String_t* _stringLiteral1E92CEC960E5FB77AD7949D29EC00C6B6DFF56F6;
IL2CPP_EXTERN_C String_t* _stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19;
IL2CPP_EXTERN_C String_t* _stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE;
IL2CPP_EXTERN_C String_t* _stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333;
IL2CPP_EXTERN_C String_t* _stringLiteral3187553363A94FA380DF7928E3C910219A40C90A;
IL2CPP_EXTERN_C String_t* _stringLiteral31D77236056880C0D3C936B020E57CFE072FD559;
IL2CPP_EXTERN_C String_t* _stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB;
IL2CPP_EXTERN_C String_t* _stringLiteral3F41736E40E63BD9FC3F06C5C5844E17A1E08CFD;
IL2CPP_EXTERN_C String_t* _stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1;
IL2CPP_EXTERN_C String_t* _stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64;
IL2CPP_EXTERN_C String_t* _stringLiteral53DECEA44E2F813BD2CDB9161208758884B4FA95;
IL2CPP_EXTERN_C String_t* _stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958;
IL2CPP_EXTERN_C String_t* _stringLiteral6E3C6AE4B99BA40D7B7B4423E5F5439265CB22BC;
IL2CPP_EXTERN_C String_t* _stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED;
IL2CPP_EXTERN_C String_t* _stringLiteral7A94DA5D5DB50FDE5685474E5DC8D83B393024C8;
IL2CPP_EXTERN_C String_t* _stringLiteral7DBA97D072F0A39EE526621BF8EDC2AD83D9BB3A;
IL2CPP_EXTERN_C String_t* _stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91;
IL2CPP_EXTERN_C String_t* _stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9;
IL2CPP_EXTERN_C String_t* _stringLiteral82B440B1806954FBB712A20CF8BA640DA934EF8C;
IL2CPP_EXTERN_C String_t* _stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB;
IL2CPP_EXTERN_C String_t* _stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9;
IL2CPP_EXTERN_C String_t* _stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828;
IL2CPP_EXTERN_C String_t* _stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87;
IL2CPP_EXTERN_C String_t* _stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888;
IL2CPP_EXTERN_C String_t* _stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD;
IL2CPP_EXTERN_C String_t* _stringLiteralA1E32C34EADE26834700EF4ADABB38561179CEBE;
IL2CPP_EXTERN_C String_t* _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3;
IL2CPP_EXTERN_C String_t* _stringLiteralB13B70E0770D60CE32B3FC8245938298844E9F9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284;
IL2CPP_EXTERN_C String_t* _stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90;
IL2CPP_EXTERN_C String_t* _stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146;
IL2CPP_EXTERN_C String_t* _stringLiteralBF1592B8A0F09DDD2C81642EEB64EA7C62B32E29;
IL2CPP_EXTERN_C String_t* _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA796EB4404F7FE0A210545E10CD3705E9368E0;
IL2CPP_EXTERN_C String_t* _stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478;
IL2CPP_EXTERN_C String_t* _stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralEC2DBADB2D94879827209856D3681D3473726A46;
IL2CPP_EXTERN_C String_t* _stringLiteralED772B549705A1BF599485764F40D84130414B4B;
IL2CPP_EXTERN_C String_t* _stringLiteralEE2F1BFE1BE99B9017E10F89B16590A5D791925A;
IL2CPP_EXTERN_C String_t* _stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847;
IL2CPP_EXTERN_C String_t* _stringLiteralF971503E7E762E947F8E0E4CFCDBDEEBB6C91D01;
IL2CPP_EXTERN_C String_t* _stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GeospatialController_OnTerrainToggled_m84468C4CD7B19CC6E3F75F4BB0B2FE3A19660A78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_Reset_mC7BE82AF639BDF9B11B59B0173CDB4A0065F8A7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_Reset_m51425ECE54B7ADD4A0691C79D2FFE7625E730955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_Reset_m3465864CBA8D60384D7A2FCCE4F2495A0D25EC97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__60_0_mE2C05EFFFD63EAFBCE22ECA9B6F52DD78DB13572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass59_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_mD4E003F3D47C2403D68D5E7653300A70D8BAB182_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>
struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARRaycastHitU5BU5D_t34FE14E360F945895923A0FE69CC277E7D13027E* ___s_emptyArray_5;
};

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

// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* ___s_emptyArray_5;
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
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection
struct GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory> Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::Collection
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* ___Collection_0;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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
	// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::<retry>5__2
	int32_t ___U3CretryU3E5__2_4;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
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

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
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

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
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

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// Google.XR.ARCoreExtensions.GeospatialPose
struct GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C 
{
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Latitude
	double ___Latitude_0;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Longitude
	double ___Longitude_1;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Altitude
	double ___Altitude_2;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::Heading
	double ___Heading_3;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HeadingAccuracy
	double ___HeadingAccuracy_4;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::HorizontalAccuracy
	double ___HorizontalAccuracy_5;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::VerticalAccuracy
	double ___VerticalAccuracy_6;
	// UnityEngine.Quaternion Google.XR.ARCoreExtensions.GeospatialPose::EunRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___EunRotation_7;
	// System.Double Google.XR.ARCoreExtensions.GeospatialPose::OrientationYawAccuracy
	double ___OrientationYawAccuracy_8;
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

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
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
	// UnityEngine.LocationInfo Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::<location>5__2
	LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 ___U3ClocationU3E5__2_3;
	// Google.XR.ARCoreExtensions.VpsAvailabilityPromise Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::<vpsAvailabilityPromise>5__3
	VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* ___U3CvpsAvailabilityPromiseU3E5__3_4;
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ____current_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// Google.XR.ARCoreExtensions.VpsAvailabilityPromise
struct VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1  : public InterruptiblePromise_1_tC38DF8D833B705AD59D8C58E4E6F6ECA030F9270
{
};

// UnityEngine.XR.ARSubsystems.XRRaycastHit
struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRRaycastHit::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_2;
	// System.Single UnityEngine.XR.ARSubsystems.XRRaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.XR.ARSubsystems.TrackableType UnityEngine.XR.ARSubsystems.XRRaycastHit::m_HitType
	int32_t ___m_HitType_4;
};

struct XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780_StaticFields
{
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARSubsystems.XRRaycastHit::s_Default
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___s_Default_0;
};

// System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654  : public MulticastDelegate_t
{
};

// System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>
struct Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig
struct ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// Google.XR.ARCoreExtensions.CloudAnchorMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::CloudAnchorMode
	int32_t ___CloudAnchorMode_4;
	// Google.XR.ARCoreExtensions.GeospatialMode Google.XR.ARCoreExtensions.ARCoreExtensionsConfig::GeospatialMode
	int32_t ___GeospatialMode_5;
};

// UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 
{
	// System.Single UnityEngine.XR.ARFoundation.ARRaycastHit::<distance>k__BackingField
	float ___U3CdistanceU3Ek__BackingField_0;
	// UnityEngine.XR.ARFoundation.ARTrackable UnityEngine.XR.ARFoundation.ARRaycastHit::<trackable>k__BackingField
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	// UnityEngine.XR.ARSubsystems.XRRaycastHit UnityEngine.XR.ARFoundation.ARRaycastHit::m_Hit
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARRaycastHit::m_Transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_pinvoke
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARRaycastHit
struct ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70_marshaled_com
{
	float ___U3CdistanceU3Ek__BackingField_0;
	ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0* ___U3CtrackableU3Ek__BackingField_1;
	XRRaycastHit_t87A29A58C1D41AF1B3995B73777A7494B0695780 ___m_Hit_2;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_Transform_3;
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

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider>
struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRAnchorSubsystem_tB8B108EFBD93D4AFD53DCE7BD599009F79D214AF* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t65387FE114D984E6DCFF71774BFC19CEB318A9BE* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t9F2B0C5D9A34683317CA96A0A733BA6B33CC089A* ___s_SubsystemInstances_6;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider>
struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRRaycastSubsystem_t48087E79DE9617C7E866875C8DDD3124C9E068B7* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t97C3D1A8E80E095D7CE223BC4D02400F78DA063F* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tD793A24512B84D46F925E4CE4DBD30955A42C94C* ___s_SubsystemInstances_6;
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

// Google.XR.ARCoreExtensions.ARCoreExtensions
struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.XR.ARFoundation.ARSession Google.XR.ARCoreExtensions.ARCoreExtensions::Session
	ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* ___Session_4;
	// UnityEngine.XR.ARFoundation.ARSessionOrigin Google.XR.ARCoreExtensions.ARCoreExtensions::SessionOrigin
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___SessionOrigin_5;
	// UnityEngine.XR.ARFoundation.ARCameraManager Google.XR.ARCoreExtensions.ARCoreExtensions::CameraManager
	ARCameraManager_t6E957EA922911B8447D086D9FB1F860EC967BD9F* ___CameraManager_6;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::ARCoreExtensionsConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ___ARCoreExtensionsConfig_7;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::CameraConfigFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ___CameraConfigFilter_8;
	// Google.XR.ARCoreExtensions.ARCoreExtensions/OnChooseXRCameraConfigurationEvent Google.XR.ARCoreExtensions.ARCoreExtensions::OnChooseXRCameraConfiguration
	OnChooseXRCameraConfigurationEvent_t53F1C593A476BE5A1C3AC0C3AF1032C79ABEB080* ___OnChooseXRCameraConfiguration_9;
	// System.String Google.XR.ARCoreExtensions.ARCoreExtensions::_currentPermissionRequest
	String_t* ____currentPermissionRequest_12;
	// System.Collections.Generic.HashSet`1<System.String> Google.XR.ARCoreExtensions.ARCoreExtensions::_requiredPermissionNames
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ____requiredPermissionNames_13;
	// UnityEngine.XR.ARCore.ARCoreSessionSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreSubsystem
	ARCoreSessionSubsystem_t7B755C740E5ADE41F6B32317BC5105B96B137349* ____arCoreSubsystem_14;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsConfig Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedConfig
	ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* ____cachedConfig_15;
	// UnityEngine.XR.ARCore.ARCoreCameraSubsystem Google.XR.ARCoreExtensions.ARCoreExtensions::_arCoreCameraSubsystem
	ARCoreCameraSubsystem_t037314216B2DA66DC532ABFB17CFD90B38830AD9* ____arCoreCameraSubsystem_16;
	// Google.XR.ARCoreExtensions.ARCoreExtensionsCameraConfigFilter Google.XR.ARCoreExtensions.ARCoreExtensions::_cachedFilter
	ARCoreExtensionsCameraConfigFilter_t7B45D467C1213E2DF2CA532D67388822ED2FF4C3* ____cachedFilter_17;
};

struct ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41_StaticFields
{
	// UnityEngine.AndroidJavaClass Google.XR.ARCoreExtensions.ARCoreExtensions::_versionInfo
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ____versionInfo_11;
	// Google.XR.ARCoreExtensions.ARCoreExtensions Google.XR.ARCoreExtensions.ARCoreExtensions::<_instance>k__BackingField
	ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* ___U3C_instanceU3Ek__BackingField_18;
};

// Google.XR.ARCoreExtensions.AREarthManager
struct AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.XR.ARCoreExtensions.ARGeospatialAnchor
struct ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.IntPtr Google.XR.ARCoreExtensions.ARGeospatialAnchor::_anchorHandle
	intptr_t ____anchorHandle_4;
	// UnityEngine.Pose Google.XR.ARCoreExtensions.ARGeospatialAnchor::_pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ____pose_5;
};

// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera UnityEngine.XR.ARFoundation.ARSessionOrigin::m_Camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___m_Camera_4;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARSessionOrigin::<trackablesParent>k__BackingField
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CtrackablesParentU3Ek__BackingField_5;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARTrackablesParentTransformChangedEventArgs> UnityEngine.XR.ARFoundation.ARSessionOrigin::trackablesParentTransformChanged
	Action_1_t2096FCE7327B89C5101BFB38155839F3166605FB* ___trackablesParentTransformChanged_6;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARSessionOrigin::m_ContentOffsetGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_ContentOffsetGameObject_7;
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

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRAnchorSubsystem,UnityEngine.XR.ARSubsystems.XRAnchorSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRAnchorSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRAnchor,UnityEngine.XR.ARFoundation.ARAnchor>
struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6  : public SubsystemLifecycleManager_3_tAE0BB0092EB47B81AA111C370381E3BA14C88DD3
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t525DE08A369658A5AE7D624D571ED15216817535* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t5C2EBF017989E44F3D1D11AF502E10F6F8D9AB53* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRRaycastSubsystem,UnityEngine.XR.ARSubsystems.XRRaycastSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRRaycastSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRRaycast,UnityEngine.XR.ARFoundation.ARRaycast>
struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409  : public SubsystemLifecycleManager_3_tF871EF43DE89B354DB5832CC545E7E0EEF19DC8C
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t4D1D3AB1188A73B9F0416424BA9B873577C418FD* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_tE7BEADF38CADBCC46B040CF07A1B719A7F7E5123* ___s_Removed_13;
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

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
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

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARAnchorManager
struct ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E  : public ARTrackableManager_5_t58BCDA2A5956989C6A20CC1E41B0F6DBEED545B6
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARAnchorManager::m_AnchorPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_AnchorPrefab_14;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARAnchorsChangedEventArgs> UnityEngine.XR.ARFoundation.ARAnchorManager::anchorsChanged
	Action_1_t11340E5174173030E076A75316E18A395082F8A5* ___anchorsChanged_15;
};

// UnityEngine.XR.ARFoundation.ARRaycastManager
struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44  : public ARTrackableManager_5_tB0551B87CFE2349D3C8AD77F1642F669F950A409
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_RaycastPrefab_14;
	// System.Func`4<UnityEngine.Vector2,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastViewportDelegate
	Func_4_t0755A61145E99905AC47DF85416091FB30758B8A* ___m_RaycastViewportDelegate_17;
	// System.Func`4<UnityEngine.Ray,UnityEngine.XR.ARSubsystems.TrackableType,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::m_RaycastRayDelegate
	Func_4_t917A5E0B468B7C0436CA84D065BEB6FC43C9B906* ___m_RaycastRayDelegate_18;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.IRaycaster> UnityEngine.XR.ARFoundation.ARRaycastManager::m_Raycasters
	List_1_t50405350B03FC84D28784364F500CB08B82435B5* ___m_Raycasters_19;
};

struct ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44_StaticFields
{
	// System.Comparison`1<UnityEngine.XR.ARFoundation.ARRaycastHit> UnityEngine.XR.ARFoundation.ARRaycastManager::s_RaycastHitComparer
	Comparison_1_t0E0A9C99A8D29FBC5FA5ED9B9B2175A13C6578C0* ___s_RaycastHitComparer_15;
	// System.Collections.Generic.List`1<Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRRaycastHit>> UnityEngine.XR.ARFoundation.ARRaycastManager::s_NativeRaycastHits
	List_1_t554F70DABEBFEED67B5400AB73777A6D987F0D36* ___s_NativeRaycastHits_16;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
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

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
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
// Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory[]
struct GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244  : public RuntimeArray
{
	ALIGN_FIELD (8) GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C m_Items[1];

	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___SerializedTime_0), (void*)NULL);
	}
	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___SerializedTime_0), (void*)NULL);
	}
};


// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_gshared (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_gshared_inline (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_gshared (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7_gshared (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* ___match0, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F_gshared (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Sort(System.Comparison`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* ___comparison0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_gshared (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.DateTime,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mA9FAFCE6D46DCD7B722BE813B21E4ECA68FEB090 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mDF6996276B4E73B9E1271914CC999C7C07DB30BF (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, double ___latitude0, double ___longitude1, double ___altitude2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation3, const RuntimeMethod* method) ;
// System.DateTime System.Convert::ToDateTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Convert_ToDateTime_mE15C6E51579A9876015F9E295D5025B80BE73726 (String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::get_CreatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor()
inline void List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE (const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, bool ___enable0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Clear()
inline void List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SaveGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::get_CameraGeospatialPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceGeospatialAnchor(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___history0, bool ___terrain1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Add(T)
inline void List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C, const RuntimeMethod*))List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Screen::set_autorotateToLandscapeLeft(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeLeft_mEBF1EEDF3BCD85A85FEF5B59ECEE40D6A73983D0 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToLandscapeRight(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToLandscapeRight_m259F67F2F38E5E28A7A5ABBEA5CFE9650DD7B184 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_autorotateToPortraitUpsideDown(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_autorotateToPortraitUpsideDown_m322363C3E0347AF6C62240BD814C8719CF54AF12 (bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_orientation(UnityEngine.ScreenOrientation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F (int32_t ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::StartLocationService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_StartLocationService_m72676812B8A1C07C07EAB8574995C827CF57DBB8 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LoadGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LoadGeospatialAnchorHistory_m78B8DEB20F80FE681FA18AC34EFBB190DE330605 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Count()
inline int32_t List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.LocationService UnityEngine.Input::get_location()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5 (const RuntimeMethod* method) ;
// System.Void UnityEngine.LocationService::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96 (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::UpdateDebugInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_UpdateDebugInfo_m4DD7408BE036B30EE50B0F2CB2D5ED7B24B314A1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARFoundation.ARSessionState UnityEngine.XR.ARFoundation.ARSession::get_state()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.FeatureSupported Google.XR.ARCoreExtensions.AREarthManager::IsGeospatialModeSupported(Google.XR.ARCoreExtensions.GeospatialMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, int32_t ___mode0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, String_t* ___reason0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.EarthState Google.XR.ARCoreExtensions.AREarthManager::get_EarthState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.LocationServiceStatus UnityEngine.LocationService::get_status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD (LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* __this, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.TrackingState Google.XR.ARCoreExtensions.AREarthManager::get_EarthTrackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Google.XR.ARCoreExtensions.ARGeospatialAnchor>()
inline ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// Google.XR.ARCoreExtensions.TerrainAnchorState Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_terrainAnchorState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ResolveHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ResolveHistory_mF4A2FFB2FC64B439305A9B081795341F5F4A7359 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016 (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Touch::get_fingerId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, int32_t ___pointerId0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceAnchorByScreenTap(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_PlaceAnchorByScreenTap_m021914E495D517012F09D3EDBA45CCD4E8DC54FB (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String System.Double::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75 (double* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String UnityEngine.Quaternion::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Quaternion_ToString_m57FD902CB5D5FDE30866C169033515B5330B3C5F (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__55__ctor_m9E5219C260204A9A77AF728DB09C35CDA89F655A (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::.ctor()
inline void List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9 (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARFoundation.ARRaycastManager::Raycast(UnityEngine.Vector2,System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>,UnityEngine.XR.ARSubsystems.TrackableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC (ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint0, List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* ___hitResults1, int32_t ___trackableTypes2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Count()
inline int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, const RuntimeMethod*))List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARRaycastHit>::get_Item(System.Int32)
inline ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 (*) (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*, int32_t, const RuntimeMethod*))List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_gshared)(__this, ___index0, method);
}
// UnityEngine.Pose UnityEngine.XR.ARFoundation.ARRaycastHit::get_pose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD (ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70* __this, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.GeospatialPose Google.XR.ARCoreExtensions.AREarthManager::Convert(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C AREarthManager_Convert_mFE57A53C163E9F5098E8F2CBA0A99D808D4675E1 (AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* __this, Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___pose0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::op_Equality(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___angle0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis1, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::AddAnchor(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78 (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) ;
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.ARAnchorManagerExtensions::ResolveAnchorOnTerrain(UnityEngine.XR.ARFoundation.ARAnchorManager,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ARAnchorManagerExtensions_ResolveAnchorOnTerrain_mFB8A8E939F146EA51A5FB24086DF91F1C6795AFF (ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* ___anchorManager0, double ___latitude1, double ___longitude2, double ___altitudeAboveTerrain3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::CheckTerrainAnchorState(Google.XR.ARCoreExtensions.ARGeospatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_CheckTerrainAnchorState_mECBEC2C347FE65F6FFE796326250B8B6985FF19F (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___anchor0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::GetEnumerator()
inline Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, const RuntimeMethod*))List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Dispose()
inline void Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6*, const RuntimeMethod*))Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::get_Current()
inline GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_inline (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method)
{
	return ((  GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C (*) (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6*, const RuntimeMethod*))Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::MoveNext()
inline bool Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447 (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6*, const RuntimeMethod*))Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_gshared)(__this, method);
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass59_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass59_0__ctor_m6F22441024D90C2CF796D64DD0097D8F04B68703 (U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE (String_t* ___key0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection>(System.String)
inline GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.Void System.Predicate`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7 (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveAll(System.Predicate`1<T>)
inline int32_t List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9*, const RuntimeMethod*))List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_gshared)(__this, ___match0, method);
}
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* __this, const RuntimeMethod* method) ;
// System.Void System.Comparison`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654*, RuntimeObject*, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::Sort(System.Comparison`1<T>)
inline void List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654*, const RuntimeMethod*))List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273 (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_gshared)(__this, ___index0, ___count1, method);
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::AvailabilityCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_AvailabilityCheck_mBD33DAAFFBDF7259087853B4298004DAD5D86519 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAvailabilityCheckU3Ed__62__ctor_m224E05104B55CBC623C7383CEBA521F580316D95 (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartLocationServiceU3Ed__63__ctor_m9155B6DD409AFDC92573E1346A62BE99084EB071 (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Screen::set_sleepTimeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A (int32_t ___value0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId Google.XR.ARCoreExtensions.ARGeospatialAnchor::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ARGeospatialAnchor_get_trackableId_m8560D0B2C6E8D602B97A0B61EA92499AAD683939 (ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// TSource System.Linq.Enumerable::Last<UnityEngine.GameObject>(System.Collections.Generic.IEnumerable`1<TSource>)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Last_TisRuntimeObject_m39971562AFD7CCF7CFF65E8CA0A457CCC3E18F8F_gshared)(___source0, method);
}
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::Subtract(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF5556B9529937F2A00DE74AC878F7F351A95CADC (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::CompareTo(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::CheckAvailability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_CheckAvailability_m7090FD96E8580EB3E6CAB97B8344BF845B254D0A (const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.XR.ARFoundation.ARSession::Install()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ARSession_Install_m9C4DCECEA000E16F4992376B7E40DA0C95B58166 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Android.Permission::HasUserAuthorizedPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B (String_t* ___permission0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Android.Permission::RequestUserPermission(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242 (String_t* ___permission0, const RuntimeMethod* method) ;
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
// UnityEngine.Rect UnityEngine.Screen::get_safeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lhs0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rhs1, const RuntimeMethod* method) ;
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::MatchRectTransformToSafeArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64 (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
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
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Quaternion::IsEqualUsingDot(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled)
{
	marshaled.___SerializedTime_0 = il2cpp_codegen_marshal_string(unmarshaled.___SerializedTime_0);
	marshaled.___Latitude_1 = unmarshaled.___Latitude_1;
	marshaled.___Longitude_2 = unmarshaled.___Longitude_2;
	marshaled.___Altitude_3 = unmarshaled.___Altitude_3;
	marshaled.___Heading_4 = unmarshaled.___Heading_4;
	marshaled.___EunRotation_5 = unmarshaled.___EunRotation_5;
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke_back(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled)
{
	unmarshaled.___SerializedTime_0 = il2cpp_codegen_marshal_string_result(marshaled.___SerializedTime_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SerializedTime_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___SerializedTime_0));
	double unmarshaledLatitude_temp_1 = 0.0;
	unmarshaledLatitude_temp_1 = marshaled.___Latitude_1;
	unmarshaled.___Latitude_1 = unmarshaledLatitude_temp_1;
	double unmarshaledLongitude_temp_2 = 0.0;
	unmarshaledLongitude_temp_2 = marshaled.___Longitude_2;
	unmarshaled.___Longitude_2 = unmarshaledLongitude_temp_2;
	double unmarshaledAltitude_temp_3 = 0.0;
	unmarshaledAltitude_temp_3 = marshaled.___Altitude_3;
	unmarshaled.___Altitude_3 = unmarshaledAltitude_temp_3;
	double unmarshaledHeading_temp_4 = 0.0;
	unmarshaledHeading_temp_4 = marshaled.___Heading_4;
	unmarshaled.___Heading_4 = unmarshaledHeading_temp_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledEunRotation_temp_5;
	memset((&unmarshaledEunRotation_temp_5), 0, sizeof(unmarshaledEunRotation_temp_5));
	unmarshaledEunRotation_temp_5 = marshaled.___EunRotation_5;
	unmarshaled.___EunRotation_5 = unmarshaledEunRotation_temp_5;
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_pinvoke_cleanup(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___SerializedTime_0);
	marshaled.___SerializedTime_0 = NULL;
}
// Conversion methods for marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled)
{
	marshaled.___SerializedTime_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___SerializedTime_0);
	marshaled.___Latitude_1 = unmarshaled.___Latitude_1;
	marshaled.___Longitude_2 = unmarshaled.___Longitude_2;
	marshaled.___Altitude_3 = unmarshaled.___Altitude_3;
	marshaled.___Heading_4 = unmarshaled.___Heading_4;
	marshaled.___EunRotation_5 = unmarshaled.___EunRotation_5;
}
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com_back(const GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C& unmarshaled)
{
	unmarshaled.___SerializedTime_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___SerializedTime_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___SerializedTime_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___SerializedTime_0));
	double unmarshaledLatitude_temp_1 = 0.0;
	unmarshaledLatitude_temp_1 = marshaled.___Latitude_1;
	unmarshaled.___Latitude_1 = unmarshaledLatitude_temp_1;
	double unmarshaledLongitude_temp_2 = 0.0;
	unmarshaledLongitude_temp_2 = marshaled.___Longitude_2;
	unmarshaled.___Longitude_2 = unmarshaledLongitude_temp_2;
	double unmarshaledAltitude_temp_3 = 0.0;
	unmarshaledAltitude_temp_3 = marshaled.___Altitude_3;
	unmarshaled.___Altitude_3 = unmarshaledAltitude_temp_3;
	double unmarshaledHeading_temp_4 = 0.0;
	unmarshaledHeading_temp_4 = marshaled.___Heading_4;
	unmarshaled.___Heading_4 = unmarshaledHeading_temp_4;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledEunRotation_temp_5;
	memset((&unmarshaledEunRotation_temp_5), 0, sizeof(unmarshaledEunRotation_temp_5));
	unmarshaledEunRotation_temp_5 = marshaled.___EunRotation_5;
	unmarshaled.___EunRotation_5 = unmarshaledEunRotation_temp_5;
}
// Conversion method for clean up from marshalling of: Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory
IL2CPP_EXTERN_C void GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshal_com_cleanup(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___SerializedTime_0);
	marshaled.___SerializedTime_0 = NULL;
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.DateTime,System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mA9FAFCE6D46DCD7B722BE813B21E4ECA68FEB090 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method) 
{
	{
		// SerializedTime = time.ToString();
		String_t* L_0;
		L_0 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&___time0), NULL);
		__this->___SerializedTime_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SerializedTime_0), (void*)L_0);
		// Latitude = latitude;
		double L_1 = ___latitude1;
		__this->___Latitude_1 = L_1;
		// Longitude = longitude;
		double L_2 = ___longitude2;
		__this->___Longitude_2 = L_2;
		// Altitude = altitude;
		double L_3 = ___altitude3;
		__this->___Altitude_3 = L_3;
		// Heading = 0.0f;
		__this->___Heading_4 = (0.0);
		// EunRotation = eunRotation;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___eunRotation4;
		__this->___EunRotation_5 = L_4;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeospatialAnchorHistory__ctor_mA9FAFCE6D46DCD7B722BE813B21E4ECA68FEB090_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___time0, double ___latitude1, double ___longitude2, double ___altitude3, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation4, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	GeospatialAnchorHistory__ctor_mA9FAFCE6D46DCD7B722BE813B21E4ECA68FEB090(_thisAdjusted, ___time0, ___latitude1, ___longitude2, ___altitude3, ___eunRotation4, method);
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::.ctor(System.Double,System.Double,System.Double,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistory__ctor_mDF6996276B4E73B9E1271914CC999C7C07DB30BF (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, double ___latitude0, double ___longitude1, double ___altitude2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this(DateTime.Now, latitude, longitude, altitude, eunRotation)
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		double L_1 = ___latitude0;
		double L_2 = ___longitude1;
		double L_3 = ___altitude2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___eunRotation3;
		GeospatialAnchorHistory__ctor_mA9FAFCE6D46DCD7B722BE813B21E4ECA68FEB090(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void GeospatialAnchorHistory__ctor_mDF6996276B4E73B9E1271914CC999C7C07DB30BF_AdjustorThunk (RuntimeObject* __this, double ___latitude0, double ___longitude1, double ___altitude2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___eunRotation3, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	GeospatialAnchorHistory__ctor_mDF6996276B4E73B9E1271914CC999C7C07DB30BF(_thisAdjusted, ___latitude0, ___longitude1, ___altitude2, ___eunRotation3, method);
}
// System.DateTime Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::get_CreatedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public DateTime CreatedTime => Convert.ToDateTime(SerializedTime);
		String_t* L_0 = __this->___SerializedTime_0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Convert_ToDateTime_mE15C6E51579A9876015F9E295D5025B80BE73726(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D _returnValue;
	_returnValue = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A(_thisAdjusted, method);
	return _returnValue;
}
// System.String Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9 (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return JsonUtility.ToJson(this);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_0 = (*(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*)__this);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_1 = L_0;
		RuntimeObject* L_2 = Box(GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = GeospatialAnchorHistory_ToString_mEF75221D34F044801DB11C95F4113DD9EFA87CF9(_thisAdjusted, method);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistoryCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GeospatialAnchorHistory> Collection = new List<GeospatialAnchorHistory>();
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_0 = (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*)il2cpp_codegen_object_new(List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83(L_0, List_1__ctor_mED28D7886C86087D0894D3D73A471B948B145E83_RuntimeMethod_var);
		__this->___Collection_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Collection_0), (void*)L_0);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnGetStartedClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnGetStartedClicked_mB6C4C94AC37A8E6D9893E59949F2A4AC1B69CCF2 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt(_hasDisplayedPrivacyPromptKey, 1);
		PlayerPrefs_SetInt_m956D3E2DB966F20CF42F842880DDF9E2BE94D948(_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478, 1, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// SwitchToARView(true);
		GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnLearnMoreClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnLearnMoreClicked_m30E869F7D9259B137402B70B9ECCE93CDD0996E1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL(
		//     "https://developers.google.com/ar/data-privacy");
		Application_OpenURL_mE748FA4D503715DEE12BCA4BDD8A5305AE41DB89(_stringLiteralEF7042B13A54AE6D2F33826F9F5FA12143D46847, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnClearAllClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnClearAllClicked_m6B7370DE319DE3D74783693764E3D9D408C5D90C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var anchor in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->____anchorObjects_46;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var anchor in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(anchor);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
			}

IL_001a_1:
			{
				// foreach (var anchor in _anchorObjects)
				bool L_3;
				L_3 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// _anchorObjects.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->____anchorObjects_46;
		NullCheck(L_4);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_4, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// _historyCollection.Collection.Clear();
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_5 = __this->____historyCollection_45;
		NullCheck(L_5);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_6 = L_5->___Collection_0;
		NullCheck(L_6);
		List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_inline(L_6, List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_RuntimeMethod_var);
		// SnackBarText.text = "Anchor(s) cleared!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___SnackBarText_20;
		NullCheck(L_7);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral402969FEF140B759AA2E21468D1A944100BDBBF1);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___ClearAllButton_15;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnContinueClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnContinueClicked_m91B58E4D5A217930B85D603ED5B91EEF36CB1D92 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	{
		// VPSCheckCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___VPSCheckCanvas_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnSetAnchorClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnSetAnchorClicked_m8470510D1E0D3E09FA8A9CE037B816533158843D (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var pose = EarthManager.CameraGeospatialPose;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_0 = __this->___EarthManager_8;
		NullCheck(L_0);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_1;
		L_1 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_0, NULL);
		V_0 = L_1;
		// Quaternion eunRotation = pose.EunRotation;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_2 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = L_2.___EunRotation_7;
		V_1 = L_3;
		// GeospatialAnchorHistory history = new GeospatialAnchorHistory(
		//     pose.Latitude, pose.Longitude, pose.Altitude, eunRotation);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_4 = V_0;
		double L_5 = L_4.___Latitude_0;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_6 = V_0;
		double L_7 = L_6.___Longitude_1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_8 = V_0;
		double L_9 = L_8.___Altitude_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = V_1;
		GeospatialAnchorHistory__ctor_mDF6996276B4E73B9E1271914CC999C7C07DB30BF((&V_2), L_5, L_7, L_9, L_10, NULL);
		// var anchor = PlaceGeospatialAnchor(history, _usingTerrainAnchor);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_11 = V_2;
		bool L_12 = __this->____usingTerrainAnchor_42;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_13;
		L_13 = GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650(__this, L_11, L_12, NULL);
		// if (anchor != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0053;
		}
	}
	{
		// _historyCollection.Collection.Add(history);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_15 = __this->____historyCollection_45;
		NullCheck(L_15);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_16 = L_15->___Collection_0;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_17 = V_2;
		NullCheck(L_16);
		List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_inline(L_16, L_17, List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
	}

IL_0053:
	{
		// ClearAllButton.gameObject.SetActive(_anchorObjects.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___ClearAllButton_15;
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->____anchorObjects_46;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_20, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)((((int32_t)L_21) > ((int32_t)0))? 1 : 0), NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnTerrainToggled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnTerrainToggled_m84468C4CD7B19CC6E3F75F4BB0B2FE3A19660A78 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, bool ___enabled0, const RuntimeMethod* method) 
{
	{
		// _usingTerrainAnchor = enabled;
		bool L_0 = ___enabled0;
		__this->____usingTerrainAnchor_42 = L_0;
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Awake_mCA86E4AF23D51CFD648FE92B0A03D51B9BA0DC62 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Screen.autorotateToLandscapeLeft = false;
		Screen_set_autorotateToLandscapeLeft_mEBF1EEDF3BCD85A85FEF5B59ECEE40D6A73983D0((bool)0, NULL);
		// Screen.autorotateToLandscapeRight = false;
		Screen_set_autorotateToLandscapeRight_m259F67F2F38E5E28A7A5ABBEA5CFE9650DD7B184((bool)0, NULL);
		// Screen.autorotateToPortraitUpsideDown = false;
		Screen_set_autorotateToPortraitUpsideDown_m322363C3E0347AF6C62240BD814C8719CF54AF12((bool)0, NULL);
		// Screen.orientation = ScreenOrientation.Portrait;
		Screen_set_orientation_mFCC880DDE7D3916DD8DA84E546F4743EEE773C4D(1, NULL);
		// Application.targetFrameRate = 60;
		Application_set_targetFrameRate_mB90EEA60DAE55CD71C38D4B7DFDBE2B34EA6B46F(((int32_t)60), NULL);
		// if (SessionOrigin == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_0 = __this->___SessionOrigin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// Debug.LogError("Cannot find ARSessionOrigin.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral002FD9BA3AE0E060C2E4E855D3879613062FB95E, NULL);
	}

IL_0037:
	{
		// if (Session == null)
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_2 = __this->___Session_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_004f;
		}
	}
	{
		// Debug.LogError("Cannot find ARSession.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral84603BEBCE50D165E99F4F1BE49F02FF0B3BC3DB, NULL);
	}

IL_004f:
	{
		// if (ARCoreExtensions == null)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_4 = __this->___ARCoreExtensions_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0067;
		}
	}
	{
		// Debug.LogError("Cannot find ARCoreExtensions.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEC2DBADB2D94879827209856D3681D3473726A46, NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnEnable_mEB3602FCCA7C89B722AFD4159D144A8DEEA618B9 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialController_OnTerrainToggled_m84468C4CD7B19CC6E3F75F4BB0B2FE3A19660A78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral098533C94B14961259EF414728C4A68C6289E9AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_1 = NULL;
	{
		// _startLocationService = StartLocationService();
		RuntimeObject* L_0;
		L_0 = GeospatialController_StartLocationService_m72676812B8A1C07C07EAB8574995C827CF57DBB8(__this, NULL);
		__this->____startLocationService_47 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____startLocationService_47), (void*)L_0);
		// StartCoroutine(_startLocationService);
		RuntimeObject* L_1 = __this->____startLocationService_47;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// _isReturning = false;
		__this->____isReturning_38 = (bool)0;
		// _enablingGeospatial = false;
		__this->____enablingGeospatial_40 = (bool)0;
		// InfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___InfoPanel_18;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// SetAnchorButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___SetAnchorButton_16;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// TerrainToggle.gameObject.SetActive(false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = __this->___TerrainToggle_17;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___ClearAllButton_15;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// DebugText.gameObject.SetActive(Debug.isDebugBuild && EarthManager != null);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___DebugText_21;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		G_B1_0 = L_11;
		if (!L_12)
		{
			G_B2_0 = L_11;
			goto IL_0086;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_13 = __this->___EarthManager_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B3_0 = ((int32_t)(L_14));
		G_B3_1 = G_B1_0;
		goto IL_0087;
	}

IL_0086:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0087:
	{
		NullCheck(G_B3_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B3_1, (bool)G_B3_0, NULL);
		// TerrainToggle.onValueChanged.AddListener(OnTerrainToggled);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_15 = __this->___TerrainToggle_17;
		NullCheck(L_15);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_16 = L_15->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_17 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_17, __this, (intptr_t)((void*)GeospatialController_OnTerrainToggled_m84468C4CD7B19CC6E3F75F4BB0B2FE3A19660A78_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_16, L_17, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// _localizationPassedTime = 0f;
		__this->____localizationPassedTime_43 = (0.0f);
		// _isLocalizing = true;
		__this->____isLocalizing_39 = (bool)1;
		// SnackBarText.text = _localizingMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___SnackBarText_20;
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteral098533C94B14961259EF414728C4A68C6289E9AE);
		// LoadGeospatialAnchorHistory();
		GeospatialController_LoadGeospatialAnchorHistory_m78B8DEB20F80FE681FA18AC34EFBB190DE330605(__this, NULL);
		// _shouldResolvingHistory = _historyCollection.Collection.Count > 0;
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_19 = __this->____historyCollection_45;
		NullCheck(L_19);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_20 = L_19->___Collection_0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_20, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		__this->____shouldResolvingHistory_41 = (bool)((((int32_t)L_21) > ((int32_t)0))? 1 : 0);
		// SwitchToARView(PlayerPrefs.HasKey(_hasDisplayedPrivacyPromptKey));
		bool L_22;
		L_22 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteralCDD0E29C4A5251B9843B15E7DBD03F1411828478, NULL);
		GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E(__this, L_22, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_OnDisable_m4494298A36B1BF602BC9839471386CC264FE50D1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A94DA5D5DB50FDE5685474E5DC8D83B393024C8);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// StopCoroutine(_asyncCheck);
		RuntimeObject* L_0 = __this->____asyncCheck_48;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_0, NULL);
		// _asyncCheck = null;
		__this->____asyncCheck_48 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____asyncCheck_48), (void*)(RuntimeObject*)NULL);
		// StopCoroutine(_startLocationService);
		RuntimeObject* L_1 = __this->____startLocationService_47;
		MonoBehaviour_StopCoroutine_mF9E93B82091E804595BE13AA29F9AB7517F7E04A(__this, L_1, NULL);
		// _startLocationService = null;
		__this->____startLocationService_47 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____startLocationService_47), (void*)(RuntimeObject*)NULL);
		// Debug.Log("Stop location services.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7A94DA5D5DB50FDE5685474E5DC8D83B393024C8, NULL);
		// Input.location.Stop();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_2;
		L_2 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_2);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_2, NULL);
		// foreach (var anchor in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = __this->____anchorObjects_46;
		NullCheck(L_3);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_4;
		L_4 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_3, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_0048_1:
			{
				// foreach (var anchor in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
				L_5 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// Destroy(anchor);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
			}

IL_0054_1:
			{
				// foreach (var anchor in _anchorObjects)
				bool L_6;
				L_6 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// _anchorObjects.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->____anchorObjects_46;
		NullCheck(L_7);
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_7, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_Update_m12FBC3C41C8B9B1060B6C586F36B51FA8315191E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53DECEA44E2F813BD2CDB9161208758884B4FA95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF971503E7E762E947F8E0E4CFCDBDEEBB6C91D01);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_5;
	memset((&V_5), 0, sizeof(V_5));
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_6;
	memset((&V_6), 0, sizeof(V_6));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_7 = NULL;
	int32_t V_8 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B25_0 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C G_B27_0;
	memset((&G_B27_0), 0, sizeof(G_B27_0));
	int32_t G_B27_1 = 0;
	{
		// if (!_isInARView)
		bool L_0 = __this->____isInARView_37;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// UpdateDebugInfo();
		GeospatialController_UpdateDebugInfo_m4DD7408BE036B30EE50B0F2CB2D5ED7B24B314A1(__this, NULL);
		// LifecycleUpdate();
		GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C(__this, NULL);
		// if (_isReturning)
		bool L_1 = __this->____isReturning_38;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return;
		return;
	}

IL_001e:
	{
		// if (ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)6)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3;
		L_3 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_3) == ((int32_t)7)))
		{
			goto IL_002f;
		}
	}
	{
		// return;
		return;
	}

IL_002f:
	{
		// var featureSupport = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_4 = __this->___EarthManager_8;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_4, 2, NULL);
		V_0 = L_5;
		int32_t L_6 = V_0;
		switch (L_6)
		{
			case 0:
			{
				goto IL_005d;
			}
			case 1:
			{
				goto IL_0050;
			}
			case 2:
			{
				goto IL_0051;
			}
		}
	}
	{
		goto IL_009d;
	}

IL_0050:
	{
		// return;
		return;
	}

IL_0051:
	{
		// ReturnWithReason("Geospatial API is not supported by this devices.");
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, _stringLiteralDE0D2C7E866F161F8886976B7C5F3F27F3BB4E7A, NULL);
		// return;
		return;
	}

IL_005d:
	{
		// if (ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode ==
		//     GeospatialMode.Disabled)
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7 = __this->___ARCoreExtensions_9;
		NullCheck(L_7);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_8 = L_7->___ARCoreExtensionsConfig_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___GeospatialMode_5;
		if (L_9)
		{
			goto IL_009d;
		}
	}
	{
		// Debug.Log("Geospatial sample switched to GeospatialMode.Enabled.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA0A24FC541CCC2A139AC9F8BE75113AD3649BFBD, NULL);
		// ARCoreExtensions.ARCoreExtensionsConfig.GeospatialMode =
		//     GeospatialMode.Enabled;
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_10 = __this->___ARCoreExtensions_9;
		NullCheck(L_10);
		ARCoreExtensionsConfig_t241A8996B5A9CB82B5532C79DF31558CFFA531CD* L_11 = L_10->___ARCoreExtensionsConfig_7;
		NullCheck(L_11);
		L_11->___GeospatialMode_5 = 2;
		// _configurePrepareTime = 3.0f;
		__this->____configurePrepareTime_44 = (3.0f);
		// _enablingGeospatial = true;
		__this->____enablingGeospatial_40 = (bool)1;
		// return;
		return;
	}

IL_009d:
	{
		// if (_enablingGeospatial)
		bool L_12 = __this->____enablingGeospatial_40;
		if (!L_12)
		{
			goto IL_00ce;
		}
	}
	{
		// _configurePrepareTime -= Time.deltaTime;
		float L_13 = __this->____configurePrepareTime_44;
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____configurePrepareTime_44 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// if (_configurePrepareTime < 0)
		float L_15 = __this->____configurePrepareTime_44;
		if ((!(((float)L_15) < ((float)(0.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// _enablingGeospatial = false;
		__this->____enablingGeospatial_40 = (bool)0;
		goto IL_00ce;
	}

IL_00cd:
	{
		// return;
		return;
	}

IL_00ce:
	{
		// var earthState = EarthManager.EarthState;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_16 = __this->___EarthManager_8;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_16, NULL);
		V_1 = L_17;
		// if (earthState == EarthState.ErrorEarthNotReady)
		int32_t L_18 = V_1;
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)-100)))))
		{
			goto IL_00f0;
		}
	}
	{
		// SnackBarText.text = _localizationInitializingMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___SnackBarText_20;
		NullCheck(L_19);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteralF971503E7E762E947F8E0E4CFCDBDEEBB6C91D01);
		// return;
		return;
	}

IL_00f0:
	{
		// else if (earthState != EarthState.Enabled)
		int32_t L_20 = V_1;
		if (!L_20)
		{
			goto IL_0121;
		}
	}
	{
		// string errorMessage =
		//     "Geospatial sample encountered an EarthState error: " + earthState;
		Il2CppFakeBox<int32_t> L_21(EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_22;
		L_22 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_21), NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral12129C966D1274A2EF853A1668600EE873FA4D2C, L_22, NULL);
		V_4 = L_23;
		// Debug.LogWarning(errorMessage);
		String_t* L_24 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_24, NULL);
		// SnackBarText.text = errorMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___SnackBarText_20;
		String_t* L_26 = V_4;
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_26);
		// return;
		return;
	}

IL_0121:
	{
		// bool isSessionReady = ARSession.state == ARSessionState.SessionTracking &&
		//     Input.location.status == LocationServiceStatus.Running;
		int32_t L_27;
		L_27 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_0138;
		}
	}
	{
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_28;
		L_28 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_28, NULL);
		G_B24_0 = ((((int32_t)L_29) == ((int32_t)2))? 1 : 0);
		goto IL_0139;
	}

IL_0138:
	{
		G_B24_0 = 0;
	}

IL_0139:
	{
		// var earthTrackingState = EarthManager.EarthTrackingState;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_30 = __this->___EarthManager_8;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_30, NULL);
		V_2 = L_31;
		// var pose = earthTrackingState == TrackingState.Tracking ?
		//     EarthManager.CameraGeospatialPose : new GeospatialPose();
		int32_t L_32 = V_2;
		G_B25_0 = G_B24_0;
		if ((((int32_t)L_32) == ((int32_t)2)))
		{
			G_B26_0 = G_B24_0;
			goto IL_0155;
		}
	}
	{
		il2cpp_codegen_initobj((&V_5), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_33 = V_5;
		G_B27_0 = L_33;
		G_B27_1 = G_B25_0;
		goto IL_0160;
	}

IL_0155:
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_34 = __this->___EarthManager_8;
		NullCheck(L_34);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_35;
		L_35 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_34, NULL);
		G_B27_0 = L_35;
		G_B27_1 = G_B26_0;
	}

IL_0160:
	{
		V_3 = G_B27_0;
		// if (!isSessionReady || earthTrackingState != TrackingState.Tracking ||
		//     pose.OrientationYawAccuracy > _orientationYawAccuracyThreshold ||
		//     pose.HorizontalAccuracy > _horizontalAccuracyThreshold)
		if (!G_B27_1)
		{
			goto IL_018c;
		}
	}
	{
		int32_t L_36 = V_2;
		if ((!(((uint32_t)L_36) == ((uint32_t)2))))
		{
			goto IL_018c;
		}
	}
	{
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_37 = V_3;
		double L_38 = L_37.___OrientationYawAccuracy_8;
		if ((((double)L_38) > ((double)(25.0))))
		{
			goto IL_018c;
		}
	}
	{
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_39 = V_3;
		double L_40 = L_39.___HorizontalAccuracy_5;
		if ((!(((double)L_40) > ((double)(20.0)))))
		{
			goto IL_025c;
		}
	}

IL_018c:
	{
		// if (!_isLocalizing)
		bool L_41 = __this->____isLocalizing_39;
		if (L_41)
		{
			goto IL_020e;
		}
	}
	{
		// _isLocalizing = true;
		__this->____isLocalizing_39 = (bool)1;
		// _localizationPassedTime = 0f;
		__this->____localizationPassedTime_43 = (0.0f);
		// SetAnchorButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_42 = __this->___SetAnchorButton_16;
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43;
		L_43 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_42, NULL);
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// TerrainToggle.gameObject.SetActive(false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_44 = __this->___TerrainToggle_17;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_44, NULL);
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_46 = __this->___ClearAllButton_15;
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_46, NULL);
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// foreach (var go in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_48 = __this->____anchorObjects_46;
		NullCheck(L_48);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_49;
		L_49 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_48, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_6 = L_49;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0200:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_6), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01f5_1;
			}

IL_01e8_1:
			{
				// foreach (var go in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
				L_50 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_6), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				// go.SetActive(false);
				NullCheck(L_50);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)0, NULL);
			}

IL_01f5_1:
			{
				// foreach (var go in _anchorObjects)
				bool L_51;
				L_51 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_6), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_51)
				{
					goto IL_01e8_1;
				}
			}
			{
				goto IL_020e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_020e:
	{
		// if (_localizationPassedTime > _timeoutSeconds)
		float L_52 = __this->____localizationPassedTime_43;
		if ((!(((float)L_52) > ((float)(180.0f)))))
		{
			goto IL_0235;
		}
	}
	{
		// Debug.LogError("Geospatial sample localization passed timeout.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral0B33E2273C9AB388C21E973B33AEB2CD77079D68, NULL);
		// ReturnWithReason(_localizationFailureMessage);
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, _stringLiteral970A4D6490D612AAF148057C65320C8178CD0C87, NULL);
		goto IL_036a;
	}

IL_0235:
	{
		// _localizationPassedTime += Time.deltaTime;
		float L_53 = __this->____localizationPassedTime_43;
		float L_54;
		L_54 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->____localizationPassedTime_43 = ((float)il2cpp_codegen_add(L_53, L_54));
		// SnackBarText.text = _localizationInstructionMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_55 = __this->___SnackBarText_20;
		NullCheck(L_55);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_55, _stringLiteralB3485A54065E6F4E66AFF0546DB80DF7DA4A5284);
		goto IL_036a;
	}

IL_025c:
	{
		// else if (_isLocalizing)
		bool L_56 = __this->____isLocalizing_39;
		if (!L_56)
		{
			goto IL_0321;
		}
	}
	{
		// _isLocalizing = false;
		__this->____isLocalizing_39 = (bool)0;
		// _localizationPassedTime = 0f;
		__this->____localizationPassedTime_43 = (0.0f);
		// SetAnchorButton.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_57 = __this->___SetAnchorButton_16;
		NullCheck(L_57);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_57, NULL);
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)1, NULL);
		// TerrainToggle.gameObject.SetActive(true);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_59 = __this->___TerrainToggle_17;
		NullCheck(L_59);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60;
		L_60 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_59, NULL);
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)1, NULL);
		// ClearAllButton.gameObject.SetActive(_anchorObjects.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_61 = __this->___ClearAllButton_15;
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_61, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_63 = __this->____anchorObjects_46;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_63, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)((((int32_t)L_64) > ((int32_t)0))? 1 : 0), NULL);
		// SnackBarText.text = _localizationSuccessMessage;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = __this->___SnackBarText_20;
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, _stringLiteral242A0070D29873DA9B6E4E1164C9C8B53CE23D19);
		// foreach (var go in _anchorObjects)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_66 = __this->____anchorObjects_46;
		NullCheck(L_66);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_67;
		L_67 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_66, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_6 = L_67;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_030b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_6), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0300_1;
			}

IL_02d8_1:
			{
				// foreach (var go in _anchorObjects)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
				L_68 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_6), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_7 = L_68;
				// var terrainState = go.GetComponent<ARGeospatialAnchor>().terrainAnchorState;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_7;
				NullCheck(L_69);
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_70;
				L_70 = GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9(L_69, GameObject_GetComponent_TisARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571_m449821BD94BB048929D0F08D05D4BA227B430BE9_RuntimeMethod_var);
				NullCheck(L_70);
				int32_t L_71;
				L_71 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_70, NULL);
				V_8 = L_71;
				// if (terrainState != TerrainAnchorState.None &&
				//     terrainState != TerrainAnchorState.Success)
				int32_t L_72 = V_8;
				if (!L_72)
				{
					goto IL_02f8_1;
				}
			}
			{
				int32_t L_73 = V_8;
				if ((!(((uint32_t)L_73) == ((uint32_t)2))))
				{
					goto IL_0300_1;
				}
			}

IL_02f8_1:
			{
				// go.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = V_7;
				NullCheck(L_74);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_74, (bool)1, NULL);
			}

IL_0300_1:
			{
				// foreach (var go in _anchorObjects)
				bool L_75;
				L_75 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_6), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_75)
				{
					goto IL_02d8_1;
				}
			}
			{
				goto IL_0319;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0319:
	{
		// ResolveHistory();
		GeospatialController_ResolveHistory_mF4A2FFB2FC64B439305A9B081795341F5F4A7359(__this, NULL);
		goto IL_036a;
	}

IL_0321:
	{
		// else if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began
		//     && !EventSystem.current.IsPointerOverGameObject(Input.GetTouch(0).fingerId))
		int32_t L_76;
		L_76 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_76) <= ((int32_t)0)))
		{
			goto IL_036a;
		}
	}
	{
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_77;
		L_77 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_9 = L_77;
		int32_t L_78;
		L_78 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_9), NULL);
		if (L_78)
		{
			goto IL_036a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_79;
		L_79 = EventSystem_get_current_mC87C69FB418563DC2A571A10E2F9DB59A6785016(NULL);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_80;
		L_80 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_9 = L_80;
		int32_t L_81;
		L_81 = Touch_get_fingerId_mC1DCE93BFA0574960A3AE5329AE6C5F7E06962BD((&V_9), NULL);
		NullCheck(L_79);
		bool L_82;
		L_82 = EventSystem_IsPointerOverGameObject_m238732B4FDEA343976D798FF04DB34C3221243C2(L_79, L_81, NULL);
		if (L_82)
		{
			goto IL_036a;
		}
	}
	{
		// PlaceAnchorByScreenTap(Input.GetTouch(0).position);
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_83;
		L_83 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(0, NULL);
		V_9 = L_83;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84;
		L_84 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_9), NULL);
		GeospatialController_PlaceAnchorByScreenTap_m021914E495D517012F09D3EDBA45CCD4E8DC54FB(__this, L_84, NULL);
	}

IL_036a:
	{
		// InfoPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = __this->___InfoPanel_18;
		NullCheck(L_85);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_85, (bool)1, NULL);
		// if (earthTrackingState == TrackingState.Tracking)
		int32_t L_86 = V_2;
		if ((!(((uint32_t)L_86) == ((uint32_t)2))))
		{
			goto IL_042d;
		}
	}
	{
		// InfoText.text = string.Format(
		// "Latitude/Longitude: {1}?, {2}?{0}" +
		// "Horizontal Accuracy: {3}m{0}" +
		// "Altitude: {4}m{0}" +
		// "Vertical Accuracy: {5}m{0}" +
		// "Eun Rotation: {6}{0}" +
		// "Orientation Yaw Accuracy: {7}?",
		// Environment.NewLine,
		// pose.Latitude.ToString("F6"),
		// pose.Longitude.ToString("F6"),
		// pose.HorizontalAccuracy.ToString("F6"),
		// pose.Altitude.ToString("F2"),
		// pose.VerticalAccuracy.ToString("F2"),
		// pose.EunRotation.ToString("F1"),
		// pose.OrientationYawAccuracy.ToString("F1"));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_87 = __this->___InfoText_19;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_88 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_89 = L_88;
		String_t* L_90;
		L_90 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_90);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_90);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_91 = L_89;
		double* L_92 = (&(&V_3)->___Latitude_0);
		String_t* L_93;
		L_93 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_92, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_91);
		ArrayElementTypeCheck (L_91, L_93);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_93);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_94 = L_91;
		double* L_95 = (&(&V_3)->___Longitude_1);
		String_t* L_96;
		L_96 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_95, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_94);
		ArrayElementTypeCheck (L_94, L_96);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_96);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_97 = L_94;
		double* L_98 = (&(&V_3)->___HorizontalAccuracy_5);
		String_t* L_99;
		L_99 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_98, _stringLiteralAAF764D0E49CF83587ED98F50A47A2B697560BC3, NULL);
		NullCheck(L_97);
		ArrayElementTypeCheck (L_97, L_99);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_99);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_100 = L_97;
		double* L_101 = (&(&V_3)->___Altitude_2);
		String_t* L_102;
		L_102 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_101, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_100);
		ArrayElementTypeCheck (L_100, L_102);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_102);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_103 = L_100;
		double* L_104 = (&(&V_3)->___VerticalAccuracy_6);
		String_t* L_105;
		L_105 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_104, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_103);
		ArrayElementTypeCheck (L_103, L_105);
		(L_103)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_105);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_106 = L_103;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* L_107 = (&(&V_3)->___EunRotation_7);
		String_t* L_108;
		L_108 = Quaternion_ToString_m57FD902CB5D5FDE30866C169033515B5330B3C5F(L_107, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_106);
		ArrayElementTypeCheck (L_106, L_108);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_108);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_109 = L_106;
		double* L_110 = (&(&V_3)->___OrientationYawAccuracy_8);
		String_t* L_111;
		L_111 = Double_ToString_m70EC76E1DAD7E8B5B47AF9292189BF3711B24B75(L_110, _stringLiteralC613D4D2FE3F5D74727D376F793286A2BCBB1391, NULL);
		NullCheck(L_109);
		ArrayElementTypeCheck (L_109, L_111);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_111);
		String_t* L_112;
		L_112 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral53DECEA44E2F813BD2CDB9161208758884B4FA95, L_109, NULL);
		NullCheck(L_87);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_87, L_112);
		return;
	}

IL_042d:
	{
		// InfoText.text = "GEOSPATIAL POSE: not tracking";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_113 = __this->___InfoText_19;
		NullCheck(L_113);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_113, _stringLiteralBA97DB5D365444C5E6EF88EF63073328B97B1146);
		// }
		return;
	}
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::CheckTerrainAnchorState(Google.XR.ARCoreExtensions.ARGeospatialAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_CheckTerrainAnchorState_mECBEC2C347FE65F6FFE796326250B8B6985FF19F (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* ___anchor0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* L_0 = (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C*)il2cpp_codegen_object_new(U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCheckTerrainAnchorStateU3Ed__55__ctor_m9E5219C260204A9A77AF728DB09C35CDA89F655A(L_0, 0, NULL);
		U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* L_2 = L_1;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_3 = ___anchor0;
		NullCheck(L_2);
		L_2->___anchor_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___anchor_2), (void*)L_3);
		return L_2;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceAnchorByScreenTap(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_PlaceAnchorByScreenTap_m021914E495D517012F09D3EDBA45CCD4E8DC54FB (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* V_0 = NULL;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_1;
	memset((&V_1), 0, sizeof(V_1));
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C V_2;
	memset((&V_2), 0, sizeof(V_2));
	ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// List<ARRaycastHit> hitResults = new List<ARRaycastHit>();
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_0 = (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3*)il2cpp_codegen_object_new(List_1_t0754071572EFE7A5C92A59495D2524FC935364E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9(L_0, List_1__ctor_m6B5722DD0A8C0D3D4A1656C5A5E8D0A784DC85B9_RuntimeMethod_var);
		V_0 = L_0;
		// RaycastManager.Raycast(
		//     position, hitResults, TrackableType.Planes | TrackableType.FeaturePoint);
		ARRaycastManager_tD9459374F0F5BD9E2E4A8A1C665E7F33F9C2EE44* L_1 = __this->___RaycastManager_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___position0;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_3 = V_0;
		NullCheck(L_1);
		bool L_4;
		L_4 = ARRaycastManager_Raycast_mF56A1E2D7CBB61131E4D844ADA9D0CC1F6B53EAC(L_1, L_2, L_3, ((int32_t)31), NULL);
		// if (hitResults.Count > 0)
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_inline(L_5, List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_RuntimeMethod_var);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_00a6;
		}
	}
	{
		// GeospatialPose geospatialPose = EarthManager.Convert(hitResults[0].pose);
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_7 = __this->___EarthManager_8;
		List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* L_8 = V_0;
		NullCheck(L_8);
		ARRaycastHit_tB32B5606815B8A7DF479C00187A852F8D20E3B70 L_9;
		L_9 = List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F(L_8, 0, List_1_get_Item_m443F0D48247776D4257E06597AF794BCF6D8020F_RuntimeMethod_var);
		V_3 = L_9;
		Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 L_10;
		L_10 = ARRaycastHit_get_pose_m84C13E71E21FE12CBA9AAD98DC28B1E414C9EFFD((&V_3), NULL);
		NullCheck(L_7);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_11;
		L_11 = AREarthManager_Convert_mFE57A53C163E9F5098E8F2CBA0A99D808D4675E1(L_7, L_10, NULL);
		V_1 = L_11;
		// GeospatialAnchorHistory history = new GeospatialAnchorHistory(
		//     geospatialPose.Latitude, geospatialPose.Longitude, geospatialPose.Altitude,
		//     geospatialPose.EunRotation);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_12 = V_1;
		double L_13 = L_12.___Latitude_0;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_14 = V_1;
		double L_15 = L_14.___Longitude_1;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_16 = V_1;
		double L_17 = L_16.___Altitude_2;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_18 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19 = L_18.___EunRotation_7;
		GeospatialAnchorHistory__ctor_mDF6996276B4E73B9E1271914CC999C7C07DB30BF((&V_2), L_13, L_15, L_17, L_19, NULL);
		// var anchor = PlaceGeospatialAnchor(history, _usingTerrainAnchor);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_20 = V_2;
		bool L_21 = __this->____usingTerrainAnchor_42;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_22;
		L_22 = GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650(__this, L_20, L_21, NULL);
		// if (anchor != null)
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0082;
		}
	}
	{
		// _historyCollection.Collection.Add(history);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_24 = __this->____historyCollection_45;
		NullCheck(L_24);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_25 = L_24->___Collection_0;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_26 = V_2;
		NullCheck(L_25);
		List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_inline(L_25, L_26, List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_RuntimeMethod_var);
	}

IL_0082:
	{
		// ClearAllButton.gameObject.SetActive(_anchorObjects.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = __this->___ClearAllButton_15;
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_27, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_29 = __this->____anchorObjects_46;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_29, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)((((int32_t)L_30) > ((int32_t)0))? 1 : 0), NULL);
		// SaveGeospatialAnchorHistory();
		GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1(__this, NULL);
	}

IL_00a6:
	{
		// }
		return;
	}
}
// Google.XR.ARCoreExtensions.ARGeospatialAnchor Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::PlaceGeospatialAnchor(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___history0, bool ___terrain1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F41736E40E63BD9FC3F06C5C5844E17A1E08CFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E3C6AE4B99BA40D7B7B4423E5F5439265CB22BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB13B70E0770D60CE32B3FC8245938298844E9F9D);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* V_1 = NULL;
	ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* G_B5_0 = NULL;
	String_t* G_B14_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B14_1 = NULL;
	String_t* G_B13_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B13_1 = NULL;
	String_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B15_2 = NULL;
	{
		// Quaternion eunRotation = history.EunRotation;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_0 = ___history0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = L_0.___EunRotation_5;
		V_0 = L_1;
		// if (eunRotation == Quaternion.identity)
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		bool L_4;
		L_4 = Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		// eunRotation =
		//     Quaternion.AngleAxis(180f - (float)history.Heading, Vector3.up);
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_5 = ___history0;
		double L_6 = L_5.___Heading_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_subtract((180.0f), ((float)L_6))), L_7, NULL);
		V_0 = L_8;
	}

IL_002c:
	{
		// var anchor = terrain ?
		//     AnchorManager.ResolveAnchorOnTerrain(
		//         history.Latitude, history.Longitude, 0, eunRotation) :
		//     AnchorManager.AddAnchor(
		//         history.Latitude, history.Longitude, history.Altitude, eunRotation);
		bool L_9 = ___terrain1;
		if (L_9)
		{
			goto IL_004f;
		}
	}
	{
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_10 = __this->___AnchorManager_6;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_11 = ___history0;
		double L_12 = L_11.___Latitude_1;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_13 = ___history0;
		double L_14 = L_13.___Longitude_2;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_15 = ___history0;
		double L_16 = L_15.___Altitude_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_18;
		L_18 = ARAnchorManagerExtensions_AddAnchor_m40F02EA59D932D82EEF0C6FDD19B9006BAA1FE78(L_10, L_12, L_14, L_16, L_17, NULL);
		G_B5_0 = L_18;
		goto IL_0070;
	}

IL_004f:
	{
		ARAnchorManager_tF68C46300BD6F2E83E3360BF9297C3C50F5D6B3E* L_19 = __this->___AnchorManager_6;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_20 = ___history0;
		double L_21 = L_20.___Latitude_1;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_22 = ___history0;
		double L_23 = L_22.___Longitude_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ARAnchorManagerExtensions_t1FCBDAAD3ADF35808ECE7699833CD08AFBC05394_il2cpp_TypeInfo_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_25;
		L_25 = ARAnchorManagerExtensions_ResolveAnchorOnTerrain_mFB8A8E939F146EA51A5FB24086DF91F1C6795AFF(L_19, L_21, L_23, (0.0), L_24, NULL);
		G_B5_0 = L_25;
	}

IL_0070:
	{
		V_1 = G_B5_0;
		// if (anchor != null)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_26 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_26, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_27)
		{
			goto IL_0100;
		}
	}
	{
		// GameObject anchorGO = terrain ?
		//     Instantiate(TerrainPrefab, anchor.transform) :
		//     Instantiate(GeospatialPrefab, anchor.transform);
		bool L_28 = ___terrain1;
		if (L_28)
		{
			goto IL_0094;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___GeospatialPrefab_10;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_30 = V_1;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_29, L_31, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		goto IL_00a6;
	}

IL_0094:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___TerrainPrefab_11;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_34 = V_1;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36;
		L_36 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_33, L_35, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
	}

IL_00a6:
	{
		// anchor.gameObject.SetActive(!terrain);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_37 = V_1;
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_37, NULL);
		bool L_39 = ___terrain1;
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)((((int32_t)L_39) == ((int32_t)0))? 1 : 0), NULL);
		// _anchorObjects.Add(anchor.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_40 = __this->____anchorObjects_46;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_41 = V_1;
		NullCheck(L_41);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42;
		L_42 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_41, NULL);
		NullCheck(L_40);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_40, L_42, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// if (terrain)
		bool L_43 = ___terrain1;
		if (!L_43)
		{
			goto IL_00d9;
		}
	}
	{
		// StartCoroutine(CheckTerrainAnchorState(anchor));
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_44 = V_1;
		RuntimeObject* L_45;
		L_45 = GeospatialController_CheckTerrainAnchorState_mECBEC2C347FE65F6FFE796326250B8B6985FF19F(__this, L_44, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_46;
		L_46 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_45, NULL);
		goto IL_0124;
	}

IL_00d9:
	{
		// SnackBarText.text = $"{_anchorObjects.Count} Anchor(s) Set!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_47 = __this->___SnackBarText_20;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_48 = __this->____anchorObjects_46;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_48, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_50 = L_49;
		RuntimeObject* L_51 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52;
		L_52 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral78E274AC89F9BB2B7C9C9C38754AE07662487DED, L_51, NULL);
		NullCheck(L_47);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, L_52);
		goto IL_0124;
	}

IL_0100:
	{
		// SnackBarText.text = string.Format(
		//     "Failed to set {0}!", terrain ? "a terrain anchor" : "an anchor");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_53 = __this->___SnackBarText_20;
		bool L_54 = ___terrain1;
		G_B13_0 = _stringLiteral6E3C6AE4B99BA40D7B7B4423E5F5439265CB22BC;
		G_B13_1 = L_53;
		if (L_54)
		{
			G_B14_0 = _stringLiteral6E3C6AE4B99BA40D7B7B4423E5F5439265CB22BC;
			G_B14_1 = L_53;
			goto IL_0115;
		}
	}
	{
		G_B15_0 = _stringLiteral3F41736E40E63BD9FC3F06C5C5844E17A1E08CFD;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		goto IL_011a;
	}

IL_0115:
	{
		G_B15_0 = _stringLiteralB13B70E0770D60CE32B3FC8245938298844E9F9D;
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
	}

IL_011a:
	{
		String_t* L_55;
		L_55 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B15_1, G_B15_0, NULL);
		NullCheck(G_B15_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B15_2, L_55);
	}

IL_0124:
	{
		// return anchor;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_56 = V_1;
		return L_56;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ResolveHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ResolveHistory_mF4A2FFB2FC64B439305A9B081795341F5F4A7359 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3187553363A94FA380DF7928E3C910219A40C90A);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (!_shouldResolvingHistory)
		bool L_0 = __this->____shouldResolvingHistory_41;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// _shouldResolvingHistory = false;
		__this->____shouldResolvingHistory_41 = (bool)0;
		// foreach (var history in _historyCollection.Collection)
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_1 = __this->____historyCollection_45;
		NullCheck(L_1);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_2 = L_1->___Collection_0;
		NullCheck(L_2);
		Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6 L_3;
		L_3 = List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF(L_2, List_1_GetEnumerator_m4264BFAF984BC77BB2EFDAB73261EC95529B47BF_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C((&V_0), Enumerator_Dispose_m59121895AD798F3B21AA01FF4E4D8C8743DE369C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_0023_1:
			{
				// foreach (var history in _historyCollection.Collection)
				GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_4;
				L_4 = Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_inline((&V_0), Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_RuntimeMethod_var);
				V_1 = L_4;
				// PlaceGeospatialAnchor(history);
				GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_5 = V_1;
				ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_6;
				L_6 = GeospatialController_PlaceGeospatialAnchor_m20AC740B55383282D2AFE8F9181848A75DE2A650(__this, L_5, (bool)0, NULL);
			}

IL_0034_1:
			{
				// foreach (var history in _historyCollection.Collection)
				bool L_7;
				L_7 = Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447((&V_0), Enumerator_MoveNext_m259A9736C139F374D942E6E363CCA53B6ACF1447_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		// ClearAllButton.gameObject.SetActive(_anchorObjects.Count > 0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___ClearAllButton_15;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->____anchorObjects_46;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_10, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)((((int32_t)L_11) > ((int32_t)0))? 1 : 0), NULL);
		// SnackBarText.text = string.Format("{0} anchor(s) set from history.",
		//     _anchorObjects.Count);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___SnackBarText_20;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = __this->____anchorObjects_46;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_13, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_15);
		String_t* L_17;
		L_17 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3187553363A94FA380DF7928E3C910219A40C90A, L_16, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_17);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LoadGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LoadGeospatialAnchorHistory_m78B8DEB20F80FE681FA18AC34EFBB190DE330605 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass59_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_mD4E003F3D47C2403D68D5E7653300A70D8BAB182_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90* V_0 = NULL;
	{
		// if (PlayerPrefs.HasKey(_persistentGeospatialAnchorsStorageKey))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_mCA5C64BBA6BF8B230BC3BC92B4761DD3B11D4668(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, NULL);
		if (!L_0)
		{
			goto IL_006a;
		}
	}
	{
		U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90* L_1 = (U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		U3CU3Ec__DisplayClass59_0__ctor_m6F22441024D90C2CF796D64DD0097D8F04B68703(L_1, NULL);
		V_0 = L_1;
		// _historyCollection = JsonUtility.FromJson<GeospatialAnchorHistoryCollection>(
		//     PlayerPrefs.GetString(_persistentGeospatialAnchorsStorageKey));
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mA4C9F842BF77E5572AB20EA087C7048F870D02AE(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, NULL);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_3;
		L_3 = JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22(L_2, JsonUtility_FromJson_TisGeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_mB3CF0CB18FC4CB0B45740E7AAD892F7B4F55CC22_RuntimeMethod_var);
		__this->____historyCollection_45 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____historyCollection_45), (void*)L_3);
		// DateTime current = DateTime.Now;
		U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_5;
		L_5 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		NullCheck(L_4);
		L_4->___current_0 = L_5;
		// _historyCollection.Collection.RemoveAll(
		//     data => current.Subtract(data.CreatedTime).Days > 0);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_6 = __this->____historyCollection_45;
		NullCheck(L_6);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_7 = L_6->___Collection_0;
		U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90* L_8 = V_0;
		Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9* L_9 = (Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9*)il2cpp_codegen_object_new(Predicate_1_tED0930A941578CB5B570250EF14CD907E1095BE9_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Predicate_1__ctor_m6906BC0330B02272E5E11B26C6C18A3A8CC271A7(L_9, L_8, (intptr_t)((void*)U3CU3Ec__DisplayClass59_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_mD4E003F3D47C2403D68D5E7653300A70D8BAB182_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		int32_t L_10;
		L_10 = List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347(L_7, L_9, List_1_RemoveAll_mB7D623E596EA032328080946FB84DFF68AF0B347_RuntimeMethod_var);
		// PlayerPrefs.SetString(_persistentGeospatialAnchorsStorageKey,
		//     JsonUtility.ToJson(_historyCollection));
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_11 = __this->____historyCollection_45;
		String_t* L_12;
		L_12 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_11, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, L_12, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		return;
	}

IL_006a:
	{
		// _historyCollection = new GeospatialAnchorHistoryCollection();
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_13 = (GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD*)il2cpp_codegen_object_new(GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		GeospatialAnchorHistoryCollection__ctor_mF8B2CC65BEF02F8F5AD9A6745E9DA6B05D7D06FA(L_13, NULL);
		__this->____historyCollection_45 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____historyCollection_45), (void*)L_13);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SaveGeospatialAnchorHistory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SaveGeospatialAnchorHistory_m518EB2F8DC525CDD2BE2A9E7D6AAF46D987569F1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__60_0_mE2C05EFFFD63EAFBCE22ECA9B6F52DD78DB13572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888);
		s_Il2CppMethodInitialized = true;
	}
	Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* G_B2_0 = NULL;
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* G_B2_1 = NULL;
	Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* G_B1_0 = NULL;
	List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* G_B1_1 = NULL;
	{
		// _historyCollection.Collection.Sort((left, right) =>
		//     right.CreatedTime.CompareTo(left.CreatedTime));
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_0 = __this->____historyCollection_45;
		NullCheck(L_0);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_1 = L_0->___Collection_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_2 = ((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9__60_0_1;
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* L_4 = ((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_5 = (Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654*)il2cpp_codegen_object_new(Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Comparison_1__ctor_m4F653C6CE2CE5AE4F2EBB6FF39AFD589ED84244F(L_5, L_4, (intptr_t)((void*)U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__60_0_mE2C05EFFFD63EAFBCE22ECA9B6F52DD78DB13572_RuntimeMethod_var), NULL);
		Comparison_1_t499A68E56FDAB225C9B492C918CBABD097C2D654* L_6 = L_5;
		((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9__60_0_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var))->___U3CU3E9__60_0_1), (void*)L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E(G_B2_1, G_B2_0, List_1_Sort_m560E0614EE9BCDCCE7F7B73F3525A12EBC33CF2E_RuntimeMethod_var);
		// if (_historyCollection.Collection.Count > _storageLimit)
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_7 = __this->____historyCollection_45;
		NullCheck(L_7);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_8 = L_7->___Collection_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_8, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)5)))
		{
			goto IL_0065;
		}
	}
	{
		// _historyCollection.Collection.RemoveRange(
		//     _storageLimit, _historyCollection.Collection.Count - _storageLimit);
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_10 = __this->____historyCollection_45;
		NullCheck(L_10);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_11 = L_10->___Collection_0;
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_12 = __this->____historyCollection_45;
		NullCheck(L_12);
		List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* L_13 = L_12->___Collection_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_inline(L_13, List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273(L_11, 5, ((int32_t)il2cpp_codegen_subtract(L_14, 5)), List_1_RemoveRange_m4F13468627DA199AA3C739E074A8E5842DC15273_RuntimeMethod_var);
	}

IL_0065:
	{
		// PlayerPrefs.SetString(
		//     _persistentGeospatialAnchorsStorageKey, JsonUtility.ToJson(_historyCollection));
		GeospatialAnchorHistoryCollection_tE5EDB6915BC64A3689D5063C0AE9BDCDBDEB2BBD* L_15 = __this->____historyCollection_45;
		String_t* L_16;
		L_16 = JsonUtility_ToJson_m28CC6843B9D3723D88AD13EA3829B71FDE7826BA(L_15, NULL);
		PlayerPrefs_SetString_mF4F457C81BB75F0213547C6287BA36E15E1F0256(_stringLiteral98BA9C6DB7CB1F119876677A9D68E6B455A09888, L_16, NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m82567E045D69C838112EA204B60C144D4C1EA3AE(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::SwitchToARView(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_SwitchToARView_mFB94E97C62D009E13324C261E04900D34D47410E (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, bool ___enable0, const RuntimeMethod* method) 
{
	{
		// _isInARView = enable;
		bool L_0 = ___enable0;
		__this->____isInARView_37 = L_0;
		// SessionOrigin.gameObject.SetActive(enable);
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_1 = __this->___SessionOrigin_4;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		bool L_3 = ___enable0;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, L_3, NULL);
		// Session.gameObject.SetActive(enable);
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_4 = __this->___Session_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		bool L_6 = ___enable0;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, L_6, NULL);
		// ARCoreExtensions.gameObject.SetActive(enable);
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_7 = __this->___ARCoreExtensions_9;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		bool L_9 = ___enable0;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, L_9, NULL);
		// ARViewCanvas.SetActive(enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___ARViewCanvas_14;
		bool L_11 = ___enable0;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, L_11, NULL);
		// PrivacyPromptCanvas.SetActive(!enable);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___PrivacyPromptCanvas_12;
		bool L_13 = ___enable0;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), NULL);
		// VPSCheckCanvas.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___VPSCheckCanvas_13;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// if (enable && _asyncCheck == null)
		bool L_15 = ___enable0;
		if (!L_15)
		{
			goto IL_0085;
		}
	}
	{
		RuntimeObject* L_16 = __this->____asyncCheck_48;
		if (L_16)
		{
			goto IL_0085;
		}
	}
	{
		// _asyncCheck = AvailabilityCheck();
		RuntimeObject* L_17;
		L_17 = GeospatialController_AvailabilityCheck_mBD33DAAFFBDF7259087853B4298004DAD5D86519(__this, NULL);
		__this->____asyncCheck_48 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____asyncCheck_48), (void*)L_17);
		// StartCoroutine(_asyncCheck);
		RuntimeObject* L_18 = __this->____asyncCheck_48;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_19;
		L_19 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_18, NULL);
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::AvailabilityCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_AvailabilityCheck_mBD33DAAFFBDF7259087853B4298004DAD5D86519 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* L_0 = (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9*)il2cpp_codegen_object_new(U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CAvailabilityCheckU3Ed__62__ctor_m224E05104B55CBC623C7383CEBA521F580316D95(L_0, 0, NULL);
		U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::StartLocationService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeospatialController_StartLocationService_m72676812B8A1C07C07EAB8574995C827CF57DBB8 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* L_0 = (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C*)il2cpp_codegen_object_new(U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartLocationServiceU3Ed__63__ctor_m9155B6DD409AFDC92573E1346A62BE99084EB071(L_0, 0, NULL);
		U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::LifecycleUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_LifecycleUpdate_m9DF865831BF6070D17D792ABD8948E03B692AC9C (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E92CEC960E5FB77AD7949D29EC00C6B6DFF56F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// if (Input.GetKeyUp(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyUp_m9A962E395811A9901E7E05F267E198A533DBEF2F(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
	}

IL_000e:
	{
		// if (_isReturning)
		bool L_1 = __this->____isReturning_38;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// return;
		return;
	}

IL_0017:
	{
		// var sleepTimeout = SleepTimeout.NeverSleep;
		V_0 = (-1);
		// if (ARSession.state != ARSessionState.SessionTracking)
		int32_t L_2;
		L_2 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_2) == ((int32_t)7)))
		{
			goto IL_0024;
		}
	}
	{
		// sleepTimeout = SleepTimeout.SystemSetting;
		V_0 = ((int32_t)-2);
	}

IL_0024:
	{
		// Screen.sleepTimeout = sleepTimeout;
		int32_t L_3 = V_0;
		Screen_set_sleepTimeout_mB375970159A73BB484A2B5E62A943330B83ABF9A(L_3, NULL);
		// string returningReason = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_4;
		// if (ARSession.state != ARSessionState.CheckingAvailability &&
		//     ARSession.state != ARSessionState.Ready &&
		//     ARSession.state != ARSessionState.SessionInitializing &&
		//     ARSession.state != ARSessionState.SessionTracking)
		int32_t L_5;
		L_5 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6;
		L_6 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_6) == ((int32_t)5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_7;
		L_7 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_7) == ((int32_t)6)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_8;
		L_8 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((((int32_t)L_8) == ((int32_t)7)))
		{
			goto IL_0067;
		}
	}
	{
		// returningReason = string.Format(
		//     "Geospatial sample encountered an ARSession error state {0}.\n" +
		//     "Please start the app again.",
		//     ARSession.state);
		int32_t L_9;
		L_9 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4E220F394CF0E90F7FEF038F482846BFBB93ED64, L_11, NULL);
		V_1 = L_12;
		goto IL_00b6;
	}

IL_0067:
	{
		// else if (Input.location.status == LocationServiceStatus.Failed)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_13;
		L_13 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_13, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)3))))
		{
			goto IL_007c;
		}
	}
	{
		// returningReason =
		//     "Geospatial sample failed to start location service.\n" +
		//     "Please start the app again and grant precise location permission.";
		V_1 = _stringLiteral1E92CEC960E5FB77AD7949D29EC00C6B6DFF56F6;
		goto IL_00b6;
	}

IL_007c:
	{
		// else if (SessionOrigin == null || Session == null || ARCoreExtensions == null)
		ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* L_15 = __this->___SessionOrigin_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_16)
		{
			goto IL_00a6;
		}
	}
	{
		ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014* L_17 = __this->___Session_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_18)
		{
			goto IL_00a6;
		}
	}
	{
		ARCoreExtensions_tD81ADD2A10A04FC507DB1A9D022C0778510C3B41* L_19 = __this->___ARCoreExtensions_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00b6;
		}
	}

IL_00a6:
	{
		// returningReason = string.Format(
		//     "Geospatial sample failed with missing AR Components.");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21;
		L_21 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		String_t* L_22;
		L_22 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral80D85E354963DC5787AAB3990BB9B8D1D718AD91, L_21, NULL);
		V_1 = L_22;
	}

IL_00b6:
	{
		// ReturnWithReason(returningReason);
		String_t* L_23 = V_1;
		GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF(__this, L_23, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::ReturnWithReason(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_ReturnWithReason_m94789CA6304ABFD05634B43C370B2399383312EF (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, String_t* ___reason0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(reason))
		String_t* L_0 = ___reason0;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// SetAnchorButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2 = __this->___SetAnchorButton_16;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// TerrainToggle.gameObject.SetActive(false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->___TerrainToggle_17;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// ClearAllButton.gameObject.SetActive(false);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___ClearAllButton_15;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// InfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___InfoPanel_18;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// Debug.LogError(reason);
		String_t* L_9 = ___reason0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		// SnackBarText.text = reason;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___SnackBarText_20;
		String_t* L_11 = ___reason0;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		// _isReturning = true;
		__this->____isReturning_38 = (bool)1;
		// Invoke(nameof(QuitApplication), _errorDisplaySeconds);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral23E836F9814F83ED24864553FD4B41704BFEFFA8, (3.0f), NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::QuitApplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_QuitApplication_m374C0568E0D871CB80991D28B9DAC2F2086B7B0A (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::UpdateDebugInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController_UpdateDebugInfo_m4DD7408BE036B30EE50B0F2CB2D5ED7B24B314A1 (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FeatureSupported_tC15463343F78E985BF776995FBE804EC3D2991A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D77236056880C0D3C936B020E57CFE072FD559);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82B440B1806954FBB712A20CF8BA640DA934EF8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF1592B8A0F09DDD2C81642EEB64EA7C62B32E29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B);
		s_Il2CppMethodInitialized = true;
	}
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C V_2;
	memset((&V_2), 0, sizeof(V_2));
	GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	{
		// if (!Debug.isDebugBuild || EarthManager == null)
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debug_get_isDebugBuild_m9277C4A9591F7E1D8B76340B4CAE5EA33D63AF01(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_1 = __this->___EarthManager_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// var pose = EarthManager.EarthState == EarthState.Enabled &&
		//     EarthManager.EarthTrackingState == TrackingState.Tracking ?
		//     EarthManager.CameraGeospatialPose : new GeospatialPose();
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_3 = __this->___EarthManager_8;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_3, NULL);
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_5 = __this->___EarthManager_8;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_5, NULL);
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_003c;
		}
	}

IL_0031:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C));
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_7 = V_2;
		G_B7_0 = L_7;
		goto IL_0047;
	}

IL_003c:
	{
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_8 = __this->___EarthManager_8;
		NullCheck(L_8);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_9;
		L_9 = AREarthManager_get_CameraGeospatialPose_mE81C71F8E4CD0B6FD4116D0B3E5B97F00DDE9C1A(L_8, NULL);
		G_B7_0 = L_9;
	}

IL_0047:
	{
		V_0 = G_B7_0;
		// var supported = EarthManager.IsGeospatialModeSupported(GeospatialMode.Enabled);
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_10 = __this->___EarthManager_8;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = AREarthManager_IsGeospatialModeSupported_m95784655267321A2E74719CB725D58F368AA278F(L_10, 2, NULL);
		V_1 = L_11;
		// DebugText.text =
		//     $"IsReturning: {_isReturning}\n" +
		//     $"IsLocalizing: {_isLocalizing}\n" +
		//     $"SessionState: {ARSession.state}\n" +
		//     $"LocationServiceStatus: {Input.location.status}\n" +
		//     $"FeatureSupported: {supported}\n" +
		//     $"EarthState: {EarthManager.EarthState}\n" +
		//     $"EarthTrackingState: {EarthManager.EarthTrackingState}\n" +
		//     $"  LAT/LNG: {pose.Latitude:F6}, {pose.Longitude:F6}\n" +
		//     $"  HorizontalAcc: {pose.HorizontalAccuracy:F6}\n" +
		//     $"  ALT: {pose.Altitude:F2}\n" +
		//     $"  VerticalAcc: {pose.VerticalAccuracy:F2}\n" +
		//     $". EunRotation: {pose.EunRotation:F2}\n" +
		//     $"  OrientationYawAcc: {pose.OrientationYawAccuracy:F2}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___DebugText_21;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)13));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		bool L_15 = __this->____isReturning_38;
		bool L_16 = L_15;
		RuntimeObject* L_17 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral80D87A6B5B660BA3CC373D14B317E3A40FC27CD9, L_17, NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_18);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = L_14;
		bool L_20 = __this->____isLocalizing_39;
		bool L_21 = L_20;
		RuntimeObject* L_22 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_21);
		String_t* L_23;
		L_23 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral659DC561CB989579B2C5DB5BC9116FC03B863958, L_22, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_19;
		int32_t L_25;
		L_25 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(ARSessionState_tAAADC649886D67F7134A0D9A665953D764A115D7_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28;
		L_28 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralB7CA9DC3E5A221DFCC0483888D319D118E5CEF90, L_27, NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_28);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_24;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_30;
		L_30 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_30, NULL);
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral3A80DBD535E7AFB2B86F791A732EBEEE4BCF7CDB, L_33, NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_34);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_29;
		int32_t L_36 = V_1;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(FeatureSupported_tC15463343F78E985BF776995FBE804EC3D2991A0_il2cpp_TypeInfo_var, &L_37);
		String_t* L_39;
		L_39 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD7A905249C0409DB8B563D30BAE889395AFBDB30, L_38, NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_39);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_35;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_41 = __this->___EarthManager_8;
		NullCheck(L_41);
		int32_t L_42;
		L_42 = AREarthManager_get_EarthState_m00405B03AE94D0CFB2E90596C028A35250517D38(L_41, NULL);
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(EarthState_t4663D22E8AF1302E5F67CCE0DCB96CA24D310AC6_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralFF4CB593B711998014E24A8BDC4D1A685D2F9E5B, L_44, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_45);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_40;
		AREarthManager_tAC32FF06F084622687D9FB4837506A704301D0F0* L_47 = __this->___EarthManager_8;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = AREarthManager_get_EarthTrackingState_m07DA12743E09AC92C21F6868B51D3211023B299A(L_47, NULL);
		int32_t L_49 = L_48;
		RuntimeObject* L_50 = Box(TrackingState_t5487241B6888BB15D8448EBBC640835A011DBBC2_il2cpp_TypeInfo_var, &L_49);
		String_t* L_51;
		L_51 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral96EF7EFF0F00A2F793F25BE896448C3A1BBA9828, L_50, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_51);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_51);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_46;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_53 = V_0;
		double L_54 = L_53.___Latitude_0;
		double L_55 = L_54;
		RuntimeObject* L_56 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_55);
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_57 = V_0;
		double L_58 = L_57.___Longitude_1;
		double L_59 = L_58;
		RuntimeObject* L_60 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_59);
		String_t* L_61;
		L_61 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralFBA251D8CD4C01D372EB4EAC50A26C0633FA71D7, L_56, L_60, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_61);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_61);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_52;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_63 = V_0;
		double L_64 = L_63.___HorizontalAccuracy_5;
		double L_65 = L_64;
		RuntimeObject* L_66 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_65);
		String_t* L_67;
		L_67 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral31D77236056880C0D3C936B020E57CFE072FD559, L_66, NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_67);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_67);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_68 = L_62;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_69 = V_0;
		double L_70 = L_69.___Altitude_2;
		double L_71 = L_70;
		RuntimeObject* L_72 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_71);
		String_t* L_73;
		L_73 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral8E5080011A7CA3BD4949A61B46ADA7657E8540F9, L_72, NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_73);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = L_68;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_75 = V_0;
		double L_76 = L_75.___VerticalAccuracy_6;
		double L_77 = L_76;
		RuntimeObject* L_78 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_77);
		String_t* L_79;
		L_79 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral272FD43E889593108C54482F13ABAACDD71C5FFE, L_78, NULL);
		NullCheck(L_74);
		ArrayElementTypeCheck (L_74, L_79);
		(L_74)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_79);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = L_74;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_81 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_82 = L_81.___EunRotation_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_83 = L_82;
		RuntimeObject* L_84 = Box(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var, &L_83);
		String_t* L_85;
		L_85 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral82B440B1806954FBB712A20CF8BA640DA934EF8C, L_84, NULL);
		NullCheck(L_80);
		ArrayElementTypeCheck (L_80, L_85);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_85);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_86 = L_80;
		GeospatialPose_tBF34434706FEEB7D1524DEE5FADDEE7E95452F2C L_87 = V_0;
		double L_88 = L_87.___OrientationYawAccuracy_8;
		double L_89 = L_88;
		RuntimeObject* L_90 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_89);
		String_t* L_91;
		L_91 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralBF1592B8A0F09DDD2C81642EEB64EA7C62B32E29, L_90, NULL);
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_91);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)L_91);
		String_t* L_92;
		L_92 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_86, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_92);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeospatialController__ctor_m94BF4BBFAAEC1C97890C4E06BF04404FBE6D8FEC (GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private float _configurePrepareTime = 3f;
		__this->____configurePrepareTime_44 = (3.0f);
		// private List<GameObject> _anchorObjects = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->____anchorObjects_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____anchorObjects_46), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__55__ctor_m9E5219C260204A9A77AF728DB09C35CDA89F655A (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TerrainAnchorState_tAA75FC29D5E05B159FB4B825A67F7ADEACDE0C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD5241E070B724D1D5CE76F8E905B1B2E830A43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CD8725749511AED54A82B7EEB159755F15D7128);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDA796EB4404F7FE0A210545E10CD3705E9368E0);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B18_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B17_0 = NULL;
	int32_t G_B19_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B19_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00df;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (anchor == null || _anchorObjects == null)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_4 = __this->___anchor_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0037;
		}
	}
	{
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_6 = V_1;
		NullCheck(L_6);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = L_6->____anchorObjects_46;
		if (L_7)
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		// yield break;
		return (bool)0;
	}

IL_0039:
	{
		// int retry = 0;
		__this->___U3CretryU3E5__2_4 = 0;
		goto IL_00fb;
	}

IL_0045:
	{
		// if (_anchorObjects.Count == 0 || !_anchorObjects.Contains(anchor.gameObject))
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_8 = V_1;
		NullCheck(L_8);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_9 = L_8->____anchorObjects_46;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_9, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_11 = V_1;
		NullCheck(L_11);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = L_11->____anchorObjects_46;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_13 = __this->___anchor_2;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
		NullCheck(L_12);
		bool L_15;
		L_15 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_12, L_14, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_008f;
		}
	}

IL_006a:
	{
		// Debug.LogFormat(
		//     "{0} has been removed, exist terrain anchor state check.",
		//     anchor.trackableId);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_18 = __this->___anchor_2;
		NullCheck(L_18);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_19;
		L_19 = ARGeospatialAnchor_get_trackableId_m8560D0B2C6E8D602B97A0B61EA92499AAD683939(L_18, NULL);
		TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 L_20 = L_19;
		RuntimeObject* L_21 = Box(TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteral1CD8725749511AED54A82B7EEB159755F15D7128, L_17, NULL);
		// yield break;
		return (bool)0;
	}

IL_008f:
	{
		// if (retry == 100 && _anchorObjects.Last().Equals(anchor.gameObject))
		int32_t L_22 = __this->___U3CretryU3E5__2_4;
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_00c6;
		}
	}
	{
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_23 = V_1;
		NullCheck(L_23);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_24 = L_23->____anchorObjects_46;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B(L_24, Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_26 = __this->___anchor_2;
		NullCheck(L_26);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_26, NULL);
		NullCheck(L_25);
		bool L_28;
		L_28 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_25, L_27);
		if (!L_28)
		{
			goto IL_00c6;
		}
	}
	{
		// SnackBarText.text = _resolvingTimeoutMessage;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_29 = V_1;
		NullCheck(L_29);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = L_29->___SnackBarText_20;
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, _stringLiteral0AD5241E070B724D1D5CE76F8E905B1B2E830A43);
	}

IL_00c6:
	{
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_31 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_31, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00df:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// retry = Math.Min(retry + 1, 100);
		int32_t L_32 = __this->___U3CretryU3E5__2_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)il2cpp_codegen_add(L_32, 1)), ((int32_t)100), NULL);
		__this->___U3CretryU3E5__2_4 = L_33;
	}

IL_00fb:
	{
		// while (anchor.terrainAnchorState == TerrainAnchorState.TaskInProgress)
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_34 = __this->___anchor_2;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_34, NULL);
		if ((((int32_t)L_35) == ((int32_t)1)))
		{
			goto IL_0045;
		}
	}
	{
		// anchor.gameObject.SetActive(
		//     !_isLocalizing && anchor.terrainAnchorState == TerrainAnchorState.Success);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_36 = __this->___anchor_2;
		NullCheck(L_36);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_36, NULL);
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_38 = V_1;
		NullCheck(L_38);
		bool L_39 = L_38->____isLocalizing_39;
		G_B17_0 = L_37;
		if (L_39)
		{
			G_B18_0 = L_37;
			goto IL_012f;
		}
	}
	{
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_40 = __this->___anchor_2;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_40, NULL);
		G_B19_0 = ((((int32_t)L_41) == ((int32_t)2))? 1 : 0);
		G_B19_1 = G_B17_0;
		goto IL_0130;
	}

IL_012f:
	{
		G_B19_0 = 0;
		G_B19_1 = G_B18_0;
	}

IL_0130:
	{
		NullCheck(G_B19_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B19_1, (bool)G_B19_0, NULL);
		// if (_anchorObjects.Last().Equals(anchor.gameObject))
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_42 = V_1;
		NullCheck(L_42);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_43 = L_42->____anchorObjects_46;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44;
		L_44 = Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B(L_43, Enumerable_Last_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m44FD3C8A2A54EF7B35EC6D95D81D4E715576F73B_RuntimeMethod_var);
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_45 = __this->___anchor_2;
		NullCheck(L_45);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_45, NULL);
		NullCheck(L_44);
		bool L_47;
		L_47 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_44, L_46);
		if (!L_47)
		{
			goto IL_0177;
		}
	}
	{
		// SnackBarText.text = $"Terrain anchor state: {anchor.terrainAnchorState}";
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_48 = V_1;
		NullCheck(L_48);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_49 = L_48->___SnackBarText_20;
		ARGeospatialAnchor_tD63E18E1D193A2B24B757D285F3CF67A8FC7F571* L_50 = __this->___anchor_2;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = ARGeospatialAnchor_get_terrainAnchorState_mEBC0D2FA1EB6499109A5BAD0B37E86C6DF78C047(L_50, NULL);
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(TerrainAnchorState_tAA75FC29D5E05B159FB4B825A67F7ADEACDE0C1D_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54;
		L_54 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCDA796EB4404F7FE0A210545E10CD3705E9368E0, L_53, NULL);
		NullCheck(L_49);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_49, L_54);
	}

IL_0177:
	{
		// yield break;
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC3FBB1D8FA1D6EB4A0ECECF6213D193A013030A2 (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<CheckTerrainAnchorState>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCheckTerrainAnchorStateU3Ed__55_System_Collections_IEnumerator_Reset_m51425ECE54B7ADD4A0691C79D2FFE7625E730955 (U3CCheckTerrainAnchorStateU3Ed__55_tD62C5C2969E9027B1E3A9BB64B1D5FF43826593C* __this, const RuntimeMethod* method) 
{
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
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c__DisplayClass59_0::<LoadGeospatialAnchorHistory>b__0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass59_0_U3CLoadGeospatialAnchorHistoryU3Eb__0_mD4E003F3D47C2403D68D5E7653300A70D8BAB182 (U3CU3Ec__DisplayClass59_0_tE18F405E25C43F2DEFD7EC79CACDA0779ED23A90* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___data0, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// data => current.Subtract(data.CreatedTime).Days > 0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___current_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___data0), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = DateTime_Subtract_m4064A98F489219E9C414DF5C03EE041351B4502A(L_0, L_1, NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = TimeSpan_get_Days_m1317F48F8D9849E161D1CDBEB5CA08344EAAC107((&V_0), NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
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
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<>c::<SaveGeospatialAnchorHistory>b__60_0(Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory,Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialAnchorHistory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CSaveGeospatialAnchorHistoryU3Eb__60_0_mE2C05EFFFD63EAFBCE22ECA9B6F52DD78DB13572 (U3CU3Ec_t22A9D7D7546AFBCA94F8CFDC2DD594256900C6EA* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___left0, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___right1, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// right.CreatedTime.CompareTo(left.CreatedTime));
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___right1), NULL);
		V_0 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = GeospatialAnchorHistory_get_CreatedTime_m2C5F45E1C2051B6838DFE492BFB1E9E64FB5C76A((&___left0), NULL);
		int32_t L_2;
		L_2 = DateTime_CompareTo_m4A3000CD4FF15EA7CA2E9C5C95A9D07F3AA8D35D((&V_0), L_1, NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
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
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0058;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0092;
			}
			case 4:
			{
				goto IL_00a9;
			}
			case 5:
			{
				goto IL_00e9;
			}
			case 6:
			{
				goto IL_0118;
			}
			case 7:
			{
				goto IL_0192;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0036:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (ARSession.state == ARSessionState.None)
		int32_t L_3;
		L_3 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if (L_3)
		{
			goto IL_005f;
		}
	}
	{
		// yield return ARSession.CheckAvailability();
		RuntimeObject* L_4;
		L_4 = ARSession_CheckAvailability_m7090FD96E8580EB3E6CAB97B8344BF845B254D0A(NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0058:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_005f:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_006f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (ARSession.state == ARSessionState.NeedsInstall)
		int32_t L_5;
		L_5 = ARSession_get_state_m6A22EE6441E58AC66E1FE9A7359D06C90C1A2842_inline(NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)3))))
		{
			goto IL_0099;
		}
	}
	{
		// yield return ARSession.Install();
		RuntimeObject* L_6;
		L_6 = ARSession_Install_m9C4DCECEA000E16F4992376B7E40DA0C95B58166(NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_0092:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0099:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 4;
		return (bool)1;
	}

IL_00a9:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
		bool L_7;
		L_7 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		if (L_7)
		{
			goto IL_00f0;
		}
	}
	{
		// Debug.Log("Requesting camera permission.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA1E32C34EADE26834700EF4ADABB38561179CEBE, NULL);
		// Permission.RequestUserPermission(Permission.Camera);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		// yield return new WaitForSeconds(3.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 5;
		return (bool)1;
	}

IL_00e9:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00f0:
	{
		// if (!Permission.HasUserAuthorizedPermission(Permission.Camera))
		bool L_9;
		L_9 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteralD4F10F0250BE015A970ECE39AF0E63147876656F, NULL);
		if (L_9)
		{
			goto IL_011f;
		}
	}
	{
		// Debug.LogWarning(
		//     "Failed to get camera permission. VPS availability check is not available.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1ABCB9A2CA1FE87C833C0D42EF5790DE5D6D5D7A, NULL);
		// yield break;
		return (bool)0;
	}

IL_0108:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 6;
		return (bool)1;
	}

IL_0118:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_011f:
	{
		// while (_waitingForLocationService)
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_10 = V_1;
		NullCheck(L_10);
		bool L_11 = L_10->____waitingForLocationService_36;
		if (L_11)
		{
			goto IL_0108;
		}
	}
	{
		// if (Input.location.status != LocationServiceStatus.Running)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_12;
		L_12 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_12, NULL);
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0140;
		}
	}
	{
		// Debug.LogWarning(
		//     "Location service is not running. VPS availability check is not available.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral1B34A45352A1F9AB3E6BCFB17173317AFF631C89, NULL);
		// yield break;
		return (bool)0;
	}

IL_0140:
	{
		// if (_isReturning)
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_14 = V_1;
		NullCheck(L_14);
		bool L_15 = L_14->____isReturning_38;
		if (!L_15)
		{
			goto IL_014a;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_014a:
	{
		// var location = Input.location.lastData;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_16;
		L_16 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_16);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441 L_17;
		L_17 = LocationService_get_lastData_m50C68F3DFB23894CF519F00BBA9D72146EE9345F(L_16, NULL);
		__this->___U3ClocationU3E5__2_3 = L_17;
		// var vpsAvailabilityPromise =
		//     AREarthManager.CheckVpsAvailability(location.latitude, location.longitude);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_18 = (&__this->___U3ClocationU3E5__2_3);
		float L_19;
		L_19 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863(L_18, NULL);
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_20 = (&__this->___U3ClocationU3E5__2_3);
		float L_21;
		L_21 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2(L_20, NULL);
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_22;
		L_22 = AREarthManager_CheckVpsAvailability_m05CD87D382FD14B2014B2A87FC0687B765EBC543(((double)L_19), ((double)L_21), NULL);
		__this->___U3CvpsAvailabilityPromiseU3E5__3_4 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CvpsAvailabilityPromiseU3E5__3_4), (void*)L_22);
		// yield return vpsAvailabilityPromise;
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_23 = __this->___U3CvpsAvailabilityPromiseU3E5__3_4;
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 7;
		return (bool)1;
	}

IL_0192:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Debug.LogFormat("VPS Availability at ({0}, {1}): {2}",
		//     location.latitude, location.longitude, vpsAvailabilityPromise.Result);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_26 = (&__this->___U3ClocationU3E5__2_3);
		float L_27;
		L_27 = LocationInfo_get_latitude_mAF0A46443555AF18EA3C516292CB92B1669CA863(L_26, NULL);
		float L_28 = L_27;
		RuntimeObject* L_29 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_25;
		LocationInfo_tBFD49220A54B71CDF564F61822F7B8D524465441* L_31 = (&__this->___U3ClocationU3E5__2_3);
		float L_32;
		L_32 = LocationInfo_get_longitude_mCB720DD0E139B7C614F78D40595E1BBF1F5433A2(L_31, NULL);
		float L_33 = L_32;
		RuntimeObject* L_34 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_34);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_30;
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_36 = __this->___U3CvpsAvailabilityPromiseU3E5__3_4;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>::get_Result() */, L_36);
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(VpsAvailability_t45DB38FE9BF4135673CE5455506068164625A197_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_39);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(_stringLiteralED772B549705A1BF599485764F40D84130414B4B, L_35, NULL);
		// VPSCheckCanvas.SetActive(vpsAvailabilityPromise.Result != VpsAvailability.Available);
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_40 = V_1;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = L_40->___VPSCheckCanvas_13;
		VpsAvailabilityPromise_tD7DB90CD6085F0BF774A6E6D2B92DE41780A47C1* L_42 = __this->___U3CvpsAvailabilityPromiseU3E5__3_4;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(10 /* T Google.XR.ARCoreExtensions.Internal.InterruptiblePromise`1<Google.XR.ARCoreExtensions.VpsAvailability>::get_Result() */, L_42);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)((((int32_t)((((int32_t)L_43) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CAvailabilityCheckU3Ed__62_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m503EE05EDCEF0432FE66763F39C96BDC508ACE09 (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<AvailabilityCheck>d__62::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAvailabilityCheckU3Ed__62_System_Collections_IEnumerator_Reset_mC7BE82AF639BDF9B11B59B0173CDB4A0065F8A7B (U3CAvailabilityCheckU3Ed__62_t78EE7606A6E81945E9C04250D4F0A0B0344385D9* __this, const RuntimeMethod* method) 
{
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral072A3A99BF91D3581396944AD57B4BB254BF43AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0ABC0AF5010BE71FECDAD9A690FA25A94F0B1495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DBA97D072F0A39EE526621BF8EDC2AD83D9BB3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE2F1BFE1BE99B9017E10F89B16590A5D791925A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0069;
			}
			case 2:
			{
				goto IL_00b5;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _waitingForLocationService = true;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_3 = V_1;
		NullCheck(L_3);
		L_3->____waitingForLocationService_36 = (bool)1;
		// if (!Permission.HasUserAuthorizedPermission(Permission.FineLocation))
		bool L_4;
		L_4 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		if (L_4)
		{
			goto IL_0070;
		}
	}
	{
		// Debug.Log("Requesting fine location permission.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral0ABC0AF5010BE71FECDAD9A690FA25A94F0B1495, NULL);
		// Permission.RequestUserPermission(Permission.FineLocation);
		Permission_RequestUserPermission_mF9CF3A21AAF34B311137C4D00B3AD6A6C2694242(_stringLiteral2A4AF2371E5D32D286057BF0185547BF96F20333, NULL);
		// yield return new WaitForSeconds(3.0f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0069:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0070:
	{
		// if (!Input.location.isEnabledByUser)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_6;
		L_6 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = LocationService_get_isEnabledByUser_m78FE3A38B1101BAF658E259C1A6B4CD9A008DCAE(L_6, NULL);
		if (L_7)
		{
			goto IL_008f;
		}
	}
	{
		// Debug.Log("Location service is disabled by User.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7DBA97D072F0A39EE526621BF8EDC2AD83D9BB3A, NULL);
		// _waitingForLocationService = false;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_8 = V_1;
		NullCheck(L_8);
		L_8->____waitingForLocationService_36 = (bool)0;
		// yield break;
		return (bool)0;
	}

IL_008f:
	{
		// Debug.Log("Start location service.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral072A3A99BF91D3581396944AD57B4BB254BF43AD, NULL);
		// Input.location.Start();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_9;
		L_9 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_9);
		LocationService_Start_mC2A90619923D4BEB5F9B5CCD95F317B98D67AF3A(L_9, NULL);
		goto IL_00bc;
	}

IL_00a5:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b5:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00bc:
	{
		// while (Input.location.status == LocationServiceStatus.Initializing)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_10;
		L_10 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_10, NULL);
		if ((((int32_t)L_11) == ((int32_t)1)))
		{
			goto IL_00a5;
		}
	}
	{
		// _waitingForLocationService = false;
		GeospatialController_t69A2BBD44F5A190BB256B888033F5297AF0A0D2F* L_12 = V_1;
		NullCheck(L_12);
		L_12->____waitingForLocationService_36 = (bool)0;
		// if (Input.location.status != LocationServiceStatus.Running)
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_13;
		L_13 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_13);
		int32_t L_14;
		L_14 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_13, NULL);
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_0109;
		}
	}
	{
		// Debug.LogWarningFormat(
		//     "Location service ends with {0} status.", Input.location.status);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_15;
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_17;
		L_17 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = LocationService_get_status_m25B7C4012B9529265D9746BB73ED689737E9C9CD(L_17, NULL);
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(LocationServiceStatus_tF9F78681F963A53FD6CA4CDC2DDDBD7B4DF517F7_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_20);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_20);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(_stringLiteralEE2F1BFE1BE99B9017E10F89B16590A5D791925A, L_16, NULL);
		// Input.location.Stop();
		LocationService_tF2F2720FE2C07562EBFD128889F9A99F4B41B1B2* L_21;
		L_21 = Input_get_location_m1D1FA0938E5B83C46A666CE78D95A58B39164DB5(NULL);
		NullCheck(L_21);
		LocationService_Stop_mB9332CB653E7A7CE6AE07240EA6C0B6C9AEC0D96(L_21, NULL);
	}

IL_0109:
	{
		// }
		return (bool)0;
	}
}
// System.Object Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartLocationServiceU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m44036CDC29C45DD97F22C426CB18023631767C97 (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.GeospatialController/<StartLocationService>d__63::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartLocationServiceU3Ed__63_System_Collections_IEnumerator_Reset_m3465864CBA8D60384D7A2FCCE4F2495A0D25EC97 (U3CStartLocationServiceU3Ed__63_t5E5FCB63766B4EC98AF213EB7AC3C297D6F2E15C* __this, const RuntimeMethod* method) 
{
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
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// safeArea = Screen.safeArea;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		L_0 = Screen_get_safeArea_m2ADAD6C36CC5DB40CC2DAD300DD1DF7CA4DF2525(NULL);
		V_0 = L_0;
		// if (_screenSafeArea != safeArea)
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = __this->____screenSafeArea_4;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_0;
		bool L_3;
		L_3 = Rect_op_Inequality_mB5D7316EB50B1DDA9324F4BE6741DFF6A673137D(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		// _screenSafeArea = safeArea;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4 = V_0;
		__this->____screenSafeArea_4 = L_4;
		// MatchRectTransformToSafeArea();
		SafeAreaScaler_MatchRectTransformToSafeArea_m04E6A9A1444C10EDDC3392285A1C5BE523BE8F64(__this, NULL);
	}

IL_0021:
	{
		// }
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
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// RectTransform rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		// Vector2 offsetMin = new Vector2(_screenSafeArea.xMin,
		//     Screen.height - _screenSafeArea.yMax);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&__this->____screenSafeArea_4);
		float L_2;
		L_2 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D(L_1, NULL);
		int32_t L_3;
		L_3 = Screen_get_height_m01A3102DE71EE1FBEA51D09D6B0261CF864FE8F9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_4 = (&__this->____screenSafeArea_4);
		float L_5;
		L_5 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_4, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_2, ((float)il2cpp_codegen_subtract(((float)L_3), L_5)), NULL);
		// Vector2 offsetMax = new Vector2(
		//     _screenSafeArea.xMax - Screen.width,
		//     -_screenSafeArea.yMin);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_6 = (&__this->____screenSafeArea_4);
		float L_7;
		L_7 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_6, NULL);
		int32_t L_8;
		L_8 = Screen_get_width_mF608FF3252213E7EFA1F0D2F744C28110E9E5AC9(NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&__this->____screenSafeArea_4);
		float L_10;
		L_10 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_9, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_1), ((float)il2cpp_codegen_subtract(L_7, ((float)L_8))), ((-L_10)), NULL);
		// rectTransform.offsetMin = offsetMin;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = L_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		NullCheck(L_11);
		RectTransform_set_offsetMin_m07F38B4105C7CA9CC9FBDC9ED0DB008602880AB9(L_11, L_12, NULL);
		// rectTransform.offsetMax = offsetMax;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_1;
		NullCheck(L_11);
		RectTransform_set_offsetMax_m5514D09D86516F2C0E25FA6D11A3A4274D3D002D(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void Google.XR.ARCoreExtensions.Samples.Geospatial.SafeAreaScaler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SafeAreaScaler__ctor_m61ED2F6F927714C4ED11AA2AEE2A0B9EA79B484B (SafeAreaScaler_t7FFEE4D34FEA32394B9181D42E522BFFD1E4BCE8* __this, const RuntimeMethod* method) 
{
	{
		// private Rect _screenSafeArea = new Rect(0, 0, 0, 0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0;
		memset((&L_0), 0, sizeof(L_0));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_0), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->____screenSafeArea_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => s_State;
		int32_t L_0 = ((ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_StaticFields*)il2cpp_codegen_static_fields_for(ARSession_t13374A44A01F2C6D90578F93E0F0DA2482BE3014_il2cpp_TypeInfo_var))->___s_State_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_op_Equality_mE6F6B56FCED8478552BE02BBAF18C70B969217F9_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___rhs1;
		float L_2;
		L_2 = Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline(L_0, L_1, NULL);
		bool L_3;
		L_3 = Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline(L_2, NULL);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m37240752CB5A2D30C6B5DFB09B57CFC74937B06E_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_3 = (GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m14F14B1A2F8E0A0240A5BE0A6DEED701683CA179_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C ___item0, const RuntimeMethod* method) 
{
	GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_1 = (GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		GeospatialAnchorHistoryU5BU5D_tA0C4C60A0BC9FD540F02A271D88E148E4FD6B244* L_6 = V_0;
		int32_t L_7 = V_1;
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C)L_8);
		return;
	}

IL_0034:
	{
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_9 = ___item0;
		((  void (*) (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5*, GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m366731F8C5367A70BFA5E32AC5BB19AAF4D5A890_gshared_inline (List_1_t129F965E3A52C7ACA849FAEC97997D9357ED21A5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m947657E2F650AF1E5068D44835812D75F0487EB7_gshared_inline (List_1_t0754071572EFE7A5C92A59495D2524FC935364E3* __this, const RuntimeMethod* method) 
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C Enumerator_get_Current_mC6F82F839549997CF0BD79343E5A30AF13DE1A6C_gshared_inline (Enumerator_t65D519ADC53EFF4CA822C0CDFDF279384A1EC1E6* __this, const RuntimeMethod* method) 
{
	{
		GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C L_0 = (GeospatialAnchorHistory_t6908A396462F1450B5999D2948632194CD812A5C)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Quaternion_Dot_mF9D3BE33940A47979DADA7E81650AEB356D5D12B_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___a0;
		float L_9 = L_8.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___b1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___a0;
		float L_13 = L_12.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___b1;
		float L_15 = L_14.___w_3;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		goto IL_003b;
	}

IL_003b:
	{
		float L_16 = V_0;
		return L_16;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Quaternion_IsEqualUsingDot_m9C672201C918C2D1E739F559DBE4406F95997CBD_inline (float ___dot0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		float L_0 = ___dot0;
		V_0 = (bool)((((float)L_0) > ((float)(0.999998987f)))? 1 : 0);
		goto IL_000c;
	}

IL_000c:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
