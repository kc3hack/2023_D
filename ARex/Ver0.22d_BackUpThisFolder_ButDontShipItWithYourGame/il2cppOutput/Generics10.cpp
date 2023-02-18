#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtualActionInvoker0Invoker
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, NULL);
	}
};
template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
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
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericVirtualActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtualActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericVirtualActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericVirtualActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtualActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericVirtualActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
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
struct InterfaceActionInvoker0Invoker
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, NULL);
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InterfaceActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InterfaceActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
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
template <typename R>
struct InterfaceFuncInvoker0Invoker
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker;
template <typename R, typename T1>
struct InterfaceFuncInvoker1Invoker<R, T1*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		R ret;
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker;
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3Invoker<T1*, T2*, T3*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[3] = { p1, p2, p3 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4Invoker;
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4Invoker<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[4] = { p1, p2, p3, p4 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct GenericInterfaceActionInvoker5Invoker<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[5] = { p1, p2, p3, p4, p5 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct GenericInterfaceActionInvoker6Invoker<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceActionInvoker7Invoker;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct GenericInterfaceActionInvoker7Invoker<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[6]);
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3)
	{
		void* params[3] = { &p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4* p4)
	{
		void* params[4] = { p1, p2, &p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { &p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2*, T3*, T4*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4)
	{
		void* params[4] = { p1, p2, p3, p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2*, T3*, T4*, T5*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5)
	{
		void* params[5] = { p1, p2, p3, p4, p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerActionInvoker6<T1*, T2*, T3*, T4*, T5*, T6*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6)
	{
		void* params[6] = { p1, p2, p3, p4, p5, p6 };
		method->invoker_method(methodPtr, method, obj, params, params[5]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerActionInvoker7<T1*, T2*, T3*, T4*, T5*, T6*, T7*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7)
	{
		void* params[7] = { p1, p2, p3, p4, p5, p6, p7 };
		method->invoker_method(methodPtr, method, obj, params, params[6]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct InvokerActionInvoker8<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8)
	{
		void* params[8] = { p1, p2, p3, p4, p5, p6, p7, p8 };
		method->invoker_method(methodPtr, method, obj, params, params[7]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9;
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct InvokerActionInvoker9<T1*, T2*, T3*, T4*, T5*, T6*, T7*, T8*, T9*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7* p7, T8* p8, T9* p9)
	{
		void* params[9] = { p1, p2, p3, p4, p5, p6, p7, p8, p9 };
		method->invoker_method(methodPtr, method, obj, params, params[8]);
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
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32,System.Boolean>
struct Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E;
// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IList_1_t8AC59FFD0F90EC2DAD4C3FA39B2A5851F9D2987A;
// System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IObservable_1_tA29A83F0C2D67B7465AEA27D123F8F8B6514E475;
// System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct IObserver_1_tBC6CE0DC9E0C4FC95DA956CA90305E2B00BD5785;
// System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IObserver_1_t094BE2515872266E98A772AEA02B413105F16A8B;
// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.Queue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Unity.VisualScripting.FullSerializer.fsData>
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
// UniRx.Operators.WhereObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C;
// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
// UniRx.Operators.WhereSelectObservable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C;
// UniRx.Operators.WhereObservable`1/Where_<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C;
// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4;
// UniRx.Operators.WithLatestFromObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848;
// UniRx.Operators.ZipObservable`1/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380;
// UniRx.Operators.ZipObservable`3/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746;
// UniRx.Operators.ZipObservable`4/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC;
// UniRx.Operators.ZipObservable`5/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228;
// UniRx.Operators.ZipObservable`6/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700;
// UniRx.Operators.ZipObservable`7/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49;
// UniRx.Operators.ZipObservable`8/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3;
// UniRx.Operators.ZipFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D;
// UniRx.Operators.ZipFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962;
// UniRx.Operators.ZipFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965;
// UniRx.Operators.ZipFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9;
// UniRx.Operators.ZipFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A;
// UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527;
// UniRx.Operators.ZipLatestObservable`4/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957;
// UniRx.Operators.ZipLatestObservable`5/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D;
// UniRx.Operators.ZipLatestObservable`6/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2;
// UniRx.Operators.ZipLatestObservable`7/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1;
// UniRx.Operators.ZipLatestObservable`8/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D;
// UniRx.Operators.ZipLatestFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB;
// UniRx.Operators.ZipLatestFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183;
// UniRx.Operators.ZipLatestFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69;
// UniRx.Operators.ZipLatestFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6;
// UniRx.Operators.ZipLatestFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795;
// UniRx.Operators.ZipLatestObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C;
// UniRx.Operators.ZipLatestObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091;
// UniRx.Operators.ZipLatestObservable`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04;
// UniRx.Operators.ZipLatestObservable`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07;
// UniRx.Operators.ZipLatestObservable`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2;
// UniRx.Operators.ZipLatestObservable`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576;
// UniRx.Operators.ZipLatestObservable`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA;
// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75;
// UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5;
// UniRx.Operators.ZipObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2;
// UniRx.Operators.ZipObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21;
// UniRx.Operators.ZipObservable`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3;
// UniRx.Operators.ZipObservable`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A;
// UniRx.Operators.ZipObservable`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961;
// UniRx.Operators.ZipObservable`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5;
// UniRx.Operators.ZipObservable`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4;
// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2;
// UniRx.Operators.ZipObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802;
// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Unity.VisualScripting.FullSerializer.fsData>[]
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
// System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035;
// System.Collections.Generic.Queue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UniRx.ICancelable
struct ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4;
// System.Collections.ICollection
struct ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E;
// UniRx.Operators.IZipLatestObservable
struct IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7;
// UniRx.Operators.IZipObservable
struct IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UniRx.SingleAssignmentDisposable
struct SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.VisualScripting.FullSerializer.fsBaseConverter
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
// Unity.VisualScripting.FullSerializer.fsData
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
// Unity.VisualScripting.FullSerializer.fsSerializer
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035;
struct Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273;
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/LeftObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct LeftObserver_tBD9CC4BC709982E0C2956F9F65443C863A5055BE  : public RuntimeObject
{
	// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/LeftObserver::parent
	WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* ___parent_0;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct LeftObserver_tB7E464B198322A284E0266355C4DACB5A3A3B66E  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`3/ZipLatest<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest/LeftObserver::parent
	ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* ___parent_0;
};

// UniRx.Operators.ZipObservable`3/Zip/LeftZipObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct LeftZipObserver_tF654ECFF4ABF554CCB22A1BD44613E0BB6A39ACD  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`3/Zip<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip/LeftZipObserver::parent
	Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* ___parent_0;
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

// UniRx.Operators.OperatorObservableBase`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>
struct OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// System.Collections.Generic.Queue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array_0;
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

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct RightObserver_tD89649C363EBB9D55FD41D18A2603BE0282C6FBE  : public RuntimeObject
{
	// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver::parent
	WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* ___parent_0;
	// System.IDisposable UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom/RightObserver::selfSubscription
	RuntimeObject* ___selfSubscription_1;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct RightObserver_tCD0571F80F305840348F458D5771051BDE215447  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`3/ZipLatest<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3/ZipLatest/RightObserver::parent
	ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* ___parent_0;
};

// UniRx.Operators.ZipObservable`3/Zip/RightZipObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct RightZipObserver_t9BB70D85E6615F51DC252B76D25F1158B0963E3F  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`3/Zip<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip/RightZipObserver::parent
	Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* ___parent_0;
};

// UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75  : public RuntimeObject
{
	// UniRx.Operators.ZipLatestObservable`1/ZipLatest<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::parent
	ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* ___parent_0;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5 : public RuntimeObject {};

// UniRx.Operators.ZipObservable`1/Zip/ZipObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2  : public RuntimeObject
{
	// UniRx.Operators.ZipObservable`1/Zip<T> UniRx.Operators.ZipObservable`1/Zip/ZipObserver::parent
	Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* ___parent_0;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip/ZipObserver::index
	int32_t ___index_1;
};

// UniRx.Operators.ZipObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802  : public RuntimeObject
{
	// System.Object UniRx.Operators.ZipObserver`1::gate
	RuntimeObject* ___gate_0;
	// UniRx.Operators.IZipObservable UniRx.Operators.ZipObserver`1::parent
	RuntimeObject* ___parent_1;
	// System.Int32 UniRx.Operators.ZipObserver`1::index
	int32_t ___index_2;
	// System.Collections.Generic.Queue`1<T> UniRx.Operators.ZipObserver`1::queue
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___queue_3;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UniRx.SingleAssignmentDisposable
struct SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE  : public RuntimeObject
{
	// System.Object UniRx.SingleAssignmentDisposable::gate
	RuntimeObject* ___gate_0;
	// System.IDisposable UniRx.SingleAssignmentDisposable::current
	RuntimeObject* ___current_1;
	// System.Boolean UniRx.SingleAssignmentDisposable::disposed
	bool ___disposed_2;
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

// UnityEngine.Subsystem
struct Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7  : public RuntimeObject
{
	// UnityEngine.ISubsystemDescriptor UnityEngine.Subsystem::m_SubsystemDescriptor
	RuntimeObject* ___m_SubsystemDescriptor_0;
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

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// UniRx.Operators.NthZipLatestObserverBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	// System.Int32 UniRx.Operators.NthZipLatestObserverBase`1::length
	int32_t ___length_2;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_3;
	// System.Boolean[] UniRx.Operators.NthZipLatestObserverBase`1::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_4;
};

// UniRx.Operators.NthZipObserverBase`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	// System.Collections.ICollection[] UniRx.Operators.NthZipObserverBase`1::queues
	ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* ___queues_2;
	// System.Boolean[] UniRx.Operators.NthZipObserverBase`1::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_3;
	// System.Int32 UniRx.Operators.NthZipObserverBase`1::length
	int32_t ___length_4;
};

// UnityEngine.Subsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Subsystem_1_tC36D67F91A67D91156405DA787C2698B0AC494A3  : public Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7
{
};

// System.Linq.Enumerable/WhereEnumerableIterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};

// UniRx.Operators.WhereObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T> UniRx.Operators.WhereObservable`1::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereObservable`1::predicate
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate_2;
	// System.Func`3<T,System.Int32,System.Boolean> UniRx.Operators.WhereObservable`1::predicateWithIndex
	Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* ___predicateWithIndex_3;
};

// UniRx.Operators.WhereSelectObservable`2/WhereSelect<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelect_tAA2481FAE0289C2C6DCFB3C830293C29C4B3A1A8  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	// UniRx.Operators.WhereSelectObservable`2<T,TR> UniRx.Operators.WhereSelectObservable`2/WhereSelect::parent
	WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C* ___parent_2;
};

// System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174 : public RuntimeObject {};

// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C : public RuntimeObject {};

// UniRx.Operators.WhereSelectObservable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T> UniRx.Operators.WhereSelectObservable`2::source
	RuntimeObject* ___source_1;
	// System.Func`2<T,System.Boolean> UniRx.Operators.WhereSelectObservable`2::predicate
	Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate_2;
	// System.Func`2<T,TR> UniRx.Operators.WhereSelectObservable`2::selector
	Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector_3;
};

// UniRx.Operators.WhereObservable`1/Where_<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	// UniRx.Operators.WhereObservable`1<T> UniRx.Operators.WhereObservable`1/Where_::parent
	WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0* ___parent_2;
	// System.Int32 UniRx.Operators.WhereObservable`1/Where_::index
	int32_t ___index_3;
};

// UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4 : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37 {};

// UniRx.Operators.WithLatestFromObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<TLeft> UniRx.Operators.WithLatestFromObservable`3::left
	RuntimeObject* ___left_1;
	// System.IObservable`1<TRight> UniRx.Operators.WithLatestFromObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.WithLatestFromObservable`3::selector
	Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___selector_3;
};

// UniRx.Operators.ZipObservable`1/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380  : public OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E
{
	// UniRx.Operators.ZipObservable`1<T> UniRx.Operators.ZipObservable`1/Zip::parent
	ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`1/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<T>[] UniRx.Operators.ZipObservable`1/Zip::queues
	Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* ___queues_4;
	// System.Boolean[] UniRx.Operators.ZipObservable`1/Zip::isDone
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isDone_5;
	// System.Int32 UniRx.Operators.ZipObservable`1/Zip::length
	int32_t ___length_6;
};

// UniRx.Operators.ZipObservable`3/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746  : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37
{
	// UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3/Zip::parent
	ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* ___parent_2;
	// System.Object UniRx.Operators.ZipObservable`3/Zip::gate
	RuntimeObject* ___gate_3;
	// System.Collections.Generic.Queue`1<TLeft> UniRx.Operators.ZipObservable`3/Zip::leftQ
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___leftQ_4;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::leftCompleted
	bool ___leftCompleted_5;
	// System.Collections.Generic.Queue`1<TRight> UniRx.Operators.ZipObservable`3/Zip::rightQ
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___rightQ_6;
	// System.Boolean UniRx.Operators.ZipObservable`3/Zip::rightCompleted
	bool ___rightCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`1/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A  : public OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E
{
	// UniRx.Operators.ZipLatestObservable`1<T> UniRx.Operators.ZipLatestObservable`1/ZipLatest::parent
	ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* ___parent_2;
	// System.Object UniRx.Operators.ZipLatestObservable`1/ZipLatest::gate
	RuntimeObject* ___gate_3;
	// System.Int32 UniRx.Operators.ZipLatestObservable`1/ZipLatest::length
	int32_t ___length_4;
	// T[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::values
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___values_5;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isStarted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isStarted_6;
	// System.Boolean[] UniRx.Operators.ZipLatestObservable`1/ZipLatest::isCompleted
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___isCompleted_7;
};

// UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527 : public OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37 {};

// UniRx.Operators.ZipLatestObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C  : public OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41
{
	// System.IObservable`1<T>[] UniRx.Operators.ZipLatestObservable`1::sources
	IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* ___sources_1;
};

// UniRx.Operators.ZipLatestObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<TLeft> UniRx.Operators.ZipLatestObservable`3::left
	RuntimeObject* ___left_1;
	// System.IObservable`1<TRight> UniRx.Operators.ZipLatestObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipLatestObservable`3::selector
	Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___selector_3;
};

// UniRx.Operators.ZipLatestObservable`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`4::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`4::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4::resultSelector
	ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* ___resultSelector_4;
};

// UniRx.Operators.ZipLatestObservable`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`5::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`5::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`5::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5::resultSelector
	ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* ___resultSelector_5;
};

// UniRx.Operators.ZipLatestObservable`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`6::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`6::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`6::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`6::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6::resultSelector
	ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* ___resultSelector_6;
};

// UniRx.Operators.ZipLatestObservable`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`7::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`7::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`7::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`7::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`7::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7::resultSelector
	ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* ___resultSelector_7;
};

// UniRx.Operators.ZipLatestObservable`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipLatestObservable`8::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipLatestObservable`8::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipLatestObservable`8::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipLatestObservable`8::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipLatestObservable`8::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipLatestObservable`8::source6
	RuntimeObject* ___source6_6;
	// System.IObservable`1<T7> UniRx.Operators.ZipLatestObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8::resultSelector
	ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* ___resultSelector_8;
};

// UniRx.Operators.ZipObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2  : public OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41
{
	// System.IObservable`1<T>[] UniRx.Operators.ZipObservable`1::sources
	IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* ___sources_1;
};

// UniRx.Operators.ZipObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<TLeft> UniRx.Operators.ZipObservable`3::left
	RuntimeObject* ___left_1;
	// System.IObservable`1<TRight> UniRx.Operators.ZipObservable`3::right
	RuntimeObject* ___right_2;
	// System.Func`3<TLeft,TRight,TResult> UniRx.Operators.ZipObservable`3::selector
	Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___selector_3;
};

// UniRx.Operators.ZipObservable`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`4::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`4::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`4::source3
	RuntimeObject* ___source3_3;
	// UniRx.Operators.ZipFunc`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4::resultSelector
	ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* ___resultSelector_4;
};

// UniRx.Operators.ZipObservable`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`5::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`5::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`5::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`5::source4
	RuntimeObject* ___source4_4;
	// UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5::resultSelector
	ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* ___resultSelector_5;
};

// UniRx.Operators.ZipObservable`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`6::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`6::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`6::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`6::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`6::source5
	RuntimeObject* ___source5_5;
	// UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6::resultSelector
	ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* ___resultSelector_6;
};

// UniRx.Operators.ZipObservable`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`7::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`7::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`7::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`7::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`7::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`7::source6
	RuntimeObject* ___source6_6;
	// UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7::resultSelector
	ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* ___resultSelector_7;
};

// UniRx.Operators.ZipObservable`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4  : public OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE
{
	// System.IObservable`1<T1> UniRx.Operators.ZipObservable`8::source1
	RuntimeObject* ___source1_1;
	// System.IObservable`1<T2> UniRx.Operators.ZipObservable`8::source2
	RuntimeObject* ___source2_2;
	// System.IObservable`1<T3> UniRx.Operators.ZipObservable`8::source3
	RuntimeObject* ___source3_3;
	// System.IObservable`1<T4> UniRx.Operators.ZipObservable`8::source4
	RuntimeObject* ___source4_4;
	// System.IObservable`1<T5> UniRx.Operators.ZipObservable`8::source5
	RuntimeObject* ___source5_5;
	// System.IObservable`1<T6> UniRx.Operators.ZipObservable`8::source6
	RuntimeObject* ___source6_6;
	// System.IObservable`1<T7> UniRx.Operators.ZipObservable`8::source7
	RuntimeObject* ___source7_7;
	// UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8::resultSelector
	ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* ___resultSelector_8;
};

// Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;

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

// Unity.VisualScripting.FullSerializer.fsDirectConverter
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
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

// System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};

// UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848  : public Subsystem_1_tC36D67F91A67D91156405DA787C2698B0AC494A3
{
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_1;
};

// UniRx.Operators.ZipObservable`4/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	// UniRx.Operators.ZipObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipObservable`4/Zip::parent
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`4/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`4/Zip::q1
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`4/Zip::q2
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`4/Zip::q3
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3_9;
};

// UniRx.Operators.ZipObservable`5/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	// UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipObservable`5/Zip::parent
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`5/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`5/Zip::q1
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`5/Zip::q2
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`5/Zip::q3
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`5/Zip::q4
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q4_10;
};

// UniRx.Operators.ZipObservable`6/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	// UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipObservable`6/Zip::parent
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`6/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`6/Zip::q1
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`6/Zip::q2
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`6/Zip::q3
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`6/Zip::q4
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`6/Zip::q5
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q5_11;
};

// UniRx.Operators.ZipObservable`7/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	// UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipObservable`7/Zip::parent
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`7/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`7/Zip::q1
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`7/Zip::q2
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`7/Zip::q3
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`7/Zip::q4
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`7/Zip::q5
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`7/Zip::q6
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q6_12;
};

// UniRx.Operators.ZipObservable`8/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3  : public NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158
{
	// UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipObservable`8/Zip::parent
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* ___parent_5;
	// System.Object UniRx.Operators.ZipObservable`8/Zip::gate
	RuntimeObject* ___gate_6;
	// System.Collections.Generic.Queue`1<T1> UniRx.Operators.ZipObservable`8/Zip::q1
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q1_7;
	// System.Collections.Generic.Queue`1<T2> UniRx.Operators.ZipObservable`8/Zip::q2
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q2_8;
	// System.Collections.Generic.Queue`1<T3> UniRx.Operators.ZipObservable`8/Zip::q3
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q3_9;
	// System.Collections.Generic.Queue`1<T4> UniRx.Operators.ZipObservable`8/Zip::q4
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q4_10;
	// System.Collections.Generic.Queue`1<T5> UniRx.Operators.ZipObservable`8/Zip::q5
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q5_11;
	// System.Collections.Generic.Queue`1<T6> UniRx.Operators.ZipObservable`8/Zip::q6
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q6_12;
	// System.Collections.Generic.Queue`1<T7> UniRx.Operators.ZipObservable`8/Zip::q7
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___q7_13;
};

// UniRx.Operators.ZipLatestObservable`4/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	// UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR> UniRx.Operators.ZipLatestObservable`4/ZipLatest::parent
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`4/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c1
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c2
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`4/ZipLatest::c3
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3_9;
};

// UniRx.Operators.ZipLatestObservable`5/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	// UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR> UniRx.Operators.ZipLatestObservable`5/ZipLatest::parent
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`5/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c1
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c2
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c3
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`5/ZipLatest::c4
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c4_10;
};

// UniRx.Operators.ZipLatestObservable`6/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	// UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR> UniRx.Operators.ZipLatestObservable`6/ZipLatest::parent
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`6/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c1
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c2
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c3
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c4
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`6/ZipLatest::c5
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c5_11;
};

// UniRx.Operators.ZipLatestObservable`7/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	// UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR> UniRx.Operators.ZipLatestObservable`7/ZipLatest::parent
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`7/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c1
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c2
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c3
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c4
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c5
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`7/ZipLatest::c6
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c6_12;
};

// UniRx.Operators.ZipLatestObservable`8/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D  : public NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857
{
	// UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR> UniRx.Operators.ZipLatestObservable`8/ZipLatest::parent
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* ___parent_5;
	// System.Object UniRx.Operators.ZipLatestObservable`8/ZipLatest::gate
	RuntimeObject* ___gate_6;
	// UniRx.Operators.ZipLatestObserver`1<T1> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c1
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c1_7;
	// UniRx.Operators.ZipLatestObserver`1<T2> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c2
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c2_8;
	// UniRx.Operators.ZipLatestObserver`1<T3> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c3
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c3_9;
	// UniRx.Operators.ZipLatestObserver`1<T4> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c4
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c4_10;
	// UniRx.Operators.ZipLatestObserver`1<T5> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c5
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c5_11;
	// UniRx.Operators.ZipLatestObserver`1<T6> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c6
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c6_12;
	// UniRx.Operators.ZipLatestObserver`1<T7> UniRx.Operators.ZipLatestObservable`8/ZipLatest::c7
	ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* ___c7_13;
};

// Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Boolean>
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};

// System.Func`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,System.Int32,System.Boolean>
struct Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E  : public MulticastDelegate_t
{
};

// System.Func`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6  : public MulticastDelegate_t
{
};

// UniRx.Operators.ZipLatestFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE  : public RuntimeArray
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
// System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035  : public RuntimeArray
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
// System.Collections.Generic.Queue`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>[]
struct Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3  : public RuntimeArray
{
	ALIGN_FIELD (8) Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* m_Items[1];

	inline Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.ICollection[]
struct ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273  : public RuntimeArray
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
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniRx.SingleAssignmentDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable__ctor_mD18F9FC3F63F6FEBBA649E80A3B7DDE205A174C0 (SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* __this, const RuntimeMethod* method) ;
// System.Void UniRx.SingleAssignmentDisposable::set_Disposable(System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SingleAssignmentDisposable_set_Disposable_mB73E42A9CEE96E39A067CF23EBD4F9DDD8F6F672 (SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m5D5EAA49FB4EC4511BB1750B44E0836762530FC3 (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.IDisposable UniRx.Disposable::Create(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___disposeAction0, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::CreateUnsafe(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_CreateUnsafe_m61E9E95FD914CF4A0EB267CBE46D63AB1066FD08 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___disposables0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m69159E99C420E2BBE360CC54400E67127D36E724 (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, RuntimeObject* ___disposable32, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable,System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mEF2811969D2F81FD06130ED8A4A48D26E42F9B94 (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, RuntimeObject* ___disposable32, RuntimeObject* ___disposable43, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___disposables0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>::.ctor()
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void Unity.VisualScripting.FullSerializer.fsData::.ctor(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___dict0, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsBaseConverter::CheckType(Unity.VisualScripting.FullSerializer.fsData,Unity.VisualScripting.FullSerializer.fsDataType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, int32_t ___type1, const RuntimeMethod* method) ;
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsResult::op_Addition(Unity.VisualScripting.FullSerializer.fsResult,Unity.VisualScripting.FullSerializer.fsResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___a0, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___b1, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.fsResult::get_Failed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData> Unity.VisualScripting.FullSerializer.fsData::get_AsDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_HasValue()
inline bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, method);
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsEmpty()
inline bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
inline void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, il2cppRetVal, method);
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
inline void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516 (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method)
{
	((  void (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared)((fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*)__this, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectArrayIterator_2_Clone_mFBF81AE0E2B6F7A7A79FC98398E7A6AC0FD330E9_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* L_3 = (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEF7E8E7B117D6D1147C53CAE838836974171392C_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// TSource
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	memset(V_0, 0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 8)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD81DB59B1D07BC8DDB099A652B22BA9C1538D7A3_gshared (/*System.Linq.Enumerable/WhereSelectArrayIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		RuntimeObject* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectEnumerableIterator_2_Clone_mD773B8B24D1459B11BA4462A6DD68865514ADC9E_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* L_3 = (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m640FAC111BC786414B40480BB03E4F84B2FFB179_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), (RuntimeObject*)NULL);
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB384EFAF6366166F28EDFDBA272EEC1089E1A115_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
	// TSource
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_12 = L_6;
	// TResult
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	memset(V_1, 0, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0Invoker< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_8);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		NullCheck(L_11);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_13, SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3));
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB8ACBBFA48460E67B18647EF16E6EE4D0BE08679_gshared (/*System.Linq.Enumerable/WhereSelectEnumerableIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___source0;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___predicate1;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___selector2;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_3);
		InvokerActionInvoker3< List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3, L_0, L_1, L_2);
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	// sizeof(TSource)
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
	// sizeof(System.Collections.Generic.List`1/Enumerator<TSource>)
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
	// TSource
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	// TResult
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	// System.Collections.Generic.List`1/Enumerator<TSource>
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),0));
		NullCheck(L_3);
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_7);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		NullCheck(L_10);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 11)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 3),3)))));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose() */, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (/*System.Linq.Enumerable/WhereSelectListIterator`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate0, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___predicate0;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_1);
		InvokerActionInvoker2< RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_1, (RuntimeObject*)__this, L_0);
		return (RuntimeObject*)L_1;
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
// System.Void UniRx.Operators.WhereSelectObservable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T>,System.Func`2<T,System.Boolean>,System.Func`2<T,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectObservable_2__ctor_m999414A512DDE8FF52B40E4A0CF90E5045C5D811_gshared (WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C* __this, RuntimeObject* ___source0, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___predicate1, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___selector2, const RuntimeMethod* method) 
{
	{
		// : base(source.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___source0;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)__this, L_1);
		// this.source = source;
		RuntimeObject* L_2 = ___source0;
		__this->___source_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_2);
		// this.predicate = predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3 = ___predicate1;
		__this->___predicate_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_3);
		// this.selector = selector;
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_4 = ___selector2;
		__this->___selector_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhereSelectObservable`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectObservable_2_SubscribeCore_m28D55822322095338ACAEE50EC3A7D7C4C68807D_gshared (WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return source.Subscribe(new WhereSelect(this, observer, cancel));
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_1;
		RuntimeObject* L_1 = ___observer0;
		RuntimeObject* L_2 = ___cancel1;
		WhereSelect_tAA2481FAE0289C2C6DCFB3C830293C29C4B3A1A8* L_3 = (WhereSelect_tAA2481FAE0289C2C6DCFB3C830293C29C4B3A1A8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_3);
		InvokerActionInvoker3< WhereSelectObservable_2_t847FBAA91704FE52E684518301EA09DC0FA0641C*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_3, __this, L_1, L_2);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, (RuntimeObject*)L_3);
		return L_4;
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
// System.Void UniRx.Operators.WhereObservable`1/Where_<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.WhereObservable`1<T>,System.IObserver`1<T>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where___ctor_mB43425063318B62AB672F302CD61D075D7DF5C12_gshared (Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C* __this, WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	{
		// : base(observer, cancel)
		RuntimeObject* L_0 = ___observer1;
		RuntimeObject* L_1 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, L_0, L_1);
		// this.parent = parent;
		WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0* L_2 = ___parent0;
		__this->___parent_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_2);
		// this.index = 0;
		__this->___index_3 = 0;
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnNext_m02ABD860C13A37082F170A02D8D73938CA0B55C7_gshared (Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tAF0D5901E1EA6C8B7461DCADD3330BA640C38963 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tAF0D5901E1EA6C8B7461DCADD3330BA640C38963);
	const Il2CppFullySharedGenericAny L_11 = L_2;
	bool V_0 = false;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var isPassed = false;
		V_0 = (bool)0;
	}
	try
	{// begin try (depth: 1)
		// isPassed = parent.predicateWithIndex(value, index++);
		WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0* L_0 = (WhereObservable_1_tAEF5B968677E7DD944B72065B689C7D6D0F557A0*)__this->___parent_2;
		NullCheck(L_0);
		Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E* L_1 = (Func_3_tDADD7F9B266FDB16BDFFC46D6D5A79E7EA04406E*)L_0->___predicateWithIndex_3;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 6)) ? ___value0 : &___value0), SizeOf_T_tAF0D5901E1EA6C8B7461DCADD3330BA640C38963);
		int32_t L_3 = (int32_t)__this->___index_3;
		V_1 = L_3;
		int32_t L_4 = V_1;
		__this->___index_3 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_1;
		NullCheck(L_1);
		bool L_6;
		L_6 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 6)) ? L_2: *(void**)L_2), L_5);
		V_0 = L_6;
		// }
		goto IL_0041;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0027;
		}
		throw e;
	}

CATCH_0027:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0038:
				{// begin finally (depth: 2)
					// try { observer.OnError(ex); } finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
					InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
					// try { observer.OnError(ex); } finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); } finally { Dispose(); }
				RuntimeObject* L_7 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_8 = V_2;
				NullCheck(L_7);
				InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_7, L_8);
				// try { observer.OnError(ex); } finally { Dispose(); }
				goto IL_003f;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_003f:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0052;
		}
	}// end catch (depth: 1)

IL_0041:
	{
		// if (isPassed)
		bool L_9 = V_0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// observer.OnNext(value);
		RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 6)) ? ___value0 : &___value0), SizeOf_T_tAF0D5901E1EA6C8B7461DCADD3330BA640C38963);
		NullCheck(L_10);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 6)) ? L_11: *(void**)L_11));
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnError_m5BCD9A29560E003FD09854E0AC68B010197A5694_gshared (Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// try { observer.OnError(error); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0, L_1);
			// try { observer.OnError(error); } finally { Dispose(); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhereObservable`1/Where_<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Where__OnCompleted_mD434ED3D661515B7E18B717162FB72EB85F96FB7_gshared (Where__tC1CFF1B49CFDEDB8F32C86A7A354330BD141B79C* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// try { observer.OnCompleted(); } finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
			// try { observer.OnCompleted(); } finally { Dispose(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.WithLatestFromObservable`3<TLeft,TRight,TResult>,System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom__ctor_m4A9C9A8E6F8E158C3082D2890E523AC4C681DE81_gshared (/*UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1), L_0);
		// public WithLatestFrom(WithLatestFromObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, L_1, L_2);
		// this.parent = parent;
		WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* L_3 = ___parent0;
		il2cpp_codegen_write_instance_field_data<WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithLatestFrom_Run_m9BAEBB94073033DDE38785CCD1BB25843866B55E_gshared (/*UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftObserver(this));
		WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* L_0 = *(WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___left_1;
		LeftObserver_tBD9CC4BC709982E0C2956F9F65443C863A5055BE* L_2 = (LeftObserver_tBD9CC4BC709982E0C2956F9F65443C863A5055BE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		InvokerActionInvoker1< WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_2, __this);
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_1, (RuntimeObject*)L_2);
		// var rSubscription = new SingleAssignmentDisposable();
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_4 = (SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE*)il2cpp_codegen_object_new(SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		SingleAssignmentDisposable__ctor_mD18F9FC3F63F6FEBBA649E80A3B7DDE205A174C0(L_4, NULL);
		V_0 = L_4;
		// rSubscription.Disposable  = parent.right.Subscribe(new RightObserver(this, rSubscription));
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_5 = V_0;
		WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* L_6 = *(WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
		NullCheck(L_6);
		RuntimeObject* L_7 = (RuntimeObject*)L_6->___right_2;
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_8 = V_0;
		RightObserver_tD89649C363EBB9D55FD41D18A2603BE0282C6FBE* L_9 = (RightObserver_tD89649C363EBB9D55FD41D18A2603BE0282C6FBE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_9);
		InvokerActionInvoker2< WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_9, __this, (RuntimeObject*)L_8);
		NullCheck(L_7);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_7, (RuntimeObject*)L_9);
		NullCheck(L_5);
		SingleAssignmentDisposable_set_Disposable_mB73E42A9CEE96E39A067CF23EBD4F9DDD8F6F672(L_5, L_10, NULL);
		// return StableCompositeDisposable.Create(l, rSubscription);
		SingleAssignmentDisposable_tBC7303F46AEDD910009E3D72DD7458862FA7E1FE* L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = StableCompositeDisposable_Create_m5D5EAA49FB4EC4511BB1750B44E0836762530FC3(L_3, (RuntimeObject*)L_11, NULL);
		return (RuntimeObject*)L_12;
	}
}
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnNext_mDFAD498950658579A3B68FD4AC470DED798E5F21_gshared (/*UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t19EDD6F703CC0D3C63679F268516A40C787C0F62 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
	// TResult
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TResult_t19EDD6F703CC0D3C63679F268516A40C787C0F62);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 17)) ? ___value0 : &___value0), SizeOf_TResult_t19EDD6F703CC0D3C63679F268516A40C787C0F62);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 17)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnError_m64EA8EC3C84884AB77429BF323C6E6C67661C2DB_gshared (/*UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFrom_OnCompleted_m04E2E510407F8F06142A2CCF5BAE86FD9EF35C26_gshared (/*UniRx.Operators.WithLatestFromObservable`3/WithLatestFrom<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.WithLatestFromObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<TLeft>,System.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLatestFromObservable_3__ctor_m0AC5FC569C443CFD90C03493E1080E4443913F19_gshared (WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___selector2, const RuntimeMethod* method) 
{
	WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* G_B2_0 = NULL;
	WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___right1;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B3_0 = ((int32_t)(L_3));
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
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B3_1, (bool)G_B3_0);
		// this.left = left;
		RuntimeObject* L_4 = ___left0;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___right1;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_6 = ___selector2;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WithLatestFromObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WithLatestFromObservable_3_SubscribeCore_mFF832DB6668FAFA6DE7EC164D107C54B9653047F_gshared (WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new WithLatestFrom(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4* L_2 = (WithLatestFrom_tCE9E84AA570D2175EB47243D70FCE0A4A8A628B4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		InvokerActionInvoker3< WithLatestFromObservable_3_t323A42B66EB51D082F0A7A2AC453A719DFAC1885*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_2);
		return L_3;
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
// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRSubsystem_1_get_running_m02EC85BAE95B9D0C95EA3184815B5CCFBB2F0895_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	{
		// public sealed override bool running => m_Running;
		bool L_0 = (bool)__this->___m_Running_1;
		return L_0;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_OnDestroy_mDCB36A022152056BF8CCA7631E957B93D40263FC_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	{
		// Stop();
		NullCheck((Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7*)__this);
		VirtualActionInvoker0::Invoke(9 /* System.Void UnityEngine.Subsystem::Stop() */, (Subsystem_t5E67EE95D848FB950AD5D76325BF8959A6F7C7D7*)__this);
		// OnDestroyed();
		VirtualActionInvoker0Invoker::Invoke(13 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnDestroyed() */, __this);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Start_mFBBF6A8276D64C60D9CFC25A68C047179A71DA73_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	{
		// if (!m_Running)
		bool L_0 = (bool)__this->___m_Running_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStart();
		VirtualActionInvoker0Invoker::Invoke(11 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnStart() */, __this);
	}

IL_000e:
	{
		// m_Running = true;
		__this->___m_Running_1 = (bool)1;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1_Stop_mD4AF4F9D7701970C2478F1B27FE8DD1BA2664D7F_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	{
		// if (m_Running)
		bool L_0 = (bool)__this->___m_Running_1;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// OnStop();
		VirtualActionInvoker0Invoker::Invoke(12 /* System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnStop() */, __this);
	}

IL_000e:
	{
		// m_Running = false;
		__this->___m_Running_1 = (bool)0;
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_m7B4C8C5A1B99CEEDD98E8B4E564BBCAD0CF8D17A_gshared (XRSubsystem_1_t24353DFB2042A8F978A8CF7668CC6C257D85E848* __this, const RuntimeMethod* method) 
{
	{
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), (Subsystem_1_tC36D67F91A67D91156405DA787C2698B0AC494A3*)__this);
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
// System.Void UniRx.Operators.ZipObservable`1/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipObservable`1<T>,System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m2CF876688E3626B7099110BD7CFEA4EF820B7CEE_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public Zip(ZipObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, L_1, L_2);
		// this.parent = parent;
		ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* L_3 = ___parent0;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m30A87BED860C57ADED1EFE743A5099C6B304C7A4_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// length = parent.sources.Length;
		ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* L_0 = (ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2*)__this->___parent_2;
		NullCheck(L_0);
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_1 = (IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035*)L_0->___sources_1;
		NullCheck(L_1);
		__this->___length_6 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// queues = new Queue<T>[length];
		int32_t L_2 = (int32_t)__this->___length_6;
		Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_3 = (Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3*)(Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (uint32_t)L_2);
		__this->___queues_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queues_4), (void*)L_3);
		// isDone = new bool[length];
		int32_t L_4 = (int32_t)__this->___length_6;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___isDone_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isDone_5), (void*)L_5);
		// for (int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_004a;
	}

IL_0039:
	{
		// queues[i] = new Queue<T>();
		Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_6 = (Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3*)__this->___queues_4;
		int32_t L_7 = V_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_8);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)L_8);
		// for (int i = 0; i < length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_10 = V_1;
		int32_t L_11 = (int32_t)__this->___length_6;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0039;
		}
	}
	{
		// var disposables = new IDisposable[length + 1];
		int32_t L_12 = (int32_t)__this->___length_6;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_13 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_12, 1)));
		V_0 = L_13;
		// for (int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_0087;
	}

IL_0065:
	{
		// var source = parent.sources[i];
		ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* L_14 = (ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2*)__this->___parent_2;
		NullCheck(L_14);
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_15 = (IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035*)L_14->___sources_1;
		int32_t L_16 = V_2;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_3 = L_18;
		// disposables[i] = source.Subscribe(new ZipObserver(this, i));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_19 = V_0;
		int32_t L_20 = V_2;
		RuntimeObject* L_21 = V_3;
		int32_t L_22 = V_2;
		ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* L_23 = (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_23);
		InvokerActionInvoker2< Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_23, __this, L_22);
		NullCheck(L_21);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_21, (RuntimeObject*)L_23);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_24);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (RuntimeObject*)L_24);
		// for (int i = 0; i < length; i++)
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0087:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_26 = V_2;
		int32_t L_27 = (int32_t)__this->___length_6;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0065;
		}
	}
	{
		// disposables[length] = Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         for (int i = 0; i < length; i++)
		//         {
		//             var q = queues[i];
		//             q.Clear();
		//         }
		//     }
		// });
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_28 = V_0;
		int32_t L_29 = (int32_t)__this->___length_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_30 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_30, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_31;
		L_31 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_30, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (RuntimeObject*)L_31);
		// return StableCompositeDisposable.CreateUnsafe(disposables);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_32 = V_0;
		RuntimeObject* L_33;
		L_33 = StableCompositeDisposable_CreateUnsafe_m61E9E95FD914CF4A0EB267CBE46D63AB1066FD08(L_32, NULL);
		return (RuntimeObject*)L_33;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dequeue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_Dequeue_m397187375D7AA9FADA0E308368C66A576F40DABE_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tE0320821E874BDFEA680D8E36B709B9201E86966 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 23));
	// T
	const Il2CppFullySharedGenericAny L_28 = alloca(SizeOf_T_tE0320821E874BDFEA680D8E36B709B9201E86966);
	bool V_0 = false;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// var allQueueHasValue = true;
		V_0 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_001d;
	}

IL_0006:
	{
		// if (queues[i].Count == 0)
		Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_0 = (Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3*)__this->___queues_4;
		int32_t L_1 = V_2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), L_3);
		if (L_4)
		{
			goto IL_0019;
		}
	}
	{
		// allQueueHasValue = false;
		V_0 = (bool)0;
		// break;
		goto IL_0026;
	}

IL_0019:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_5 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_001d:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_6 = V_2;
		int32_t L_7 = (int32_t)__this->___length_6;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}

IL_0026:
	{
		// if (!allQueueHasValue)
		bool L_8 = V_0;
		if (L_8)
		{
			goto IL_006f;
		}
	}
	{
		// var allCompletedWithoutSelf = true;
		V_3 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_4 = 0;
		goto IL_004a;
	}

IL_0030:
	{
		// if (i == index) continue;
		int32_t L_9 = V_4;
		int32_t L_10 = ___index0;
		if ((((int32_t)L_9) == ((int32_t)L_10)))
		{
			goto IL_0044;
		}
	}
	{
		// if (!isDone[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isDone_5;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint8_t L_14 = (uint8_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if (L_14)
		{
			goto IL_0044;
		}
	}
	{
		// allCompletedWithoutSelf = false;
		V_3 = (bool)0;
		// break;
		goto IL_0054;
	}

IL_0044:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_15 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_004a:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_16 = V_4;
		int32_t L_17 = (int32_t)__this->___length_6;
		if ((((int32_t)L_16) < ((int32_t)L_17)))
		{
			goto IL_0030;
		}
	}

IL_0054:
	{
		// if (allCompletedWithoutSelf)
		bool L_18 = V_3;
		if (!L_18)
		{
			goto IL_006e;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_19 = (RuntimeObject*)((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_19);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_19);
			// try { observer.OnCompleted(); }
			goto IL_006d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		// return;
		return;
	}

IL_006e:
	{
		// return;
		return;
	}

IL_006f:
	{
		// var array = new T[length];
		int32_t L_20 = (int32_t)__this->___length_6;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_21 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 21), (uint32_t)L_20);
		V_1 = L_21;
		// for (int i = 0; i < length; i++)
		V_5 = 0;
		goto IL_009c;
	}

IL_0080:
	{
		// array[i] = queues[i].Dequeue();
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_22 = V_1;
		int32_t L_23 = V_5;
		Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_24 = (Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3*)__this->___queues_4;
		int32_t L_25 = V_5;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_27, (Il2CppFullySharedGenericAny*)L_28);
		NullCheck(L_22);
		il2cpp_codegen_memcpy((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), L_28, SizeOf_T_tE0320821E874BDFEA680D8E36B709B9201E86966);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 23), (void**)(L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)), (void*)L_28);
		// for (int i = 0; i < length; i++)
		int32_t L_29 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_009c:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_30 = V_5;
		int32_t L_31 = (int32_t)__this->___length_6;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_0080;
		}
	}
	{
		// OnNext(array);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_32 = V_1;
		NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
		VirtualActionInvoker1Invoker< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnNext(TSource) */, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, (RuntimeObject*)L_32);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m7F31C9BF2B144B5AE3BF753809976B63D27BDFF0_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mB2E6586A12FAD2D1607E5837D4DA4B396A8737D0_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m7C0A5FCCAD62A5543F3A2B5612A012A75FFFD78D_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::<Run>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__6_0_m91A13828F81755CA1A978D58AC423725A223392C_gshared (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// for (int i = 0; i < length; i++)
				V_2 = 0;
				goto IL_0026_1;
			}

IL_0015_1:
			{
				// var q = queues[i];
				Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_4 = (Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3*)__this->___queues_4;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				int32_t L_6 = L_5;
				Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
				// q.Clear();
				NullCheck(L_7);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), L_7);
				// for (int i = 0; i < length; i++)
				int32_t L_8 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
			}

IL_0026_1:
			{
				// for (int i = 0; i < length; i++)
				int32_t L_9 = V_2;
				int32_t L_10 = (int32_t)__this->___length_6;
				if ((((int32_t)L_9) < ((int32_t)L_10)))
				{
					goto IL_0015_1;
				}
			}
			{
				// }
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// });
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
// System.Void UniRx.Operators.ZipObservable`3/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipObservable`3<TLeft,TRight,TResult>,System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mE4EB323DC77CE1A83053548A1B03A4BEB3ECAFEB_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// readonly Queue<TLeft> leftQ = new Queue<TLeft>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_1);
		__this->___leftQ_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___leftQ_4), (void*)L_1);
		// readonly Queue<TRight> rightQ = new Queue<TRight>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_2);
		__this->___rightQ_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rightQ_6), (void*)L_2);
		// : base(observer, cancel)
		RuntimeObject* L_3 = ___observer1;
		RuntimeObject* L_4 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, L_3, L_4);
		// this.parent = parent;
		ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* L_5 = ___parent0;
		__this->___parent_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_5);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_m842DCDC910956AE9D8BE1B3089554C901A2F049F_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftZipObserver(this));
		ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* L_0 = (ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21*)__this->___parent_2;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___left_1;
		LeftZipObserver_tF654ECFF4ABF554CCB22A1BD44613E0BB6A39ACD* L_2 = (LeftZipObserver_tF654ECFF4ABF554CCB22A1BD44613E0BB6A39ACD*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_2);
		InvokerActionInvoker1< Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_2, __this);
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_1, (RuntimeObject*)L_2);
		// var r = parent.right.Subscribe(new RightZipObserver(this));
		ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* L_4 = (ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21*)__this->___parent_2;
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___right_2;
		RightZipObserver_t9BB70D85E6615F51DC252B76D25F1158B0963E3F* L_6 = (RightZipObserver_t9BB70D85E6615F51DC252B76D25F1158B0963E3F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		NullCheck(L_6);
		InvokerActionInvoker1< Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), L_6, __this);
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_5, (RuntimeObject*)L_6);
		V_0 = L_7;
		// return StableCompositeDisposable.Create(l, r, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         leftQ.Clear();
		//         rightQ.Clear();
		//     }
		// }));
		RuntimeObject* L_8 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_9, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 19)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_9, NULL);
		RuntimeObject* L_11;
		L_11 = StableCompositeDisposable_Create_m69159E99C420E2BBE360CC54400E67127D36E724(L_3, L_8, L_10, NULL);
		return (RuntimeObject*)L_11;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_Dequeue_m7F0580F37A6D5CA67305C366460237ECDC9EC9E0_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, const RuntimeMethod* method) 
{
	// sizeof(TLeft)
	const uint32_t SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 23));
	// sizeof(TRight)
	const uint32_t SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
	// TLeft
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
	const Il2CppFullySharedGenericAny L_13 = L_5;
	// TRight
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
	const Il2CppFullySharedGenericAny L_14 = L_7;
	// TResult
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
	const Il2CppFullySharedGenericAny L_18 = L_15;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
	memset(V_0, 0, SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
	memset(V_1, 0, SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
	memset(V_2, 0, SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (leftQ.Count != 0 && rightQ.Count != 0)
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_0 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___leftQ_4;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_0);
		if (!L_1)
		{
			goto IL_0034;
		}
	}
	{
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___rightQ_6;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_2);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// lv = leftQ.Dequeue();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___leftQ_4;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_4, (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_0, L_5, SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
		// rv = rightQ.Dequeue();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___rightQ_6;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_6, (Il2CppFullySharedGenericAny*)L_7);
		il2cpp_codegen_memcpy(V_1, L_7, SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
		goto IL_005d;
	}

IL_0034:
	{
		// else if (leftCompleted || rightCompleted)
		bool L_8 = (bool)__this->___leftCompleted_5;
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		bool L_9 = (bool)__this->___rightCompleted_7;
		if (!L_9)
		{
			goto IL_005c;
		}
	}

IL_0044:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_10 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_10);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_10);
			// try { observer.OnCompleted(); }
			goto IL_005b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		// return;
		return;
	}

IL_005c:
	{
		// return;
		return;
	}

IL_005d:
	{
	}
	try
	{// begin try (depth: 1)
		// v = parent.selector(lv, rv);
		ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* L_11 = (ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21*)__this->___parent_2;
		NullCheck(L_11);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_12 = (Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*)L_11->___selector_3;
		il2cpp_codegen_memcpy(L_13, V_0, SizeOf_TLeft_tA123DF1527A2F79CE1891E77E85622953F568BBC);
		il2cpp_codegen_memcpy(L_14, V_1, SizeOf_TRight_t5C9840519B2276858AFF4E3BE654608199F1B276);
		NullCheck(L_12);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 23)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 25)) ? L_14: *(void**)L_14), (Il2CppFullySharedGenericAny*)L_15);
		il2cpp_codegen_memcpy(V_2, L_15, SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
		// }
		goto IL_008d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0073;
		}
		throw e;
	}

CATCH_0073:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0084:
				{// begin finally (depth: 2)
					// finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
					InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
					// finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); }
				RuntimeObject* L_16 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_17 = V_3;
				NullCheck(L_16);
				InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_16, L_17);
				// try { observer.OnError(ex); }
				goto IL_008b;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_008b:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0094;
		}
	}// end catch (depth: 1)

IL_008d:
	{
		// OnNext(v);
		il2cpp_codegen_memcpy(L_18, V_2, SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
		NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TSource) */, (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 32)) ? L_18: *(void**)L_18));
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m69F62F291B53410328F5CB6AF9AE12A9A24D4D9E_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
	// TResult
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 32)) ? ___value0 : &___value0), SizeOf_TResult_t4E65F558D1384ED40EA3BC0939051D22C0E700ED);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 32)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m8F25DE971A5FB4E626B7B174C8F11246219EF781_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m56D9B4C0B5B3315A7B74ED7210EE2DB8811A4935_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`3/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::<Run>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__7_0_mB9543A5015975113A396ABFEAFF25172EF7ADAF4_gshared (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0029:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0032;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0032:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// leftQ.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___leftQ_4;
			NullCheck(L_4);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_4);
			// rightQ.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___rightQ_6;
			NullCheck(L_5);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), L_5);
			// }
			goto IL_0033;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`4/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipObservable`4<T1,T2,T3,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m892AF3D5EDD35CA6D66CC115F22239591941A174_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_1);
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_2);
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3);
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// : base(observer, cancel)
		RuntimeObject* L_4 = ___observer1;
		RuntimeObject* L_5 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_4, L_5);
		// this.parent = parent;
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_6 = ___parent0;
		__this->___parent_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mAD36379517E2BE9C8D02656C239F9E450765D392_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)3);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		InvokerActionInvoker1< ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_5);
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_7 = (ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3*)__this->___parent_5;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->___source1_1;
		RuntimeObject* L_9 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_11 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_11);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_11, L_9, (RuntimeObject*)__this, 0, L_10);
		NullCheck(L_8);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_8, (RuntimeObject*)L_11);
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_13 = (ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3*)__this->___parent_5;
		NullCheck(L_13);
		RuntimeObject* L_14 = (RuntimeObject*)L_13->___source2_2;
		RuntimeObject* L_15 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_16 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_17 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		NullCheck(L_17);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_17, L_15, (RuntimeObject*)__this, 1, L_16);
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_14, (RuntimeObject*)L_17);
		V_0 = L_18;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_19 = (ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3*)__this->___parent_5;
		NullCheck(L_19);
		RuntimeObject* L_20 = (RuntimeObject*)L_19->___source3_3;
		RuntimeObject* L_21 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_22 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_23 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 24));
		NullCheck(L_23);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)), il2cpp_rgctx_method(method->klass->rgctx_data, 25), L_23, L_21, (RuntimeObject*)__this, 2, L_22);
		NullCheck(L_20);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_20, (RuntimeObject*)L_23);
		V_1 = L_24;
		// return StableCompositeDisposable.Create(s1, s2, s3, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear();
		//     }
		// }));
		RuntimeObject* L_25 = V_0;
		RuntimeObject* L_26 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_27, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 28)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_28;
		L_28 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_27, NULL);
		RuntimeObject* L_29;
		L_29 = StableCompositeDisposable_Create_mEF2811969D2F81FD06130ED8A4A48D26E42F9B94(L_12, L_25, L_26, L_28, NULL);
		return (RuntimeObject*)L_29;
	}
}
// TR UniRx.Operators.ZipObservable`4/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_m9E02DDDEDB83DF0841560589740D07B1A4DD9A63_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_t8D945B0D7F624E824253F05BAF7D1A49D694C33B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 31));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t8D945B0D7F624E824253F05BAF7D1A49D694C33B);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_tCFA54844647F1F882DCFC7234A32AB197453A08C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 33));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tCFA54844647F1F882DCFC7234A32AB197453A08C);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_t91D5848DCDC81497DE7D2CFDB2F1498CFBC3C0D0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 35));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t91D5848DCDC81497DE7D2CFDB2F1498CFBC3C0D0);
	// TR
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB);
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue());
		ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* L_0 = (ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* L_1 = (ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D*)L_0->___resultSelector_4;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 30)), il2cpp_rgctx_method(method->klass->rgctx_data, 30), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), L_6, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_1);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 31)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 33)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 35)) ? L_7: *(void**)L_7), (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB);
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_mABED9D1B057EAC9B62400EFB9A806A821D8DF2E2_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 37)) ? ___value0 : &___value0), SizeOf_TR_t1BB644B037D6BE59F0B0C6E4532463BDFFE1A2AB);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 37)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mCF1B94B0D9A156D986EA9035A991C2DFB7B19306_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m1E2DDDF41C856B5EF977BE519C89F156F42EE82C_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`4/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::<Run>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__6_0_m4E73569F9A4C94814878C55FDBFB8453780FCFCC_gshared (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_003d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
			NullCheck(L_4);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)), il2cpp_rgctx_method(method->klass->rgctx_data, 44), L_4);
			// q1.Clear(); q2.Clear(); q3.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
			NullCheck(L_5);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), L_5);
			// q1.Clear(); q2.Clear(); q3.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
			NullCheck(L_6);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_6);
			// }
			goto IL_003e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`5/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipObservable`5<T1,T2,T3,T4,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m14452A4528F45C6C0EBE1C684E066AEE8C64B964_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_1);
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_2);
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3);
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_4);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_4);
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// : base(observer, cancel)
		RuntimeObject* L_5 = ___observer1;
		RuntimeObject* L_6 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_5, L_6);
		// this.parent = parent;
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_7 = ___parent0;
		__this->___parent_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_7);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mE23D6EF0218FB77D5D7587C09F2BE03E19900B9D_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		InvokerActionInvoker1< ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_7);
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_9 = (ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A*)__this->___parent_5;
		NullCheck(L_9);
		RuntimeObject* L_10 = (RuntimeObject*)L_9->___source1_1;
		RuntimeObject* L_11 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_13 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_13);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_13, L_11, (RuntimeObject*)__this, 0, L_12);
		NullCheck(L_10);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_10, (RuntimeObject*)L_13);
		V_0 = L_14;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_15 = (ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A*)__this->___parent_5;
		NullCheck(L_15);
		RuntimeObject* L_16 = (RuntimeObject*)L_15->___source2_2;
		RuntimeObject* L_17 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_18 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_19 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 21));
		NullCheck(L_19);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_19, L_17, (RuntimeObject*)__this, 1, L_18);
		NullCheck(L_16);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_16, (RuntimeObject*)L_19);
		V_1 = L_20;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_21 = (ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A*)__this->___parent_5;
		NullCheck(L_21);
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___source3_3;
		RuntimeObject* L_23 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_24 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_25 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 26));
		NullCheck(L_25);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_25, L_23, (RuntimeObject*)__this, 2, L_24);
		NullCheck(L_22);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_22, (RuntimeObject*)L_25);
		V_2 = L_26;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_27 = (ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A*)__this->___parent_5;
		NullCheck(L_27);
		RuntimeObject* L_28 = (RuntimeObject*)L_27->___source4_4;
		RuntimeObject* L_29 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_30 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_31 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 31));
		NullCheck(L_31);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), L_31, L_29, (RuntimeObject*)__this, 3, L_30);
		NullCheck(L_28);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_28, (RuntimeObject*)L_31);
		V_3 = L_32;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_33 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_34 = L_33;
		RuntimeObject* L_35 = V_0;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_35);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_36 = L_34;
		RuntimeObject* L_37 = V_1;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_37);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_38 = L_36;
		RuntimeObject* L_39 = V_2;
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_39);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_40 = L_38;
		RuntimeObject* L_41 = V_3;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_41);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = L_40;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_43 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_43, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 35)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_44;
		L_44 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_43, NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_44);
		RuntimeObject* L_45;
		L_45 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_42, NULL);
		return (RuntimeObject*)L_45;
	}
}
// TR UniRx.Operators.ZipObservable`5/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_mA4CD9F66057E491430634FD362D6D401C5E8A06D_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 46));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_t6F9803295BA3EC4607E958288D660EEC1339C821 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 38));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t6F9803295BA3EC4607E958288D660EEC1339C821);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_t6018134346BAE2CC39184551475C3418C8C9B571 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 40));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t6018134346BAE2CC39184551475C3418C8C9B571);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_tCE9394636DF012695B52DA67285AE4B4F51A67ED = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 42));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tCE9394636DF012695B52DA67285AE4B4F51A67ED);
	// T4
	// sizeof(T4)
	const uint32_t SizeOf_T4_t5DF4344513170C2C9F7255322ADD9F66B64CC9EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 44));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t5DF4344513170C2C9F7255322ADD9F66B64CC9EE);
	// TR
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C);
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue());
		ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* L_0 = (ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* L_1 = (ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962*)L_0->___resultSelector_5;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), L_6, (Il2CppFullySharedGenericAny*)L_7);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_1);
		InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 38)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 40)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 42)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 44)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C);
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m815DCB95F14A9E6CB47E397D3C497B54C391B39A_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 46));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 46)) ? ___value0 : &___value0), SizeOf_TR_tCC2EFAF18FBE9D06272C6CF7DA30575DD26E922C);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 46)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mEBCCA3ACCC70A993688A05777A6A06B474697BE3_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m3038E0FF7571EEAD17347C3A2605F88A974EC3B2_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 9), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`5/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::<Run>b__7_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__7_0_mE0B476389150D15863E5BB11AC1D044237907E46_gshared (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0048;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0048:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
			NullCheck(L_4);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), L_4);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
			NullCheck(L_5);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)), il2cpp_rgctx_method(method->klass->rgctx_data, 54), L_5);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
			NullCheck(L_6);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), L_6);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
			NullCheck(L_7);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)), il2cpp_rgctx_method(method->klass->rgctx_data, 56), L_7);
			// }
			goto IL_0049;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0049:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`6/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipObservable`6<T1,T2,T3,T4,T5,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m471D0840EEED70AA39AE41FAFDBD33A13D38CBBE_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_1);
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_2);
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3);
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_4);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_4);
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_5);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_5);
		__this->___q5_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_5);
		// : base(observer, cancel)
		RuntimeObject* L_6 = ___observer1;
		RuntimeObject* L_7 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_6, L_7);
		// this.parent = parent;
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_8 = ___parent0;
		__this->___parent_5 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_8);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mC84493C05D994B2B8066BE4B4CB3B2F9B5F47839_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)5);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		InvokerActionInvoker1< ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_9);
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_11 = (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961*)__this->___parent_5;
		NullCheck(L_11);
		RuntimeObject* L_12 = (RuntimeObject*)L_11->___source1_1;
		RuntimeObject* L_13 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_14 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_15 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_15);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_15, L_13, (RuntimeObject*)__this, 0, L_14);
		NullCheck(L_12);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_12, (RuntimeObject*)L_15);
		V_0 = L_16;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_17 = (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961*)__this->___parent_5;
		NullCheck(L_17);
		RuntimeObject* L_18 = (RuntimeObject*)L_17->___source2_2;
		RuntimeObject* L_19 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_20 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_21 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 23));
		NullCheck(L_21);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_21, L_19, (RuntimeObject*)__this, 1, L_20);
		NullCheck(L_18);
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_18, (RuntimeObject*)L_21);
		V_1 = L_22;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_23 = (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961*)__this->___parent_5;
		NullCheck(L_23);
		RuntimeObject* L_24 = (RuntimeObject*)L_23->___source3_3;
		RuntimeObject* L_25 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_26 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_27 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
		NullCheck(L_27);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), L_27, L_25, (RuntimeObject*)__this, 2, L_26);
		NullCheck(L_24);
		RuntimeObject* L_28;
		L_28 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_24, (RuntimeObject*)L_27);
		V_2 = L_28;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_29 = (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961*)__this->___parent_5;
		NullCheck(L_29);
		RuntimeObject* L_30 = (RuntimeObject*)L_29->___source4_4;
		RuntimeObject* L_31 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_32 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_33 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 33));
		NullCheck(L_33);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), L_33, L_31, (RuntimeObject*)__this, 3, L_32);
		NullCheck(L_30);
		RuntimeObject* L_34;
		L_34 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_30, (RuntimeObject*)L_33);
		V_3 = L_34;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_35 = (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961*)__this->___parent_5;
		NullCheck(L_35);
		RuntimeObject* L_36 = (RuntimeObject*)L_35->___source5_5;
		RuntimeObject* L_37 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_38 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_39 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 38));
		NullCheck(L_39);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), L_39, L_37, (RuntimeObject*)__this, 4, L_38);
		NullCheck(L_36);
		RuntimeObject* L_40;
		L_40 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 37), L_36, (RuntimeObject*)L_39);
		V_4 = L_40;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_41 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = L_41;
		RuntimeObject* L_43 = V_0;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_43);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_44 = L_42;
		RuntimeObject* L_45 = V_1;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_45);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_46 = L_44;
		RuntimeObject* L_47 = V_2;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_47);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_48 = L_46;
		RuntimeObject* L_49 = V_3;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_49);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_50 = L_48;
		RuntimeObject* L_51 = V_4;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_51);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_52 = L_50;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_53 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_53);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_53, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 42)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_54;
		L_54 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_53, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		RuntimeObject* L_55;
		L_55 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_52, NULL);
		return (RuntimeObject*)L_55;
	}
}
// TR UniRx.Operators.ZipObservable`6/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_m1BAECEFD3696E9C467EA4B933F9F566D1AF10A4D_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 55));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_t629D7FD7BA136043F6C6661F162935C4F9C2C5AD = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t629D7FD7BA136043F6C6661F162935C4F9C2C5AD);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_tD00F5744E8C7CB8D04122B9008176D9DFE69F4A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 47));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tD00F5744E8C7CB8D04122B9008176D9DFE69F4A7);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_tCBA615CCBCAC4C4305DEB6D026EE1BA8C481F4A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 49));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tCBA615CCBCAC4C4305DEB6D026EE1BA8C481F4A9);
	// T4
	// sizeof(T4)
	const uint32_t SizeOf_T4_t22CC08F11AAD0BE8EE74CC12732F294D6124CCAC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 51));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t22CC08F11AAD0BE8EE74CC12732F294D6124CCAC);
	// T5
	// sizeof(T5)
	const uint32_t SizeOf_T5_t0F22F8E7AFD3B88FE700E7C031CDDB0CB1A78F8B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 53));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t0F22F8E7AFD3B88FE700E7C031CDDB0CB1A78F8B);
	// TR
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118);
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue());
		ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* L_0 = (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* L_1 = (ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965*)L_0->___resultSelector_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)), il2cpp_rgctx_method(method->klass->rgctx_data, 44), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), L_6, (Il2CppFullySharedGenericAny*)L_7);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), L_8, (Il2CppFullySharedGenericAny*)L_9);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), L_10, (Il2CppFullySharedGenericAny*)L_11);
		NullCheck(L_1);
		InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)), il2cpp_rgctx_method(method->klass->rgctx_data, 54), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 45)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 47)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 49)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 51)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 53)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118);
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m4A7706190CD763F362224AAF850255A321A7A838_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 55));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 55)) ? ___value0 : &___value0), SizeOf_TR_t30EB23C545F22C203635C126094FBA71E4B68118);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 55)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_mDE1C0B00EECFA4EED90B454F6941F22581C2E925_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)), il2cpp_rgctx_method(method->klass->rgctx_data, 60), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m55DE56DD5D97117CC744CE36E90EAF4B15AA720B_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)), il2cpp_rgctx_method(method->klass->rgctx_data, 60), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 11), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`6/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::<Run>b__8_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__8_0_m21E8E090A9C667AA82EA486C1016607E8625DE57_gshared (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0053;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0053:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
			NullCheck(L_4);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)), il2cpp_rgctx_method(method->klass->rgctx_data, 62), L_4);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
			NullCheck(L_5);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 63), L_5);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
			NullCheck(L_6);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)), il2cpp_rgctx_method(method->klass->rgctx_data, 64), L_6);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
			NullCheck(L_7);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 65)), il2cpp_rgctx_method(method->klass->rgctx_data, 65), L_7);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
			NullCheck(L_8);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)), il2cpp_rgctx_method(method->klass->rgctx_data, 66), L_8);
			// }
			goto IL_0054;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0054:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`7/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipObservable`7<T1,T2,T3,T4,T5,T6,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_m6FD870DD5F8C41629D34A32B5DF434CE0AE67C46_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_1);
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_2);
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3);
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_4);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_4);
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_5);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_5);
		__this->___q5_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_5);
		// readonly Queue<T6> q6 = new Queue<T6>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_6);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_6);
		__this->___q6_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q6_12), (void*)L_6);
		// : base(observer, cancel)
		RuntimeObject* L_7 = ___observer1;
		RuntimeObject* L_8 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_7, L_8);
		// this.parent = parent;
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_9 = ___parent0;
		__this->___parent_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mE69AA20C369702DBC149772FBEBE4004711F1A87_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5, q6 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_11 = L_9;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q6_12;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		InvokerActionInvoker1< ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_11);
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_13 = (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5*)__this->___parent_5;
		NullCheck(L_13);
		RuntimeObject* L_14 = (RuntimeObject*)L_13->___source1_1;
		RuntimeObject* L_15 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_16 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_17 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 20));
		NullCheck(L_17);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_17, L_15, (RuntimeObject*)__this, 0, L_16);
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_14, (RuntimeObject*)L_17);
		V_0 = L_18;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_19 = (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5*)__this->___parent_5;
		NullCheck(L_19);
		RuntimeObject* L_20 = (RuntimeObject*)L_19->___source2_2;
		RuntimeObject* L_21 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_22 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_23 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
		NullCheck(L_23);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_23, L_21, (RuntimeObject*)__this, 1, L_22);
		NullCheck(L_20);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 24), L_20, (RuntimeObject*)L_23);
		V_1 = L_24;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_25 = (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5*)__this->___parent_5;
		NullCheck(L_25);
		RuntimeObject* L_26 = (RuntimeObject*)L_25->___source3_3;
		RuntimeObject* L_27 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_28 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_29 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 30));
		NullCheck(L_29);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), L_29, L_27, (RuntimeObject*)__this, 2, L_28);
		NullCheck(L_26);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_26, (RuntimeObject*)L_29);
		V_2 = L_30;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_31 = (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5*)__this->___parent_5;
		NullCheck(L_31);
		RuntimeObject* L_32 = (RuntimeObject*)L_31->___source4_4;
		RuntimeObject* L_33 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_34 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_35 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 35));
		NullCheck(L_35);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_35, L_33, (RuntimeObject*)__this, 3, L_34);
		NullCheck(L_32);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 34), L_32, (RuntimeObject*)L_35);
		V_3 = L_36;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_37 = (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5*)__this->___parent_5;
		NullCheck(L_37);
		RuntimeObject* L_38 = (RuntimeObject*)L_37->___source5_5;
		RuntimeObject* L_39 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_40 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_41 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 40));
		NullCheck(L_41);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), L_41, L_39, (RuntimeObject*)__this, 4, L_40);
		NullCheck(L_38);
		RuntimeObject* L_42;
		L_42 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 39), L_38, (RuntimeObject*)L_41);
		V_4 = L_42;
		// var s6 = parent.source6.Subscribe(new ZipObserver<T6>(gate, this, 5, q6));
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_43 = (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5*)__this->___parent_5;
		NullCheck(L_43);
		RuntimeObject* L_44 = (RuntimeObject*)L_43->___source6_6;
		RuntimeObject* L_45 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_46 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q6_12;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_47 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
		NullCheck(L_47);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_47, L_45, (RuntimeObject*)__this, 5, L_46);
		NullCheck(L_44);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 44), L_44, (RuntimeObject*)L_47);
		V_5 = L_48;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_49 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_50 = L_49;
		RuntimeObject* L_51 = V_0;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_52 = L_50;
		RuntimeObject* L_53 = V_1;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_53);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_54 = L_52;
		RuntimeObject* L_55 = V_2;
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_55);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_56 = L_54;
		RuntimeObject* L_57 = V_3;
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_57);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_58 = L_56;
		RuntimeObject* L_59 = V_4;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_59);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_60 = L_58;
		RuntimeObject* L_61 = V_5;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_61);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_62 = L_60;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_63 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_63, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 49)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_64;
		L_64 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_63, NULL);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_64);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_64);
		RuntimeObject* L_65;
		L_65 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_62, NULL);
		return (RuntimeObject*)L_65;
	}
}
// TR UniRx.Operators.ZipObservable`7/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_m3DB9BF29A4E453D22BA0B1E92E2E6B2B53629209_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 64));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_tA42A0D3D176666A701C2A9A308808017DA114B18 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 52));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tA42A0D3D176666A701C2A9A308808017DA114B18);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_t7034EF6F1D0D8629FBFDF2616863E6EBBCDAC0A6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 54));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t7034EF6F1D0D8629FBFDF2616863E6EBBCDAC0A6);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_tC21F425E0EDBAEE6096EBE279B8598224C8CF33B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 56));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tC21F425E0EDBAEE6096EBE279B8598224C8CF33B);
	// T4
	// sizeof(T4)
	const uint32_t SizeOf_T4_t4E91BF30E60A6022457B47E61C438F01793C7EFA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 58));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t4E91BF30E60A6022457B47E61C438F01793C7EFA);
	// T5
	// sizeof(T5)
	const uint32_t SizeOf_T5_t72A95B6FBFE7165CE440D1EE34AA38DD9BE41FB5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 60));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t72A95B6FBFE7165CE440D1EE34AA38DD9BE41FB5);
	// T6
	// sizeof(T6)
	const uint32_t SizeOf_T6_t5525F06CC1728FBCFFC8F48BFBA2135B60EAA3CB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 62));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t5525F06CC1728FBCFFC8F48BFBA2135B60EAA3CB);
	// TR
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F);
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue(), q6.Dequeue());
		ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* L_0 = (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* L_1 = (ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9*)L_0->___resultSelector_7;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 51)), il2cpp_rgctx_method(method->klass->rgctx_data, 51), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), L_6, (Il2CppFullySharedGenericAny*)L_7);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 57)), il2cpp_rgctx_method(method->klass->rgctx_data, 57), L_8, (Il2CppFullySharedGenericAny*)L_9);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 59)), il2cpp_rgctx_method(method->klass->rgctx_data, 59), L_10, (Il2CppFullySharedGenericAny*)L_11);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q6_12;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 61)), il2cpp_rgctx_method(method->klass->rgctx_data, 61), L_12, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_1);
		InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 63)), il2cpp_rgctx_method(method->klass->rgctx_data, 63), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 52)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 54)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 56)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 58)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 60)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 62)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F);
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m4B267BB5DB8F39FC6017F0E6173202B9499E6C67_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 64));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 64)) ? ___value0 : &___value0), SizeOf_TR_tD6F023CC992AA2D4706ECBFB0A042CA7306CBA2F);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 64)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m29270C60AB0A898DB3572CA4D32FB4F59C28693E_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 69)), il2cpp_rgctx_method(method->klass->rgctx_data, 69), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m72F2452B0C86FCC4E574F7589824A77998ADE34C_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 69)), il2cpp_rgctx_method(method->klass->rgctx_data, 69), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 13), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`7/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::<Run>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__9_0_m63C15A9D7428C52C461CB1141E7953C53571C598_gshared (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
			NullCheck(L_4);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 71)), il2cpp_rgctx_method(method->klass->rgctx_data, 71), L_4);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
			NullCheck(L_5);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)), il2cpp_rgctx_method(method->klass->rgctx_data, 72), L_5);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
			NullCheck(L_6);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 73)), il2cpp_rgctx_method(method->klass->rgctx_data, 73), L_6);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
			NullCheck(L_7);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 74)), il2cpp_rgctx_method(method->klass->rgctx_data, 74), L_7);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
			NullCheck(L_8);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 75)), il2cpp_rgctx_method(method->klass->rgctx_data, 75), L_8);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_9 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q6_12;
			NullCheck(L_9);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 76)), il2cpp_rgctx_method(method->klass->rgctx_data, 76), L_9);
			// }
			goto IL_005f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		// }));
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
// System.Void UniRx.Operators.ZipObservable`8/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipObservable`8<T1,T2,T3,T4,T5,T6,T7,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip__ctor_mD61387F93BB475B87D60D28BCA4B68D08238290A_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// readonly Queue<T1> q1 = new Queue<T1>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_1 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		NullCheck(L_1);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), L_1);
		__this->___q1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q1_7), (void*)L_1);
		// readonly Queue<T2> q2 = new Queue<T2>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_2);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_2);
		__this->___q2_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q2_8), (void*)L_2);
		// readonly Queue<T3> q3 = new Queue<T3>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_3);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_3);
		__this->___q3_9 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q3_9), (void*)L_3);
		// readonly Queue<T4> q4 = new Queue<T4>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		NullCheck(L_4);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_4);
		__this->___q4_10 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q4_10), (void*)L_4);
		// readonly Queue<T5> q5 = new Queue<T5>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_5);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_5);
		__this->___q5_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q5_11), (void*)L_5);
		// readonly Queue<T6> q6 = new Queue<T6>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_6);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_6);
		__this->___q6_12 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q6_12), (void*)L_6);
		// readonly Queue<T7> q7 = new Queue<T7>();
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_7);
		InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_7);
		__this->___q7_13 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___q7_13), (void*)L_7);
		// : base(observer, cancel)
		RuntimeObject* L_8 = ___observer1;
		RuntimeObject* L_9 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_8, L_9);
		// this.parent = parent;
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_10 = ___parent0;
		__this->___parent_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_10);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Zip_Run_mD16D77F1FF5CA19949B07FFD192FE78CF2956975_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// base.SetQueue(new System.Collections.ICollection[] { q1, q2, q3, q4, q5, q6, q7 });
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_0 = (ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273*)SZArrayNew(ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273_il2cpp_TypeInfo_var, (uint32_t)7);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_1 = L_0;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_3 = L_1;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_4);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_5 = L_3;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_6);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_7 = L_5;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_8);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_9 = L_7;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_10);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_11 = L_9;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q6_12;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_12);
		ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* L_13 = L_11;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_14 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q7_13;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_14);
		NullCheck((NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this);
		InvokerActionInvoker1< ICollectionU5BU5D_t3C5AFBCC1FDF16A2BA036FA88D2B3387DBEAD273* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), (NthZipObserverBase_1_t13433A138AC7C17AE88D820801D9869E3A1B9158*)__this, L_13);
		// var s1 = parent.source1.Subscribe(new ZipObserver<T1>(gate, this, 0, q1));
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_15 = (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*)__this->___parent_5;
		NullCheck(L_15);
		RuntimeObject* L_16 = (RuntimeObject*)L_15->___source1_1;
		RuntimeObject* L_17 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_18 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_19 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 22));
		NullCheck(L_19);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)), il2cpp_rgctx_method(method->klass->rgctx_data, 23), L_19, L_17, (RuntimeObject*)__this, 0, L_18);
		NullCheck(L_16);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_16, (RuntimeObject*)L_19);
		V_0 = L_20;
		// var s2 = parent.source2.Subscribe(new ZipObserver<T2>(gate, this, 1, q2));
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_21 = (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*)__this->___parent_5;
		NullCheck(L_21);
		RuntimeObject* L_22 = (RuntimeObject*)L_21->___source2_2;
		RuntimeObject* L_23 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_24 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_25 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
		NullCheck(L_25);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), L_25, L_23, (RuntimeObject*)__this, 1, L_24);
		NullCheck(L_22);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_22, (RuntimeObject*)L_25);
		V_1 = L_26;
		// var s3 = parent.source3.Subscribe(new ZipObserver<T3>(gate, this, 2, q3));
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_27 = (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*)__this->___parent_5;
		NullCheck(L_27);
		RuntimeObject* L_28 = (RuntimeObject*)L_27->___source3_3;
		RuntimeObject* L_29 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_30 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_31 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
		NullCheck(L_31);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_31, L_29, (RuntimeObject*)__this, 2, L_30);
		NullCheck(L_28);
		RuntimeObject* L_32;
		L_32 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 31), L_28, (RuntimeObject*)L_31);
		V_2 = L_32;
		// var s4 = parent.source4.Subscribe(new ZipObserver<T4>(gate, this, 3, q4));
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_33 = (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*)__this->___parent_5;
		NullCheck(L_33);
		RuntimeObject* L_34 = (RuntimeObject*)L_33->___source4_4;
		RuntimeObject* L_35 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_36 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_37 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
		NullCheck(L_37);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_37, L_35, (RuntimeObject*)__this, 3, L_36);
		NullCheck(L_34);
		RuntimeObject* L_38;
		L_38 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 36), L_34, (RuntimeObject*)L_37);
		V_3 = L_38;
		// var s5 = parent.source5.Subscribe(new ZipObserver<T5>(gate, this, 4, q5));
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_39 = (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*)__this->___parent_5;
		NullCheck(L_39);
		RuntimeObject* L_40 = (RuntimeObject*)L_39->___source5_5;
		RuntimeObject* L_41 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_42 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_43 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 42));
		NullCheck(L_43);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), L_43, L_41, (RuntimeObject*)__this, 4, L_42);
		NullCheck(L_40);
		RuntimeObject* L_44;
		L_44 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 41), L_40, (RuntimeObject*)L_43);
		V_4 = L_44;
		// var s6 = parent.source6.Subscribe(new ZipObserver<T6>(gate, this, 5, q6));
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_45 = (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*)__this->___parent_5;
		NullCheck(L_45);
		RuntimeObject* L_46 = (RuntimeObject*)L_45->___source6_6;
		RuntimeObject* L_47 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_48 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q6_12;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_49 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 47));
		NullCheck(L_49);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), L_49, L_47, (RuntimeObject*)__this, 5, L_48);
		NullCheck(L_46);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 46), L_46, (RuntimeObject*)L_49);
		V_5 = L_50;
		// var s7 = parent.source7.Subscribe(new ZipObserver<T7>(gate, this, 6, q7));
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_51 = (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*)__this->___parent_5;
		NullCheck(L_51);
		RuntimeObject* L_52 = (RuntimeObject*)L_51->___source7_7;
		RuntimeObject* L_53 = (RuntimeObject*)__this->___gate_6;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_54 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q7_13;
		ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* L_55 = (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 52));
		NullCheck(L_55);
		InvokerActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 53)), il2cpp_rgctx_method(method->klass->rgctx_data, 53), L_55, L_53, (RuntimeObject*)__this, 6, L_54);
		NullCheck(L_52);
		RuntimeObject* L_56;
		L_56 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 51), L_52, (RuntimeObject*)L_55);
		V_6 = L_56;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, s7, Disposable.Create(() =>
		// {
		//     lock (gate)
		//     {
		//         q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
		//     }
		// }));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_57 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)8);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_58 = L_57;
		RuntimeObject* L_59 = V_0;
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_59);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_60 = L_58;
		RuntimeObject* L_61 = V_1;
		NullCheck(L_60);
		ArrayElementTypeCheck (L_60, L_61);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_61);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_62 = L_60;
		RuntimeObject* L_63 = V_2;
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_63);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_63);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_64 = L_62;
		RuntimeObject* L_65 = V_3;
		NullCheck(L_64);
		ArrayElementTypeCheck (L_64, L_65);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_65);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_66 = L_64;
		RuntimeObject* L_67 = V_4;
		NullCheck(L_66);
		ArrayElementTypeCheck (L_66, L_67);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_67);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_68 = L_66;
		RuntimeObject* L_69 = V_5;
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_69);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_69);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_70 = L_68;
		RuntimeObject* L_71 = V_6;
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_71);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_72 = L_70;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_73 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_73);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_73, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 56)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_74;
		L_74 = Disposable_Create_m8FC5E161705A5AB1D0FD89067783648C9A6B1BF1(L_73, NULL);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_74);
		RuntimeObject* L_75;
		L_75 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_72, NULL);
		return (RuntimeObject*)L_75;
	}
}
// TR UniRx.Operators.ZipObservable`8/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_GetResult_m836F3DF8AC1E9F94232F357E92D6E4D6D3B93DCB_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 73));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_t4734C379321AEB8E57AC4EB57DDC71F1A5CEC5E0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 59));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t4734C379321AEB8E57AC4EB57DDC71F1A5CEC5E0);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_t3A494B5B8BDA74801BF442DF89378578D8B71E65 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 61));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t3A494B5B8BDA74801BF442DF89378578D8B71E65);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_t64E3C7BE0AC134C94E2B59075F1E43D86BBCFFE4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 63));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t64E3C7BE0AC134C94E2B59075F1E43D86BBCFFE4);
	// T4
	// sizeof(T4)
	const uint32_t SizeOf_T4_tA27470B0912839903DE172F5C37BBED6812BC661 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 65));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_tA27470B0912839903DE172F5C37BBED6812BC661);
	// T5
	// sizeof(T5)
	const uint32_t SizeOf_T5_t31F283B259B71506E181168B87C21650B66F5CD4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 67));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t31F283B259B71506E181168B87C21650B66F5CD4);
	// T6
	// sizeof(T6)
	const uint32_t SizeOf_T6_tFE82157822AA835F25133CE2C9E9188327E8D836 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 69));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tFE82157822AA835F25133CE2C9E9188327E8D836);
	// T7
	// sizeof(T7)
	const uint32_t SizeOf_T7_tEBE39BB933C01FCDD3E33CA5742611DC61B6FF6D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 71));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_tEBE39BB933C01FCDD3E33CA5742611DC61B6FF6D);
	// TR
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E);
	{
		// return parent.resultSelector(q1.Dequeue(), q2.Dequeue(), q3.Dequeue(), q4.Dequeue(), q5.Dequeue(), q6.Dequeue(), q7.Dequeue());
		ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* L_0 = (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*)__this->___parent_5;
		NullCheck(L_0);
		ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* L_1 = (ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC*)L_0->___resultSelector_8;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_2 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 58)), il2cpp_rgctx_method(method->klass->rgctx_data, 58), L_2, (Il2CppFullySharedGenericAny*)L_3);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 60)), il2cpp_rgctx_method(method->klass->rgctx_data, 60), L_4, (Il2CppFullySharedGenericAny*)L_5);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)), il2cpp_rgctx_method(method->klass->rgctx_data, 62), L_6, (Il2CppFullySharedGenericAny*)L_7);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 64)), il2cpp_rgctx_method(method->klass->rgctx_data, 64), L_8, (Il2CppFullySharedGenericAny*)L_9);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 66)), il2cpp_rgctx_method(method->klass->rgctx_data, 66), L_10, (Il2CppFullySharedGenericAny*)L_11);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_12 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q6_12;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 68)), il2cpp_rgctx_method(method->klass->rgctx_data, 68), L_12, (Il2CppFullySharedGenericAny*)L_13);
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_14 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q7_13;
		NullCheck(L_14);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 70)), il2cpp_rgctx_method(method->klass->rgctx_data, 70), L_14, (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_1);
		InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 72)), il2cpp_rgctx_method(method->klass->rgctx_data, 72), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 59)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 61)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 63)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 65)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 67)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 69)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 71)) ? L_15: *(void**)L_15), (Il2CppFullySharedGenericAny*)L_16);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E);
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnNext_m87A961F0A04161FEA4B0D206808850F3E3180D4F_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 73));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 73)) ? ___value0 : &___value0), SizeOf_TR_t456B6DC979C152D04B4550FBAD7F9CA7635BFC4E);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 73)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnError_m54155AF5F1914A62D35433503A162C4DCC812AC8_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 78)), il2cpp_rgctx_method(method->klass->rgctx_data, 78), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_OnCompleted_m51B74156FF728749AFE8EF895B158276A21F7AFC_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 78)), il2cpp_rgctx_method(method->klass->rgctx_data, 78), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`8/Zip<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::<Run>b__10_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Zip_U3CRunU3Eb__10_0_m14DBB6F5F5F35224290B02FE622EA2BE4D0CD2F1_gshared (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0060:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0069;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0069:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q1_7;
			NullCheck(L_4);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 80)), il2cpp_rgctx_method(method->klass->rgctx_data, 80), L_4);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_5 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q2_8;
			NullCheck(L_5);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 81)), il2cpp_rgctx_method(method->klass->rgctx_data, 81), L_5);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_6 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q3_9;
			NullCheck(L_6);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 82)), il2cpp_rgctx_method(method->klass->rgctx_data, 82), L_6);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_7 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q4_10;
			NullCheck(L_7);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 83)), il2cpp_rgctx_method(method->klass->rgctx_data, 83), L_7);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_8 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q5_11;
			NullCheck(L_8);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 84)), il2cpp_rgctx_method(method->klass->rgctx_data, 84), L_8);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_9 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q6_12;
			NullCheck(L_9);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 85)), il2cpp_rgctx_method(method->klass->rgctx_data, 85), L_9);
			// q1.Clear(); q2.Clear(); q3.Clear(); q4.Clear(); q5.Clear(); q6.Clear(); q7.Clear();
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_10 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___q7_13;
			NullCheck(L_10);
			InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 86)), il2cpp_rgctx_method(method->klass->rgctx_data, 86), L_10);
			// }
			goto IL_006a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// }));
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
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_Multicast(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* currentDelegate = reinterpret_cast<ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenStaticInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_ClosedStaticInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_ClosedInstInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenInstInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenVirtualInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenInterfaceInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenGenericVirtualInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenGenericInterfaceInvoker(ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_4__ctor_mE0FC3DDFF2FD2F40E1D172F0775DD366A0C93309_gshared (ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_Multicast;
}
// TR UniRx.Operators.ZipFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_4_Invoke_m57458DB9C82C14AF88BE1E9BF567A675C5CDA490_gshared (ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_4_BeginInvoke_m16AF4E38D358DDD7CC7BAA2F917241505885653D_gshared (ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// TR UniRx.Operators.ZipFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_4_EndInvoke_m29871F52C640B8B15E6D5E67711C2CC3D0F9981D_gshared (ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_Multicast(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* currentDelegate = reinterpret_cast<ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenStaticInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_ClosedStaticInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_ClosedInstInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenInstInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenVirtualInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenInterfaceInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenGenericVirtualInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenGenericInterfaceInvoker(ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_5__ctor_m5316746895B7D7AB34E1BB0AAB213E4A716175F9_gshared (ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_Multicast;
}
// TR UniRx.Operators.ZipFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_5_Invoke_mB974496A265618B891A2EF3E521BB2750A631213_gshared (ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_5_BeginInvoke_m1CA25ADECF1586077BF9148591C585C8719DAC10_gshared (ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	RuntimeClass* ___arg43_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___arg43_klass) ? Box(___arg43_klass, ___arg43) : (void*)___arg43);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// TR UniRx.Operators.ZipFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_5_EndInvoke_mC366484D82B8D1E89A30D102AD4B427A1D8DBDB2_gshared (ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_Multicast(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* currentDelegate = reinterpret_cast<ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenStaticInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_ClosedStaticInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_ClosedInstInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenInstInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenVirtualInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenInterfaceInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenGenericVirtualInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenGenericInterfaceInvoker(ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_6__ctor_mD2C72EA7AA9BFD08A3E738B3320BB36073F28087_gshared (ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_Multicast;
}
// TR UniRx.Operators.ZipFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_6_Invoke_m09B40B7B937EC5D4F76F00FA5EBA63378AC3F2A7_gshared (ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_6_BeginInvoke_m71205B21A09B0166AB6D89EFBFBD23D8249B44D8_gshared (ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	RuntimeClass* ___arg43_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___arg43_klass) ? Box(___arg43_klass, ___arg43) : (void*)___arg43);
	RuntimeClass* ___arg54_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___arg54_klass) ? Box(___arg54_klass, ___arg54) : (void*)___arg54);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// TR UniRx.Operators.ZipFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_6_EndInvoke_mD10DEA08C543DB4BFECD2E4C64E821F87798338A_gshared (ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_Multicast(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* currentDelegate = reinterpret_cast<ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenStaticInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_ClosedStaticInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_ClosedInstInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenInstInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenVirtualInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenInterfaceInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenGenericVirtualInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenGenericInterfaceInvoker(ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_7__ctor_mD4D4561941A80E2A8A618A0AD8BC60E61D6EFFC5_gshared (ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_Multicast;
}
// TR UniRx.Operators.ZipFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_7_Invoke_m5304C0B400866D6F38EF1C24F2518935E3B6F181_gshared (ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_7_BeginInvoke_m75EF348B036BD8C10311C43B91CBD042E67A4B6D_gshared (ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	RuntimeClass* ___arg43_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___arg43_klass) ? Box(___arg43_klass, ___arg43) : (void*)___arg43);
	RuntimeClass* ___arg54_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___arg54_klass) ? Box(___arg54_klass, ___arg54) : (void*)___arg54);
	RuntimeClass* ___arg65_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 5));
	__d_args[5] = (il2cpp_codegen_class_is_value_type(___arg65_klass) ? Box(___arg65_klass, ___arg65) : (void*)___arg65);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// TR UniRx.Operators.ZipFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_7_EndInvoke_mC99C005EBB31F71B11326A9165BA1581A297AC10_gshared (ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_Multicast(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* currentDelegate = reinterpret_cast<ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenStaticInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_ClosedStaticInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker9< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_ClosedInstInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenInstInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenVirtualInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenInterfaceInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenGenericVirtualInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenGenericInterfaceInvoker(ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_8__ctor_m157500CB7798DD36E3270F988CA108634AD8F605_gshared (ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_Multicast;
}
// TR UniRx.Operators.ZipFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_8_Invoke_m25C276EF82BEABA6085838765D24F52A00007A5C_gshared (ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipFunc_8_BeginInvoke_mCD6A1FD4C3DBB3B03E6F88AAF863A47F6BF53377_gshared (ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback7, RuntimeObject* ___object8, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	RuntimeClass* ___arg43_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___arg43_klass) ? Box(___arg43_klass, ___arg43) : (void*)___arg43);
	RuntimeClass* ___arg54_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___arg54_klass) ? Box(___arg54_klass, ___arg54) : (void*)___arg54);
	RuntimeClass* ___arg65_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 5));
	__d_args[5] = (il2cpp_codegen_class_is_value_type(___arg65_klass) ? Box(___arg65_klass, ___arg65) : (void*)___arg65);
	RuntimeClass* ___arg76_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 6));
	__d_args[6] = (il2cpp_codegen_class_is_value_type(___arg76_klass) ? Box(___arg76_klass, ___arg76) : (void*)___arg76);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);
}
// TR UniRx.Operators.ZipFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipFunc_8_EndInvoke_m3C975D1C9431B81AB73A24C510E957087888C46E_gshared (ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipLatestObservable`1<T>,System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m4C58ACD687E268FDC0B81157FE5917DF0DD9D407_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// public ZipLatest(ZipLatestObservable<T> parent, IObserver<IList<T>> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, L_1, L_2);
		// this.parent = parent;
		ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* L_3 = ___parent0;
		__this->___parent_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m10038D117C5646EB169C4D79173B611AD2F070B1_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// length = parent.sources.Length;
		ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* L_0 = (ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C*)__this->___parent_2;
		NullCheck(L_0);
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_1 = (IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035*)L_0->___sources_1;
		NullCheck(L_1);
		__this->___length_4 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// values = new T[length];
		int32_t L_2 = (int32_t)__this->___length_4;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (uint32_t)L_2);
		__this->___values_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___values_5), (void*)L_3);
		// isStarted = new bool[length];
		int32_t L_4 = (int32_t)__this->___length_4;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->___isStarted_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isStarted_6), (void*)L_5);
		// isCompleted = new bool[length];
		int32_t L_6 = (int32_t)__this->___length_4;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4_il2cpp_TypeInfo_var, (uint32_t)L_6);
		__this->___isCompleted_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___isCompleted_7), (void*)L_7);
		// var disposables = new IDisposable[length];
		int32_t L_8 = (int32_t)__this->___length_4;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_9 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)L_8);
		V_0 = L_9;
		// for (int i = 0; i < length; i++)
		V_1 = 0;
		goto IL_0078;
	}

IL_0056:
	{
		// var source = parent.sources[i];
		ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* L_10 = (ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C*)__this->___parent_2;
		NullCheck(L_10);
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_11 = (IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035*)L_10->___sources_1;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// disposables[i] = source.Subscribe(new ZipLatestObserver(this, i));
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_15 = V_0;
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = V_2;
		int32_t L_18 = V_1;
		ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* L_19 = (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_19);
		InvokerActionInvoker2< ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_19, __this, L_18);
		NullCheck(L_17);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_17, (RuntimeObject*)L_19);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_20);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (RuntimeObject*)L_20);
		// for (int i = 0; i < length; i++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0078:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_22 = V_1;
		int32_t L_23 = (int32_t)__this->___length_4;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0056;
		}
	}
	{
		// return StableCompositeDisposable.CreateUnsafe(disposables);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_24 = V_0;
		RuntimeObject* L_25;
		L_25 = StableCompositeDisposable_CreateUnsafe_m61E9E95FD914CF4A0EB267CBE46D63AB1066FD08(L_24, NULL);
		return (RuntimeObject*)L_25;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Publish(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_mDA9BBF5EE4572416485E011725227797E9BB01FF_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// isStarted[index] = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (bool)1);
		// var hasOnCompleted = false;
		V_0 = (bool)0;
		// var allValueStarted = true;
		V_1 = (bool)1;
		// for (int i = 0; i < length; i++)
		V_2 = 0;
		goto IL_0033;
	}

IL_0011:
	{
		// if (!isStarted[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		// allValueStarted = false;
		V_1 = (bool)0;
		// break;
		goto IL_003c;
	}

IL_001f:
	{
		// if (i == index) continue;
		int32_t L_6 = V_2;
		int32_t L_7 = ___index0;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_002f;
		}
	}
	{
		// if (isCompleted[i]) hasOnCompleted = true;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isCompleted_7;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint8_t L_11 = (uint8_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		// if (isCompleted[i]) hasOnCompleted = true;
		V_0 = (bool)1;
	}

IL_002f:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0033:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_13 = V_2;
		int32_t L_14 = (int32_t)__this->___length_4;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0011;
		}
	}

IL_003c:
	{
		// if (allValueStarted)
		bool L_15 = V_1;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// OnNext(new List<T>(values));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->___values_5;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_17 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_17);
		InvokerActionInvoker1< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_17, (RuntimeObject*)L_16);
		NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
		VirtualActionInvoker1Invoker< RuntimeObject* >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnNext(TSource) */, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this, (RuntimeObject*)L_17);
		// if (hasOnCompleted)
		bool L_18 = V_0;
		if (!L_18)
		{
			goto IL_006a;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0062:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_19 = (RuntimeObject*)((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_19);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_19);
			// try { observer.OnCompleted(); }
			goto IL_0069;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0069:
	{
		// return;
		return;
	}

IL_006a:
	{
		// Array.Clear(isStarted, 0, length); // reset
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_21 = (int32_t)__this->___length_4;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_20, 0, L_21, NULL);
		// return;
		return;
	}

IL_007d:
	{
		// for (int i = 0; i < length; i++)
		V_3 = 0;
		goto IL_00b4;
	}

IL_0081:
	{
		// if (i == index) continue;
		int32_t L_22 = V_3;
		int32_t L_23 = ___index0;
		if ((((int32_t)L_22) == ((int32_t)L_23)))
		{
			goto IL_00b0;
		}
	}
	{
		// if (isCompleted[i] && !isStarted[i])
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_24 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isCompleted_7;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = L_25;
		uint8_t L_27 = (uint8_t)(L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		if (!L_27)
		{
			goto IL_00b0;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_28 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)__this->___isStarted_6;
		int32_t L_29 = V_3;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		uint8_t L_31 = (uint8_t)(L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		if (L_31)
		{
			goto IL_00b0;
		}
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a8:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_32 = (RuntimeObject*)((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_32);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_32);
			// try { observer.OnCompleted(); }
			goto IL_00af;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00af:
	{
		// return;
		return;
	}

IL_00b0:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_33 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_00b4:
	{
		// for (int i = 0; i < length; i++)
		int32_t L_34 = V_3;
		int32_t L_35 = (int32_t)__this->___length_4;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_0081;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m5F915EEE220B3290819F84D156E08D2556927557_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< RuntimeObject* >::Invoke(0 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m3B2C05BA797B49CB7917CD507C7529132487ED71_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m7D8F0FAC90A20F9C49F6A4E94AB94CD672384FCF_gshared (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipLatestObservable`3<TLeft,TRight,TResult>,System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m132055837EFD493D3F0B910A42FA6F87B90C6EF4_gshared (/*UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1), L_0);
		// public ZipLatest(ZipLatestObservable<TLeft, TRight, TResult> parent, IObserver<TResult> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, L_1, L_2);
		// this.parent = parent;
		ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* L_3 = ___parent0;
		il2cpp_codegen_write_instance_field_data<ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m50E843D3C07EB1424996983A1471DCA8EC4BE2FC_gshared (/*UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var l = parent.left.Subscribe(new LeftObserver(this));
		ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* L_0 = *(ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___left_1;
		LeftObserver_tB7E464B198322A284E0266355C4DACB5A3A3B66E* L_2 = (LeftObserver_tB7E464B198322A284E0266355C4DACB5A3A3B66E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_2);
		InvokerActionInvoker1< ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_2, __this);
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_1, (RuntimeObject*)L_2);
		// var r = parent.right.Subscribe(new RightObserver(this));
		ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* L_4 = *(ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
		NullCheck(L_4);
		RuntimeObject* L_5 = (RuntimeObject*)L_4->___right_2;
		RightObserver_tCD0571F80F305840348F458D5771051BDE215447* L_6 = (RightObserver_tCD0571F80F305840348F458D5771051BDE215447*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_6);
		InvokerActionInvoker1< ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_6, __this);
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 10), L_5, (RuntimeObject*)L_6);
		V_0 = L_7;
		// return StableCompositeDisposable.Create(l, r);
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9;
		L_9 = StableCompositeDisposable_Create_m5D5EAA49FB4EC4511BB1750B44E0836762530FC3(L_3, L_8, NULL);
		return (RuntimeObject*)L_9;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Publish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_Publish_m6CB949B9BE39FCD5516E22F007744E519A6E4838_gshared (/*UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 23));
	// sizeof(TLeft)
	const uint32_t SizeOf_TLeft_t98BB634D36728CA239C70588CF3AD9C93C795629 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 20));
	// sizeof(TRight)
	const uint32_t SizeOf_TRight_tBEA6B0350965062AAC6F1F327E7D848D184B2D98 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 21));
	// TLeft
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TLeft_t98BB634D36728CA239C70588CF3AD9C93C795629);
	// TRight
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TRight_tBEA6B0350965062AAC6F1F327E7D848D184B2D98);
	// TResult
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
	const Il2CppFullySharedGenericAny L_14 = L_11;
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
	memset(V_0, 0, SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if ((leftCompleted && !leftStarted) || (rightCompleted && !rightStarted))
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4));
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3));
		if (!L_1)
		{
			goto IL_0020;
		}
	}

IL_0010:
	{
		bool L_2 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),7));
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		bool L_3 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6));
		if (L_3)
		{
			goto IL_0038;
		}
	}

IL_0020:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_4 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_4);
			// try { observer.OnCompleted(); }
			goto IL_0037;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0037:
	{
		// return;
		return;
	}

IL_0038:
	{
		// else if (!(leftStarted && rightStarted))
		bool L_5 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3));
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		bool L_6 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6));
		if (L_6)
		{
			goto IL_0049;
		}
	}

IL_0048:
	{
		// return;
		return;
	}

IL_0049:
	{
	}
	try
	{// begin try (depth: 1)
		// v = parent.selector(leftValue, rightValue);
		ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* L_7 = *(ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
		NullCheck(L_7);
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_8 = (Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4*)L_7->___selector_3;
		il2cpp_codegen_memcpy(L_9, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2)), SizeOf_TLeft_t98BB634D36728CA239C70588CF3AD9C93C795629);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),5)), SizeOf_TRight_tBEA6B0350965062AAC6F1F327E7D848D184B2D98);
		NullCheck(L_8);
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 20)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 21)) ? L_10: *(void**)L_10), (Il2CppFullySharedGenericAny*)L_11);
		il2cpp_codegen_memcpy(V_0, L_11, SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
		// }
		goto IL_0083;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0069;
		}
		throw e;
	}

CATCH_0069:
	{// begin catch(System.Exception)
		{
			// catch (Exception ex)
			V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_007a:
				{// begin finally (depth: 2)
					// finally { Dispose(); }
					NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
					InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
					// finally { Dispose(); }
					return;
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				// try { observer.OnError(ex); }
				RuntimeObject* L_12 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
				il2cpp_codegen_memory_barrier();
				Exception_t* L_13 = V_1;
				NullCheck(L_12);
				InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_12, L_13);
				// try { observer.OnError(ex); }
				goto IL_0081;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0081:
		{
			// return;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c0;
		}
	}// end catch (depth: 1)

IL_0083:
	{
		// OnNext(v);
		il2cpp_codegen_memcpy(L_14, V_0, SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
		NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
		VirtualActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TSource) */, (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 23)) ? L_14: *(void**)L_14));
		// leftStarted = false;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), (bool)0);
		// rightStarted = false;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),6), (bool)0);
		// if (leftCompleted || rightCompleted)
		bool L_15 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),4));
		if (L_15)
		{
			goto IL_00a8;
		}
	}
	{
		bool L_16 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),7));
		if (!L_16)
		{
			goto IL_00c0;
		}
	}

IL_00a8:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b8:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_17 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_17);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_17);
			// try { observer.OnCompleted(); }
			goto IL_00bf;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		// return;
		return;
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m5542751E610E1EBBF99E568A92C9451A916310FF_gshared (/*UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TResult)
	const uint32_t SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 23));
	// TResult
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 23)) ? ___value0 : &___value0), SizeOf_TResult_tF2D5B2AE8E89EDC311339C32C3807526743F985E);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 23)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m9C6FCDBEE4DC73812564222FA5BCEE5B365000B3_gshared (/*UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mDBAA411E63A10928631E403666D52355C39586D0_gshared (/*UniRx.Operators.ZipLatestObservable`3/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`4<T1,T2,T3,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m4FC10AE5D383A509D99B84873384FAD79F8C802F_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, int32_t ___length0, ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		InvokerActionInvoker3< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3);
		// this.parent = parent;
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m969CC2E5A41E7B1EA4F6B6A8AF35158CD91F89BB_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, L_0, (RuntimeObject*)__this, 0);
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_3);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_3, L_2, (RuntimeObject*)__this, 1);
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_5);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_5, L_4, (RuntimeObject*)__this, 2);
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_6 = (ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04*)__this->___parent_5;
		NullCheck(L_6);
		RuntimeObject* L_7 = (RuntimeObject*)L_6->___source1_1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_7);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 12), L_7, (RuntimeObject*)L_8);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_10 = (ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04*)__this->___parent_5;
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->___source2_2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_12 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 15), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_14 = (ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04*)__this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->___source3_3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_16 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		// return StableCompositeDisposable.Create(s1, s2, s3);
		RuntimeObject* L_18 = V_0;
		RuntimeObject* L_19 = V_1;
		RuntimeObject* L_20;
		L_20 = StableCompositeDisposable_Create_m69159E99C420E2BBE360CC54400E67127D36E724(L_9, L_18, L_19, NULL);
		return (RuntimeObject*)L_20;
	}
}
// TR UniRx.Operators.ZipLatestObservable`4/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_mF9161DD9D83B75CBB635337E660D12BDAC1EF79C_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_tB80E0E41DA9B6D2EFEA0EB7C6BDF5862659FB7A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 23));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tB80E0E41DA9B6D2EFEA0EB7C6BDF5862659FB7A1);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_tAFA0F8BC68C2A0DFFD0DC32FC40119315546D51A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 25));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tAFA0F8BC68C2A0DFFD0DC32FC40119315546D51A);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_tF1EEC2C076EFCCDF192B1BEBC72A4E9FA431847D = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 27));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tF1EEC2C076EFCCDF192B1BEBC72A4E9FA431847D);
	// TR
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F);
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value);
		ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* L_0 = (ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* L_1 = (ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB*)L_0->___resultSelector_4;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 22)), il2cpp_rgctx_method(method->klass->rgctx_data, 22), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 24)), il2cpp_rgctx_method(method->klass->rgctx_data, 24), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 26)), il2cpp_rgctx_method(method->klass->rgctx_data, 26), L_6, (Il2CppFullySharedGenericAny*)L_7);
		NullCheck(L_1);
		InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 28)), il2cpp_rgctx_method(method->klass->rgctx_data, 28), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 23)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 25)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 27)) ? L_7: *(void**)L_7), (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F);
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m790A3F7F781B29CFC77441E8CA731133EBF5AEAD_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 29));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 29)) ? ___value0 : &___value0), SizeOf_TR_t5B37D8E9647D8484BC430D200F6AC70091EDCF3F);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 29)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mF3FE52FE533135D4F66D9BC42A7AA1CFAB981C8E_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`4/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m0712E528DEC8F9BC197EA261261DC2926CC29808_gshared (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`5<T1,T2,T3,T4,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mC4C2562100A9463B45084C374068DA2541932C9B_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, int32_t ___length0, ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		InvokerActionInvoker3< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3);
		// this.parent = parent;
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m6FBAE92EB0DF19572611670A3EE7149379D6FC8C_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, L_0, (RuntimeObject*)__this, 0);
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_3);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_3, L_2, (RuntimeObject*)__this, 1);
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_5);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_5, L_4, (RuntimeObject*)__this, 2);
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_7 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		NullCheck(L_7);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, L_6, (RuntimeObject*)__this, 3);
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_8 = (ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07*)__this->___parent_5;
		NullCheck(L_8);
		RuntimeObject* L_9 = (RuntimeObject*)L_8->___source1_1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_10 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 14), L_9, (RuntimeObject*)L_10);
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_12 = (ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07*)__this->___parent_5;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___source2_2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_14 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 17), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_16 = (ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07*)__this->___parent_5;
		NullCheck(L_16);
		RuntimeObject* L_17 = (RuntimeObject*)L_16->___source3_3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_18 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_20 = (ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07*)__this->___parent_5;
		NullCheck(L_20);
		RuntimeObject* L_21 = (RuntimeObject*)L_20->___source4_4;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_22 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c4_10;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4);
		RuntimeObject* L_24 = V_0;
		RuntimeObject* L_25 = V_1;
		RuntimeObject* L_26 = V_2;
		RuntimeObject* L_27;
		L_27 = StableCompositeDisposable_Create_mEF2811969D2F81FD06130ED8A4A48D26E42F9B94(L_11, L_24, L_25, L_26, NULL);
		return (RuntimeObject*)L_27;
	}
}
// TR UniRx.Operators.ZipLatestObservable`5/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_m7C3C0E3F33062E24227B0D127D94B0AF8B771B30_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_tD0BC57540214E1BA98A0411B3291398166739270 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 28));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tD0BC57540214E1BA98A0411B3291398166739270);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_t06695090DD8EA4D34356BCA43EB090609AA35815 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 30));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t06695090DD8EA4D34356BCA43EB090609AA35815);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_t3AFDB6E4BCC7AD03BFCBCE1D57516FB4FEE92184 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 32));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t3AFDB6E4BCC7AD03BFCBCE1D57516FB4FEE92184);
	// T4
	// sizeof(T4)
	const uint32_t SizeOf_T4_t9CBA4E8E8A94B6E36D16D20F84D4804CBB1AE97B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 34));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t9CBA4E8E8A94B6E36D16D20F84D4804CBB1AE97B);
	// TR
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33);
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value);
		ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* L_0 = (ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* L_1 = (ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183*)L_0->___resultSelector_5;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 27)), il2cpp_rgctx_method(method->klass->rgctx_data, 27), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 29)), il2cpp_rgctx_method(method->klass->rgctx_data, 29), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 31)), il2cpp_rgctx_method(method->klass->rgctx_data, 31), L_6, (Il2CppFullySharedGenericAny*)L_7);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c4_10;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 33)), il2cpp_rgctx_method(method->klass->rgctx_data, 33), L_8, (Il2CppFullySharedGenericAny*)L_9);
		NullCheck(L_1);
		InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 35)), il2cpp_rgctx_method(method->klass->rgctx_data, 35), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 28)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 30)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 32)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 34)) ? L_9: *(void**)L_9), (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy(il2cppRetVal, L_10, SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33);
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m9287A717744CFE49EED08A1A5C44ADE222592F1C_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 36));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 36)) ? ___value0 : &___value0), SizeOf_TR_t590E082F0585394F0FFE4B429D353EF1DC3B5F33);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 36)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mF22D69F3CB91287380585E24B541DD5D1C71A2B5_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`5/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mFF798A15A426A2B06D662B656C17EFEF2A3482AC_gshared (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`6<T1,T2,T3,T4,T5,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_m7E70071FE496F45237EA0CA45FD35087D433BFFA_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, int32_t ___length0, ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		InvokerActionInvoker3< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3);
		// this.parent = parent;
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m2F92D595A3EFB6F4F22B0028EF5131B2F28A7CCA_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, L_0, (RuntimeObject*)__this, 0);
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_3);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_3, L_2, (RuntimeObject*)__this, 1);
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_5);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_5, L_4, (RuntimeObject*)__this, 2);
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_7 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		NullCheck(L_7);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, L_6, (RuntimeObject*)__this, 3);
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_9 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_9);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_9, L_8, (RuntimeObject*)__this, 4);
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_10 = (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2*)__this->___parent_5;
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->___source1_1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_12 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_11);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 16), L_11, (RuntimeObject*)L_12);
		V_0 = L_13;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_14 = (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2*)__this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->___source2_2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_16 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 19), L_15, (RuntimeObject*)L_16);
		V_1 = L_17;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_18 = (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2*)__this->___parent_5;
		NullCheck(L_18);
		RuntimeObject* L_19 = (RuntimeObject*)L_18->___source3_3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_20 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 22), L_19, (RuntimeObject*)L_20);
		V_2 = L_21;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_22 = (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2*)__this->___parent_5;
		NullCheck(L_22);
		RuntimeObject* L_23 = (RuntimeObject*)L_22->___source4_4;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_24 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c4_10;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 25), L_23, (RuntimeObject*)L_24);
		V_3 = L_25;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_26 = (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2*)__this->___parent_5;
		NullCheck(L_26);
		RuntimeObject* L_27 = (RuntimeObject*)L_26->___source5_5;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_28 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c5_11;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 28), L_27, (RuntimeObject*)L_28);
		V_4 = L_29;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_30 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)5);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_31 = L_30;
		RuntimeObject* L_32 = V_0;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_32);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_33 = L_31;
		RuntimeObject* L_34 = V_1;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_34);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_35 = L_33;
		RuntimeObject* L_36 = V_2;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_35;
		RuntimeObject* L_38 = V_3;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_4;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_40);
		RuntimeObject* L_41;
		L_41 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_39, NULL);
		return (RuntimeObject*)L_41;
	}
}
// TR UniRx.Operators.ZipLatestObservable`6/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_m45A2AE83056F5FC72638347DBC9D7042C17A0A17_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_t1B0B5C9EB86DFDF9109EA3263F4D3147AE2903B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 33));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t1B0B5C9EB86DFDF9109EA3263F4D3147AE2903B4);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_tBA2779A4AB2AAAE2BFF7D87DBA61F4BE08440718 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 35));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tBA2779A4AB2AAAE2BFF7D87DBA61F4BE08440718);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_t84BA771846D080B83DC336C2FD486F815BBCD54E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 37));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t84BA771846D080B83DC336C2FD486F815BBCD54E);
	// T4
	// sizeof(T4)
	const uint32_t SizeOf_T4_t93D60DA93E52215F9CD3763CCAF24640588BFAEA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 39));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t93D60DA93E52215F9CD3763CCAF24640588BFAEA);
	// T5
	// sizeof(T5)
	const uint32_t SizeOf_T5_tE30F6358E6F6960C5D005F26E5226BE1A88FD104 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 41));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_tE30F6358E6F6960C5D005F26E5226BE1A88FD104);
	// TR
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682);
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value);
		ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* L_0 = (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* L_1 = (ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69*)L_0->___resultSelector_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 32)), il2cpp_rgctx_method(method->klass->rgctx_data, 32), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 34)), il2cpp_rgctx_method(method->klass->rgctx_data, 34), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 36)), il2cpp_rgctx_method(method->klass->rgctx_data, 36), L_6, (Il2CppFullySharedGenericAny*)L_7);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c4_10;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 38)), il2cpp_rgctx_method(method->klass->rgctx_data, 38), L_8, (Il2CppFullySharedGenericAny*)L_9);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_10 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c5_11;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 40)), il2cpp_rgctx_method(method->klass->rgctx_data, 40), L_10, (Il2CppFullySharedGenericAny*)L_11);
		NullCheck(L_1);
		InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 33)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 35)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 37)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 39)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 41)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, L_12, SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682);
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m46E248CB0343144DABA33DD882F8FFDC29A85A47_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 43)) ? ___value0 : &___value0), SizeOf_TR_t30FD969AA0A2A2B632D3CEF7FC3D94F81C759682);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 43)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_m4DDF749F2A1809EA24E36B4EE29265DF38F0920F_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`6/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mD56F7C08C730953364A82D557EC6A24908E54BDB_gshared (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`7<T1,T2,T3,T4,T5,T6,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mED26DF047B41E2FF856B9F65B512B457049D20BC_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, int32_t ___length0, ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		InvokerActionInvoker3< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3);
		// this.parent = parent;
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m8FC1133BFD117C7125C4897D0E3AE4113A9DF549_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, L_0, (RuntimeObject*)__this, 0);
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_3);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_3, L_2, (RuntimeObject*)__this, 1);
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_5);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_5, L_4, (RuntimeObject*)__this, 2);
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_7 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		NullCheck(L_7);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, L_6, (RuntimeObject*)__this, 3);
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_9 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_9);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_9, L_8, (RuntimeObject*)__this, 4);
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject* L_10 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_11 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_11);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_11, L_10, (RuntimeObject*)__this, 5);
		__this->___c6_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6_12), (void*)L_11);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_12 = (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576*)__this->___parent_5;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___source1_1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_14 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_13);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 18), L_13, (RuntimeObject*)L_14);
		V_0 = L_15;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_16 = (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576*)__this->___parent_5;
		NullCheck(L_16);
		RuntimeObject* L_17 = (RuntimeObject*)L_16->___source2_2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_18 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 21), L_17, (RuntimeObject*)L_18);
		V_1 = L_19;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_20 = (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576*)__this->___parent_5;
		NullCheck(L_20);
		RuntimeObject* L_21 = (RuntimeObject*)L_20->___source3_3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_22 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 24), L_21, (RuntimeObject*)L_22);
		V_2 = L_23;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_24 = (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576*)__this->___parent_5;
		NullCheck(L_24);
		RuntimeObject* L_25 = (RuntimeObject*)L_24->___source4_4;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_26 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c4_10;
		NullCheck(L_25);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 27), L_25, (RuntimeObject*)L_26);
		V_3 = L_27;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_28 = (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576*)__this->___parent_5;
		NullCheck(L_28);
		RuntimeObject* L_29 = (RuntimeObject*)L_28->___source5_5;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_30 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c5_11;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 30), L_29, (RuntimeObject*)L_30);
		V_4 = L_31;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_32 = (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576*)__this->___parent_5;
		NullCheck(L_32);
		RuntimeObject* L_33 = (RuntimeObject*)L_32->___source6_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_34 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c6_12;
		NullCheck(L_33);
		RuntimeObject* L_35;
		L_35 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 33), L_33, (RuntimeObject*)L_34);
		V_5 = L_35;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_36 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)6);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_37 = L_36;
		RuntimeObject* L_38 = V_0;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_39 = L_37;
		RuntimeObject* L_40 = V_1;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_40);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_40);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_41 = L_39;
		RuntimeObject* L_42 = V_2;
		NullCheck(L_41);
		ArrayElementTypeCheck (L_41, L_42);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_42);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_41;
		RuntimeObject* L_44 = V_3;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_4;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_5;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_48);
		RuntimeObject* L_49;
		L_49 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_47, NULL);
		return (RuntimeObject*)L_49;
	}
}
// TR UniRx.Operators.ZipLatestObservable`7/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_m45E2BDF0FCBC67CE6A8B2DB2FAED4E97B73CAB2B_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 50));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_tE616530F091739B9082842CA795A20B16FBED5B2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 38));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_tE616530F091739B9082842CA795A20B16FBED5B2);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_tF769938C858855332D2D19B8CDD3BF2724F9D369 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 40));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_tF769938C858855332D2D19B8CDD3BF2724F9D369);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_t590F97488A69E302E555DDBFF98D5612C6D2E422 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 42));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_t590F97488A69E302E555DDBFF98D5612C6D2E422);
	// T4
	// sizeof(T4)
	const uint32_t SizeOf_T4_tE90C6EC3048FE5C7434CC6F4A0B845F27A071FF7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 44));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_tE90C6EC3048FE5C7434CC6F4A0B845F27A071FF7);
	// T5
	// sizeof(T5)
	const uint32_t SizeOf_T5_t5AFF452DF0F31FC423FEC376E91341D167FA10F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 46));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t5AFF452DF0F31FC423FEC376E91341D167FA10F7);
	// T6
	// sizeof(T6)
	const uint32_t SizeOf_T6_t70C23C2088EA6108A9FE6F26FBB704C47A241012 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 48));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_t70C23C2088EA6108A9FE6F26FBB704C47A241012);
	// TR
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A);
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value);
		ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* L_0 = (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* L_1 = (ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6*)L_0->___resultSelector_7;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 37)), il2cpp_rgctx_method(method->klass->rgctx_data, 37), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 39)), il2cpp_rgctx_method(method->klass->rgctx_data, 39), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 41)), il2cpp_rgctx_method(method->klass->rgctx_data, 41), L_6, (Il2CppFullySharedGenericAny*)L_7);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c4_10;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 43)), il2cpp_rgctx_method(method->klass->rgctx_data, 43), L_8, (Il2CppFullySharedGenericAny*)L_9);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_10 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c5_11;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 45)), il2cpp_rgctx_method(method->klass->rgctx_data, 45), L_10, (Il2CppFullySharedGenericAny*)L_11);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_12 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c6_12;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 47)), il2cpp_rgctx_method(method->klass->rgctx_data, 47), L_12, (Il2CppFullySharedGenericAny*)L_13);
		NullCheck(L_1);
		InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 49)), il2cpp_rgctx_method(method->klass->rgctx_data, 49), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 38)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 40)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 42)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 44)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 46)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 48)) ? L_13: *(void**)L_13), (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, L_14, SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A);
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m751819E543BB36F5CBD4FF5C088367DA75490AB0_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 50));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 50)) ? ___value0 : &___value0), SizeOf_TR_tB514854FD5B19933EDCF965D6DBDECF68A9CD14A);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 50)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mE29A052D446C3CE38437A55A6EF4BE2BC7E364AE_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`7/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_mA297A51DBCD12E1AB5B0EA374A1672023756BFE0_gshared (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 55)), il2cpp_rgctx_method(method->klass->rgctx_data, 55), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32,UniRx.Operators.ZipLatestObservable`8<T1,T2,T3,T4,T5,T6,T7,TR>,System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest__ctor_mC9EC54B2F3D9BA69798BF31FBF0D230F45FD96EC_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, int32_t ___length0, ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* ___parent1, RuntimeObject* ___observer2, RuntimeObject* ___cancel3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_6), (void*)L_0);
		// : base(length, observer, cancel)
		int32_t L_1 = ___length0;
		RuntimeObject* L_2 = ___observer2;
		RuntimeObject* L_3 = ___cancel3;
		InvokerActionInvoker3< int32_t, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)), il2cpp_rgctx_method(method->klass->rgctx_data, 2), (NthZipLatestObserverBase_1_tBCB10E70529E0044C39B8693B82D7F6BBE898857*)__this, L_1, L_2, L_3);
		// this.parent = parent;
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_4 = ___parent1;
		__this->___parent_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_5), (void*)L_4);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatest_Run_m7A50DAD9AFFD8EA98B8A84CDD1A633EED07773B6_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// c1 = new ZipLatestObserver<T1>(gate, this, 0);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_1 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
		NullCheck(L_1);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_1, L_0, (RuntimeObject*)__this, 0);
		__this->___c1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c1_7), (void*)L_1);
		// c2 = new ZipLatestObserver<T2>(gate, this, 1);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_3 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 8));
		NullCheck(L_3);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_3, L_2, (RuntimeObject*)__this, 1);
		__this->___c2_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c2_8), (void*)L_3);
		// c3 = new ZipLatestObserver<T3>(gate, this, 2);
		RuntimeObject* L_4 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_5 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		NullCheck(L_5);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_5, L_4, (RuntimeObject*)__this, 2);
		__this->___c3_9 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c3_9), (void*)L_5);
		// c4 = new ZipLatestObserver<T4>(gate, this, 3);
		RuntimeObject* L_6 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_7 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 12));
		NullCheck(L_7);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, L_6, (RuntimeObject*)__this, 3);
		__this->___c4_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c4_10), (void*)L_7);
		// c5 = new ZipLatestObserver<T5>(gate, this, 4);
		RuntimeObject* L_8 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_9 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		NullCheck(L_9);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_9, L_8, (RuntimeObject*)__this, 4);
		__this->___c5_11 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c5_11), (void*)L_9);
		// c6 = new ZipLatestObserver<T6>(gate, this, 5);
		RuntimeObject* L_10 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_11 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 16));
		NullCheck(L_11);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_11, L_10, (RuntimeObject*)__this, 5);
		__this->___c6_12 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c6_12), (void*)L_11);
		// c7 = new ZipLatestObserver<T7>(gate, this, 6);
		RuntimeObject* L_12 = (RuntimeObject*)__this->___gate_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_13 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		NullCheck(L_13);
		InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_13, L_12, (RuntimeObject*)__this, 6);
		__this->___c7_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___c7_13), (void*)L_13);
		// var s1 = parent.source1.Subscribe(c1);
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_14 = (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*)__this->___parent_5;
		NullCheck(L_14);
		RuntimeObject* L_15 = (RuntimeObject*)L_14->___source1_1;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_16 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 20), L_15, (RuntimeObject*)L_16);
		V_0 = L_17;
		// var s2 = parent.source2.Subscribe(c2);
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_18 = (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*)__this->___parent_5;
		NullCheck(L_18);
		RuntimeObject* L_19 = (RuntimeObject*)L_18->___source2_2;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_20 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 23), L_19, (RuntimeObject*)L_20);
		V_1 = L_21;
		// var s3 = parent.source3.Subscribe(c3);
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_22 = (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*)__this->___parent_5;
		NullCheck(L_22);
		RuntimeObject* L_23 = (RuntimeObject*)L_22->___source3_3;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_24 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 26), L_23, (RuntimeObject*)L_24);
		V_2 = L_25;
		// var s4 = parent.source4.Subscribe(c4);
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_26 = (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*)__this->___parent_5;
		NullCheck(L_26);
		RuntimeObject* L_27 = (RuntimeObject*)L_26->___source4_4;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_28 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c4_10;
		NullCheck(L_27);
		RuntimeObject* L_29;
		L_29 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 29), L_27, (RuntimeObject*)L_28);
		V_3 = L_29;
		// var s5 = parent.source5.Subscribe(c5);
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_30 = (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*)__this->___parent_5;
		NullCheck(L_30);
		RuntimeObject* L_31 = (RuntimeObject*)L_30->___source5_5;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_32 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c5_11;
		NullCheck(L_31);
		RuntimeObject* L_33;
		L_33 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 32), L_31, (RuntimeObject*)L_32);
		V_4 = L_33;
		// var s6 = parent.source6.Subscribe(c6);
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_34 = (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*)__this->___parent_5;
		NullCheck(L_34);
		RuntimeObject* L_35 = (RuntimeObject*)L_34->___source6_6;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_36 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c6_12;
		NullCheck(L_35);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 35), L_35, (RuntimeObject*)L_36);
		V_5 = L_37;
		// var s7 = parent.source7.Subscribe(c7);
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_38 = (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*)__this->___parent_5;
		NullCheck(L_38);
		RuntimeObject* L_39 = (RuntimeObject*)L_38->___source7_7;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_40 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c7_13;
		NullCheck(L_39);
		RuntimeObject* L_41;
		L_41 = InterfaceFuncInvoker1Invoker< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 38), L_39, (RuntimeObject*)L_40);
		V_6 = L_41;
		// return StableCompositeDisposable.Create(s1, s2, s3, s4, s5, s6, s7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_42 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)7);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_43 = L_42;
		RuntimeObject* L_44 = V_0;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_44);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_44);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_45 = L_43;
		RuntimeObject* L_46 = V_1;
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_46);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_47 = L_45;
		RuntimeObject* L_48 = V_2;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_48);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_48);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_49 = L_47;
		RuntimeObject* L_50 = V_3;
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_50);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_50);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_51 = L_49;
		RuntimeObject* L_52 = V_4;
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_52);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_52);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_53 = L_51;
		RuntimeObject* L_54 = V_5;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_54);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_55 = L_53;
		RuntimeObject* L_56 = V_6;
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_56);
		RuntimeObject* L_57;
		L_57 = StableCompositeDisposable_Create_mFC6500B00F009673E99112947958DF4058759242(L_55, NULL);
		return (RuntimeObject*)L_57;
	}
}
// TR UniRx.Operators.ZipLatestObservable`8/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_GetResult_m19E9FA8AD4DB87800B1E6DFD51FC968E984CD42C_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 57));
	// T1
	// sizeof(T1)
	const uint32_t SizeOf_T1_t5BCD11EAF9F07F4C2E2C633A319DB369E8B1DF32 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 43));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T1_t5BCD11EAF9F07F4C2E2C633A319DB369E8B1DF32);
	// T2
	// sizeof(T2)
	const uint32_t SizeOf_T2_t7ED8B3870FE5E20136ABE1B7C9A3E5C22384A7A9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 45));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T2_t7ED8B3870FE5E20136ABE1B7C9A3E5C22384A7A9);
	// T3
	// sizeof(T3)
	const uint32_t SizeOf_T3_tFD90455AB0DD8AF2167A1CBFD62514FEF02991B5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 47));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T3_tFD90455AB0DD8AF2167A1CBFD62514FEF02991B5);
	// T4
	// sizeof(T4)
	const uint32_t SizeOf_T4_t96D68966B3A1383483D137865C1231910913D197 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 49));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T4_t96D68966B3A1383483D137865C1231910913D197);
	// T5
	// sizeof(T5)
	const uint32_t SizeOf_T5_t449B1CA4D9DCF8B3E93DCF684D7D3C907FA39F25 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 51));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T5_t449B1CA4D9DCF8B3E93DCF684D7D3C907FA39F25);
	// T6
	// sizeof(T6)
	const uint32_t SizeOf_T6_tE4D65522AF4C74F5E5CBF40D51B4E6A9CB61271A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 53));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_T6_tE4D65522AF4C74F5E5CBF40D51B4E6A9CB61271A);
	// T7
	// sizeof(T7)
	const uint32_t SizeOf_T7_t4897B3293F07028878D136A1A7BE422D0CD9C695 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 55));
	const Il2CppFullySharedGenericAny L_15 = alloca(SizeOf_T7_t4897B3293F07028878D136A1A7BE422D0CD9C695);
	// TR
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7);
	{
		// return parent.resultSelector(c1.Value, c2.Value, c3.Value, c4.Value, c5.Value, c6.Value, c7.Value);
		ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* L_0 = (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*)__this->___parent_5;
		NullCheck(L_0);
		ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* L_1 = (ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795*)L_0->___resultSelector_8;
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_2 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c1_7;
		NullCheck(L_2);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 42)), il2cpp_rgctx_method(method->klass->rgctx_data, 42), L_2, (Il2CppFullySharedGenericAny*)L_3);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_4 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c2_8;
		NullCheck(L_4);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 44)), il2cpp_rgctx_method(method->klass->rgctx_data, 44), L_4, (Il2CppFullySharedGenericAny*)L_5);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_6 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c3_9;
		NullCheck(L_6);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 46)), il2cpp_rgctx_method(method->klass->rgctx_data, 46), L_6, (Il2CppFullySharedGenericAny*)L_7);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_8 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c4_10;
		NullCheck(L_8);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 48)), il2cpp_rgctx_method(method->klass->rgctx_data, 48), L_8, (Il2CppFullySharedGenericAny*)L_9);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_10 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c5_11;
		NullCheck(L_10);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 50)), il2cpp_rgctx_method(method->klass->rgctx_data, 50), L_10, (Il2CppFullySharedGenericAny*)L_11);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_12 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c6_12;
		NullCheck(L_12);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 52)), il2cpp_rgctx_method(method->klass->rgctx_data, 52), L_12, (Il2CppFullySharedGenericAny*)L_13);
		ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* L_14 = (ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5*)__this->___c7_13;
		NullCheck(L_14);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 54)), il2cpp_rgctx_method(method->klass->rgctx_data, 54), L_14, (Il2CppFullySharedGenericAny*)L_15);
		NullCheck(L_1);
		InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 56)), il2cpp_rgctx_method(method->klass->rgctx_data, 56), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 43)) ? L_3: *(void**)L_3), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 45)) ? L_5: *(void**)L_5), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 47)) ? L_7: *(void**)L_7), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 49)) ? L_9: *(void**)L_9), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 51)) ? L_11: *(void**)L_11), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 53)) ? L_13: *(void**)L_13), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 55)) ? L_15: *(void**)L_15), (Il2CppFullySharedGenericAny*)L_16);
		il2cpp_codegen_memcpy(il2cppRetVal, L_16, SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7);
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(TR)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnNext_m878B70C00E0D089E93BDAA8A1575D6815E984C13_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(TR)
	const uint32_t SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 57));
	// TR
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7);
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 57)) ? ___value0 : &___value0), SizeOf_TR_t6799EDEA6F6C24EC0EDBAC35DE417647368508F7);
		NullCheck(L_0);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny >::Invoke(0 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 57)) ? L_1: *(void**)L_1));
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnError_mE07D2C5A0B6D2E14695DF1B8545284E97962E50F_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0010:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)), il2cpp_rgctx_method(method->klass->rgctx_data, 62), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1Invoker< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0, L_1);
			// try { observer.OnError(error); }
			goto IL_0017;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`8/ZipLatest<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatest_OnCompleted_m1916EA2ECA1D6B56574E24C133BD46A9231E65AA_gshared (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000f:
			{// begin finally (depth: 1)
				// finally { Dispose(); }
				NullCheck((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				InvokerActionInvoker0::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 62)), il2cpp_rgctx_method(method->klass->rgctx_data, 62), (OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this);
				// finally { Dispose(); }
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); }
			RuntimeObject* L_0 = (RuntimeObject*)((OperatorObserverBase_2_tB7D10DE201033653F9FAA9EC71ECBD88D2901B37*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0Invoker::Invoke(2 /* System.Void System.IObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted() */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_0);
			// try { observer.OnCompleted(); }
			goto IL_0016;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0016:
	{
		// }
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
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_Multicast(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* currentDelegate = reinterpret_cast<ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenStaticInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_ClosedStaticInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_ClosedInstInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenInstInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenVirtualInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenInterfaceInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenGenericVirtualInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, il2cppRetVal);
}
void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenGenericInterfaceInvoker(ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker3Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipLatestFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4__ctor_m4741F2AF524CFF0F4D12A33D06D71D9A5E99C67D_gshared (ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4_Invoke_m63A4FE7B266B967E9F569AA130A480495FF2AE61_gshared (ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_4_BeginInvoke_m4645C98B7F87CB6EA50C5091DFDBC2FCBA6E4DBC_gshared (ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback3, RuntimeObject* ___object4, const RuntimeMethod* method) 
{
	void *__d_args[4] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// TR UniRx.Operators.ZipLatestFunc`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_4_EndInvoke_m0E1DF8C5F56046D8CF54CBE9A58EABDB2A13021B_gshared (ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_Multicast(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* currentDelegate = reinterpret_cast<ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenStaticInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_ClosedStaticInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_ClosedInstInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenInstInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker4< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenVirtualInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenInterfaceInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenGenericVirtualInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenGenericInterfaceInvoker(ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker4Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipLatestFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5__ctor_mC6BC33C314FBB3D24524796BA7A671F419802297_gshared (ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 3;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5_Invoke_mFE2CA87CF8AF4BF7A5FE9DC991377C25B1272F12_gshared (ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,T4,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_5_BeginInvoke_m04878F441E952F963FEA3CB201482906C69A22F0_gshared (ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback4, RuntimeObject* ___object5, const RuntimeMethod* method) 
{
	void *__d_args[5] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	RuntimeClass* ___arg43_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___arg43_klass) ? Box(___arg43_klass, ___arg43) : (void*)___arg43);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// TR UniRx.Operators.ZipLatestFunc`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_5_EndInvoke_mE9B71C166E5FD0D4C5EA6048C80BB1E11C4AA25D_gshared (ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_Multicast(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* currentDelegate = reinterpret_cast<ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenStaticInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_ClosedStaticInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_ClosedInstInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenInstInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker5< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenVirtualInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenInterfaceInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenGenericVirtualInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenGenericInterfaceInvoker(ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker5Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipLatestFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6__ctor_m91E175D3A31577392C0976E6721861C42A5D206B_gshared (ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 4;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6_Invoke_m132C1426C0C5418273914DAB827DEF13B2DDEB73_gshared (ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,T4,T5,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_6_BeginInvoke_m4BCF84FCC19B37ABB41D80C1387B552710669038_gshared (ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback5, RuntimeObject* ___object6, const RuntimeMethod* method) 
{
	void *__d_args[6] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	RuntimeClass* ___arg43_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___arg43_klass) ? Box(___arg43_klass, ___arg43) : (void*)___arg43);
	RuntimeClass* ___arg54_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___arg54_klass) ? Box(___arg54_klass, ___arg54) : (void*)___arg54);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback5, (RuntimeObject*)___object6);
}
// TR UniRx.Operators.ZipLatestFunc`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_6_EndInvoke_mEB6C2B876473DFA31D279A1EB41D639A6E14A503_gshared (ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_Multicast(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* currentDelegate = reinterpret_cast<ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenStaticInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_ClosedStaticInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_ClosedInstInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenInstInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker6< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenVirtualInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenInterfaceInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenGenericVirtualInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenGenericInterfaceInvoker(ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker6Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipLatestFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7__ctor_m3EA022BE924327746D1F1C2CC0F380DC5E2E1934_gshared (ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 5;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3,T4,T5,T6)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7_Invoke_m379AB6C3273653B33682374D62C10C6D3CDFEAB4_gshared (ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,T4,T5,T6,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_7_BeginInvoke_m09C29D72B1042B9A97F4818007BA07D3D3F1C8B5_gshared (ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback6, RuntimeObject* ___object7, const RuntimeMethod* method) 
{
	void *__d_args[7] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	RuntimeClass* ___arg43_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___arg43_klass) ? Box(___arg43_klass, ___arg43) : (void*)___arg43);
	RuntimeClass* ___arg54_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___arg54_klass) ? Box(___arg54_klass, ___arg54) : (void*)___arg54);
	RuntimeClass* ___arg65_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 5));
	__d_args[5] = (il2cpp_codegen_class_is_value_type(___arg65_klass) ? Box(___arg65_klass, ___arg65) : (void*)___arg65);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback6, (RuntimeObject*)___object7);
}
// TR UniRx.Operators.ZipLatestFunc`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_7_EndInvoke_m58DDA221CF42FAAFC4E087F47926721D02F0B47A_gshared (ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_Multicast(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* currentDelegate = reinterpret_cast<ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenStaticInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_ClosedStaticInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker9< RuntimeObject*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_ClosedInstInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	InvokerActionInvoker8< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, __this->___m_target_2, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenInstInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InvokerActionInvoker7< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(__this->___method_ptr_0, method, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenVirtualInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	VirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenInterfaceInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	InterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenGenericVirtualInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericVirtualActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenGenericInterfaceInvoker(ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	NullCheck(___arg10);
	GenericInterfaceActionInvoker7Invoker< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(method, (RuntimeObject*)___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal);
}
// System.Void UniRx.Operators.ZipLatestFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8__ctor_m4AF3D60C1ED4C09161D1AEEEE124477C8BE527E3_gshared (ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 7;
		if (isOpen)
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenStaticInvoker;
		else
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 6;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenGenericInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenGenericVirtualInvoker;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenInterfaceInvoker;
					else
						__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenVirtualInvoker;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_OpenInstInvoker;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_ClosedInstInvoker;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_Multicast;
}
// TR UniRx.Operators.ZipLatestFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2,T3,T4,T5,T6,T7)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8_Invoke_mAEA6579410482CA5D6E7F81A41ED114E4047654F_gshared (ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, ___arg32, ___arg43, ___arg54, ___arg65, ___arg76, il2cppRetVal, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UniRx.Operators.ZipLatestFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::BeginInvoke(T1,T2,T3,T4,T5,T6,T7,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestFunc_8_BeginInvoke_m7A03A1A7B306DAF43A98734FD05AA7FD3CF48602_gshared (ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg10, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg21, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg32, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg43, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg54, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg65, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___arg76, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback7, RuntimeObject* ___object8, const RuntimeMethod* method) 
{
	void *__d_args[8] = {0};
	RuntimeClass* ___arg10_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 0));
	__d_args[0] = (il2cpp_codegen_class_is_value_type(___arg10_klass) ? Box(___arg10_klass, ___arg10) : (void*)___arg10);
	RuntimeClass* ___arg21_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 1));
	__d_args[1] = (il2cpp_codegen_class_is_value_type(___arg21_klass) ? Box(___arg21_klass, ___arg21) : (void*)___arg21);
	RuntimeClass* ___arg32_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 2));
	__d_args[2] = (il2cpp_codegen_class_is_value_type(___arg32_klass) ? Box(___arg32_klass, ___arg32) : (void*)___arg32);
	RuntimeClass* ___arg43_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 3));
	__d_args[3] = (il2cpp_codegen_class_is_value_type(___arg43_klass) ? Box(___arg43_klass, ___arg43) : (void*)___arg43);
	RuntimeClass* ___arg54_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 4));
	__d_args[4] = (il2cpp_codegen_class_is_value_type(___arg54_klass) ? Box(___arg54_klass, ___arg54) : (void*)___arg54);
	RuntimeClass* ___arg65_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 5));
	__d_args[5] = (il2cpp_codegen_class_is_value_type(___arg65_klass) ? Box(___arg65_klass, ___arg65) : (void*)___arg65);
	RuntimeClass* ___arg76_klass = il2cpp_codegen_class_from_type(il2cpp_codegen_method_parameter_type((MethodInfo*)__this->___method_3, 6));
	__d_args[6] = (il2cpp_codegen_class_is_value_type(___arg76_klass) ? Box(___arg76_klass, ___arg76) : (void*)___arg76);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback7, (RuntimeObject*)___object8);
}
// TR UniRx.Operators.ZipLatestFunc`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestFunc_8_EndInvoke_mFCBEB6C12B334B46FE0605C2F98646B03E4E1CEC_gshared (ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* __this, RuntimeObject* ___result0, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	RuntimeClass* returnType = il2cpp_codegen_class_from_type(il2cpp_codegen_method_return_type((MethodInfo*)__this->___method_3));
	uint32_t returnTypeSize = il2cpp_codegen_sizeof(returnType);
	void* unboxStorage = alloca(returnTypeSize);
	void* unboxed = UnBox_Any((RuntimeObject*)__result, returnType, unboxStorage);
	il2cpp_codegen_memcpy(il2cppRetVal, unboxed, returnTypeSize);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.ZipLatestObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_1__ctor_mAE5DAEB7CF55FF2EDF366D8DFF857F173DDE3850_gshared (ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* __this, IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* ___sources0, const RuntimeMethod* method) 
{
	{
		// : base(true)
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41*)__this, (bool)1);
		// this.sources = sources;
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_0 = ___sources0;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_1_SubscribeCore_m9C9C3A4DAEC8FA5613491CCFBA63112A22E1037E_gshared (ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_2 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		InvokerActionInvoker3< ZipLatestObservable_1_t2A28BD239FCAB16DD9001B4A9F9D9F151D9CD77C*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<TLeft>,System.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_3__ctor_m233767A940AB14809669BCE4B5A69EFE6FB7156D_gshared (ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___selector2, const RuntimeMethod* method) 
{
	ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* G_B2_0 = NULL;
	ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___right1;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B3_0 = ((int32_t)(L_3));
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
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B3_1, (bool)G_B3_0);
		// this.left = left;
		RuntimeObject* L_4 = ___left0;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___right1;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_6 = ___selector2;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_3_SubscribeCore_m3AF7A0B4FC70420595146D1487FCABB41E82C7EA_gshared (ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527* L_2 = (ZipLatest_tF5D881A4A019E0AA2E0B9F44AFD82355C5D55527*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		InvokerActionInvoker3< ZipLatestObservable_3_t9FA0E9534ABC2E70A7A414F862B3DA4AAFEBF091*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,UniRx.Operators.ZipLatestFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_4__ctor_mE2E8ECA1B847463161F60B608B89D42A1C5EB97F_gshared (ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* ___resultSelector3, const RuntimeMethod* method) 
{
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* G_B3_0 = NULL;
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* G_B1_0 = NULL;
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B4_1, (bool)G_B4_0);
		// this.source1 = source1;
		RuntimeObject* L_6 = ___source10;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___source21;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___source32;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_4_t2FD981F35CF9112A8161F583752BFB379B602DBB* L_9 = ___resultSelector3;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_4_SubscribeCore_mD8C393CF4FA50C7505800439B50C6C70BCCBDE9A_gshared (ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(3, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957* L_2 = (ZipLatest_tB06DDA82946EADE4929C510258EAC9C8325DC957*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_2);
		InvokerActionInvoker4< int32_t, ZipLatestObservable_4_t95B940DAFC395C50E8DAE3A8A2F60952CDA82C04*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_2, 3, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,UniRx.Operators.ZipLatestFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_5__ctor_m12B26273DF768B5CCD6FECAB51C3B4FCDF798046_gshared (ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* ___resultSelector4, const RuntimeMethod* method) 
{
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B4_0 = NULL;
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B1_0 = NULL;
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B2_0 = NULL;
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, L_6);
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B5_1, (bool)G_B5_0);
		// this.source1 = source1;
		RuntimeObject* L_8 = ___source10;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___source21;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___source32;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___source43;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_5_tA408937D337B90E99EB6B4DD4E72F5F824A86183* L_12 = ___resultSelector4;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_5_SubscribeCore_mB49542BE31A5FC28A2A5CDB35B969FDEFF69A052_gshared (ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(4, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D* L_2 = (ZipLatest_t9521336EDAC2070DB0A15173249136C30A6EEE5D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_2);
		InvokerActionInvoker4< int32_t, ZipLatestObservable_5_tBE44A576CACC33D67699EE00A80902E26DB4CC07*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_2, 4, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,UniRx.Operators.ZipLatestFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_6__ctor_m1E723349D87F93A3563F3DFE86D6DD7B13F0E15F_gshared (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* ___resultSelector5, const RuntimeMethod* method) 
{
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B5_0 = NULL;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B1_0 = NULL;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B2_0 = NULL;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B3_0 = NULL;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, L_6);
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, L_8);
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B6_1, (bool)G_B6_0);
		// this.source1 = source1;
		RuntimeObject* L_10 = ___source10;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___source21;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___source32;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___source43;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___source54;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_6_t905F3CA23D833224E84F6BD8655F8AA71E960E69* L_15 = ___resultSelector5;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_6_SubscribeCore_m6B4149E541184AFA6392199FE6C6AE9C8E51E673_gshared (ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(5, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2* L_2 = (ZipLatest_t0158DD6DC60DCA1233766799DE055D5AB041E4E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		NullCheck(L_2);
		InvokerActionInvoker4< int32_t, ZipLatestObservable_6_t7D59C42D7D6B2B5BDC438692526F72659EB963F2*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), L_2, 5, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,UniRx.Operators.ZipLatestFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_7__ctor_m92291151BFC8591D0E5F83E4A286E16455795ABF_gshared (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* ___resultSelector6, const RuntimeMethod* method) 
{
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B6_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B1_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B2_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B3_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B4_0 = NULL;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, L_6);
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, L_8);
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, L_10);
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B7_1, (bool)G_B7_0);
		// this.source1 = source1;
		RuntimeObject* L_12 = ___source10;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___source21;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___source32;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___source43;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___source54;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___source65;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_7_t72767CB4DE4D99C047AAFD02A6C695B26F9F3AF6* L_18 = ___resultSelector6;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_7_SubscribeCore_m499069AA93E024D7A2176DB87935F108229709AA_gshared (ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(6, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1* L_2 = (ZipLatest_t0F71EE796E620B2C3E270E313F06750DCE4A5AF1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		NullCheck(L_2);
		InvokerActionInvoker4< int32_t, ZipLatestObservable_7_tC1A9BE55041175A094FCAACC5569DFABF216D576*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_2, 6, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,System.IObservable`1<T7>,UniRx.Operators.ZipLatestFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObservable_8__ctor_m62029BD4114AFD058878C6D4CCED2DA4B7669BC3_gshared (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, RuntimeObject* ___source76, ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* ___resultSelector7, const RuntimeMethod* method) 
{
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B7_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B1_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B2_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B3_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B4_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B5_0 = NULL;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, L_6);
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, L_8);
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, L_10);
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___source76;
		bool L_13;
		L_13 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), NULL, L_12);
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B8_1, (bool)G_B8_0);
		// this.source1 = source1;
		RuntimeObject* L_14 = ___source10;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___source21;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___source32;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___source43;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___source54;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___source65;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___source76;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipLatestFunc_8_t9B74703121020ED4533DFE80062E6219DAB2A795* L_21 = ___resultSelector7;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipLatestObservable`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipLatestObservable_8_SubscribeCore_m08B27915A88A0679D2895556A95EEE8A05862CCB_gshared (ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new ZipLatest(7, this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D* L_2 = (ZipLatest_tD87494E079B2E9E4E467DB55FA002AC3914B617D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		NullCheck(L_2);
		InvokerActionInvoker4< int32_t, ZipLatestObservable_8_tC618C793E749856B91F0DA2DC66C1F4BDCCFDBBA*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_2, 7, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipLatestObservable`1/ZipLatest<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver__ctor_m17B9F0EE31EBF89953299E653D763146CC04C682_gshared (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* __this, ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* ___parent0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(ZipLatest parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_0 = ___parent0;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___index1;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnNext_mA39B5F09437A824162D7D2CAB31FA58A5829C8AF_gshared (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tAA2081CC914903E05608BB7F99BBBD9BE786C009 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_tAA2081CC914903E05608BB7F99BBBD9BE786C009);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_0 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0040:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0049;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0049:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.values[index] = value;
			ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_5 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
			NullCheck(L_5);
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)L_5->___values_5;
			int32_t L_7 = (int32_t)__this->___index_1;
			il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 3)) ? ___value0 : &___value0), SizeOf_T_tAA2081CC914903E05608BB7F99BBBD9BE786C009);
			NullCheck(L_6);
			il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_tAA2081CC914903E05608BB7F99BBBD9BE786C009);
			Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
			// parent.Publish(index);
			ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_9 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
			int32_t L_10 = (int32_t)__this->___index_1;
			NullCheck(L_9);
			InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), L_9, L_10);
			// }
			goto IL_004a;
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
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnError_mDA4363CA66BAABD3EE4F6DB20176701C774BA4DB_gshared (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_0 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_5 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
			Exception_t* L_6 = ___ex0;
			NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_5);
			VirtualActionInvoker1Invoker< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnError(System.Exception) */, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObservable`1/ZipLatest/ZipLatestObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_OnCompleted_mBA8807D2B0BDCC77E97F8C65456CE9BFD3BCD67A_gshared (ZipLatestObserver_t4BE85AB314360398FC0402187EBCBE96BFF04C75* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_0 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
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
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// parent.isCompleted[index] = true;
				ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_5 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_5->___isCompleted_7;
				int32_t L_7 = (int32_t)__this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isCompleted[i])
				ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_8 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_8->___isCompleted_7;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_15 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = (int32_t)L_15->___length_4;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A* L_18 = (ZipLatest_tA7B4CF33BDA760C0855A8B0EAD654AD25E53EA4A*)__this->___parent_0;
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_18);
				VirtualActionInvoker0Invoker::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnCompleted() */, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_18);
			}

IL_0062_1:
			{
				// }
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
		// }
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
// T UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_get_Value_m14C2114DA94F6F627365EF253FBD6E50B65536CE_gshared (/*UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
	{
		// public T Value { get { return value; } }
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3)), SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,UniRx.Operators.IZipLatestObservable,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1__ctor_m1D9740D97751471C1654EBF5EF1484AA5DAD9CEE_gshared (/*UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, RuntimeObject* ___gate0, RuntimeObject* ___parent1, int32_t ___index2, const RuntimeMethod* method) 
{
	{
		// public ZipLatestObserver(object gate, IZipLatestObservable parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___gate0;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0), L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___parent1;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1), L_1);
		// this.index = index;
		int32_t L_2 = ___index2;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2), L_2);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnNext_mC5E5D964E8E2D4F73363969C2059CD7E2F0AE553_gshared (/*UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// this.value = value;
			il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? ___value0 : &___value0), SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
			il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),3), L_4, SizeOf_T_t5F8E0D14424E60E6596DD04CB9F9F389892824B8);
			// parent.Publish(index);
			RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1));
			int32_t L_6 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2));
			NullCheck(L_5);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipLatestObservable::Publish(System.Int32) */, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_5, L_6);
			// }
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnError_m3BEF0EF2AFE5C005497D9D051F0163DF754E04AF_gshared (/*UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1));
			Exception_t* L_5 = ___error0;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipLatestObservable::Fail(System.Exception) */, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipLatestObserver_1_OnCompleted_mA0F60C8A096F27FED34337D93345CC78C366782A_gshared (/*UniRx.Operators.ZipLatestObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/ZipLatestObserver_1_t2B37D7D4B3647E0391EBC4886CB7642D03CE14C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),0));
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),1));
			int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(method->klass->rgctx_data, 0),2));
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipLatestObservable::Done(System.Int32) */, IZipLatestObservable_t1DCB33AEA6D887F2440884F643B4910BB9011EE7_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
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
// System.Void UniRx.Operators.ZipObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_1__ctor_m787E79C6081DE37EDB0A007920FBA0CF57AF8904_gshared (ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* __this, IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* ___sources0, const RuntimeMethod* method) 
{
	{
		// : base(true)
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)), il2cpp_rgctx_method(method->klass->rgctx_data, 0), (OperatorObservableBase_1_tBFE60A390AADA301289FC0A01C56C68B84E92F41*)__this, (bool)1);
		// this.sources = sources;
		IObservable_1U5BU5D_tF72DA49406BA9D09C273A4691140D27CFB1F0035* L_0 = ___sources0;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<System.Collections.Generic.IList`1<T>>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_1_SubscribeCore_mD1C3FBE26CC66BDFD6FCEDC46CA1949176055F3D_gshared (ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_2 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		NullCheck(L_2);
		InvokerActionInvoker3< ZipObservable_1_tCF96E17B3CE750A3553A6CE43DA7472BC77222B2*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<TLeft>,System.IObservable`1<TRight>,System.Func`3<TLeft,TRight,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_3__ctor_mEF14031AA312A5E3B92FBD480759347FBEC2E573_gshared (ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* __this, RuntimeObject* ___left0, RuntimeObject* ___right1, Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* ___selector2, const RuntimeMethod* method) 
{
	ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* G_B2_0 = NULL;
	ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* G_B3_1 = NULL;
	{
		// : base(left.IsRequiredSubscribeOnCurrentThread() || right.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___left0;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0011;
		}
	}
	{
		RuntimeObject* L_2 = ___right1;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B3_0 = ((int32_t)(L_3));
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
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)), il2cpp_rgctx_method(method->klass->rgctx_data, 4), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B3_1, (bool)G_B3_0);
		// this.left = left;
		RuntimeObject* L_4 = ___left0;
		__this->___left_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___left_1), (void*)L_4);
		// this.right = right;
		RuntimeObject* L_5 = ___right1;
		__this->___right_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___right_2), (void*)L_5);
		// this.selector = selector;
		Func_3_t009E60D2B88B8B844FB90881977A21CC70E688A4* L_6 = ___selector2;
		__this->___selector_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector_3), (void*)L_6);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`3<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_3_SubscribeCore_m59F94EFEB3A360A5240213B094DB3FCBEA697593_gshared (ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746* L_2 = (Zip_tEC0D6F6ACBBB03EB5F5910D4D8715EFFA9432746*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
		NullCheck(L_2);
		InvokerActionInvoker3< ZipObservable_3_t141F636C8E1A4B1B203F7F46E0C9055E851D7E21*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,UniRx.Operators.ZipFunc`4<T1,T2,T3,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_4__ctor_m6CD049DE72F94B8A0FBE1D94BE5C8D6B78A08A91_gshared (ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* ___resultSelector3, const RuntimeMethod* method) 
{
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* G_B3_0 = NULL;
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* G_B1_0 = NULL;
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* G_B4_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B3_0 = __this;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B3_0 = G_B1_0;
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B4_0 = ((int32_t)(L_5));
		G_B4_1 = G_B2_0;
		goto IL_001a;
	}

IL_0019:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001a:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B4_1, (bool)G_B4_0);
		// this.source1 = source1;
		RuntimeObject* L_6 = ___source10;
		__this->___source1_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_6);
		// this.source2 = source2;
		RuntimeObject* L_7 = ___source21;
		__this->___source2_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_7);
		// this.source3 = source3;
		RuntimeObject* L_8 = ___source32;
		__this->___source3_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_8);
		// this.resultSelector = resultSelector;
		ZipFunc_4_t73EC5A8E1464990C31A7683F4C032A54AF9E003D* L_9 = ___resultSelector3;
		__this->___resultSelector_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_4), (void*)L_9);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`4<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_4_SubscribeCore_m87872B916166C922569D7FDE93F87E1A7433D51C_gshared (ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC* L_2 = (Zip_t5E758291FEC23E785A5F284CC70E8D4D8D69D5DC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		NullCheck(L_2);
		InvokerActionInvoker3< ZipObservable_4_t4CD2FE4BA9BB24EED7832CCC66EE6E8B379F27C3*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,UniRx.Operators.ZipFunc`5<T1,T2,T3,T4,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_5__ctor_m56F1A44FC574943874341B5D10F48A632C348390_gshared (ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* ___resultSelector4, const RuntimeMethod* method) 
{
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B4_0 = NULL;
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B1_0 = NULL;
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B2_0 = NULL;
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B3_0 = NULL;
	int32_t G_B5_0 = 0;
	ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* G_B5_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B4_0 = __this;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B4_0 = G_B1_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B4_0 = G_B2_0;
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, L_6);
		G_B5_0 = ((int32_t)(L_7));
		G_B5_1 = G_B3_0;
		goto IL_0023;
	}

IL_0022:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0023:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B5_1, (bool)G_B5_0);
		// this.source1 = source1;
		RuntimeObject* L_8 = ___source10;
		__this->___source1_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_8);
		// this.source2 = source2;
		RuntimeObject* L_9 = ___source21;
		__this->___source2_2 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_9);
		// this.source3 = source3;
		RuntimeObject* L_10 = ___source32;
		__this->___source3_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_10);
		// this.source4 = source4;
		RuntimeObject* L_11 = ___source43;
		__this->___source4_4 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_11);
		// this.resultSelector = resultSelector;
		ZipFunc_5_tD9350842CE6F514F7DA23DF0F802D8436C843962* L_12 = ___resultSelector4;
		__this->___resultSelector_5 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_12);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`5<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_5_SubscribeCore_m8E95A4599694D170D7F6CC586FD03423A2179A0B_gshared (ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228* L_2 = (Zip_t0FB76BF23E5D08FF8F680971B3B349BD9BE6A228*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 13));
		NullCheck(L_2);
		InvokerActionInvoker3< ZipObservable_5_t2005040E13A75A66DD0306E099E0B19E266ED66A*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 15), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,UniRx.Operators.ZipFunc`6<T1,T2,T3,T4,T5,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_6__ctor_m31E8FDB59552274083251C6A60132565A62602D5_gshared (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* ___resultSelector5, const RuntimeMethod* method) 
{
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B5_0 = NULL;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B1_0 = NULL;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B2_0 = NULL;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B3_0 = NULL;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* G_B6_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B5_0 = __this;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B5_0 = G_B1_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B5_0 = G_B2_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, L_6);
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B5_0 = G_B3_0;
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, L_8);
		G_B6_0 = ((int32_t)(L_9));
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_002b:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B6_1, (bool)G_B6_0);
		// this.source1 = source1;
		RuntimeObject* L_10 = ___source10;
		__this->___source1_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_10);
		// this.source2 = source2;
		RuntimeObject* L_11 = ___source21;
		__this->___source2_2 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_11);
		// this.source3 = source3;
		RuntimeObject* L_12 = ___source32;
		__this->___source3_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_12);
		// this.source4 = source4;
		RuntimeObject* L_13 = ___source43;
		__this->___source4_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_13);
		// this.source5 = source5;
		RuntimeObject* L_14 = ___source54;
		__this->___source5_5 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_14);
		// this.resultSelector = resultSelector;
		ZipFunc_6_t37AB2029351994D25D686126C972C489CA476965* L_15 = ___resultSelector5;
		__this->___resultSelector_6 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_15);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`6<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_6_SubscribeCore_mDF52F4BD2FED30C186853C2D03A2813B919D40E0_gshared (ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700* L_2 = (Zip_t0248CFC9AAF224BE39EA5A881E1837CDE577E700*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 15));
		NullCheck(L_2);
		InvokerActionInvoker3< ZipObservable_6_t88A94B7C80B1AD6E4619C69C8A990DCB2BEDA961*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)), il2cpp_rgctx_method(method->klass->rgctx_data, 16), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 17), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,UniRx.Operators.ZipFunc`7<T1,T2,T3,T4,T5,T6,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_7__ctor_m6B492C7E060223939A84FAC052FB3DD9661A1438_gshared (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* ___resultSelector6, const RuntimeMethod* method) 
{
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B6_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B1_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B2_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B3_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B4_0 = NULL;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* G_B7_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B6_0 = __this;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B6_0 = G_B1_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B6_0 = G_B2_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, L_6);
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B6_0 = G_B3_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, L_8);
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B6_0 = G_B4_0;
			goto IL_0034;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, L_10);
		G_B7_0 = ((int32_t)(L_11));
		G_B7_1 = G_B5_0;
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0035:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B7_1, (bool)G_B7_0);
		// this.source1 = source1;
		RuntimeObject* L_12 = ___source10;
		__this->___source1_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_12);
		// this.source2 = source2;
		RuntimeObject* L_13 = ___source21;
		__this->___source2_2 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_13);
		// this.source3 = source3;
		RuntimeObject* L_14 = ___source32;
		__this->___source3_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_14);
		// this.source4 = source4;
		RuntimeObject* L_15 = ___source43;
		__this->___source4_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_15);
		// this.source5 = source5;
		RuntimeObject* L_16 = ___source54;
		__this->___source5_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_16);
		// this.source6 = source6;
		RuntimeObject* L_17 = ___source65;
		__this->___source6_6 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_17);
		// this.resultSelector = resultSelector;
		ZipFunc_7_t8AB69DDB19DFB40797AA78B99F5EA7022A9C0FF9* L_18 = ___resultSelector6;
		__this->___resultSelector_7 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_7), (void*)L_18);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`7<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_7_SubscribeCore_mD01D5FA24927109209668F04BA967F5517C96266_gshared (ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49* L_2 = (Zip_t7AE46385077AA6602FFDECC6F6BD99A87CA24D49*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		NullCheck(L_2);
		InvokerActionInvoker3< ZipObservable_7_t52CBF792236C18D090D0BF84EEC415AAC30195C5*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)), il2cpp_rgctx_method(method->klass->rgctx_data, 18), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)), il2cpp_rgctx_method(method->klass->rgctx_data, 19), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.IObservable`1<T1>,System.IObservable`1<T2>,System.IObservable`1<T3>,System.IObservable`1<T4>,System.IObservable`1<T5>,System.IObservable`1<T6>,System.IObservable`1<T7>,UniRx.Operators.ZipFunc`8<T1,T2,T3,T4,T5,T6,T7,TR>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObservable_8__ctor_mFC43AE26BE1BBA621A7D87A9058C24471179B610_gshared (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* __this, RuntimeObject* ___source10, RuntimeObject* ___source21, RuntimeObject* ___source32, RuntimeObject* ___source43, RuntimeObject* ___source54, RuntimeObject* ___source65, RuntimeObject* ___source76, ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* ___resultSelector7, const RuntimeMethod* method) 
{
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B7_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B1_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B2_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B3_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B4_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B5_0 = NULL;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* G_B8_1 = NULL;
	{
		// : base(
		//     source1.IsRequiredSubscribeOnCurrentThread() ||
		//     source2.IsRequiredSubscribeOnCurrentThread() ||
		//     source3.IsRequiredSubscribeOnCurrentThread() ||
		//     source4.IsRequiredSubscribeOnCurrentThread() ||
		//     source5.IsRequiredSubscribeOnCurrentThread() ||
		//     source6.IsRequiredSubscribeOnCurrentThread() ||
		//     source7.IsRequiredSubscribeOnCurrentThread() ||
		//     false)
		RuntimeObject* L_0 = ___source10;
		bool L_1;
		L_1 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 1), NULL, L_0);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B7_0 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_2 = ___source21;
		bool L_3;
		L_3 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), NULL, L_2);
		G_B2_0 = G_B1_0;
		if (L_3)
		{
			G_B7_0 = G_B1_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_4 = ___source32;
		bool L_5;
		L_5 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), NULL, L_4);
		G_B3_0 = G_B2_0;
		if (L_5)
		{
			G_B7_0 = G_B2_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_6 = ___source43;
		bool L_7;
		L_7 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), NULL, L_6);
		G_B4_0 = G_B3_0;
		if (L_7)
		{
			G_B7_0 = G_B3_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_8 = ___source54;
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), NULL, L_8);
		G_B5_0 = G_B4_0;
		if (L_9)
		{
			G_B7_0 = G_B4_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_10 = ___source65;
		bool L_11;
		L_11 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)), il2cpp_rgctx_method(method->klass->rgctx_data, 11), NULL, L_10);
		G_B6_0 = G_B5_0;
		if (L_11)
		{
			G_B7_0 = G_B5_0;
			goto IL_003d;
		}
	}
	{
		RuntimeObject* L_12 = ___source76;
		bool L_13;
		L_13 = InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), NULL, L_12);
		G_B8_0 = ((int32_t)(L_13));
		G_B8_1 = G_B6_0;
		goto IL_003e;
	}

IL_003d:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_003e:
	{
		InvokerActionInvoker1< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), (OperatorObservableBase_1_t75C9D9CF56C69ECFCA4BD13C4ACEC40AA96F33AE*)G_B8_1, (bool)G_B8_0);
		// this.source1 = source1;
		RuntimeObject* L_14 = ___source10;
		__this->___source1_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source1_1), (void*)L_14);
		// this.source2 = source2;
		RuntimeObject* L_15 = ___source21;
		__this->___source2_2 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source2_2), (void*)L_15);
		// this.source3 = source3;
		RuntimeObject* L_16 = ___source32;
		__this->___source3_3 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source3_3), (void*)L_16);
		// this.source4 = source4;
		RuntimeObject* L_17 = ___source43;
		__this->___source4_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source4_4), (void*)L_17);
		// this.source5 = source5;
		RuntimeObject* L_18 = ___source54;
		__this->___source5_5 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source5_5), (void*)L_18);
		// this.source6 = source6;
		RuntimeObject* L_19 = ___source65;
		__this->___source6_6 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source6_6), (void*)L_19);
		// this.source7 = source7;
		RuntimeObject* L_20 = ___source76;
		__this->___source7_7 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source7_7), (void*)L_20);
		// this.resultSelector = resultSelector;
		ZipFunc_8_tEB5EFB3E758FF283028DCAC843C0E97279BE0BAC* L_21 = ___resultSelector7;
		__this->___resultSelector_8 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_8), (void*)L_21);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.ZipObservable`8<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SubscribeCore(System.IObserver`1<TR>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ZipObservable_8_SubscribeCore_m6CB6C6AB477704791161D82AB640E24E2BA1575A_gshared (ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	{
		// return new Zip(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3* L_2 = (Zip_tCA922D52C408257BB6E53143E7C2F12DBD0E78E3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		NullCheck(L_2);
		InvokerActionInvoker3< ZipObservable_8_t00D60DD49085B52992F70AEE912ED02F4068F8F4*, RuntimeObject*, RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 20), L_2, __this, L_0, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 21)), il2cpp_rgctx_method(method->klass->rgctx_data, 21), L_2);
		return L_3;
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
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(UniRx.Operators.ZipObservable`1/Zip<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver__ctor_m5D420C4E6AB867D6ADE0EE24DFB486F989B467A7_gshared (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* __this, Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* ___parent0, int32_t ___index1, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(Zip parent, int index)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.parent = parent;
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_0 = ___parent0;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// this.index = index;
		int32_t L_1 = ___index1;
		__this->___index_1 = L_1;
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnNext_m7D66CB9EDC6AE10774FC90765A515F941C20A9F5_gshared (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tF326E1E271571FBFF1E0F7025445396DD4EFA83B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tF326E1E271571FBFF1E0F7025445396DD4EFA83B);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_0 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.queues[index].Enqueue(value);
			Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_5 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
			NullCheck(L_5);
			Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3* L_6 = (Queue_1U5BU5D_t344E748FB5E8ACBA415FF0FD0A1B7602A7A1DBF3*)L_5->___queues_4;
			int32_t L_7 = (int32_t)__this->___index_1;
			NullCheck(L_6);
			int32_t L_8 = L_7;
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
			il2cpp_codegen_memcpy(L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 3)) ? ___value0 : &___value0), SizeOf_T_tF326E1E271571FBFF1E0F7025445396DD4EFA83B);
			NullCheck(L_9);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)), il2cpp_rgctx_method(method->klass->rgctx_data, 5), L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 3)) ? L_10: *(void**)L_10));
			// parent.Dequeue(index);
			Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_11 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
			int32_t L_12 = (int32_t)__this->___index_1;
			NullCheck(L_11);
			InvokerActionInvoker1< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, L_12);
			// }
			goto IL_004b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnError_mCCA8BC3CFCBF4FD3B91A388E86FAAC7872C68534_gshared (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* __this, Exception_t* ___ex0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (parent.gate)
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_0 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// parent.OnError(ex);
			Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_5 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
			Exception_t* L_6 = ___ex0;
			NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_5);
			VirtualActionInvoker1Invoker< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnError(System.Exception) */, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_5, L_6);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObservable`1/Zip/ZipObserver<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_OnCompleted_m967BC83F3990C92B3DA7E8BE9EDEE1CEE4BF1447_gshared (ZipObserver_tEA117F108743D9CF50FE3CBC8B616BB5C58F6AA2* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	{
		// lock (parent.gate)
		Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_0 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0064:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_006d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
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
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// parent.isDone[index] = true;
				Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_5 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
				NullCheck(L_5);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_5->___isDone_5;
				int32_t L_7 = (int32_t)__this->___index_1;
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (bool)1);
				// var allTrue = true;
				V_2 = (bool)1;
				// for (int i = 0; i < parent.length; i++)
				V_3 = 0;
				goto IL_0046_1;
			}

IL_002f_1:
			{
				// if (!parent.isDone[i])
				Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_8 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
				NullCheck(L_8);
				BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)L_8->___isDone_5;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				uint8_t L_12 = (uint8_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				if (L_12)
				{
					goto IL_0042_1;
				}
			}
			{
				// allTrue = false;
				V_2 = (bool)0;
				// break;
				goto IL_0054_1;
			}

IL_0042_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_13 = V_3;
				V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				// for (int i = 0; i < parent.length; i++)
				int32_t L_14 = V_3;
				Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_15 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
				NullCheck(L_15);
				int32_t L_16 = (int32_t)L_15->___length_6;
				if ((((int32_t)L_14) < ((int32_t)L_16)))
				{
					goto IL_002f_1;
				}
			}

IL_0054_1:
			{
				// if (allTrue)
				bool L_17 = V_2;
				if (!L_17)
				{
					goto IL_0062_1;
				}
			}
			{
				// parent.OnCompleted();
				Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380* L_18 = (Zip_tFBD3EDB86B10E558E6341945D34599ECD43E4380*)__this->___parent_0;
				NullCheck((OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_18);
				VirtualActionInvoker0Invoker::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>,System.Collections.Generic.IList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>>::OnCompleted() */, (OperatorObserverBase_2_tF68A0F74E245A672169076D0AEBF0DEE37E8976E*)L_18);
			}

IL_0062_1:
			{
				// }
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
		// }
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
// System.Void UniRx.Operators.ZipObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,UniRx.Operators.IZipObservable,System.Int32,System.Collections.Generic.Queue`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1__ctor_m65BE5D51C586C0B1B11C7A23A733BD3C18C034BF_gshared (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* __this, RuntimeObject* ___gate0, RuntimeObject* ___parent1, int32_t ___index2, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___queue3, const RuntimeMethod* method) 
{
	{
		// public ZipObserver(object gate, IZipObservable parent, int index, Queue<T> queue)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.gate = gate;
		RuntimeObject* L_0 = ___gate0;
		__this->___gate_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_0), (void*)L_0);
		// this.parent = parent;
		RuntimeObject* L_1 = ___parent1;
		__this->___parent_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_1), (void*)L_1);
		// this.index = index;
		int32_t L_2 = ___index2;
		__this->___index_2 = L_2;
		// this.queue = queue;
		Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_3 = ___queue3;
		__this->___queue_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnNext_m6B05FEAA1ED846F5EDD1610138EA0C7CDEFF6FBB_gshared (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t8EAD8D4396230D6607216E24CC0822944FD259E9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_T_t8EAD8D4396230D6607216E24CC0822944FD259E9);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0039;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0039:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// queue.Enqueue(value);
			Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* L_4 = (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*)__this->___queue_3;
			il2cpp_codegen_memcpy(L_5, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 2)) ? ___value0 : &___value0), SizeOf_T_t8EAD8D4396230D6607216E24CC0822944FD259E9);
			NullCheck(L_4);
			InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)), il2cpp_rgctx_method(method->klass->rgctx_data, 3), L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 2)) ? L_5: *(void**)L_5));
			// parent.Dequeue(index);
			RuntimeObject* L_6 = (RuntimeObject*)__this->___parent_1;
			int32_t L_7 = (int32_t)__this->___index_2;
			NullCheck(L_6);
			InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void UniRx.Operators.IZipObservable::Dequeue(System.Int32) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_6, L_7);
			// }
			goto IL_003a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnError_mFD060A00828E153CBDDBEED9B3E800560EA75869_gshared (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001f:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Fail(error);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			Exception_t* L_5 = ___error0;
			NullCheck(L_4);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void UniRx.Operators.IZipObservable::Fail(System.Exception) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.ZipObserver`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ZipObserver_1_OnCompleted_m0DC086CEA87A0300819469419C53E9CFA5413B63_gshared (ZipObserver_1_tA52AABDCF51F01F70DD0D12CFA2CE2DC93C15802* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___gate_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_002d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_002d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			// parent.Done(index);
			RuntimeObject* L_4 = (RuntimeObject*)__this->___parent_1;
			int32_t L_5 = (int32_t)__this->___index_2;
			NullCheck(L_4);
			InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void UniRx.Operators.IZipObservable::Done(System.Int32) */, IZipObservable_t1908F5805FDF1CC2A33A432ECDEF367981470A11_il2cpp_TypeInfo_var, L_4, L_5);
			// }
			goto IL_002e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002e:
	{
		// }
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
// System.Type Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_ModelType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m7BFCBE6128959F6AAA08BB9FB82C5E3DA07FB3AD_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public override Type ModelType => typeof(TModel);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySerialize(System.Object,Unity.VisualScripting.FullSerializer.fsData&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mAB417033757D14765392C802374EE82941F7E430_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, RuntimeObject* ___instance0, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___serialized1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// TModel
	// sizeof(TModel)
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		// var serializedDictionary = new Dictionary<string, fsData>();
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		// var result = DoSerialize((TModel)instance, serializedDictionary);
		RuntimeObject* L_1 = ___instance0;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_4 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Il2CppFullySharedGenericAny, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DoSerialize(TModel,System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>) */, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 1)) ? (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_3))): *(void**)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_3)))), L_4);
		// serialized = new fsData(serializedDictionary);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_6 = ___serialized1;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_7 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_8, L_7, NULL);
		*((RuntimeObject**)L_6) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_6, (void*)(RuntimeObject*)L_8);
		// return result;
		return L_5;
	}
}
// Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryDeserialize(Unity.VisualScripting.FullSerializer.fsData,System.Object&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m68AEEE5C3FB70E702E364D7B0C537966E0B079CF_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___data0, RuntimeObject** ___instance1, Type_t* ___storageType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	// sizeof(TModel)
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
	// TModel
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	memset(V_1, 0, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var result = fsResult.Success;
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success_3;
		V_0 = L_0;
		// if ((result += CheckType(data, fsDataType.Object)).Failed)
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___data0;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, (int32_t)1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		// var obj = (TModel)instance;
		RuntimeObject** L_8 = ___instance1;
		RuntimeObject* L_9 = *((RuntimeObject**)L_8);
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_10);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)L_11))), SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		// result += DoDeserialize(data.AsDictionary, ref obj);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_13 = ___data0;
		NullCheck(L_13);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_14;
		L_14 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_13, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Il2CppFullySharedGenericAny* >::Invoke(11 /* Unity.VisualScripting.FullSerializer.fsResult Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::DoDeserialize(System.Collections.Generic.Dictionary`2<System.String,Unity.VisualScripting.FullSerializer.fsData>,TModel&) */, __this, L_14, (Il2CppFullySharedGenericAny*)V_1);
		il2cpp_codegen_runtime_class_init_inline(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16;
		L_16 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_12, L_15, NULL);
		V_0 = L_16;
		// instance = obj;
		RuntimeObject** L_17 = ___instance1;
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_18);
		*((RuntimeObject**)L_17) = (RuntimeObject*)L_19;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_17, (void*)(RuntimeObject*)L_19);
		// return result;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		return L_20;
	}
}
// System.Void Unity.VisualScripting.FullSerializer.fsDirectConverter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mA219A5FF100DBCB35147606E9E4E9C565D2F8D50_gshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
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
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_HasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => _hasValue == false;
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	bool _returnValue;
	_returnValue = fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767(_thisAdjusted, method);
	return _returnValue;
}
// T Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		// if (IsEmpty)
		bool L_0;
		L_0 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1), __this);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// throw new InvalidOperationException("fsOption is empty");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_RuntimeMethod_var)));
	}

IL_0013:
	{
		// return _value;
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1)), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A(_thisAdjusted, il2cppRetVal, method);
	return;
}
// System.Void Unity.VisualScripting.FullSerializer.Internal.fsOption`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_gshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	{
		// _hasValue = true;
		il2cpp_codegen_write_instance_field_data<bool>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0), (bool)1);
		// _value = value;
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)) ? ___value0 : &___value0), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),1), L_0, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___value0, const RuntimeMethod* method)
{
	fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*>(__this + _offset);
	fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_gshared_inline (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasValue => _hasValue;
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0),0));
		return L_0;
	}
}
