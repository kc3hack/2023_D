#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = 
{
	{ 16564, 0,  0 } /*tableIndex: 0 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"request",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[8] = 
{
	{ 0, 1 } /* 0x06000001 UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,UnityEngine.CachedAssetBundle,System.UInt32) */,
	{ 0, 0 } /* 0x06000002 System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundleCached(System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,UnityEngine.CachedAssetBundle,System.UInt32) */,
	{ 0, 0 } /* 0x06000005 System.Byte[] UnityEngine.Networking.DownloadHandlerAssetBundle::GetData() */,
	{ 0, 0 } /* 0x06000006 System.String UnityEngine.Networking.DownloadHandlerAssetBundle::GetText() */,
	{ 0, 0 } /* 0x06000007 UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle() */,
	{ 0, 0 } /* 0x06000008 System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached_Injected(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128&,System.UInt32) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[34] = 
{
	{ 37098, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 37098, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 37098, 1, 91, 91, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 37098, 1, 92, 97, 13, 15, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 37098, 1, 92, 97, 13, 15, 10, kSequencePointKind_StepOut, 0, 4 } /* seqPointIndex: 4 */,
	{ 37098, 1, 92, 97, 13, 15, 16, kSequencePointKind_StepOut, 0, 5 } /* seqPointIndex: 5 */,
	{ 37098, 1, 99, 99, 13, 28, 22, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 37098, 1, 100, 100, 9, 10, 26, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 37100, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 37100, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 37100, 2, 21, 21, 9, 10, 0, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 37100, 2, 22, 22, 13, 62, 1, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 37100, 2, 22, 22, 13, 62, 8, kSequencePointKind_StepOut, 0, 12 } /* seqPointIndex: 12 */,
	{ 37100, 2, 23, 23, 9, 10, 18, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 37101, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 37101, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 37101, 2, 45, 45, 9, 96, 0, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 37101, 2, 45, 45, 9, 96, 1, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 37101, 2, 46, 46, 9, 10, 7, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 37101, 2, 47, 47, 13, 93, 8, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 37101, 2, 47, 47, 13, 93, 12, kSequencePointKind_StepOut, 0, 20 } /* seqPointIndex: 20 */,
	{ 37101, 2, 47, 47, 13, 93, 19, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 37101, 2, 47, 47, 13, 93, 25, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 37101, 2, 48, 48, 9, 10, 31, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 37102, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 37102, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 37102, 2, 51, 51, 9, 10, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 37102, 2, 52, 52, 13, 106, 1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 37102, 2, 52, 52, 13, 106, 6, kSequencePointKind_StepOut, 0, 28 } /* seqPointIndex: 28 */,
	{ 37103, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 37103, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 37103, 2, 56, 56, 9, 10, 0, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 37103, 2, 57, 57, 13, 104, 1, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 37103, 2, 57, 57, 13, 104, 6, kSequencePointKind_StepOut, 0, 33 } /* seqPointIndex: 33 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\UnityWebRequestAssetBundle\\UnityWebRequestAssetBundle.cs", { 43, 59, 30, 199, 31, 44, 42, 123, 118, 187, 5, 96, 49, 79, 186, 7} }, //1 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\UnityWebRequestAssetBundle\\Public\\DownloadHandlerAssetBundle.bindings.cs", { 172, 106, 229, 19, 162, 150, 132, 180, 165, 5, 112, 231, 114, 44, 77, 232} }, //2 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[2] = 
{
	{ 5796, 1 },
	{ 5797, 2 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = 
{
	{ 0, 28 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[8] = 
{
	{ 28, 0, 1 } /* UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAssetBundle::GetAssetBundle(System.String,UnityEngine.CachedAssetBundle,System.UInt32) */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::InternalCreateAssetBundleCached(System.String,System.String,UnityEngine.Hash128,System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.Networking.DownloadHandlerAssetBundle::.ctor(System.String,UnityEngine.CachedAssetBundle,System.UInt32) */,
	{ 0, 0, 0 } /* System.Byte[] UnityEngine.Networking.DownloadHandlerAssetBundle::GetData() */,
	{ 0, 0, 0 } /* System.String UnityEngine.Networking.DownloadHandlerAssetBundle::GetText() */,
	{ 0, 0, 0 } /* UnityEngine.AssetBundle UnityEngine.Networking.DownloadHandlerAssetBundle::get_assetBundle() */,
	{ 0, 0, 0 } /* System.IntPtr UnityEngine.Networking.DownloadHandlerAssetBundle::CreateCached_Injected(UnityEngine.Networking.DownloadHandlerAssetBundle,System.String,System.String,UnityEngine.Hash128&,System.UInt32) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestAssetBundleModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_UnityWebRequestAssetBundleModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	34,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_UnityWebRequestAssetBundleModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	2,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
