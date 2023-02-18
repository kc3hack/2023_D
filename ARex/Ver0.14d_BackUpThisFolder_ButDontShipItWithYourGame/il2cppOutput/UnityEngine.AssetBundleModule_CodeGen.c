#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.AssetBundle::.ctor()
extern void AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410 (void);
// 0x00000002 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromMemory_Internal(System.Byte[],System.UInt32)
extern void AssetBundle_LoadFromMemory_Internal_m05D4AAA1B9AF41422A57A602AED64172D29C4305 (void);
// 0x00000003 UnityEngine.AssetBundle UnityEngine.AssetBundle::LoadFromMemory(System.Byte[])
extern void AssetBundle_LoadFromMemory_mBA6847E4133DBBE3CCBCFFF31A40FA943DB95BBA (void);
static Il2CppMethodPointer s_methodPointers[3] = 
{
	AssetBundle__ctor_m12989CA081324BB49ED893BDA5E3B4E758D61410,
	AssetBundle_LoadFromMemory_Internal_m05D4AAA1B9AF41422A57A602AED64172D29C4305,
	AssetBundle_LoadFromMemory_mBA6847E4133DBBE3CCBCFFF31A40FA943DB95BBA,
};
static const int32_t s_InvokerIndices[3] = 
{
	2354,
	3827,
	4285,
};
extern const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_AssetBundleModule;
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AssetBundleModule_CodeGenModule = 
{
	"UnityEngine.AssetBundleModule.dll",
	3,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	&g_DebuggerMetadataRegistrationUnityEngine_AssetBundleModule,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
