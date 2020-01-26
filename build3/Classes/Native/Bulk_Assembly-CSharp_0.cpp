#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Spin
struct Spin_tD4DFECB24A365A6C4C12E9848949153EDA1F1EBB;
// SpotiftyLogin
struct SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B;
// System.Action
struct Action_t591D2A86165F896B4B800BB5C25CE18672A55579;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t19CAF500829927B30EC94F39939F749E4919669E;
// System.Action`1<UniWebViewNativeResultPayload>
struct Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action>[]
struct EntryU5BU5D_t60E6EC065E40BD0A6BC7DF76ECF8F26C67218395;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Action`1<UniWebViewNativeResultPayload>>[]
struct EntryU5BU5D_tBE8D4CCC46F6F23C9FDDF3FEEF34DF98D24CC6DC;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UniWebViewNativeListener>[]
struct EntryU5BU5D_t04C5D748F087511AF266F863E357FDD5146AF93E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action>
struct KeyCollection_t762621FB6F857FFFC25832E22A9718C71B37BE7F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct KeyCollection_t2FE64B17B86A4071AE5C2142EA119D5903CF938B;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_tC73654392B284B89334464107B696C9BD89776D9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UniWebViewNativeListener>
struct KeyCollection_tF13E05C63B80315401AE651F7D8D12BEA113C3F6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action>
struct ValueCollection_t7728674343F0E38E27CC631FB3392DEA3C386B45;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct ValueCollection_t2789EDB36934FE93A79EDF933713294B8D422933;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UniWebViewNativeListener>
struct ValueCollection_t18FAC282B0DBACFF0CD77D75840FD560F3E56473;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45;
// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo>
struct Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565;
// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders/HeaderBucket>
struct Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC;
// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>
struct Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Exception
struct Exception_t;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>>
struct Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.InvalidOperationException
struct InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1;
// System.Net.Http.Headers.AuthenticationHeaderValue
struct AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6;
// System.Net.Http.Headers.HttpContentHeaders
struct HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0;
// System.Net.Http.Headers.HttpHeaders
struct HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1;
// System.Net.Http.Headers.HttpRequestHeaders
struct HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4;
// System.Net.Http.Headers.HttpResponseHeaders
struct HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59;
// System.Net.Http.HttpClient
struct HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7;
// System.Net.Http.HttpContent
struct HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D;
// System.Net.Http.HttpContent/FixedMemoryStream
struct FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C;
// System.Net.Http.HttpMessageHandler
struct HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894;
// System.Net.Http.HttpMessageInvoker
struct HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72;
// System.Net.Http.HttpRequestMessage
struct HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427;
// System.Net.Http.HttpResponseMessage
struct HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904;
// System.Net.Http.StringContent
struct StringContent_t0E49805143AA8BCE4640914150158663B9061079;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_tEFDFBE18E061A6065AB2FF735F1425FB59F919BC;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE;
// System.Threading.ContextCallback
struct ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676;
// System.Threading.Tasks.StackGuard
struct StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9;
// System.Threading.Tasks.Task
struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155;
// System.Threading.Tasks.TaskFactory`1<System.Net.Http.HttpResponseMessage>
struct TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114;
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct Task_1_t519CB3A303B53176BD616AC273201D66B84FF270;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t1359D75350E9D976BFA28AD96E417450DE277673;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Version
struct Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UniWebView
struct UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB;
// UniWebView/<>c__DisplayClass116_0
struct U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8;
// UniWebView/KeyCodeReceivedDelegate
struct KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C;
// UniWebView/MessageReceivedDelegate
struct MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582;
// UniWebView/OnWebContentProcessTerminatedDelegate
struct OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD;
// UniWebView/OreintationChangedDelegate
struct OreintationChangedDelegate_t42B38D7E92042A4E7C93015C2C675A483D7238E7;
// UniWebView/OrientationChangedDelegate
struct OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482;
// UniWebView/PageErrorReceivedDelegate
struct PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E;
// UniWebView/PageFinishedDelegate
struct PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702;
// UniWebView/PageStartedDelegate
struct PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78;
// UniWebView/ShouldCloseDelegate
struct ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998;
// UniWebViewAndroidStaticListener
struct UniWebViewAndroidStaticListener_t9987AA383ACDCD75BF174C6A87CBC88B83414A79;
// UniWebViewHelper
struct UniWebViewHelper_t8768407D2ECCF39080CB4D426A7AD65CC6F7A2D3;
// UniWebViewInterface
struct UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF;
// UniWebViewInterface/UnitySendMessageDelegate
struct UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68;
// UniWebViewLogger
struct UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36;
// UniWebViewNativeListener
struct UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD;
// UniWebViewNativeResultPayload
struct UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

extern RuntimeClass* Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var;
extern RuntimeClass* AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
extern RuntimeClass* Guid_t_il2cpp_TypeInfo_var;
extern RuntimeClass* HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern RuntimeClass* InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C_il2cpp_TypeInfo_var;
extern RuntimeClass* Level_tB3797A8D0D24AF315855A7B3D8DF86C22DFF2875_il2cpp_TypeInfo_var;
extern RuntimeClass* Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var;
extern RuntimeClass* MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD_il2cpp_TypeInfo_var;
extern RuntimeClass* OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482_il2cpp_TypeInfo_var;
extern RuntimeClass* PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E_il2cpp_TypeInfo_var;
extern RuntimeClass* PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702_il2cpp_TypeInfo_var;
extern RuntimeClass* PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var;
extern RuntimeClass* ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_il2cpp_TypeInfo_var;
extern RuntimeClass* ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998_il2cpp_TypeInfo_var;
extern RuntimeClass* StringContent_t0E49805143AA8BCE4640914150158663B9061079_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8_il2cpp_TypeInfo_var;
extern RuntimeClass* UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var;
extern RuntimeClass* UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_il2cpp_TypeInfo_var;
extern RuntimeClass* UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_il2cpp_TypeInfo_var;
extern RuntimeClass* UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var;
extern RuntimeClass* UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral00491CF0C8B39BC43165DF7F9594FA3F2FF4671E;
extern String_t* _stringLiteral06B74BC77BC139B54EA6631F98B79177AD2A78CB;
extern String_t* _stringLiteral0727C5584851CE551EAB519A195EC4C1DA48EBF5;
extern String_t* _stringLiteral07C342BE6E560E7F43842E2E21B774E61D85F047;
extern String_t* _stringLiteral117E9159A146DF4F4331086DE92E4F83AA1B0132;
extern String_t* _stringLiteral146030492EBA1AA0EB73B5D9C16DCED999DAEDBB;
extern String_t* _stringLiteral1A697AE208D81FDAD82F19579E60E4ACFF6F1D77;
extern String_t* _stringLiteral1FD124FEEF5DB8D5C4D26DCF6CBF0006BC793334;
extern String_t* _stringLiteral20AE2117886DAEA45AD17FAE5272B38A530F7F95;
extern String_t* _stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76;
extern String_t* _stringLiteral22CA7BEB9A08D067CF5F7298B11507321D496458;
extern String_t* _stringLiteral23E752D68C1EBE11AEF33CC41950EFF47F3BD1CD;
extern String_t* _stringLiteral27D8065B51E8577B2ED34800B1C74E812539FC84;
extern String_t* _stringLiteral2C035AC06ADD3F441D7B835885958B03DEAC3D50;
extern String_t* _stringLiteral2D5B6C3B30DE3100C51BB52EC659A4C468E2F1D3;
extern String_t* _stringLiteral30F9F91F5CF7A0B6F4D11D0BCD16A5F9D4A1CAED;
extern String_t* _stringLiteral310C3A2FA52D468C1A69568D9E3448429DC7B705;
extern String_t* _stringLiteral3872A3ED2ED0AAB18F1FB010F044E192B38A8AF5;
extern String_t* _stringLiteral3D9E765D7BA857C78A48E394812257CD7794C617;
extern String_t* _stringLiteral4BC81818A1FADD05909E6673403338B061B25752;
extern String_t* _stringLiteral4E3E67EBFAB65BF150827CC64823FCC9BB68D9D3;
extern String_t* _stringLiteral516B9783FCA517EECBD1D064DA2D165310B19759;
extern String_t* _stringLiteral5733C6F9B29CE8F97BC318286D8452BED793E93C;
extern String_t* _stringLiteral57D9243BDF4ED04808C32AAB0A521113CAFA87CE;
extern String_t* _stringLiteral5BAB61EB53176449E25C2C82F172B82CB13FFB9D;
extern String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
extern String_t* _stringLiteral5D12BD53552CAFC41CA6146C04870DF2E1574E13;
extern String_t* _stringLiteral602D3E503D008B8748F9A02F2273CD3FED413783;
extern String_t* _stringLiteral63BF13C36CDB29DF80295EBF2EEC4B9CDF8F4969;
extern String_t* _stringLiteral67A8741EAD44382DFF99FAE66966F536E211ECBF;
extern String_t* _stringLiteral735BB596C7191AC87A3C4965F95D305B76E49F17;
extern String_t* _stringLiteral755FF1EC321A750FAD1BC3B789A4AB51EAB45B0B;
extern String_t* _stringLiteral75A25C2BE83FDFA0BB221B04CF3A4525E9F1203A;
extern String_t* _stringLiteral77371EBC2D84DFF90E5FD1358DFA40AB94D93920;
extern String_t* _stringLiteral77D12B97BA61FFCCB079E0DD2EF6809C1E957255;
extern String_t* _stringLiteral781961BC81C25697841ECCE5D4D9DAD9F6B261C6;
extern String_t* _stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996;
extern String_t* _stringLiteral8E54285CFC41A77DC6AF23178CC201C8A0C7FA60;
extern String_t* _stringLiteral924A23119CEAA3C9BC0782972948AC8F65C78193;
extern String_t* _stringLiteral92D9989B9E7EDF35CDAA9FE01DC36CF20A3476EF;
extern String_t* _stringLiteral978F75E0698BA219DE24F838CC4BCEB79D8D0163;
extern String_t* _stringLiteral9805AC55B9E584DBE26361DAAFBC0DADD634CE0A;
extern String_t* _stringLiteral9A78211436F6D425EC38F5C4E02270801F3524F8;
extern String_t* _stringLiteral9B286A82D61E16262C03E954B59AF89C982C8308;
extern String_t* _stringLiteral9EBE43907E69A2FCE402E6EF94731B9B09AC09D1;
extern String_t* _stringLiteralA69FD1A951C4B6C646992B2F8CD84CCAA6B382B3;
extern String_t* _stringLiteralA79EA984C4186FB47F4F5D431390C66A2B08D039;
extern String_t* _stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001;
extern String_t* _stringLiteralAE1B86951A163D0885F05B3FD743DF1045BA07A5;
extern String_t* _stringLiteralAFB3FC10898D2E7FEFC8E88C89E38D46DC7E5E2F;
extern String_t* _stringLiteralB40BD825C866BFCE0122BB6B52982C2FA328767D;
extern String_t* _stringLiteralBD8A770F1B123F4C889784E9069EAA3D76724ECE;
extern String_t* _stringLiteralBF21A9E8FBC5A3846FB05B4FA0859E0917B2202F;
extern String_t* _stringLiteralC4ACB1398FC901DE499C0A5927410EB3733DD8F6;
extern String_t* _stringLiteralC4D081E5B8099F8DAFF1DEE346CACDBD2D5177F5;
extern String_t* _stringLiteralC9676FD8E9D709F5F3BFFF46289CB1676A78C99C;
extern String_t* _stringLiteralCA9FD0B2414177B79AC2EA7AD76252E4EF6DD65C;
extern String_t* _stringLiteralCAB1283BE997E1412A790AF7C749C371CD62086E;
extern String_t* _stringLiteralCBCD4F405598B17B773CA6C140F710DCFEE3AF31;
extern String_t* _stringLiteralCD99426E1DF5926674D76369611D1512D2535774;
extern String_t* _stringLiteralCDE1EB2FE366B2C13B8B9C56597730709C974A4C;
extern String_t* _stringLiteralCF1AD600BAD94AA9A997B61D9569D46E3DCC5EE7;
extern String_t* _stringLiteralD847EB0A6EC97CC9921F88B196872CF96005C5A9;
extern String_t* _stringLiteralD85D73531E449DFC50EFAFF09A15700083F68759;
extern String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
extern String_t* _stringLiteralDDC74C5DE3EC6D6BC5D4AD76FBCD198AB50CFB5E;
extern String_t* _stringLiteralDF560A7771870716334E1E2F5D968E8A2CEADB30;
extern String_t* _stringLiteralE3B36486FA4754A07B231BCFECB196BC098D2B91;
extern String_t* _stringLiteralEB3EF5B64FEA70627EE286D5AD0C95AF4DE65A7C;
extern String_t* _stringLiteralEBD149AA42DF2C7170A5F9C8125CC974F3993211;
extern String_t* _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC;
extern String_t* _stringLiteralFBAA357ACBCB9D448868F8AB1D86F48D4AAEFD11;
extern const RuntimeMethod* Action_1_Invoke_m8C199C95ECF35C974DA12746E7E408FA36A66523_RuntimeMethod_var;
extern const RuntimeMethod* Action_1_Invoke_mFF05822BE96997345A8FCC3A1C54F7E8D08E3276_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m92FA084476B2BED9E68F7C879639A420BBEDD6A6_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mA05BBE8EB654A813785564578AD6A2B3A5EEE8D2_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_m5D6BE89DCCED75301497F9998148B85EE8135C35_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mD4115B988D4E229C42FF1CA2CAE29CC5518015E5_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m803944ED22822FD2A20B37214871D084C007DD96_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mBC8F8A17181CC5DD63F7ED3EB599D28FC6D087FE_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEBCE726EC238FCE181D231A149EAD42A94CF250_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_m6A99DEB927FE2720A7A013F154D0D4775CAEEC27_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m37C373317E7D5EE46545F0D2F7F86C264263E62A_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_m2C1F1C4A3C36AC3AF6A6933666FF50FB22562668_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEF76E010AA1628E6C30816358ADF786CF5A22A9_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mDD7D66C4C1749D6D33B99988591C77949AFCF88E_RuntimeMethod_var;
extern const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m7DC605016D0DA8AC47C4C811AAD78B6BBBCF2BD8_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m04273DEA69EA43CCF49FEE87E80CD5E760FE0FB7_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m96F0A15AFA91061BF6A27AE7DE7734BD5EA48322_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_mF0550D7D4BB219888E3038ACAE4212E201C10DCD_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m6035A72C0D6A9432F46DE0742776CC7B866AB127_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3B8F7FE85D1D0D96319D7D1465CB561DE806A7C7_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m972C90F4E6EF9CA13D3CF6133D547068D39DCFEC_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_mF7A6A6F958388BCEF2FDE3F807F3486796739C65_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_mA715731746947BCAEFB0F5453C4A084CB71F7A02_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_mEA1F4C7224BD29F37B8956B05FD5E91804054C21_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_mF53A6CB8A87F2E73C8995ED41F32BCB937B75688_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m617D8188B02482AEFF9C461F647566C7FAC40841_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mC5754B6545F7E423941D9C54242BC05ADFD95987_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mCAFCDBBEE563C6B755CA36CEE4D1ADFBE966B41C_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisUniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_m9113CDBF5813015A5B852B62661579E1CAA9C54F_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisUniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB_m333454E40F1E6B59EA21CB600871CEAEA814667A_RuntimeMethod_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE_RuntimeMethod_var;
extern const RuntimeMethod* SpotiftyLogin_U3CStartU3Eb__5_0_mD46D41AE18AE0DC76D7A602E85B3CB120EFA14B5_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94_RuntimeMethod_var;
extern const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61_RuntimeMethod_var;
extern const RuntimeMethod* U3CU3Ec__DisplayClass116_0_U3CGetHTMLContentU3Eb__0_m1F02C7561CC2EC79CB8EDCD44B2347B6337537A6_RuntimeMethod_var;
extern const RuntimeMethod* UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467_RuntimeMethod_var;
extern const RuntimeMethod* UniWebViewInterface_SendMessage_mDAA737307C21D279A176FE30038F5B73FD5EE7CE_RuntimeMethod_var;
extern const RuntimeType* UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_0_0_0_var;
extern const uint32_t KeyCodeReceivedDelegate_BeginInvoke_m80FEFE44763F6DAF3ED4465FDED44FA390574052_MetadataUsageId;
extern const uint32_t MessageReceivedDelegate_BeginInvoke_m4A2233F58F8B06F0B1514C541A54A701C38649A2_MetadataUsageId;
extern const uint32_t OreintationChangedDelegate_BeginInvoke_mDF4B329050A7233B86F4956B9F3149BA90F5BE0B_MetadataUsageId;
extern const uint32_t OrientationChangedDelegate_BeginInvoke_mE4F08537C45D015E9974052CD1AB932BD782456C_MetadataUsageId;
extern const uint32_t PageErrorReceivedDelegate_BeginInvoke_m848DD5531FAE3B228469C1D09959E7FB0CD6C2B6_MetadataUsageId;
extern const uint32_t PageFinishedDelegate_BeginInvoke_mD4E0D96649C40B223B6BD0C2594AA4CF859E0102_MetadataUsageId;
extern const uint32_t Spin_Update_m16D68BD7DB10ACF2E53EBCC005971DDB458FF22C_MetadataUsageId;
extern const uint32_t SpotiftyLogin_CloseWebView_m75F327DD482F4839DE3B12A80AD3D5F41344DA21_MetadataUsageId;
extern const uint32_t SpotiftyLogin_DoSignInAsync_m063D3947DA59864F4DABD1920AF41A83709B202B_MetadataUsageId;
extern const uint32_t SpotiftyLogin_Pause_mEA99580E9179AD71470FD390C64FCF8A19FF080D_MetadataUsageId;
extern const uint32_t SpotiftyLogin_Play_m2F4F3137D6BDFC563905895703C89CC520CAEE7B_MetadataUsageId;
extern const uint32_t SpotiftyLogin_Start_mF0CB5B3938011A276846D921A9B50A031AAF059D_MetadataUsageId;
extern const uint32_t SpotiftyLogin_Update_m76FC82398B78D0F3B41DE54E4DAF377D11F4E1F0_MetadataUsageId;
extern const uint32_t SpotiftyLogin_WaitForCallback_m8728D0B5560ADC5D230DECB90AF9829E08BA8BF6_MetadataUsageId;
extern const uint32_t SpotiftyLogin__ctor_m42C9C49987DD419902AB87EC0FEC3804E081FC25_MetadataUsageId;
extern const uint32_t U3CDoSignInAsyncU3Ed__7_MoveNext_mA623832C4C1226069800A1B3F9874017B26A0EB4_MetadataUsageId;
extern const uint32_t U3CPauseU3Ed__13_MoveNext_mE89FC1E787DB329D3706DA25D843D1377E23E7F8_MetadataUsageId;
extern const uint32_t U3CPlayU3Ed__12_MoveNext_m92D0C2A3162EB0837371FA384EB8670F4AE3E429_MetadataUsageId;
extern const uint32_t U3CU3Ec__DisplayClass116_0_U3CGetHTMLContentU3Eb__0_m1F02C7561CC2EC79CB8EDCD44B2347B6337537A6_MetadataUsageId;
extern const uint32_t U3CWaitForCallbackU3Ed__8_MoveNext_m57D5F79AD33858368B51F01D61A2A820F7716432_MetadataUsageId;
extern const uint32_t UniWebViewAndroidStaticListener_Awake_m73D37CD41247F5214E73929115991F57F41AE6EC_MetadataUsageId;
extern const uint32_t UniWebViewAndroidStaticListener_OnJavaMessage_m1F4138E7CC1D0BFF727E1DD4BD27E6016E2C1243_MetadataUsageId;
extern const uint32_t UniWebViewHelper_PersistentDataURLForPath_mB598A5B27D9BA73209B60B852ED276D97E0B7506_MetadataUsageId;
extern const uint32_t UniWebViewHelper_StreamingAssetURLForPath_m49DF44F463DFB56478C8B16D44D832B628529A46_MetadataUsageId;
extern const uint32_t UniWebViewInterface_AddJavaScript_m0821BD310D90C6DA1E8BC9F9D1E1F13F7919EF4E_MetadataUsageId;
extern const uint32_t UniWebViewInterface_AddSslExceptionDomain_mE9F6EA6225D2C7C2FD556E2648796F7D6BFCEAEB_MetadataUsageId;
extern const uint32_t UniWebViewInterface_AddUrlScheme_m093135E876EB07E0286665C23483ED93FEF02649_MetadataUsageId;
extern const uint32_t UniWebViewInterface_AnimateTo_m37B4D301C354BD000046C696F77BC274CA7A6561_MetadataUsageId;
extern const uint32_t UniWebViewInterface_CanGoBack_m85BED7E236C3D95F4BD121AE0090AE72A40C68C3_MetadataUsageId;
extern const uint32_t UniWebViewInterface_CanGoForward_m0BD3965D49CE9F8C680418B1DD949956F626F070_MetadataUsageId;
extern const uint32_t UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467_MetadataUsageId;
extern const uint32_t UniWebViewInterface_CleanCache_m43E8616FDA422D5BF753B7D3BB8785036FD9976D_MetadataUsageId;
extern const uint32_t UniWebViewInterface_ClearCookies_m72B3F4D3528E139945C434244867FB41B1B3F0AD_MetadataUsageId;
extern const uint32_t UniWebViewInterface_ClearHttpAuthUsernamePassword_m6EC49CC8FF8E0AC636EF9C57572C51FA0373B911_MetadataUsageId;
extern const uint32_t UniWebViewInterface_ConnectMessageSender_mE96D2E06C759329F19D26A33B3794D499C373DE1_MetadataUsageId;
extern const uint32_t UniWebViewInterface_Destroy_m7345EA8903325F4165F93B52F45089296C879F32_MetadataUsageId;
extern const uint32_t UniWebViewInterface_EvaluateJavaScript_m790554C524888A5078EECC3A5AF97F5F112AE0A0_MetadataUsageId;
extern const uint32_t UniWebViewInterface_GetCookie_mC5F17BA8EA41FBE95C5A85617CBDD1822C8BFA37_MetadataUsageId;
extern const uint32_t UniWebViewInterface_GetUrl_m99AC915DE080DC8263764AD049DF1E8D47C4B480_MetadataUsageId;
extern const uint32_t UniWebViewInterface_GetUserAgent_m62ED5910A8DED966C44559700D276687B70E10A3_MetadataUsageId;
extern const uint32_t UniWebViewInterface_GetWebViewAlpha_mC4E13D24FD9F85AD3D4442061FF7F9509D0514CA_MetadataUsageId;
extern const uint32_t UniWebViewInterface_GoBack_m7B7B009A3769F2D2ABDAB1FCEE9A9AD0EC134BF1_MetadataUsageId;
extern const uint32_t UniWebViewInterface_GoForward_m69D8A8C091D3F3212C529C99C2B49DC9B56E9FC3_MetadataUsageId;
extern const uint32_t UniWebViewInterface_Hide_m9172C8D99F47706FEBA5B64BEAD2F66EB55F5791_MetadataUsageId;
extern const uint32_t UniWebViewInterface_Init_m9AE89395D39758A3D82EE41ACC341C054E2AE78A_MetadataUsageId;
extern const uint32_t UniWebViewInterface_LoadHTMLString_m8503019BDF405BBAD96ADF206BC554BC23253E9D_MetadataUsageId;
extern const uint32_t UniWebViewInterface_Load_mD590C5D4EC77275A7FB3FB675B313C17AFAE28FB_MetadataUsageId;
extern const uint32_t UniWebViewInterface_Print_m6F3083D8FCB49C0C32A624502A10CE088E074B13_MetadataUsageId;
extern const uint32_t UniWebViewInterface_Reload_mF59A428BA67116A01420C9263CECDD4913A06C44_MetadataUsageId;
extern const uint32_t UniWebViewInterface_RemoveSslExceptionDomain_m952D43F1FE6F6BE9AC15DC66D42C51780C5702C9_MetadataUsageId;
extern const uint32_t UniWebViewInterface_RemoveUrlScheme_m0F2710272BD6DAFCD3444BE3B9FEA1281D670FE5_MetadataUsageId;
extern const uint32_t UniWebViewInterface_ScrollTo_mB3A61236870EDBE9A3B5BDF0A6F52C59AFAC8F65_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SendMessage_mDAA737307C21D279A176FE30038F5B73FD5EE7CE_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetAllowAutoPlay_mA1FE6AEDCBB140C40E6063388D258EAD93A65E49_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetAllowFileAccessFromFileURLs_m0EA69CB39548A0D4FE38002B39BB38A416F41B4B_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_m62FA395AB7C15B993508ADF70AE1CD542FB66B81_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetAllowInlinePlay_m2E1A79DBB76EFCD39BAEC9AB2215355B7839C276_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetAllowJavaScriptOpenWindow_mF2AE14094B64357A385F7D593684781B0A5C4719_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetBackgroundColor_m93343F2F37B5035B19377D54AE03D22FA089C54F_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetBouncesEnabled_m670BE14C4FF7CE0057543F9B60E426B01E77AD47_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetCalloutEnabled_m1D3B59F03B1B4F2C161A25206ED80069BC887756_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetContentInsetAdjustmentBehavior_m9DE77B59ACE8CB73956A45BD81790351BA7FC2E9_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetCookie_m9ED0E7BBF1A7286A398265AFE9F5C7103D4AAC1F_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetDragInteractionEnabled_m444267791BEDCCF721858FC15E75EA558C7E3D06_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetFrame_mD15A8FFD7720039EEC147596AD8DBB6669D3865E_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetHeaderField_m6248C66E1CEAF27CDDDA66A525F1D71CBD502A22_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetHorizontalScrollBarEnabled_mEBB621A28239F91BE3CF0A20039A628DE08C0FF5_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetJavaScriptEnabled_m04D1509DD92CF1A64C68B75FA1EE79E1E5727943_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetLogLevel_mDAAD013E6D6E08D5A398610E3AAAEB3F9D681E67_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetOpenLinksInExternalBrowser_m8F1949DB73568676BA1D347DD17D78D4BA888219_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetPosition_m3B0C3B7D8278CCBEC85F1D1C9678D7CA36CF12AA_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetShowSpinnerWhileLoading_m76AA6C5A405AE0672EEE3456778B6F1921036586_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetShowToolbar_mB77E1A5B3024055BC412EF3094FA2D5B85F7EB31_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetSize_mC92E171735A32C93137E072E2B82068523DC9DB3_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetSpinnerText_mC83965466BC863A9146B220D9AD37D9B6C9B5E8A_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetToolbarDoneButtonText_m67460BCFB5A0F2C107B085C1425A243BAA2915B9_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetUserAgent_m0636D0C6ED992F5D8210FEFDC0B6A4ABAFB23B71_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetVerticalScrollBarEnabled_mBFF4CC7088166668CC7D2EF221D7336933289C68_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetWebContentsDebuggingEnabled_m306139A08DD96B8452EB76F489BC075103073503_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetWebViewAlpha_m74D9A737E3C67924CEACEF0CC38DE049892611B0_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetWindowUserResizeEnabled_mFE8B7EB0698902554BF51762DFBB6576DAE90E54_MetadataUsageId;
extern const uint32_t UniWebViewInterface_SetZoomEnabled_mFC141CAD5C05FB6BC3EFA31BA3C6EE54F9FBC5CB_MetadataUsageId;
extern const uint32_t UniWebViewInterface_Show_mDBF6C81C451078AD3BE7BA0E47660846D83612B6_MetadataUsageId;
extern const uint32_t UniWebViewInterface_Stop_m18E9AEE0A3E00D60AEE8BAD8AD4180F2D2D00A87_MetadataUsageId;
extern const uint32_t UniWebViewInterface__cctor_m9F8C8548528C4039EBF852A066FBE222B0A3CAFE_MetadataUsageId;
extern const uint32_t UniWebViewLogger_Log_m4FE9B1187AA77948F8392D731D0BC612D4BE5B3C_MetadataUsageId;
extern const uint32_t UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8_MetadataUsageId;
extern const uint32_t UniWebViewLogger_set_LogLevel_mCF8628D3C001828C3C161AACAEF65FC1F5C47721_MetadataUsageId;
extern const uint32_t UniWebViewMessage__ctor_m8E662A552E545F3D1E2CD4A86647B1F016E2E4E7_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_AddJavaScriptFinished_m51DD87F72D674E9AD89F0B3FED54FF1BAC3D7232_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_AddListener_m66CD8DDE368A077A8B0BB68FF42986F376582F72_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_AnimateToFinished_m5D2AC004AA6E6BEDC9E3A78E364E2ED8B218607F_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_EvalJavaScriptFinished_m434DE75E4D778419CB713F678A6A34ED62AD89CD_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_GetListener_mC6C1E26D38D9B13A624349A855EB6987ADAC87F3_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_HideTransitionFinished_mB02B35283155C1188BB935ED3AAC9C41F940BE98_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_MessageReceived_mF0CB9A208AD0E4A6B783A34CB8C33D0FE915579B_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_PageErrorReceived_m0B5479D3C3CACC56D6560F9EF372E3FCDFC4E17B_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_PageFinished_mEF727AF7F499209E54EEE36CAB324A506239D1C5_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_PageStarted_mF2A62902DFA901F505EC0890EDD73665266AE40F_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_RemoveListener_m9BC70FC2918E2293BE520CD3199476CE7F82FE4D_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_ShowTransitionFinished_m6E32A8F100B600BDE206322FF34D3839F7928733_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_WebContentProcessDidTerminate_mDAF690E4FB7946760A3B7FDBCF3A5E1A5287DD57_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_WebViewDone_mEB4B7007B444770580196B7853ADC00A49D77DC6_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener_WebViewKeyDown_m1C36F0F3485D9307F94D810D606F79754AD01124_MetadataUsageId;
extern const uint32_t UniWebViewNativeListener__cctor_m0CE600722963BEF508477238934BED9218EF1AC2_MetadataUsageId;
extern const uint32_t UniWebView_AddJavaScript_m9F59F108A884BF49513B28572A3024FA50B1B32D_MetadataUsageId;
extern const uint32_t UniWebView_AddSslExceptionDomain_mB66F28931A6690301361BA1213FC66CD92694570_MetadataUsageId;
extern const uint32_t UniWebView_AddUrlScheme_m1107A97210522D8329B4FDFCF57571C74AC65F82_MetadataUsageId;
extern const uint32_t UniWebView_AnimateTo_m8408BC4142E62FE39B21B62966B015B72EDEE575_MetadataUsageId;
extern const uint32_t UniWebView_Awake_m164D771EC11B2B70593746ABBB20C37026100821_MetadataUsageId;
extern const uint32_t UniWebView_CleanCache_m21AE9BD6F4843655D5235054CF298065D19F8EF9_MetadataUsageId;
extern const uint32_t UniWebView_ClearCookies_mB3B9BB5247C9A0680F1B8E7F77A73668CC79A98E_MetadataUsageId;
extern const uint32_t UniWebView_ClearHttpAuthUsernamePassword_mFBF4286115988BBA6336BB32A4CAD56367598480_MetadataUsageId;
extern const uint32_t UniWebView_EvaluateJavaScript_mF02AD8F18B6CC9295D851DCED539B3A23A20948F_MetadataUsageId;
extern const uint32_t UniWebView_GetCookie_m4A45536B78FC05E3C3DE4056EDBA0A80D14F9175_MetadataUsageId;
extern const uint32_t UniWebView_GetHTMLContent_mF48697BDC2B50334B33DBA0AF913FB8337BC11A5_MetadataUsageId;
extern const uint32_t UniWebView_GetUserAgent_mA896DF253A148E240F9B51CC1DD40BA267C3CB7C_MetadataUsageId;
extern const uint32_t UniWebView_GoBack_mFB0F0C148B228947D5DD6ACDBD255A66A13FF8C2_MetadataUsageId;
extern const uint32_t UniWebView_GoForward_m177CC0C47552D4D77CA28872CD82940F8DE05B35_MetadataUsageId;
extern const uint32_t UniWebView_Hide_mDBD3CA6C1F42CC695188CFFC4F7F4B1ADB6EBC4E_MetadataUsageId;
extern const uint32_t UniWebView_InternalOnAddJavaScriptFinished_mE643B519375F8A85AFA04C199624DF4E172FD6D5_MetadataUsageId;
extern const uint32_t UniWebView_InternalOnAnimateToFinished_m2486792057F058A88CC3F489034D0487B6FBD4F8_MetadataUsageId;
extern const uint32_t UniWebView_InternalOnEvalJavaScriptFinished_mA4C5FF23D930C98CE746642E7114340FF830D2A8_MetadataUsageId;
extern const uint32_t UniWebView_InternalOnHideTransitionFinished_mF460676425275EB554B59E1A746819D7D1B8B6A5_MetadataUsageId;
extern const uint32_t UniWebView_InternalOnPageErrorReceived_mD96650FCD2788D0EA6B4950236A1BA5904A354E4_MetadataUsageId;
extern const uint32_t UniWebView_InternalOnPageFinished_m66D50B18FA57FB39FBBFDA22A23E1C2B3ECAB063_MetadataUsageId;
extern const uint32_t UniWebView_InternalOnShouldClose_m4996AE2EF6FF169504485BE9E87607844490AD26_MetadataUsageId;
extern const uint32_t UniWebView_InternalOnShowTransitionFinished_m675ACF3ED200F80D5C7D9BDE4BDE94296812FB16_MetadataUsageId;
extern const uint32_t UniWebView_LoadHTMLString_m9E5C0E8E37B7A7C4EB9AF9031972011750F8CC3F_MetadataUsageId;
extern const uint32_t UniWebView_Load_m27CFE9E72534ABEAEA16DE6AAABF6C7556305B6E_MetadataUsageId;
extern const uint32_t UniWebView_NextFrameRect_m1F89703962C698142518400DC872743B55AD4A00_MetadataUsageId;
extern const uint32_t UniWebView_OnDestroy_m152FC94439188B84D99991FF93709E84812F95BD_MetadataUsageId;
extern const uint32_t UniWebView_Print_m50D6099D14BD874CE4CC29DBAE5C9035E83F8F68_MetadataUsageId;
extern const uint32_t UniWebView_Reload_mD05D118C2EFBFFE2D5C514E014159563985B4846_MetadataUsageId;
extern const uint32_t UniWebView_RemoveSslExceptionDomain_mFED1AC58CF9E385113D6429E27D9ED1ABCE0DACA_MetadataUsageId;
extern const uint32_t UniWebView_RemoveUrlScheme_m569A655527D022388A52614D00511890CD2363B1_MetadataUsageId;
extern const uint32_t UniWebView_ScrollTo_m0C9957B19A8C83F7AE9911B6203FB5F74B437297_MetadataUsageId;
extern const uint32_t UniWebView_SetAllowAutoPlay_mAEFF89B32B2CF23F49D0586B2050A0436DCDBB0A_MetadataUsageId;
extern const uint32_t UniWebView_SetAllowFileAccessFromFileURLs_mEAD2CA59C767ACA24CF087550CAB1B46B7A084C7_MetadataUsageId;
extern const uint32_t UniWebView_SetAllowHTTPAuthPopUpWindow_mDAABDC88FC1166C37D9378BC0FAA42D1C46DE513_MetadataUsageId;
extern const uint32_t UniWebView_SetAllowInlinePlay_m73344B1F021A7C9E05978B7257159908BA7E635F_MetadataUsageId;
extern const uint32_t UniWebView_SetAllowJavaScriptOpenWindow_mEFE7413B096E8704C8078DFB27D554F7278332BD_MetadataUsageId;
extern const uint32_t UniWebView_SetBouncesEnabled_m5A4E834027F96962D28F89A249593D762DB4C249_MetadataUsageId;
extern const uint32_t UniWebView_SetCalloutEnabled_m205016D6E672799B6EBD56AC6B7B32C494DA9BC8_MetadataUsageId;
extern const uint32_t UniWebView_SetContentInsetAdjustmentBehavior_m1A6AC3954BD429C447F0606AAC378586E6DABBEA_MetadataUsageId;
extern const uint32_t UniWebView_SetCookie_m1DF664FEE49AF9914C885FF3180DD8C828A073EE_MetadataUsageId;
extern const uint32_t UniWebView_SetDragInteractionEnabled_m55D2FD6C78871DB7E325BDF9742FE6ECB2B051D5_MetadataUsageId;
extern const uint32_t UniWebView_SetHeaderField_m270C02C536C52955ACDED59A8E57A45614D19F92_MetadataUsageId;
extern const uint32_t UniWebView_SetHorizontalScrollBarEnabled_mD7982E64E2B6C6440C411700163BC4B20DD91EC0_MetadataUsageId;
extern const uint32_t UniWebView_SetJavaScriptEnabled_m6771A574762BBF709D67FE1BA7852B269CB52498_MetadataUsageId;
extern const uint32_t UniWebView_SetOpenLinksInExternalBrowser_mB439E5F17D6C92CB3C293002BCD3A94DB6FD43B8_MetadataUsageId;
extern const uint32_t UniWebView_SetShowSpinnerWhileLoading_m288CB26A2D602685D7984DF5AC6B18F4CA73238C_MetadataUsageId;
extern const uint32_t UniWebView_SetShowToolbar_m84AF66B0BA267BFE87B295C6AF9D077BCACE8A5C_MetadataUsageId;
extern const uint32_t UniWebView_SetSpinnerText_m67EF13829067CF4C139F53B30A527E3A4EC46E37_MetadataUsageId;
extern const uint32_t UniWebView_SetToolbarDoneButtonText_m8674C7441C8E9B59BEAC06CC876434C2B3FAD66A_MetadataUsageId;
extern const uint32_t UniWebView_SetUserAgent_mCEF71342B3DF49EA568197BA7122C89CCD2CBC43_MetadataUsageId;
extern const uint32_t UniWebView_SetVerticalScrollBarEnabled_mB68E19A554DBA4AD4B6A823845887636028D851B_MetadataUsageId;
extern const uint32_t UniWebView_SetWebContentsDebuggingEnabled_mAA1AE7F06282D0C3C06B5EA5DF17187B3584B19E_MetadataUsageId;
extern const uint32_t UniWebView_SetWindowUserResizeEnabled_m4CF297207C470742418D02C048AAB1BDCCFDDE25_MetadataUsageId;
extern const uint32_t UniWebView_SetZoomEnabled_m0E42D6000733C8880C59617EAEE33C5B876F5E69_MetadataUsageId;
extern const uint32_t UniWebView_Show_m900E118C2CE18F8DBB39C49E4E25948478FC4102_MetadataUsageId;
extern const uint32_t UniWebView_Start_m6125294DDD520BFE2345ACBFE54276AFE505D11F_MetadataUsageId;
extern const uint32_t UniWebView_Stop_m7225CD5C1AB020518602C4DE16DC377ED3D5EA24_MetadataUsageId;
extern const uint32_t UniWebView_UpdateFrame_m93DF63C1B824C4EB185CC45D48EE846A76E9606E_MetadataUsageId;
extern const uint32_t UniWebView_Update_mA81453C5D2F707BBF8CF10BED59DFF0826631C13_MetadataUsageId;
extern const uint32_t UniWebView__ctor_m3A85D8AA67F3C62F2651D19AF2C71D431355F1E1_MetadataUsageId;
extern const uint32_t UniWebView_add_OnKeyCodeReceived_m12061277F3A155EF8EAD34F09D096AA876CAD2D3_MetadataUsageId;
extern const uint32_t UniWebView_add_OnMessageReceived_m464E414C7161A9199A4C754AB168AEADE5D215E7_MetadataUsageId;
extern const uint32_t UniWebView_add_OnOreintationChanged_m0E9972BCE87764BE69E499F2E372EA871CAB908D_MetadataUsageId;
extern const uint32_t UniWebView_add_OnOrientationChanged_m4368C8554E3220329EB39A4CA637F7BCB52AFC29_MetadataUsageId;
extern const uint32_t UniWebView_add_OnPageErrorReceived_m7781B02F743510F2FDFAAFC1D895F42AC5B342BA_MetadataUsageId;
extern const uint32_t UniWebView_add_OnPageFinished_m534C3632F3245390FDEEF7741F90C002E62B9F63_MetadataUsageId;
extern const uint32_t UniWebView_add_OnPageStarted_m5B48F82C490A334824AE27FADCA951F6649DE9B3_MetadataUsageId;
extern const uint32_t UniWebView_add_OnShouldClose_mF4E8FADA63C9F8549DA92D3C46097F334826D887_MetadataUsageId;
extern const uint32_t UniWebView_add_OnWebContentProcessTerminated_m639DC5CE6C344F05843EB11CD6F237F12948A2CC_MetadataUsageId;
extern const uint32_t UniWebView_get_Alpha_mF4CE3BCA2CCF41A98566C0CA805586C661C48BDF_MetadataUsageId;
extern const uint32_t UniWebView_get_CanGoBack_m41A24E2CDFAB03B32A3D31CB11C52D07003C85AA_MetadataUsageId;
extern const uint32_t UniWebView_get_CanGoForward_m36DDA52762D994B05C974C4A674AFCD611950A60_MetadataUsageId;
extern const uint32_t UniWebView_get_Url_mE68DD775BFA61BF9183D3D6F72D1BB5034E9CA9F_MetadataUsageId;
extern const uint32_t UniWebView_remove_OnKeyCodeReceived_m2D9DD2650657092A57165D5B7C4EB6BD3733ED7E_MetadataUsageId;
extern const uint32_t UniWebView_remove_OnMessageReceived_mCE6F1E9392F7570159368768BFA9FB2A332666A0_MetadataUsageId;
extern const uint32_t UniWebView_remove_OnOreintationChanged_m2C41802A75A28307B9A419CD37B6F6E8BB2E4967_MetadataUsageId;
extern const uint32_t UniWebView_remove_OnOrientationChanged_mE91A3626157D7F3F32354B1E29F5CD48CD171382_MetadataUsageId;
extern const uint32_t UniWebView_remove_OnPageErrorReceived_mECD672EE600B43249C2334800606EED753C9BA2F_MetadataUsageId;
extern const uint32_t UniWebView_remove_OnPageFinished_m8A590979F41AFEC55A39193813B5BA1C0ADDCCB1_MetadataUsageId;
extern const uint32_t UniWebView_remove_OnPageStarted_mC1681EDF5820E94D9F8E86D012A7D6A54846895A_MetadataUsageId;
extern const uint32_t UniWebView_remove_OnShouldClose_m7BD8ECC77CCD181E7F0B84432BF00E9EEF3B7451_MetadataUsageId;
extern const uint32_t UniWebView_remove_OnWebContentProcessTerminated_m97D93E6AEE619308DDD55B7A0D681CD2D847C332_MetadataUsageId;
extern const uint32_t UniWebView_set_Alpha_m6F25F5D539203919421D5DBB3293F15339655CE7_MetadataUsageId;
extern const uint32_t UniWebView_set_BackgroundColor_m87B8A08F4B3D5B8539BA397A6887B73DABBCEB10_MetadataUsageId;
extern const uint32_t UnitySendMessageDelegate_BeginInvoke_mFBD0F11B75C713FA23D56C9BC44B5133352CFEEE_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


#ifndef U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#define U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T6CDDDF959E7E18A6744E43B613F41CDAC780256A_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T6869420B5ACFF0569A65586D45920B0F608DDB45_H
#define DICTIONARY_2_T6869420B5ACFF0569A65586D45920B0F608DDB45_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Action>
struct  Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t60E6EC065E40BD0A6BC7DF76ECF8F26C67218395* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t762621FB6F857FFFC25832E22A9718C71B37BE7F * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t7728674343F0E38E27CC631FB3392DEA3C386B45 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ___entries_1)); }
	inline EntryU5BU5D_t60E6EC065E40BD0A6BC7DF76ECF8F26C67218395* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t60E6EC065E40BD0A6BC7DF76ECF8F26C67218395** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t60E6EC065E40BD0A6BC7DF76ECF8F26C67218395* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ___keys_7)); }
	inline KeyCollection_t762621FB6F857FFFC25832E22A9718C71B37BE7F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t762621FB6F857FFFC25832E22A9718C71B37BE7F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t762621FB6F857FFFC25832E22A9718C71B37BE7F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ___values_8)); }
	inline ValueCollection_t7728674343F0E38E27CC631FB3392DEA3C386B45 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t7728674343F0E38E27CC631FB3392DEA3C386B45 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t7728674343F0E38E27CC631FB3392DEA3C386B45 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T6869420B5ACFF0569A65586D45920B0F608DDB45_H
#ifndef DICTIONARY_2_TF7EF1EBF77E39D94C275304B89431CE3F887E216_H
#define DICTIONARY_2_TF7EF1EBF77E39D94C275304B89431CE3F887E216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>
struct  Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBE8D4CCC46F6F23C9FDDF3FEEF34DF98D24CC6DC* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t2FE64B17B86A4071AE5C2142EA119D5903CF938B * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2789EDB36934FE93A79EDF933713294B8D422933 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ___entries_1)); }
	inline EntryU5BU5D_tBE8D4CCC46F6F23C9FDDF3FEEF34DF98D24CC6DC* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBE8D4CCC46F6F23C9FDDF3FEEF34DF98D24CC6DC** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBE8D4CCC46F6F23C9FDDF3FEEF34DF98D24CC6DC* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ___keys_7)); }
	inline KeyCollection_t2FE64B17B86A4071AE5C2142EA119D5903CF938B * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t2FE64B17B86A4071AE5C2142EA119D5903CF938B ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t2FE64B17B86A4071AE5C2142EA119D5903CF938B * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ___values_8)); }
	inline ValueCollection_t2789EDB36934FE93A79EDF933713294B8D422933 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2789EDB36934FE93A79EDF933713294B8D422933 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2789EDB36934FE93A79EDF933713294B8D422933 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TF7EF1EBF77E39D94C275304B89431CE3F887E216_H
#ifndef DICTIONARY_2_T931BF283048C4E74FC063C3036E5F3FE328861FC_H
#define DICTIONARY_2_T931BF283048C4E74FC063C3036E5F3FE328861FC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___entries_1)); }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t034347107F1D23C91DE1D712EA637D904789415C* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___keys_7)); }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC73654392B284B89334464107B696C9BD89776D9 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ___values_8)); }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA3B972EF56F7C97E35054155C33556C55FAAFD43 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T931BF283048C4E74FC063C3036E5F3FE328861FC_H
#ifndef DICTIONARY_2_TC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69_H
#define DICTIONARY_2_TC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>
struct  Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t04C5D748F087511AF266F863E357FDD5146AF93E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tF13E05C63B80315401AE651F7D8D12BEA113C3F6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t18FAC282B0DBACFF0CD77D75840FD560F3E56473 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ___entries_1)); }
	inline EntryU5BU5D_t04C5D748F087511AF266F863E357FDD5146AF93E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t04C5D748F087511AF266F863E357FDD5146AF93E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t04C5D748F087511AF266F863E357FDD5146AF93E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ___keys_7)); }
	inline KeyCollection_tF13E05C63B80315401AE651F7D8D12BEA113C3F6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tF13E05C63B80315401AE651F7D8D12BEA113C3F6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tF13E05C63B80315401AE651F7D8D12BEA113C3F6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ___values_8)); }
	inline ValueCollection_t18FAC282B0DBACFF0CD77D75840FD560F3E56473 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t18FAC282B0DBACFF0CD77D75840FD560F3E56473 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t18FAC282B0DBACFF0CD77D75840FD560F3E56473 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef AUTHENTICATIONHEADERVALUE_TC285A16C25538CA86FA59B88CC25E6999BB5F1A6_H
#define AUTHENTICATIONHEADERVALUE_TC285A16C25538CA86FA59B88CC25E6999BB5F1A6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.Headers.AuthenticationHeaderValue
struct  AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6  : public RuntimeObject
{
public:
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Parameter>k__BackingField
	String_t* ___U3CParameterU3Ek__BackingField_0;
	// System.String System.Net.Http.Headers.AuthenticationHeaderValue::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CParameterU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6, ___U3CParameterU3Ek__BackingField_0)); }
	inline String_t* get_U3CParameterU3Ek__BackingField_0() const { return ___U3CParameterU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CParameterU3Ek__BackingField_0() { return &___U3CParameterU3Ek__BackingField_0; }
	inline void set_U3CParameterU3Ek__BackingField_0(String_t* value)
	{
		___U3CParameterU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CParameterU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CSchemeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6, ___U3CSchemeU3Ek__BackingField_1)); }
	inline String_t* get_U3CSchemeU3Ek__BackingField_1() const { return ___U3CSchemeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSchemeU3Ek__BackingField_1() { return &___U3CSchemeU3Ek__BackingField_1; }
	inline void set_U3CSchemeU3Ek__BackingField_1(String_t* value)
	{
		___U3CSchemeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSchemeU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONHEADERVALUE_TC285A16C25538CA86FA59B88CC25E6999BB5F1A6_H
#ifndef HTTPCONTENT_T678722F60CA151DD19AFCA917657BE24F111A41D_H
#define HTTPCONTENT_T678722F60CA151DD19AFCA917657BE24F111A41D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.HttpContent
struct  HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D  : public RuntimeObject
{
public:
	// System.Net.Http.HttpContent_FixedMemoryStream System.Net.Http.HttpContent::buffer
	FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C * ___buffer_0;
	// System.Boolean System.Net.Http.HttpContent::disposed
	bool ___disposed_1;
	// System.Net.Http.Headers.HttpContentHeaders System.Net.Http.HttpContent::headers
	HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * ___headers_2;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___buffer_0)); }
	inline FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C * get_buffer_0() const { return ___buffer_0; }
	inline FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(FixedMemoryStream_t181662654A3A2002A1F5D33E7747A9E12DAD139C * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_0), value);
	}

	inline static int32_t get_offset_of_disposed_1() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___disposed_1)); }
	inline bool get_disposed_1() const { return ___disposed_1; }
	inline bool* get_address_of_disposed_1() { return &___disposed_1; }
	inline void set_disposed_1(bool value)
	{
		___disposed_1 = value;
	}

	inline static int32_t get_offset_of_headers_2() { return static_cast<int32_t>(offsetof(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D, ___headers_2)); }
	inline HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * get_headers_2() const { return ___headers_2; }
	inline HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 ** get_address_of_headers_2() { return &___headers_2; }
	inline void set_headers_2(HttpContentHeaders_t98D8657573ADACD807B6C941F46E6D69EDFD13A0 * value)
	{
		___headers_2 = value;
		Il2CppCodeGenWriteBarrier((&___headers_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPCONTENT_T678722F60CA151DD19AFCA917657BE24F111A41D_H
#ifndef HTTPMESSAGEINVOKER_T7270E2BED3201CE430D6C4BECF923454AA526A72_H
#define HTTPMESSAGEINVOKER_T7270E2BED3201CE430D6C4BECF923454AA526A72_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.HttpMessageInvoker
struct  HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72  : public RuntimeObject
{
public:
	// System.Net.Http.HttpMessageHandler System.Net.Http.HttpMessageInvoker::handler
	HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894 * ___handler_0;
	// System.Boolean System.Net.Http.HttpMessageInvoker::disposeHandler
	bool ___disposeHandler_1;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72, ___handler_0)); }
	inline HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894 * get_handler_0() const { return ___handler_0; }
	inline HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894 ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(HttpMessageHandler_t0094EF2850CF6420CBFC3952ED337AD381644894 * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}

	inline static int32_t get_offset_of_disposeHandler_1() { return static_cast<int32_t>(offsetof(HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72, ___disposeHandler_1)); }
	inline bool get_disposeHandler_1() const { return ___disposeHandler_1; }
	inline bool* get_address_of_disposeHandler_1() { return &___disposeHandler_1; }
	inline void set_disposeHandler_1(bool value)
	{
		___disposeHandler_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPMESSAGEINVOKER_T7270E2BED3201CE430D6C4BECF923454AA526A72_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#define VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};
#endif // VALUETYPE_T4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_H
#ifndef U3CU3EC__DISPLAYCLASS116_0_T5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8_H
#define U3CU3EC__DISPLAYCLASS116_0_T5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_<>c__DisplayClass116_0
struct  U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8  : public RuntimeObject
{
public:
	// System.Action`1<System.String> UniWebView_<>c__DisplayClass116_0::handler
	Action_1_t19CAF500829927B30EC94F39939F749E4919669E * ___handler_0;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8, ___handler_0)); }
	inline Action_1_t19CAF500829927B30EC94F39939F749E4919669E * get_handler_0() const { return ___handler_0; }
	inline Action_1_t19CAF500829927B30EC94F39939F749E4919669E ** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(Action_1_t19CAF500829927B30EC94F39939F749E4919669E * value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((&___handler_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CU3EC__DISPLAYCLASS116_0_T5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8_H
#ifndef UNIWEBVIEWHELPER_T8768407D2ECCF39080CB4D426A7AD65CC6F7A2D3_H
#define UNIWEBVIEWHELPER_T8768407D2ECCF39080CB4D426A7AD65CC6F7A2D3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewHelper
struct  UniWebViewHelper_t8768407D2ECCF39080CB4D426A7AD65CC6F7A2D3  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEWHELPER_T8768407D2ECCF39080CB4D426A7AD65CC6F7A2D3_H
#ifndef UNIWEBVIEWINTERFACE_TE89E48E7F735126B06DE035E92DEFEFCA294E2CF_H
#define UNIWEBVIEWINTERFACE_TE89E48E7F735126B06DE035E92DEFEFCA294E2CF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewInterface
struct  UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF  : public RuntimeObject
{
public:

public:
};

struct UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_StaticFields
{
public:
	// System.Boolean UniWebViewInterface::correctPlatform
	bool ___correctPlatform_1;

public:
	inline static int32_t get_offset_of_correctPlatform_1() { return static_cast<int32_t>(offsetof(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_StaticFields, ___correctPlatform_1)); }
	inline bool get_correctPlatform_1() const { return ___correctPlatform_1; }
	inline bool* get_address_of_correctPlatform_1() { return &___correctPlatform_1; }
	inline void set_correctPlatform_1(bool value)
	{
		___correctPlatform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEWINTERFACE_TE89E48E7F735126B06DE035E92DEFEFCA294E2CF_H
#ifndef UNIWEBVIEWNATIVERESULTPAYLOAD_T3A9397FEF18D4CB032484A81370D6BC52767730C_H
#define UNIWEBVIEWNATIVERESULTPAYLOAD_T3A9397FEF18D4CB032484A81370D6BC52767730C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewNativeResultPayload
struct  UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C  : public RuntimeObject
{
public:
	// System.String UniWebViewNativeResultPayload::identifier
	String_t* ___identifier_0;
	// System.String UniWebViewNativeResultPayload::resultCode
	String_t* ___resultCode_1;
	// System.String UniWebViewNativeResultPayload::data
	String_t* ___data_2;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___identifier_0), value);
	}

	inline static int32_t get_offset_of_resultCode_1() { return static_cast<int32_t>(offsetof(UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C, ___resultCode_1)); }
	inline String_t* get_resultCode_1() const { return ___resultCode_1; }
	inline String_t** get_address_of_resultCode_1() { return &___resultCode_1; }
	inline void set_resultCode_1(String_t* value)
	{
		___resultCode_1 = value;
		Il2CppCodeGenWriteBarrier((&___resultCode_1), value);
	}

	inline static int32_t get_offset_of_data_2() { return static_cast<int32_t>(offsetof(UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C, ___data_2)); }
	inline String_t* get_data_2() const { return ___data_2; }
	inline String_t** get_address_of_data_2() { return &___data_2; }
	inline void set_data_2(String_t* value)
	{
		___data_2 = value;
		Il2CppCodeGenWriteBarrier((&___data_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEWNATIVERESULTPAYLOAD_T3A9397FEF18D4CB032484A81370D6BC52767730C_H
#ifndef BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#define BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_TB53F6830F670160873277339AA58F15CAED4399C_H
#ifndef CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#define CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_TBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_H
#ifndef ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#define ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};
#endif // ENUM_T2AF27C02B8653AE29442467390005ABC74D8F521_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t12277F7F965BA79C54E4B3BFABD27A5FFB725EE2 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#define INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T585191389E07734F19F3156FF88FB3EF4800D102_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef BYTEARRAYCONTENT_TF2A1547D3A78F18BA3CAE0E26CCC01B0C883DCCA_H
#define BYTEARRAYCONTENT_TF2A1547D3A78F18BA3CAE0E26CCC01B0C883DCCA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.ByteArrayContent
struct  ByteArrayContent_tF2A1547D3A78F18BA3CAE0E26CCC01B0C883DCCA  : public HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D
{
public:
	// System.Byte[] System.Net.Http.ByteArrayContent::content
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___content_3;
	// System.Int32 System.Net.Http.ByteArrayContent::offset
	int32_t ___offset_4;
	// System.Int32 System.Net.Http.ByteArrayContent::count
	int32_t ___count_5;

public:
	inline static int32_t get_offset_of_content_3() { return static_cast<int32_t>(offsetof(ByteArrayContent_tF2A1547D3A78F18BA3CAE0E26CCC01B0C883DCCA, ___content_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_content_3() const { return ___content_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_content_3() { return &___content_3; }
	inline void set_content_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___content_3 = value;
		Il2CppCodeGenWriteBarrier((&___content_3), value);
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(ByteArrayContent_tF2A1547D3A78F18BA3CAE0E26CCC01B0C883DCCA, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(ByteArrayContent_tF2A1547D3A78F18BA3CAE0E26CCC01B0C883DCCA, ___count_5)); }
	inline int32_t get_count_5() const { return ___count_5; }
	inline int32_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(int32_t value)
	{
		___count_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEARRAYCONTENT_TF2A1547D3A78F18BA3CAE0E26CCC01B0C883DCCA_H
#ifndef NULLABLE_1_T9E6A67BECE376F0623B5C857F5674A0311C41793_H
#define NULLABLE_1_T9E6A67BECE376F0623B5C857F5674A0311C41793_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Nullable`1<System.Boolean>
struct  Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLE_1_T9E6A67BECE376F0623B5C857F5674A0311C41793_H
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
#ifndef ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#define ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct  AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 
{
public:
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___m_defaultContextAction_1;

public:
	inline static int32_t get_offset_of_m_stateMachine_0() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_stateMachine_0)); }
	inline RuntimeObject* get_m_stateMachine_0() const { return ___m_stateMachine_0; }
	inline RuntimeObject** get_address_of_m_stateMachine_0() { return &___m_stateMachine_0; }
	inline void set_m_stateMachine_0(RuntimeObject* value)
	{
		___m_stateMachine_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateMachine_0), value);
	}

	inline static int32_t get_offset_of_m_defaultContextAction_1() { return static_cast<int32_t>(offsetof(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01, ___m_defaultContextAction_1)); }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * get_m_defaultContextAction_1() const { return ___m_defaultContextAction_1; }
	inline Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** get_address_of_m_defaultContextAction_1() { return &___m_defaultContextAction_1; }
	inline void set_m_defaultContextAction_1(Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * value)
	{
		___m_defaultContextAction_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_defaultContextAction_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
#endif // ASYNCMETHODBUILDERCORE_T4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01_H
#ifndef TASKAWAITER_1_T0CD71BC02837B0D53252196D19DABDA73A615B86_H
#define TASKAWAITER_1_T0CD71BC02837B0D53252196D19DABDA73A615B86_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>
struct  TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86, ___m_task_0)); }
	inline Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T0CD71BC02837B0D53252196D19DABDA73A615B86_H
#ifndef TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#define TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977, ___m_task_0)); }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_H
#ifndef TASKAWAITER_1_T614647F82D882519EA620421E613B1DB6A463483_H
#define TASKAWAITER_1_T614647F82D882519EA620421E613B1DB6A463483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct  TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483, ___m_task_0)); }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKAWAITER_1_T614647F82D882519EA620421E613B1DB6A463483_H
#ifndef SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#define SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_H
#ifndef SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#define SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T5380468142AA850BE4A341D7AF3EAB9C78746782_H
#ifndef VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#define VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T22962CB4C05B1D89B55A6E1139F0E87A90987017_H
#ifndef UNIWEBVIEWMESSAGE_TAC6CC5EC4233D8B92FB19548180D216E36A42EC3_H
#define UNIWEBVIEWMESSAGE_TAC6CC5EC4233D8B92FB19548180D216E36A42EC3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewMessage
struct  UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 
{
public:
	// System.String UniWebViewMessage::<RawMessage>k__BackingField
	String_t* ___U3CRawMessageU3Ek__BackingField_0;
	// System.String UniWebViewMessage::<Scheme>k__BackingField
	String_t* ___U3CSchemeU3Ek__BackingField_1;
	// System.String UniWebViewMessage::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::<Args>k__BackingField
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___U3CArgsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CRawMessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3, ___U3CRawMessageU3Ek__BackingField_0)); }
	inline String_t* get_U3CRawMessageU3Ek__BackingField_0() const { return ___U3CRawMessageU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CRawMessageU3Ek__BackingField_0() { return &___U3CRawMessageU3Ek__BackingField_0; }
	inline void set_U3CRawMessageU3Ek__BackingField_0(String_t* value)
	{
		___U3CRawMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRawMessageU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CSchemeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3, ___U3CSchemeU3Ek__BackingField_1)); }
	inline String_t* get_U3CSchemeU3Ek__BackingField_1() const { return ___U3CSchemeU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CSchemeU3Ek__BackingField_1() { return &___U3CSchemeU3Ek__BackingField_1; }
	inline void set_U3CSchemeU3Ek__BackingField_1(String_t* value)
	{
		___U3CSchemeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSchemeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3, ___U3CPathU3Ek__BackingField_2)); }
	inline String_t* get_U3CPathU3Ek__BackingField_2() const { return ___U3CPathU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_2() { return &___U3CPathU3Ek__BackingField_2; }
	inline void set_U3CPathU3Ek__BackingField_2(String_t* value)
	{
		___U3CPathU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPathU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CArgsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3, ___U3CArgsU3Ek__BackingField_3)); }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * get_U3CArgsU3Ek__BackingField_3() const { return ___U3CArgsU3Ek__BackingField_3; }
	inline Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC ** get_address_of_U3CArgsU3Ek__BackingField_3() { return &___U3CArgsU3Ek__BackingField_3; }
	inline void set_U3CArgsU3Ek__BackingField_3(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * value)
	{
		___U3CArgsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CArgsU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UniWebViewMessage
struct UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshaled_pinvoke
{
	char* ___U3CRawMessageU3Ek__BackingField_0;
	char* ___U3CSchemeU3Ek__BackingField_1;
	char* ___U3CPathU3Ek__BackingField_2;
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___U3CArgsU3Ek__BackingField_3;
};
// Native definition for COM marshalling of UniWebViewMessage
struct UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshaled_com
{
	Il2CppChar* ___U3CRawMessageU3Ek__BackingField_0;
	Il2CppChar* ___U3CSchemeU3Ek__BackingField_1;
	Il2CppChar* ___U3CPathU3Ek__BackingField_2;
	Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___U3CArgsU3Ek__BackingField_3;
};
#endif // UNIWEBVIEWMESSAGE_TAC6CC5EC4233D8B92FB19548180D216E36A42EC3_H
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifndef RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#define RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T35B976DE901B5423C11705E156938EA27AB402CE_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T_H
#ifndef INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#define INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T0530E734D823F78310CAFAFA424CA5164D93A1F1_H
#ifndef HTTPHEADERKIND_TB1DD187D27BCE76C6EC20628350D06F1802F9F97_H
#define HTTPHEADERKIND_TB1DD187D27BCE76C6EC20628350D06F1802F9F97_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.Headers.HttpHeaderKind
struct  HttpHeaderKind_tB1DD187D27BCE76C6EC20628350D06F1802F9F97 
{
public:
	// System.Int32 System.Net.Http.Headers.HttpHeaderKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpHeaderKind_tB1DD187D27BCE76C6EC20628350D06F1802F9F97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPHEADERKIND_TB1DD187D27BCE76C6EC20628350D06F1802F9F97_H
#ifndef STRINGCONTENT_T0E49805143AA8BCE4640914150158663B9061079_H
#define STRINGCONTENT_T0E49805143AA8BCE4640914150158663B9061079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.StringContent
struct  StringContent_t0E49805143AA8BCE4640914150158663B9061079  : public ByteArrayContent_tF2A1547D3A78F18BA3CAE0E26CCC01B0C883DCCA
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONTENT_T0E49805143AA8BCE4640914150158663B9061079_H
#ifndef HTTPSTATUSCODE_TEEC31491D56EE5BDB252F07906878274FD22AC0C_H
#define HTTPSTATUSCODE_TEEC31491D56EE5BDB252F07906878274FD22AC0C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpStatusCode
struct  HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tEEC31491D56EE5BDB252F07906878274FD22AC0C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPSTATUSCODE_TEEC31491D56EE5BDB252F07906878274FD22AC0C_H
#ifndef BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#define BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_TE35C91D046E63A1B92BB9AB909FCF9DA84379ED0_H
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef ASYNCTASKMETHODBUILDER_1_T66ED1808B26B8081A2804D6A750D13386E360BD9_H
#define ASYNCTASKMETHODBUILDER_1_T66ED1808B26B8081A2804D6A750D13386E360BD9_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct  AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 
{
public:
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___m_task_2;

public:
	inline static int32_t get_offset_of_m_coreState_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_coreState_1)); }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  get_m_coreState_1() const { return ___m_coreState_1; }
	inline AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01 * get_address_of_m_coreState_1() { return &___m_coreState_1; }
	inline void set_m_coreState_1(AsyncMethodBuilderCore_t4CE6C1E4B0621A6EC45CF6E0E8F1F633FFF9FF01  value)
	{
		___m_coreState_1 = value;
	}

	inline static int32_t get_offset_of_m_task_2() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9, ___m_task_2)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_m_task_2() const { return ___m_task_2; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_m_task_2() { return &___m_task_2; }
	inline void set_m_task_2(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___m_task_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_task_2), value);
	}
};

struct AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_defaultResultTask_0;

public:
	inline static int32_t get_offset_of_s_defaultResultTask_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9_StaticFields, ___s_defaultResultTask_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_defaultResultTask_0() const { return ___s_defaultResultTask_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_defaultResultTask_0() { return &___s_defaultResultTask_0; }
	inline void set_s_defaultResultTask_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_defaultResultTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_defaultResultTask_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCTASKMETHODBUILDER_1_T66ED1808B26B8081A2804D6A750D13386E360BD9_H
#ifndef RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#define RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T7B542280A22F0EC4EAC2061C29178845847A8B2D_H
#ifndef STRINGSPLITOPTIONS_T2FA287E15325CC78BF3CA5CDAAA3520BFBD58487_H
#define STRINGSPLITOPTIONS_T2FA287E15325CC78BF3CA5CDAAA3520BFBD58487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t2FA287E15325CC78BF3CA5CDAAA3520BFBD58487 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringSplitOptions_t2FA287E15325CC78BF3CA5CDAAA3520BFBD58487, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGSPLITOPTIONS_T2FA287E15325CC78BF3CA5CDAAA3520BFBD58487_H
#ifndef TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#define TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_action_5), value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_stateObject_6), value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_taskScheduler_7)); }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t966F2798F198FA90A0DA8EFC92BAC08297793114 * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_taskScheduler_7), value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_parent_8)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_parent_8), value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_continuationObject_10), value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2, ___m_contingentProperties_15)); }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t7149A27D01507C74E8BDAAA3848B45D2644FDF08 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_contingentProperties_15), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_factory_3)); }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_tF3C6D983390ACFB40B4979E225368F78006D6155 * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_factory_3), value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCompletionSentinel_11), value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_t70161CFEB8DA3C79E19E31D0ED948D3C2925095F * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((&___s_currentActiveTasks_13), value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((&___s_activeTasksLock_14), value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_taskCancelCallback_16), value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_t48C2978A48CE3F2F6EB5B6DE269D00746483BB1F * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_createContingentProperties_17), value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_completedTask_18)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_completedTask_18), value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tF4286C34BB184CE5690FDCEBA7F09FC68D229335 * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsExceptionObservedByParentPredicate_19), value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t8AE8A965AC6C7ECD396F527F15CDC8E683BE1676 * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((&___s_ecCallback_20), value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((&___s_IsTaskContinuationNullPredicate_21), value);
	}
};

struct Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_currentTask_0), value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_tE431ED3BBD1A18705FEE6F948EBF7FA2E99D64A9 * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((&___t_stackGuard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T1F48C203E163126EBC69ACCA679D1A462DEE9EB2_H
#ifndef TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#define TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_19)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_21)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_TA8069278ACE8A74D6DF7D514A9CD4432433F64C4_H
#ifndef UNIWEBVIEWCONTENTINSETADJUSTMENTBEHAVIOR_T8904EE64EB078E94C3BF45CC31C56C1AC83D6AEC_H
#define UNIWEBVIEWCONTENTINSETADJUSTMENTBEHAVIOR_T8904EE64EB078E94C3BF45CC31C56C1AC83D6AEC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewContentInsetAdjustmentBehavior
struct  UniWebViewContentInsetAdjustmentBehavior_t8904EE64EB078E94C3BF45CC31C56C1AC83D6AEC 
{
public:
	// System.Int32 UniWebViewContentInsetAdjustmentBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UniWebViewContentInsetAdjustmentBehavior_t8904EE64EB078E94C3BF45CC31C56C1AC83D6AEC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEWCONTENTINSETADJUSTMENTBEHAVIOR_T8904EE64EB078E94C3BF45CC31C56C1AC83D6AEC_H
#ifndef LEVEL_TB3797A8D0D24AF315855A7B3D8DF86C22DFF2875_H
#define LEVEL_TB3797A8D0D24AF315855A7B3D8DF86C22DFF2875_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewLogger_Level
struct  Level_tB3797A8D0D24AF315855A7B3D8DF86C22DFF2875 
{
public:
	// System.Int32 UniWebViewLogger_Level::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Level_tB3797A8D0D24AF315855A7B3D8DF86C22DFF2875, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEVEL_TB3797A8D0D24AF315855A7B3D8DF86C22DFF2875_H
#ifndef UNIWEBVIEWTOOLBARPOSITION_T32937D05C62981C715E721005693AC89DE374110_H
#define UNIWEBVIEWTOOLBARPOSITION_T32937D05C62981C715E721005693AC89DE374110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewToolbarPosition
struct  UniWebViewToolbarPosition_t32937D05C62981C715E721005693AC89DE374110 
{
public:
	// System.Int32 UniWebViewToolbarPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UniWebViewToolbarPosition_t32937D05C62981C715E721005693AC89DE374110, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEWTOOLBARPOSITION_T32937D05C62981C715E721005693AC89DE374110_H
#ifndef UNIWEBVIEWTRANSITIONEDGE_T5DEFB71C1BEC8B01AB5C58ACAE4B10B6253B70F3_H
#define UNIWEBVIEWTRANSITIONEDGE_T5DEFB71C1BEC8B01AB5C58ACAE4B10B6253B70F3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewTransitionEdge
struct  UniWebViewTransitionEdge_t5DEFB71C1BEC8B01AB5C58ACAE4B10B6253B70F3 
{
public:
	// System.Int32 UniWebViewTransitionEdge::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UniWebViewTransitionEdge_t5DEFB71C1BEC8B01AB5C58ACAE4B10B6253B70F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEWTRANSITIONEDGE_T5DEFB71C1BEC8B01AB5C58ACAE4B10B6253B70F3_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef RENDERMODE_TB54632E74CDC4A990E815EB8C3CC515D3A9E2F60_H
#define RENDERMODE_TB54632E74CDC4A990E815EB8C3CC515D3A9E2F60_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RenderMode
struct  RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tB54632E74CDC4A990E815EB8C3CC515D3A9E2F60, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERMODE_TB54632E74CDC4A990E815EB8C3CC515D3A9E2F60_H
#ifndef RUNTIMEPLATFORM_TD5F5737C1BBBCBB115EB104DF2B7876387E80132_H
#define RUNTIMEPLATFORM_TD5F5737C1BBBCBB115EB104DF2B7876387E80132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_TD5F5737C1BBBCBB115EB104DF2B7876387E80132_H
#ifndef SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#define SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScreenOrientation
struct  ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51 
{
public:
	// System.Int32 UnityEngine.ScreenOrientation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCREENORIENTATION_T4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef HTTPHEADERS_TF0E0E01200BD0D8141489FB370D60A9F4DBF42A1_H
#define HTTPHEADERS_TF0E0E01200BD0D8141489FB370D60A9F4DBF42A1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.Headers.HttpHeaders
struct  HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HttpHeaders_HeaderBucket> System.Net.Http.Headers.HttpHeaders::headers
	Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 * ___headers_1;
	// System.Net.Http.Headers.HttpHeaderKind System.Net.Http.Headers.HttpHeaders::HeaderKind
	int32_t ___HeaderKind_2;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::connectionclose
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___connectionclose_3;
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpHeaders::transferEncodingChunked
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___transferEncodingChunked_4;

public:
	inline static int32_t get_offset_of_headers_1() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___headers_1)); }
	inline Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 * get_headers_1() const { return ___headers_1; }
	inline Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 ** get_address_of_headers_1() { return &___headers_1; }
	inline void set_headers_1(Dictionary_2_t68C9612F2AAB4592A72574ECE587789329FFC1B3 * value)
	{
		___headers_1 = value;
		Il2CppCodeGenWriteBarrier((&___headers_1), value);
	}

	inline static int32_t get_offset_of_HeaderKind_2() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___HeaderKind_2)); }
	inline int32_t get_HeaderKind_2() const { return ___HeaderKind_2; }
	inline int32_t* get_address_of_HeaderKind_2() { return &___HeaderKind_2; }
	inline void set_HeaderKind_2(int32_t value)
	{
		___HeaderKind_2 = value;
	}

	inline static int32_t get_offset_of_connectionclose_3() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___connectionclose_3)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_connectionclose_3() const { return ___connectionclose_3; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_connectionclose_3() { return &___connectionclose_3; }
	inline void set_connectionclose_3(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___connectionclose_3 = value;
	}

	inline static int32_t get_offset_of_transferEncodingChunked_4() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1, ___transferEncodingChunked_4)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_transferEncodingChunked_4() const { return ___transferEncodingChunked_4; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_transferEncodingChunked_4() { return &___transferEncodingChunked_4; }
	inline void set_transferEncodingChunked_4(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___transferEncodingChunked_4 = value;
	}
};

struct HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Net.Http.Headers.HeaderInfo> System.Net.Http.Headers.HttpHeaders::known_headers
	Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 * ___known_headers_0;

public:
	inline static int32_t get_offset_of_known_headers_0() { return static_cast<int32_t>(offsetof(HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1_StaticFields, ___known_headers_0)); }
	inline Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 * get_known_headers_0() const { return ___known_headers_0; }
	inline Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 ** get_address_of_known_headers_0() { return &___known_headers_0; }
	inline void set_known_headers_0(Dictionary_2_tEBE1ABD140AD7E9C7019A4D27C5C036F79BA1565 * value)
	{
		___known_headers_0 = value;
		Il2CppCodeGenWriteBarrier((&___known_headers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPHEADERS_TF0E0E01200BD0D8141489FB370D60A9F4DBF42A1_H
#ifndef HTTPCLIENT_TC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_H
#define HTTPCLIENT_TC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.HttpClient
struct  HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7  : public HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72
{
public:
	// System.Uri System.Net.Http.HttpClient::base_address
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___base_address_3;
	// System.Threading.CancellationTokenSource System.Net.Http.HttpClient::cts
	CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * ___cts_4;
	// System.Boolean System.Net.Http.HttpClient::disposed
	bool ___disposed_5;
	// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::headers
	HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * ___headers_6;
	// System.Int64 System.Net.Http.HttpClient::buffer_size
	int64_t ___buffer_size_7;
	// System.TimeSpan System.Net.Http.HttpClient::timeout
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___timeout_8;

public:
	inline static int32_t get_offset_of_base_address_3() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___base_address_3)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_base_address_3() const { return ___base_address_3; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_base_address_3() { return &___base_address_3; }
	inline void set_base_address_3(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___base_address_3 = value;
		Il2CppCodeGenWriteBarrier((&___base_address_3), value);
	}

	inline static int32_t get_offset_of_cts_4() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___cts_4)); }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * get_cts_4() const { return ___cts_4; }
	inline CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE ** get_address_of_cts_4() { return &___cts_4; }
	inline void set_cts_4(CancellationTokenSource_tF480B7E74A032667AFBD31F0530D619FB43AD3FE * value)
	{
		___cts_4 = value;
		Il2CppCodeGenWriteBarrier((&___cts_4), value);
	}

	inline static int32_t get_offset_of_disposed_5() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___disposed_5)); }
	inline bool get_disposed_5() const { return ___disposed_5; }
	inline bool* get_address_of_disposed_5() { return &___disposed_5; }
	inline void set_disposed_5(bool value)
	{
		___disposed_5 = value;
	}

	inline static int32_t get_offset_of_headers_6() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___headers_6)); }
	inline HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * get_headers_6() const { return ___headers_6; }
	inline HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 ** get_address_of_headers_6() { return &___headers_6; }
	inline void set_headers_6(HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * value)
	{
		___headers_6 = value;
		Il2CppCodeGenWriteBarrier((&___headers_6), value);
	}

	inline static int32_t get_offset_of_buffer_size_7() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___buffer_size_7)); }
	inline int64_t get_buffer_size_7() const { return ___buffer_size_7; }
	inline int64_t* get_address_of_buffer_size_7() { return &___buffer_size_7; }
	inline void set_buffer_size_7(int64_t value)
	{
		___buffer_size_7 = value;
	}

	inline static int32_t get_offset_of_timeout_8() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7, ___timeout_8)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_timeout_8() const { return ___timeout_8; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_timeout_8() { return &___timeout_8; }
	inline void set_timeout_8(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___timeout_8 = value;
	}
};

struct HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_StaticFields
{
public:
	// System.TimeSpan System.Net.Http.HttpClient::TimeoutDefault
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___TimeoutDefault_2;

public:
	inline static int32_t get_offset_of_TimeoutDefault_2() { return static_cast<int32_t>(offsetof(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_StaticFields, ___TimeoutDefault_2)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_TimeoutDefault_2() const { return ___TimeoutDefault_2; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_TimeoutDefault_2() { return &___TimeoutDefault_2; }
	inline void set_TimeoutDefault_2(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___TimeoutDefault_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPCLIENT_TC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_H
#ifndef HTTPRESPONSEMESSAGE_T619DB9FDC8E63CDF2D0A314B61A4C6609A43F904_H
#define HTTPRESPONSEMESSAGE_T619DB9FDC8E63CDF2D0A314B61A4C6609A43F904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.HttpResponseMessage
struct  HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904  : public RuntimeObject
{
public:
	// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::headers
	HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * ___headers_0;
	// System.String System.Net.Http.HttpResponseMessage::reasonPhrase
	String_t* ___reasonPhrase_1;
	// System.Net.HttpStatusCode System.Net.Http.HttpResponseMessage::statusCode
	int32_t ___statusCode_2;
	// System.Version System.Net.Http.HttpResponseMessage::version
	Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * ___version_3;
	// System.Boolean System.Net.Http.HttpResponseMessage::disposed
	bool ___disposed_4;
	// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::<Content>k__BackingField
	HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * ___U3CContentU3Ek__BackingField_5;
	// System.Net.Http.HttpRequestMessage System.Net.Http.HttpResponseMessage::<RequestMessage>k__BackingField
	HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * ___U3CRequestMessageU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_headers_0() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___headers_0)); }
	inline HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * get_headers_0() const { return ___headers_0; }
	inline HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 ** get_address_of_headers_0() { return &___headers_0; }
	inline void set_headers_0(HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * value)
	{
		___headers_0 = value;
		Il2CppCodeGenWriteBarrier((&___headers_0), value);
	}

	inline static int32_t get_offset_of_reasonPhrase_1() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___reasonPhrase_1)); }
	inline String_t* get_reasonPhrase_1() const { return ___reasonPhrase_1; }
	inline String_t** get_address_of_reasonPhrase_1() { return &___reasonPhrase_1; }
	inline void set_reasonPhrase_1(String_t* value)
	{
		___reasonPhrase_1 = value;
		Il2CppCodeGenWriteBarrier((&___reasonPhrase_1), value);
	}

	inline static int32_t get_offset_of_statusCode_2() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___statusCode_2)); }
	inline int32_t get_statusCode_2() const { return ___statusCode_2; }
	inline int32_t* get_address_of_statusCode_2() { return &___statusCode_2; }
	inline void set_statusCode_2(int32_t value)
	{
		___statusCode_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___version_3)); }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * get_version_3() const { return ___version_3; }
	inline Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD ** get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(Version_tDBE6876C59B6F56D4F8CAA03851177ABC6FE0DFD * value)
	{
		___version_3 = value;
		Il2CppCodeGenWriteBarrier((&___version_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_U3CContentU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___U3CContentU3Ek__BackingField_5)); }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * get_U3CContentU3Ek__BackingField_5() const { return ___U3CContentU3Ek__BackingField_5; }
	inline HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D ** get_address_of_U3CContentU3Ek__BackingField_5() { return &___U3CContentU3Ek__BackingField_5; }
	inline void set_U3CContentU3Ek__BackingField_5(HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * value)
	{
		___U3CContentU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CContentU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CRequestMessageU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904, ___U3CRequestMessageU3Ek__BackingField_6)); }
	inline HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * get_U3CRequestMessageU3Ek__BackingField_6() const { return ___U3CRequestMessageU3Ek__BackingField_6; }
	inline HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 ** get_address_of_U3CRequestMessageU3Ek__BackingField_6() { return &___U3CRequestMessageU3Ek__BackingField_6; }
	inline void set_U3CRequestMessageU3Ek__BackingField_6(HttpRequestMessage_tBBC9EBC5D6C1B7E30F9927AABBDB65792FFB5427 * value)
	{
		___U3CRequestMessageU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CRequestMessageU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPRESPONSEMESSAGE_T619DB9FDC8E63CDF2D0A314B61A4C6609A43F904_H
#ifndef ASYNCTASKMETHODBUILDER_T0CD1893D670405BED201BE8CA6F2E811F2C0F487_H
#define ASYNCTASKMETHODBUILDER_T0CD1893D670405BED201BE8CA6F2E811F2C0F487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct  AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 
{
public:
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;

public:
	inline static int32_t get_offset_of_m_builder_1() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487, ___m_builder_1)); }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  get_m_builder_1() const { return ___m_builder_1; }
	inline AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9 * get_address_of_m_builder_1() { return &___m_builder_1; }
	inline void set_m_builder_1(AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  value)
	{
		___m_builder_1 = value;
	}
};

struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields
{
public:
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * ___s_cachedCompleted_0;

public:
	inline static int32_t get_offset_of_s_cachedCompleted_0() { return static_cast<int32_t>(offsetof(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_StaticFields, ___s_cachedCompleted_0)); }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * get_s_cachedCompleted_0() const { return ___s_cachedCompleted_0; }
	inline Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 ** get_address_of_s_cachedCompleted_0() { return &___s_cachedCompleted_0; }
	inline void set_s_cachedCompleted_0(Task_1_t1359D75350E9D976BFA28AD96E417450DE277673 * value)
	{
		___s_cachedCompleted_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_cachedCompleted_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_marshaled_com
{
	AsyncTaskMethodBuilder_1_t66ED1808B26B8081A2804D6A750D13386E360BD9  ___m_builder_1;
};
#endif // ASYNCTASKMETHODBUILDER_T0CD1893D670405BED201BE8CA6F2E811F2C0F487_H
#ifndef TASK_1_T519CB3A303B53176BD616AC273201D66B84FF270_H
#define TASK_1_T519CB3A303B53176BD616AC273201D66B84FF270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>
struct  Task_1_t519CB3A303B53176BD616AC273201D66B84FF270  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t519CB3A303B53176BD616AC273201D66B84FF270, ___m_result_22)); }
	inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * get_m_result_22() const { return ___m_result_22; }
	inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_t519CB3A303B53176BD616AC273201D66B84FF270_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t519CB3A303B53176BD616AC273201D66B84FF270_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t580CAEE6F335CE6435DE183D51DA8D7334623D89 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t519CB3A303B53176BD616AC273201D66B84FF270_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tFB268CDB738B6CBC785B7ECDDE8052F2D44D367C * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T519CB3A303B53176BD616AC273201D66B84FF270_H
#ifndef TASK_1_T4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_H
#define TASK_1_T4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286  : public Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286, ___m_result_22)); }
	inline String_t* get_m_result_22() const { return ___m_result_22; }
	inline String_t** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(String_t* value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_result_22), value);
	}
};

struct Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tC464EE87A6CB7838666431AFB8761D134A690E8D * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((&___s_Factory_23), value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tD5DD82F807AA57BEB7EC482428FCFADD3E3EDF93 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((&___TaskWhenAnyCast_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_0), value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_1), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_3), value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_5), value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef UNIWEBVIEWLOGGER_TE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_H
#define UNIWEBVIEWLOGGER_TE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewLogger
struct  UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36  : public RuntimeObject
{
public:
	// UniWebViewLogger_Level UniWebViewLogger::level
	int32_t ___level_1;

public:
	inline static int32_t get_offset_of_level_1() { return static_cast<int32_t>(offsetof(UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36, ___level_1)); }
	inline int32_t get_level_1() const { return ___level_1; }
	inline int32_t* get_address_of_level_1() { return &___level_1; }
	inline void set_level_1(int32_t value)
	{
		___level_1 = value;
	}
};

struct UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_StaticFields
{
public:
	// UniWebViewLogger UniWebViewLogger::instance
	UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_StaticFields, ___instance_0)); }
	inline UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * get_instance_0() const { return ___instance_0; }
	inline UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEWLOGGER_TE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#define GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_TBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_H
#ifndef U3CDOSIGNINASYNCU3ED__7_T374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_H
#define U3CDOSIGNINASYNCU3ED__7_T374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpotiftyLogin_<DoSignInAsync>d__7
struct  U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 
{
public:
	// System.Int32 SpotiftyLogin_<DoSignInAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SpotiftyLogin_<DoSignInAsync>d__7::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// SpotiftyLogin SpotiftyLogin_<DoSignInAsync>d__7::<>4__this
	SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage> SpotiftyLogin_<DoSignInAsync>d__7::<>u__1
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> SpotiftyLogin_<DoSignInAsync>d__7::<>u__2
	TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  ___U3CU3Eu__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2, ___U3CU3E4__this_2)); }
	inline SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  value)
	{
		___U3CU3Eu__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2, ___U3CU3Eu__2_4)); }
	inline TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  value)
	{
		___U3CU3Eu__2_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CDOSIGNINASYNCU3ED__7_T374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_H
#ifndef U3CPAUSEU3ED__13_T7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_H
#define U3CPAUSEU3ED__13_T7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpotiftyLogin_<Pause>d__13
struct  U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 
{
public:
	// System.Int32 SpotiftyLogin_<Pause>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SpotiftyLogin_<Pause>d__13::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// SpotiftyLogin SpotiftyLogin_<Pause>d__13::<>4__this
	SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage> SpotiftyLogin_<Pause>d__13::<>u__1
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  ___U3CU3Eu__1_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> SpotiftyLogin_<Pause>d__13::<>u__2
	TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  ___U3CU3Eu__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3, ___U3CU3E4__this_2)); }
	inline SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_3() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3, ___U3CU3Eu__1_3)); }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  get_U3CU3Eu__1_3() const { return ___U3CU3Eu__1_3; }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * get_address_of_U3CU3Eu__1_3() { return &___U3CU3Eu__1_3; }
	inline void set_U3CU3Eu__1_3(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  value)
	{
		___U3CU3Eu__1_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_4() { return static_cast<int32_t>(offsetof(U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3, ___U3CU3Eu__2_4)); }
	inline TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  get_U3CU3Eu__2_4() const { return ___U3CU3Eu__2_4; }
	inline TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * get_address_of_U3CU3Eu__2_4() { return &___U3CU3Eu__2_4; }
	inline void set_U3CU3Eu__2_4(TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  value)
	{
		___U3CU3Eu__2_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPAUSEU3ED__13_T7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_H
#ifndef U3CPLAYU3ED__12_T89A2EF9EF2800D6FB431D881738694CAE970089C_H
#define U3CPLAYU3ED__12_T89A2EF9EF2800D6FB431D881738694CAE970089C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpotiftyLogin_<Play>d__12
struct  U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C 
{
public:
	// System.Int32 SpotiftyLogin_<Play>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SpotiftyLogin_<Play>d__12::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// SpotiftyLogin SpotiftyLogin_<Play>d__12::<>4__this
	SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * ___U3CU3E4__this_2;
	// System.Net.Http.HttpResponseMessage SpotiftyLogin_<Play>d__12::<r>5__2
	HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * ___U3CrU3E5__2_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage> SpotiftyLogin_<Play>d__12::<>u__1
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> SpotiftyLogin_<Play>d__12::<>u__2
	TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  ___U3CU3Eu__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C, ___U3CU3E4__this_2)); }
	inline SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CrU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C, ___U3CrU3E5__2_3)); }
	inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * get_U3CrU3E5__2_3() const { return ___U3CrU3E5__2_3; }
	inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 ** get_address_of_U3CrU3E5__2_3() { return &___U3CrU3E5__2_3; }
	inline void set_U3CrU3E5__2_3(HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * value)
	{
		___U3CrU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrU3E5__2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_4() { return static_cast<int32_t>(offsetof(U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C, ___U3CU3Eu__1_4)); }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  get_U3CU3Eu__1_4() const { return ___U3CU3Eu__1_4; }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * get_address_of_U3CU3Eu__1_4() { return &___U3CU3Eu__1_4; }
	inline void set_U3CU3Eu__1_4(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  value)
	{
		___U3CU3Eu__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_5() { return static_cast<int32_t>(offsetof(U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C, ___U3CU3Eu__2_5)); }
	inline TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  get_U3CU3Eu__2_5() const { return ___U3CU3Eu__2_5; }
	inline TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * get_address_of_U3CU3Eu__2_5() { return &___U3CU3Eu__2_5; }
	inline void set_U3CU3Eu__2_5(TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  value)
	{
		___U3CU3Eu__2_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPLAYU3ED__12_T89A2EF9EF2800D6FB431D881738694CAE970089C_H
#ifndef U3CWAITFORCALLBACKU3ED__8_T6C2EC894924B135435275582071A1B6835524257_H
#define U3CWAITFORCALLBACKU3ED__8_T6C2EC894924B135435275582071A1B6835524257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpotiftyLogin_<WaitForCallback>d__8
struct  U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 
{
public:
	// System.Int32 SpotiftyLogin_<WaitForCallback>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder SpotiftyLogin_<WaitForCallback>d__8::<>t__builder
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  ___U3CU3Et__builder_1;
	// System.Net.Http.HttpClient SpotiftyLogin_<WaitForCallback>d__8::client
	HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * ___client_2;
	// SpotiftyLogin SpotiftyLogin_<WaitForCallback>d__8::<>4__this
	SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * ___U3CU3E4__this_3;
	// System.String SpotiftyLogin_<WaitForCallback>d__8::state
	String_t* ___state_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage> SpotiftyLogin_<WaitForCallback>d__8::<>u__1
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  ___U3CU3Eu__1_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> SpotiftyLogin_<WaitForCallback>d__8::<>u__2
	TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  ___U3CU3Eu__2_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3Et__builder_1() { return static_cast<int32_t>(offsetof(U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257, ___U3CU3Et__builder_1)); }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  get_U3CU3Et__builder_1() const { return ___U3CU3Et__builder_1; }
	inline AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * get_address_of_U3CU3Et__builder_1() { return &___U3CU3Et__builder_1; }
	inline void set_U3CU3Et__builder_1(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  value)
	{
		___U3CU3Et__builder_1 = value;
	}

	inline static int32_t get_offset_of_client_2() { return static_cast<int32_t>(offsetof(U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257, ___client_2)); }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * get_client_2() const { return ___client_2; }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 ** get_address_of_client_2() { return &___client_2; }
	inline void set_client_2(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * value)
	{
		___client_2 = value;
		Il2CppCodeGenWriteBarrier((&___client_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257, ___U3CU3E4__this_3)); }
	inline SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257, ___state_4)); }
	inline String_t* get_state_4() const { return ___state_4; }
	inline String_t** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(String_t* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Eu__1_5() { return static_cast<int32_t>(offsetof(U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257, ___U3CU3Eu__1_5)); }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  get_U3CU3Eu__1_5() const { return ___U3CU3Eu__1_5; }
	inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * get_address_of_U3CU3Eu__1_5() { return &___U3CU3Eu__1_5; }
	inline void set_U3CU3Eu__1_5(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  value)
	{
		___U3CU3Eu__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CU3Eu__2_6() { return static_cast<int32_t>(offsetof(U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257, ___U3CU3Eu__2_6)); }
	inline TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  get_U3CU3Eu__2_6() const { return ___U3CU3Eu__2_6; }
	inline TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * get_address_of_U3CU3Eu__2_6() { return &___U3CU3Eu__2_6; }
	inline void set_U3CU3Eu__2_6(TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  value)
	{
		___U3CU3Eu__2_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWAITFORCALLBACKU3ED__8_T6C2EC894924B135435275582071A1B6835524257_H
#ifndef ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#define ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t591D2A86165F896B4B800BB5C25CE18672A55579  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T591D2A86165F896B4B800BB5C25CE18672A55579_H
#ifndef ACTION_1_T19CAF500829927B30EC94F39939F749E4919669E_H
#define ACTION_1_T19CAF500829927B30EC94F39939F749E4919669E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.String>
struct  Action_1_t19CAF500829927B30EC94F39939F749E4919669E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T19CAF500829927B30EC94F39939F749E4919669E_H
#ifndef ACTION_1_T8EC8542A14B338E47DC15B6835D141446E6F83AD_H
#define ACTION_1_T8EC8542A14B338E47DC15B6835D141446E6F83AD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UniWebViewNativeResultPayload>
struct  Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T8EC8542A14B338E47DC15B6835D141446E6F83AD_H
#ifndef ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#define ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4_H
#ifndef HTTPREQUESTHEADERS_TD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4_H
#define HTTPREQUESTHEADERS_TD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.Headers.HttpRequestHeaders
struct  HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4  : public HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1
{
public:
	// System.Nullable`1<System.Boolean> System.Net.Http.Headers.HttpRequestHeaders::expectContinue
	Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  ___expectContinue_5;

public:
	inline static int32_t get_offset_of_expectContinue_5() { return static_cast<int32_t>(offsetof(HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4, ___expectContinue_5)); }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  get_expectContinue_5() const { return ___expectContinue_5; }
	inline Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793 * get_address_of_expectContinue_5() { return &___expectContinue_5; }
	inline void set_expectContinue_5(Nullable_1_t9E6A67BECE376F0623B5C857F5674A0311C41793  value)
	{
		___expectContinue_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPREQUESTHEADERS_TD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4_H
#ifndef HTTPRESPONSEHEADERS_T51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59_H
#define HTTPRESPONSEHEADERS_T51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Http.Headers.HttpResponseHeaders
struct  HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59  : public HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPRESPONSEHEADERS_T51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59_H
#ifndef KEYCODERECEIVEDDELEGATE_TA8930CEAF69FA713516FC48F6899262B9E8E1C6C_H
#define KEYCODERECEIVEDDELEGATE_TA8930CEAF69FA713516FC48F6899262B9E8E1C6C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_KeyCodeReceivedDelegate
struct  KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODERECEIVEDDELEGATE_TA8930CEAF69FA713516FC48F6899262B9E8E1C6C_H
#ifndef MESSAGERECEIVEDDELEGATE_T30F573625B3F4C806D9073C9FB6773DC92922582_H
#define MESSAGERECEIVEDDELEGATE_T30F573625B3F4C806D9073C9FB6773DC92922582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_MessageReceivedDelegate
struct  MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGERECEIVEDDELEGATE_T30F573625B3F4C806D9073C9FB6773DC92922582_H
#ifndef ONWEBCONTENTPROCESSTERMINATEDDELEGATE_TAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD_H
#define ONWEBCONTENTPROCESSTERMINATEDDELEGATE_TAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_OnWebContentProcessTerminatedDelegate
struct  OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONWEBCONTENTPROCESSTERMINATEDDELEGATE_TAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD_H
#ifndef OREINTATIONCHANGEDDELEGATE_T42B38D7E92042A4E7C93015C2C675A483D7238E7_H
#define OREINTATIONCHANGEDDELEGATE_T42B38D7E92042A4E7C93015C2C675A483D7238E7_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_OreintationChangedDelegate
struct  OreintationChangedDelegate_t42B38D7E92042A4E7C93015C2C675A483D7238E7  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OREINTATIONCHANGEDDELEGATE_T42B38D7E92042A4E7C93015C2C675A483D7238E7_H
#ifndef ORIENTATIONCHANGEDDELEGATE_T3D6957C9CC92E9341E30FCB84901049E0E8DA482_H
#define ORIENTATIONCHANGEDDELEGATE_T3D6957C9CC92E9341E30FCB84901049E0E8DA482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_OrientationChangedDelegate
struct  OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORIENTATIONCHANGEDDELEGATE_T3D6957C9CC92E9341E30FCB84901049E0E8DA482_H
#ifndef PAGEERRORRECEIVEDDELEGATE_T091963788F14CE6459BBB18AC29566778DE8CB4E_H
#define PAGEERRORRECEIVEDDELEGATE_T091963788F14CE6459BBB18AC29566778DE8CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_PageErrorReceivedDelegate
struct  PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAGEERRORRECEIVEDDELEGATE_T091963788F14CE6459BBB18AC29566778DE8CB4E_H
#ifndef PAGEFINISHEDDELEGATE_T86B321BA20AE98611CA5520C46D556970FF31702_H
#define PAGEFINISHEDDELEGATE_T86B321BA20AE98611CA5520C46D556970FF31702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_PageFinishedDelegate
struct  PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAGEFINISHEDDELEGATE_T86B321BA20AE98611CA5520C46D556970FF31702_H
#ifndef PAGESTARTEDDELEGATE_T249FC70F5F447EFE3E8A30439569A96F05602E78_H
#define PAGESTARTEDDELEGATE_T249FC70F5F447EFE3E8A30439569A96F05602E78_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_PageStartedDelegate
struct  PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAGESTARTEDDELEGATE_T249FC70F5F447EFE3E8A30439569A96F05602E78_H
#ifndef SHOULDCLOSEDELEGATE_T2E3349B793354B80E34E5AF4CB035C2370160998_H
#define SHOULDCLOSEDELEGATE_T2E3349B793354B80E34E5AF4CB035C2370160998_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView_ShouldCloseDelegate
struct  ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHOULDCLOSEDELEGATE_T2E3349B793354B80E34E5AF4CB035C2370160998_H
#ifndef UNITYSENDMESSAGEDELEGATE_T5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68_H
#define UNITYSENDMESSAGEDELEGATE_T5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewInterface_UnitySendMessageDelegate
struct  UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSENDMESSAGEDELEGATE_T5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#define CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_4), value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_5), value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_H
#ifndef CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#define CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Canvas
struct  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields
{
public:
	// UnityEngine.Canvas_WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * ___willRenderCanvases_4;

public:
	inline static int32_t get_offset_of_willRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_StaticFields, ___willRenderCanvases_4)); }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * get_willRenderCanvases_4() const { return ___willRenderCanvases_4; }
	inline WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE ** get_address_of_willRenderCanvases_4() { return &___willRenderCanvases_4; }
	inline void set_willRenderCanvases_4(WillRenderCanvases_tBD5AD090B5938021DEAA679A5AEEA790F60A8BEE * value)
	{
		___willRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((&___willRenderCanvases_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVAS_TBC28BF1DD8D8499A89B5781505833D3728CF8591_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#define RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20  : public Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA
{
public:

public:
};

struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields
{
public:
	// UnityEngine.RectTransform_ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T285CBD8775B25174B75164F10618F8B9728E1B20_H
#ifndef SPIN_TD4DFECB24A365A6C4C12E9848949153EDA1F1EBB_H
#define SPIN_TD4DFECB24A365A6C4C12E9848949153EDA1F1EBB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spin
struct  Spin_tD4DFECB24A365A6C4C12E9848949153EDA1F1EBB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPIN_TD4DFECB24A365A6C4C12E9848949153EDA1F1EBB_H
#ifndef SPOTIFTYLOGIN_T4A08281A3B749813DFC009D01820F3E8F332CD1B_H
#define SPOTIFTYLOGIN_T4A08281A3B749813DFC009D01820F3E8F332CD1B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpotiftyLogin
struct  SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UniWebView SpotiftyLogin::webView
	UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView_4;
	// System.String SpotiftyLogin::Token
	String_t* ___Token_5;
	// System.String SpotiftyLogin::ApiBaseUrl
	String_t* ___ApiBaseUrl_6;
	// System.Net.Http.HttpClient SpotiftyLogin::client
	HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * ___client_7;
	// System.Boolean SpotiftyLogin::IsPaused
	bool ___IsPaused_8;
	// System.String SpotiftyLogin::DeviceId
	String_t* ___DeviceId_9;

public:
	inline static int32_t get_offset_of_webView_4() { return static_cast<int32_t>(offsetof(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B, ___webView_4)); }
	inline UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * get_webView_4() const { return ___webView_4; }
	inline UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB ** get_address_of_webView_4() { return &___webView_4; }
	inline void set_webView_4(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * value)
	{
		___webView_4 = value;
		Il2CppCodeGenWriteBarrier((&___webView_4), value);
	}

	inline static int32_t get_offset_of_Token_5() { return static_cast<int32_t>(offsetof(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B, ___Token_5)); }
	inline String_t* get_Token_5() const { return ___Token_5; }
	inline String_t** get_address_of_Token_5() { return &___Token_5; }
	inline void set_Token_5(String_t* value)
	{
		___Token_5 = value;
		Il2CppCodeGenWriteBarrier((&___Token_5), value);
	}

	inline static int32_t get_offset_of_ApiBaseUrl_6() { return static_cast<int32_t>(offsetof(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B, ___ApiBaseUrl_6)); }
	inline String_t* get_ApiBaseUrl_6() const { return ___ApiBaseUrl_6; }
	inline String_t** get_address_of_ApiBaseUrl_6() { return &___ApiBaseUrl_6; }
	inline void set_ApiBaseUrl_6(String_t* value)
	{
		___ApiBaseUrl_6 = value;
		Il2CppCodeGenWriteBarrier((&___ApiBaseUrl_6), value);
	}

	inline static int32_t get_offset_of_client_7() { return static_cast<int32_t>(offsetof(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B, ___client_7)); }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * get_client_7() const { return ___client_7; }
	inline HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 ** get_address_of_client_7() { return &___client_7; }
	inline void set_client_7(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * value)
	{
		___client_7 = value;
		Il2CppCodeGenWriteBarrier((&___client_7), value);
	}

	inline static int32_t get_offset_of_IsPaused_8() { return static_cast<int32_t>(offsetof(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B, ___IsPaused_8)); }
	inline bool get_IsPaused_8() const { return ___IsPaused_8; }
	inline bool* get_address_of_IsPaused_8() { return &___IsPaused_8; }
	inline void set_IsPaused_8(bool value)
	{
		___IsPaused_8 = value;
	}

	inline static int32_t get_offset_of_DeviceId_9() { return static_cast<int32_t>(offsetof(SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B, ___DeviceId_9)); }
	inline String_t* get_DeviceId_9() const { return ___DeviceId_9; }
	inline String_t** get_address_of_DeviceId_9() { return &___DeviceId_9; }
	inline void set_DeviceId_9(String_t* value)
	{
		___DeviceId_9 = value;
		Il2CppCodeGenWriteBarrier((&___DeviceId_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPOTIFTYLOGIN_T4A08281A3B749813DFC009D01820F3E8F332CD1B_H
#ifndef UNIWEBVIEW_T70C5C5815FC5A948185238830E0AB8B221E34BBB_H
#define UNIWEBVIEW_T70C5C5815FC5A948185238830E0AB8B221E34BBB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebView
struct  UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UniWebView_PageStartedDelegate UniWebView::OnPageStarted
	PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * ___OnPageStarted_4;
	// UniWebView_PageFinishedDelegate UniWebView::OnPageFinished
	PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * ___OnPageFinished_5;
	// UniWebView_PageErrorReceivedDelegate UniWebView::OnPageErrorReceived
	PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * ___OnPageErrorReceived_6;
	// UniWebView_MessageReceivedDelegate UniWebView::OnMessageReceived
	MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * ___OnMessageReceived_7;
	// UniWebView_ShouldCloseDelegate UniWebView::OnShouldClose
	ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * ___OnShouldClose_8;
	// UniWebView_KeyCodeReceivedDelegate UniWebView::OnKeyCodeReceived
	KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * ___OnKeyCodeReceived_9;
	// UniWebView_OrientationChangedDelegate UniWebView::OnOrientationChanged
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * ___OnOrientationChanged_10;
	// UniWebView_OnWebContentProcessTerminatedDelegate UniWebView::OnWebContentProcessTerminated
	OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * ___OnWebContentProcessTerminated_11;
	// System.String UniWebView::id
	String_t* ___id_12;
	// UniWebViewNativeListener UniWebView::listener
	UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * ___listener_13;
	// System.Boolean UniWebView::isPortrait
	bool ___isPortrait_14;
	// System.String UniWebView::urlOnStart
	String_t* ___urlOnStart_15;
	// System.Boolean UniWebView::showOnStart
	bool ___showOnStart_16;
	// System.Boolean UniWebView::fullScreen
	bool ___fullScreen_17;
	// System.Boolean UniWebView::useToolbar
	bool ___useToolbar_18;
	// UniWebViewToolbarPosition UniWebView::toolbarPosition
	int32_t ___toolbarPosition_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action> UniWebView::actions
	Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * ___actions_20;
	// System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>> UniWebView::payloadActions
	Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * ___payloadActions_21;
	// UnityEngine.Rect UniWebView::frame
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___frame_22;
	// UnityEngine.RectTransform UniWebView::referenceRectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___referenceRectTransform_23;
	// System.Boolean UniWebView::started
	bool ___started_24;
	// UnityEngine.Color UniWebView::backgroundColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___backgroundColor_25;
	// UniWebView_OrientationChangedDelegate UniWebView::OnOreintationChanged
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * ___OnOreintationChanged_26;

public:
	inline static int32_t get_offset_of_OnPageStarted_4() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___OnPageStarted_4)); }
	inline PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * get_OnPageStarted_4() const { return ___OnPageStarted_4; }
	inline PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 ** get_address_of_OnPageStarted_4() { return &___OnPageStarted_4; }
	inline void set_OnPageStarted_4(PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * value)
	{
		___OnPageStarted_4 = value;
		Il2CppCodeGenWriteBarrier((&___OnPageStarted_4), value);
	}

	inline static int32_t get_offset_of_OnPageFinished_5() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___OnPageFinished_5)); }
	inline PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * get_OnPageFinished_5() const { return ___OnPageFinished_5; }
	inline PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 ** get_address_of_OnPageFinished_5() { return &___OnPageFinished_5; }
	inline void set_OnPageFinished_5(PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * value)
	{
		___OnPageFinished_5 = value;
		Il2CppCodeGenWriteBarrier((&___OnPageFinished_5), value);
	}

	inline static int32_t get_offset_of_OnPageErrorReceived_6() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___OnPageErrorReceived_6)); }
	inline PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * get_OnPageErrorReceived_6() const { return ___OnPageErrorReceived_6; }
	inline PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E ** get_address_of_OnPageErrorReceived_6() { return &___OnPageErrorReceived_6; }
	inline void set_OnPageErrorReceived_6(PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * value)
	{
		___OnPageErrorReceived_6 = value;
		Il2CppCodeGenWriteBarrier((&___OnPageErrorReceived_6), value);
	}

	inline static int32_t get_offset_of_OnMessageReceived_7() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___OnMessageReceived_7)); }
	inline MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * get_OnMessageReceived_7() const { return ___OnMessageReceived_7; }
	inline MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 ** get_address_of_OnMessageReceived_7() { return &___OnMessageReceived_7; }
	inline void set_OnMessageReceived_7(MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * value)
	{
		___OnMessageReceived_7 = value;
		Il2CppCodeGenWriteBarrier((&___OnMessageReceived_7), value);
	}

	inline static int32_t get_offset_of_OnShouldClose_8() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___OnShouldClose_8)); }
	inline ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * get_OnShouldClose_8() const { return ___OnShouldClose_8; }
	inline ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 ** get_address_of_OnShouldClose_8() { return &___OnShouldClose_8; }
	inline void set_OnShouldClose_8(ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * value)
	{
		___OnShouldClose_8 = value;
		Il2CppCodeGenWriteBarrier((&___OnShouldClose_8), value);
	}

	inline static int32_t get_offset_of_OnKeyCodeReceived_9() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___OnKeyCodeReceived_9)); }
	inline KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * get_OnKeyCodeReceived_9() const { return ___OnKeyCodeReceived_9; }
	inline KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C ** get_address_of_OnKeyCodeReceived_9() { return &___OnKeyCodeReceived_9; }
	inline void set_OnKeyCodeReceived_9(KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * value)
	{
		___OnKeyCodeReceived_9 = value;
		Il2CppCodeGenWriteBarrier((&___OnKeyCodeReceived_9), value);
	}

	inline static int32_t get_offset_of_OnOrientationChanged_10() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___OnOrientationChanged_10)); }
	inline OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * get_OnOrientationChanged_10() const { return ___OnOrientationChanged_10; }
	inline OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 ** get_address_of_OnOrientationChanged_10() { return &___OnOrientationChanged_10; }
	inline void set_OnOrientationChanged_10(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * value)
	{
		___OnOrientationChanged_10 = value;
		Il2CppCodeGenWriteBarrier((&___OnOrientationChanged_10), value);
	}

	inline static int32_t get_offset_of_OnWebContentProcessTerminated_11() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___OnWebContentProcessTerminated_11)); }
	inline OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * get_OnWebContentProcessTerminated_11() const { return ___OnWebContentProcessTerminated_11; }
	inline OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD ** get_address_of_OnWebContentProcessTerminated_11() { return &___OnWebContentProcessTerminated_11; }
	inline void set_OnWebContentProcessTerminated_11(OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * value)
	{
		___OnWebContentProcessTerminated_11 = value;
		Il2CppCodeGenWriteBarrier((&___OnWebContentProcessTerminated_11), value);
	}

	inline static int32_t get_offset_of_id_12() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___id_12)); }
	inline String_t* get_id_12() const { return ___id_12; }
	inline String_t** get_address_of_id_12() { return &___id_12; }
	inline void set_id_12(String_t* value)
	{
		___id_12 = value;
		Il2CppCodeGenWriteBarrier((&___id_12), value);
	}

	inline static int32_t get_offset_of_listener_13() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___listener_13)); }
	inline UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * get_listener_13() const { return ___listener_13; }
	inline UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD ** get_address_of_listener_13() { return &___listener_13; }
	inline void set_listener_13(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * value)
	{
		___listener_13 = value;
		Il2CppCodeGenWriteBarrier((&___listener_13), value);
	}

	inline static int32_t get_offset_of_isPortrait_14() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___isPortrait_14)); }
	inline bool get_isPortrait_14() const { return ___isPortrait_14; }
	inline bool* get_address_of_isPortrait_14() { return &___isPortrait_14; }
	inline void set_isPortrait_14(bool value)
	{
		___isPortrait_14 = value;
	}

	inline static int32_t get_offset_of_urlOnStart_15() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___urlOnStart_15)); }
	inline String_t* get_urlOnStart_15() const { return ___urlOnStart_15; }
	inline String_t** get_address_of_urlOnStart_15() { return &___urlOnStart_15; }
	inline void set_urlOnStart_15(String_t* value)
	{
		___urlOnStart_15 = value;
		Il2CppCodeGenWriteBarrier((&___urlOnStart_15), value);
	}

	inline static int32_t get_offset_of_showOnStart_16() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___showOnStart_16)); }
	inline bool get_showOnStart_16() const { return ___showOnStart_16; }
	inline bool* get_address_of_showOnStart_16() { return &___showOnStart_16; }
	inline void set_showOnStart_16(bool value)
	{
		___showOnStart_16 = value;
	}

	inline static int32_t get_offset_of_fullScreen_17() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___fullScreen_17)); }
	inline bool get_fullScreen_17() const { return ___fullScreen_17; }
	inline bool* get_address_of_fullScreen_17() { return &___fullScreen_17; }
	inline void set_fullScreen_17(bool value)
	{
		___fullScreen_17 = value;
	}

	inline static int32_t get_offset_of_useToolbar_18() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___useToolbar_18)); }
	inline bool get_useToolbar_18() const { return ___useToolbar_18; }
	inline bool* get_address_of_useToolbar_18() { return &___useToolbar_18; }
	inline void set_useToolbar_18(bool value)
	{
		___useToolbar_18 = value;
	}

	inline static int32_t get_offset_of_toolbarPosition_19() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___toolbarPosition_19)); }
	inline int32_t get_toolbarPosition_19() const { return ___toolbarPosition_19; }
	inline int32_t* get_address_of_toolbarPosition_19() { return &___toolbarPosition_19; }
	inline void set_toolbarPosition_19(int32_t value)
	{
		___toolbarPosition_19 = value;
	}

	inline static int32_t get_offset_of_actions_20() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___actions_20)); }
	inline Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * get_actions_20() const { return ___actions_20; }
	inline Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 ** get_address_of_actions_20() { return &___actions_20; }
	inline void set_actions_20(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * value)
	{
		___actions_20 = value;
		Il2CppCodeGenWriteBarrier((&___actions_20), value);
	}

	inline static int32_t get_offset_of_payloadActions_21() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___payloadActions_21)); }
	inline Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * get_payloadActions_21() const { return ___payloadActions_21; }
	inline Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 ** get_address_of_payloadActions_21() { return &___payloadActions_21; }
	inline void set_payloadActions_21(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * value)
	{
		___payloadActions_21 = value;
		Il2CppCodeGenWriteBarrier((&___payloadActions_21), value);
	}

	inline static int32_t get_offset_of_frame_22() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___frame_22)); }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE  get_frame_22() const { return ___frame_22; }
	inline Rect_t35B976DE901B5423C11705E156938EA27AB402CE * get_address_of_frame_22() { return &___frame_22; }
	inline void set_frame_22(Rect_t35B976DE901B5423C11705E156938EA27AB402CE  value)
	{
		___frame_22 = value;
	}

	inline static int32_t get_offset_of_referenceRectTransform_23() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___referenceRectTransform_23)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_referenceRectTransform_23() const { return ___referenceRectTransform_23; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_referenceRectTransform_23() { return &___referenceRectTransform_23; }
	inline void set_referenceRectTransform_23(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___referenceRectTransform_23 = value;
		Il2CppCodeGenWriteBarrier((&___referenceRectTransform_23), value);
	}

	inline static int32_t get_offset_of_started_24() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___started_24)); }
	inline bool get_started_24() const { return ___started_24; }
	inline bool* get_address_of_started_24() { return &___started_24; }
	inline void set_started_24(bool value)
	{
		___started_24 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_25() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___backgroundColor_25)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_backgroundColor_25() const { return ___backgroundColor_25; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_backgroundColor_25() { return &___backgroundColor_25; }
	inline void set_backgroundColor_25(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___backgroundColor_25 = value;
	}

	inline static int32_t get_offset_of_OnOreintationChanged_26() { return static_cast<int32_t>(offsetof(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB, ___OnOreintationChanged_26)); }
	inline OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * get_OnOreintationChanged_26() const { return ___OnOreintationChanged_26; }
	inline OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 ** get_address_of_OnOreintationChanged_26() { return &___OnOreintationChanged_26; }
	inline void set_OnOreintationChanged_26(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * value)
	{
		___OnOreintationChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___OnOreintationChanged_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEW_T70C5C5815FC5A948185238830E0AB8B221E34BBB_H
#ifndef UNIWEBVIEWANDROIDSTATICLISTENER_T9987AA383ACDCD75BF174C6A87CBC88B83414A79_H
#define UNIWEBVIEWANDROIDSTATICLISTENER_T9987AA383ACDCD75BF174C6A87CBC88B83414A79_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewAndroidStaticListener
struct  UniWebViewAndroidStaticListener_t9987AA383ACDCD75BF174C6A87CBC88B83414A79  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEWANDROIDSTATICLISTENER_T9987AA383ACDCD75BF174C6A87CBC88B83414A79_H
#ifndef UNIWEBVIEWNATIVELISTENER_TFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_H
#define UNIWEBVIEWNATIVELISTENER_TFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UniWebViewNativeListener
struct  UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UniWebView UniWebViewNativeListener::webView
	UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView_5;

public:
	inline static int32_t get_offset_of_webView_5() { return static_cast<int32_t>(offsetof(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD, ___webView_5)); }
	inline UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * get_webView_5() const { return ___webView_5; }
	inline UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB ** get_address_of_webView_5() { return &___webView_5; }
	inline void set_webView_5(UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * value)
	{
		___webView_5 = value;
		Il2CppCodeGenWriteBarrier((&___webView_5), value);
	}
};

struct UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener> UniWebViewNativeListener::listeners
	Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * ___listeners_4;

public:
	inline static int32_t get_offset_of_listeners_4() { return static_cast<int32_t>(offsetof(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_StaticFields, ___listeners_4)); }
	inline Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * get_listeners_4() const { return ___listeners_4; }
	inline Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 ** get_address_of_listeners_4() { return &___listeners_4; }
	inline void set_listeners_4(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * value)
	{
		___listeners_4 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIWEBVIEWNATIVELISTENER_TFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_H
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SpotiftyLogin/<DoSignInAsync>d__7>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_m2C1F1C4A3C36AC3AF6A6933666FF50FB22562668_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SpotiftyLogin/<WaitForCallback>d__8>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m7DC605016D0DA8AC47C4C811AAD78B6BBBCF2BD8_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SpotiftyLogin/<Play>d__12>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mDD7D66C4C1749D6D33B99988591C77949AFCF88E_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SpotiftyLogin/<Pause>d__13>(!!0&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEF76E010AA1628E6C30816358ADF786CF5A22A9_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
extern "C" IL2CPP_METHOD_ATTR TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977  Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared (Task_1_tA56001ED5270173CA1432EDFCD84EABB1024BC09 * __this, const RuntimeMethod* method);
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
extern "C" IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,SpotiftyLogin/<DoSignInAsync>d__7>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mB5B82F834F4041485AAA3821ADDBB6246B6E9D9C_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * p1, const RuntimeMethod* method);
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared (TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,SpotiftyLogin/<Pause>d__13>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mC4D59B2754401B99DD21AD0F439F6C599BCB63AB_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,SpotiftyLogin/<Play>d__12>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mA7C1259D302BCADF54B7D00BA9C07F7D7EDBA989_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,SpotiftyLogin/<WaitForCallback>d__8>(!!0&,!!1&)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m0E6E9CA97226CD1AAFCA726C3F39CE089F0BE92B_gshared (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977 * p0, U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_m36052D294AB8C1574678FEF9A9749145A073E8E3_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared (String_t* p0, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UniWebView>()
inline UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * GameObject_AddComponent_TisUniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB_m333454E40F1E6B59EA21CB600871CEAEA814667A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// System.Void UniWebView/ShouldCloseDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ShouldCloseDelegate__ctor_mF65DFABA7263681AACE8A4E6A46543AE77E3CAC0 (ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UniWebView::add_OnShouldClose(UniWebView/ShouldCloseDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnShouldClose_mF4E8FADA63C9F8549DA92D3C46097F334826D887 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * ___value0, const RuntimeMethod* method);
// System.Void System.Net.Http.HttpClient::.ctor()
extern "C" IL2CPP_METHOD_ATTR void HttpClient__ctor_m179C3B29F7C664CDC5B5761E24EC2E9685385A1F (HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
extern "C" IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0CBC4672BC86FE82A9210B7FD2F475E2DD9C3163 (String_t* p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task SpotiftyLogin::DoSignInAsync()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpotiftyLogin_DoSignInAsync_m063D3947DA59864F4DABD1920AF41A83709B202B (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method);
// System.Void SpotiftyLogin::PlayPause()
extern "C" IL2CPP_METHOD_ATTR void SpotiftyLogin_PlayPause_m6266607EBE5BD177B3FE83C4006798874EF73B63 (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
extern "C" IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB (const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SpotiftyLogin/<DoSignInAsync>d__7>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_m2C1F1C4A3C36AC3AF6A6933666FF50FB22562668 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_m2C1F1C4A3C36AC3AF6A6933666FF50FB22562668_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SpotiftyLogin/<WaitForCallback>d__8>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m7DC605016D0DA8AC47C4C811AAD78B6BBBCF2BD8 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m7DC605016D0DA8AC47C4C811AAD78B6BBBCF2BD8_gshared)(__this, p0, method);
}
// System.Void SpotiftyLogin::CloseWebView()
extern "C" IL2CPP_METHOD_ATTR void SpotiftyLogin_CloseWebView_m75F327DD482F4839DE3B12A80AD3D5F41344DA21 (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method);
// System.Void System.Net.Http.HttpMessageInvoker::Dispose()
extern "C" IL2CPP_METHOD_ATTR void HttpMessageInvoker_Dispose_mD4F72E4580D4BE545E8E3AB97C0A9BB0AB49C212 (HttpMessageInvoker_t7270E2BED3201CE430D6C4BECF923454AA526A72 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SpotiftyLogin/<Play>d__12>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mDD7D66C4C1749D6D33B99988591C77949AFCF88E (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mDD7D66C4C1749D6D33B99988591C77949AFCF88E_gshared)(__this, p0, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<SpotiftyLogin/<Pause>d__13>(!!0&)
inline void AsyncTaskMethodBuilder_Start_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEF76E010AA1628E6C30816358ADF786CF5A22A9 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * p0, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 *, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEF76E010AA1628E6C30816358ADF786CF5A22A9_gshared)(__this, p0, method);
}
// System.Threading.Tasks.Task SpotiftyLogin::Play()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpotiftyLogin_Play_m2F4F3137D6BDFC563905895703C89CC520CAEE7B (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task SpotiftyLogin::Pause()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpotiftyLogin_Pause_mEA99580E9179AD71470FD390C64FCF8A19FF080D (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> System.Net.Http.HttpClient::GetAsync(System.String)
extern "C" IL2CPP_METHOD_ATTR Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * HttpClient_GetAsync_mB979915E31872E80CA29D0724DB7F6239A914D99 (HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * __this, String_t* p0, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage>::GetAwaiter()
inline TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0 (Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  (*) (Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>,SpotiftyLogin/<DoSignInAsync>d__7>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mA05BBE8EB654A813785564578AD6A2B3A5EEE8D2 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * p0, U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *, U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mB5B82F834F4041485AAA3821ADDBB6246B6E9D9C_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>::GetResult()
inline HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2 (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * __this, const RuntimeMethod* method)
{
	return ((  HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * (*) (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Net.Http.HttpResponseMessage System.Net.Http.HttpResponseMessage::EnsureSuccessStatusCode()
extern "C" IL2CPP_METHOD_ATTR HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * HttpResponseMessage_EnsureSuccessStatusCode_mFC49F01BD731C4FE89B7143E0AA8C6137F372B44 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Net.Http.HttpContent System.Net.Http.HttpResponseMessage::get_Content()
extern "C" IL2CPP_METHOD_ATTR HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> System.Net.Http.HttpContent::ReadAsStringAsync()
extern "C" IL2CPP_METHOD_ATTR Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * HttpContent_ReadAsStringAsync_m499CCA8B02B3AFB793C0783D28220FC7A531A24D (HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * __this, const RuntimeMethod* method);
// System.Runtime.CompilerServices.TaskAwaiter`1<!0> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61 (Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  (*) (Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 *, const RuntimeMethod*))Task_1_GetAwaiter_m9C50610C6F05C1DA9BFA67201CB570F1DE040817_gshared)(__this, method);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94 (TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_mBF435C7EFD03FCF7810FC08EEDC5945F80FF88F9_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,SpotiftyLogin/<DoSignInAsync>d__7>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mBC8F8A17181CC5DD63F7ED3EB599D28FC6D087FE (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * p0, U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *, U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mB5B82F834F4041485AAA3821ADDBB6246B6E9D9C_gshared)(__this, p0, p1, method);
}
// !0 System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3 (TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m9E148849CD4747E1BDD831E4FB2D7ECFA13C11C8_gshared)(__this, method);
}
// System.Threading.Tasks.Task SpotiftyLogin::WaitForCallback(System.Net.Http.HttpClient,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpotiftyLogin_WaitForCallback_m8728D0B5560ADC5D230DECB90AF9829E08BA8BF6 (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * ___client0, String_t* ___state1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
extern "C" IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method);
// System.Void UniWebView::set_Frame(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_set_Frame_m5D8A545371F854091361FB698DCCF45A10C76CB9 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p0, const RuntimeMethod* method);
// System.Void UniWebView::Load(System.String,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_Load_m27CFE9E72534ABEAEA16DE6AAABF6C7556305B6E (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___url0, bool ___skipEncoding1, String_t* ___readAccessURL2, const RuntimeMethod* method);
// System.Boolean UniWebView::Show(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
extern "C" IL2CPP_METHOD_ATTR bool UniWebView_Show_m900E118C2CE18F8DBB39C49E4E25948478FC4102 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___fade0, int32_t ___edge1, float ___duration2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___completionHandler3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, const RuntimeMethod* method);
// System.Void SpotiftyLogin/<DoSignInAsync>d__7::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CDoSignInAsyncU3Ed__7_MoveNext_mA623832C4C1226069800A1B3F9874017B26A0EB4 (U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void SpotiftyLogin/<DoSignInAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CDoSignInAsyncU3Ed__7_SetStateMachine_m8B30C1F8D99C63814E026A71EB4ACDD679265E46 (U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Net.Http.StringContent::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringContent__ctor_m14C504A380661472DEB032923DD27742561EC45C (StringContent_t0E49805143AA8BCE4640914150158663B9061079 * __this, String_t* p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.Net.Http.HttpResponseMessage> System.Net.Http.HttpClient::PutAsync(System.String,System.Net.Http.HttpContent)
extern "C" IL2CPP_METHOD_ATTR Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * HttpClient_PutAsync_m600B18C3B5B9C424DD541EF1AAD0A248B24829E7 (HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * __this, String_t* p0, HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * p1, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>,SpotiftyLogin/<Pause>d__13>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_m5D6BE89DCCED75301497F9998148B85EE8135C35 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * p0, U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *, U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mC4D59B2754401B99DD21AD0F439F6C599BCB63AB_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,SpotiftyLogin/<Pause>d__13>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEBCE726EC238FCE181D231A149EAD42A94CF250 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * p0, U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *, U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mC4D59B2754401B99DD21AD0F439F6C599BCB63AB_gshared)(__this, p0, p1, method);
}
// System.Void SpotiftyLogin/<Pause>d__13::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CPauseU3Ed__13_MoveNext_mE89FC1E787DB329D3706DA25D843D1377E23E7F8 (U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * __this, const RuntimeMethod* method);
// System.Void SpotiftyLogin/<Pause>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CPauseU3Ed__13_SetStateMachine_mB45D3DDED01289717DDF958005F1577078EA27EE (U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>,SpotiftyLogin/<Play>d__12>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mD4115B988D4E229C42FF1CA2CAE29CC5518015E5 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * p0, U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *, U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mA7C1259D302BCADF54B7D00BA9C07F7D7EDBA989_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,SpotiftyLogin/<Play>d__12>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_m6A99DEB927FE2720A7A013F154D0D4775CAEEC27 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * p0, U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *, U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mA7C1259D302BCADF54B7D00BA9C07F7D7EDBA989_gshared)(__this, p0, p1, method);
}
// System.Net.Http.Headers.HttpResponseHeaders System.Net.Http.HttpResponseMessage::get_Headers()
extern "C" IL2CPP_METHOD_ATTR HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * HttpResponseMessage_get_Headers_mBD52D7A018509B2A6A55C0925A40955A33D20B98 (HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * __this, const RuntimeMethod* method);
// System.Void System.Net.Http.Headers.HttpHeaders::Add(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void HttpHeaders_Add_m41401B7E6B948DF760D603C2F43AC19ACC48D7FA (HttpHeaders_tF0E0E01200BD0D8141489FB370D60A9F4DBF42A1 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void SpotiftyLogin/<Play>d__12::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayU3Ed__12_MoveNext_m92D0C2A3162EB0837371FA384EB8670F4AE3E429 (U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * __this, const RuntimeMethod* method);
// System.Void SpotiftyLogin/<Play>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CPlayU3Ed__12_SetStateMachine_m1C4E013C3F6C418FA4D4A965DF459783F65E3DC1 (U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.String System.Uri::EscapeDataString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925 (String_t* p0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Net.Http.HttpResponseMessage>,SpotiftyLogin/<WaitForCallback>d__8>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m803944ED22822FD2A20B37214871D084C007DD96 (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * p0, U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *, U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m0E6E9CA97226CD1AAFCA726C3F39CE089F0BE92B_gshared)(__this, p0, p1, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,SpotiftyLogin/<WaitForCallback>d__8>(!!0&,!!1&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m37C373317E7D5EE46545F0D2F7F86C264263E62A (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * __this, TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * p0, U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * p1, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *, TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *, U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 *, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t8CDB78D2A4D48E80C35A8FF6FC04A82B9FC35977_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m0E6E9CA97226CD1AAFCA726C3F39CE089F0BE92B_gshared)(__this, p0, p1, method);
}
// System.Net.Http.Headers.HttpRequestHeaders System.Net.Http.HttpClient::get_DefaultRequestHeaders()
extern "C" IL2CPP_METHOD_ATTR HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * HttpClient_get_DefaultRequestHeaders_m3D044032F7024F2F9E6AD821FFCF49FBEBF0152F (HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * __this, const RuntimeMethod* method);
// System.Void System.Net.Http.Headers.AuthenticationHeaderValue::.ctor(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void AuthenticationHeaderValue__ctor_m8EBD61CBB89C61631F2C2B4E592B390098F72D3C (AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void System.Net.Http.Headers.HttpRequestHeaders::set_Authorization(System.Net.Http.Headers.AuthenticationHeaderValue)
extern "C" IL2CPP_METHOD_ATTR void HttpRequestHeaders_set_Authorization_m093B11E4E81ADCAF59C32CDFEF0C71111D9FE206 (HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * __this, AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * p0, const RuntimeMethod* method);
// System.Void SpotiftyLogin/<WaitForCallback>d__8::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForCallbackU3Ed__8_MoveNext_m57D5F79AD33858368B51F01D61A2A820F7716432 (U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * __this, const RuntimeMethod* method);
// System.Void SpotiftyLogin/<WaitForCallback>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForCallbackU3Ed__8_SetStateMachine_mD9881514197FCD9957E1CF24B39C5201FF0278EF (U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C" IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * p0, Delegate_t * p1, const RuntimeMethod* method);
// System.Void UniWebView::UpdateFrame()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_UpdateFrame_m93DF63C1B824C4EB185CC45D48EE846A76E9606E (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method);
// System.String UniWebViewNativeListener::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, const RuntimeMethod* method);
// System.String UniWebViewInterface::GetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_m99AC915DE080DC8263764AD049DF1E8D47C4B480 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Rect UniWebView::NextFrameRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  UniWebView_NextFrameRect_m1F89703962C698142518400DC872743B55AD4A00 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_x()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_y()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_width()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Rect::get_height()
extern "C" IL2CPP_METHOD_ATTR float Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_mD15A8FFD7720039EEC147596AD8DBB6669D3865E (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UniWebViewLogger UniWebViewLogger::get_Instance()
extern "C" IL2CPP_METHOD_ATTR UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8 (const RuntimeMethod* method);
// System.Void UniWebViewLogger::Info(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.RectTransform::GetWorldCorners(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void RectTransform_GetWorldCorners_m073AA4D13C51C5654A5983EE3FE7E2E60F7761B6 (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m36052D294AB8C1574678FEF9A9749145A073E8E3_gshared)(__this, method);
}
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
extern "C" IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// System.Void UniWebViewLogger::Critical(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UniWebViewNativeListener>()
inline UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * GameObject_AddComponent_TisUniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_m9113CDBF5813015A5B852B62661579E1CAA9C54F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mCB8164FB05F8DCF99E098ADC5E13E96FEF6FC4E9_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Void UniWebViewNativeListener::AddListener(UniWebViewNativeListener)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddListener_m66CD8DDE368A077A8B0BB68FF42986F376582F72 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * ___target0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_m9AE89395D39758A3D82EE41ACC341C054E2AE78A (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.Void UniWebView/OrientationChangedDelegate::Invoke(UniWebView,UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_mE43729DDE703E170C724165DCD78C3F5D135D2B2 (OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___orientation1, const RuntimeMethod* method);
// System.Boolean UniWebView::Hide(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
extern "C" IL2CPP_METHOD_ATTR bool UniWebView_Hide_mDBD3CA6C1F42CC695188CFFC4F7F4B1ADB6EBC4E (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___fade0, int32_t ___edge1, float ___duration2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___completionHandler3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Load(System.String,System.String,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mD590C5D4EC77275A7FB3FB675B313C17AFAE28FB (String_t* ___name0, String_t* ___url1, bool ___skipEncoding2, String_t* ___readAccessURL3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::LoadHTMLString(System.String,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m8503019BDF405BBAD96ADF206BC554BC23253E9D (String_t* ___name0, String_t* ___html1, String_t* ___baseUrl2, bool ___skipEncoding3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Reload(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_mF59A428BA67116A01420C9263CECDD4913A06C44 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Stop(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_m18E9AEE0A3E00D60AEE8BAD8AD4180F2D2D00A87 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::CanGoBack(System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_m85BED7E236C3D95F4BD121AE0090AE72A40C68C3 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::CanGoForward(System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m0BD3965D49CE9F8C680418B1DD949956F626F070 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::GoBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m7B7B009A3769F2D2ABDAB1FCEE9A9AD0EC134BF1 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::GoForward(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m69D8A8C091D3F3212C529C99C2B49DC9B56E9FC3 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetOpenLinksInExternalBrowser(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m8F1949DB73568676BA1D347DD17D78D4BA888219 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Guid System.Guid::NewGuid()
extern "C" IL2CPP_METHOD_ATTR Guid_t  Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29 (const RuntimeMethod* method);
// System.String System.Guid::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5 (Guid_t * __this, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::Show(System.String,System.Boolean,System.Int32,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_mDBF6C81C451078AD3BE7BA0E47660846D83612B6 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::Add(!0,!1)
inline void Dictionary_2_Add_mF0550D7D4BB219888E3038ACAE4212E201C10DCD (Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * __this, String_t* p0, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 *, String_t*, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Void System.Action::Invoke()
extern "C" IL2CPP_METHOD_ATTR void Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * __this, const RuntimeMethod* method);
// System.Void UniWebView::SetShowToolbar(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbar_m84AF66B0BA267BFE87B295C6AF9D077BCACE8A5C (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___show0, bool ___animated1, bool ___onTop2, bool ___adjustInset3, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::Hide(System.String,System.Boolean,System.Int32,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m9172C8D99F47706FEBA5B64BEAD2F66EB55F5791 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::AnimateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m37B4D301C354BD000046C696F77BC274CA7A6561 (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, float ___duration5, float ___delay6, String_t* ___identifier7, const RuntimeMethod* method);
// System.Void UniWebViewInterface::AddJavaScript(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_m0821BD310D90C6DA1E8BC9F9D1E1F13F7919EF4E (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::Add(!0,!1)
inline void Dictionary_2_Add_m96F0A15AFA91061BF6A27AE7DE7734BD5EA48322 (Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * __this, String_t* p0, Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 *, String_t*, Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Void UniWebViewInterface::EvaluateJavaScript(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m790554C524888A5078EECC3A5AF97F5F112AE0A0 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::AddUrlScheme(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_m093135E876EB07E0286665C23483ED93FEF02649 (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::RemoveUrlScheme(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_m0F2710272BD6DAFCD3444BE3B9FEA1281D670FE5 (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::AddSslExceptionDomain(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_mE9F6EA6225D2C7C2FD556E2648796F7D6BFCEAEB (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::RemoveSslExceptionDomain(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m952D43F1FE6F6BE9AC15DC66D42C51780C5702C9 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetHeaderField(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m6248C66E1CEAF27CDDDA66A525F1D71CBD502A22 (String_t* ___name0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetUserAgent(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_m0636D0C6ED992F5D8210FEFDC0B6A4ABAFB23B71 (String_t* ___name0, String_t* ___userAgent1, const RuntimeMethod* method);
// System.String UniWebViewInterface::GetUserAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_m62ED5910A8DED966C44559700D276687B70E10A3 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetContentInsetAdjustmentBehavior(System.String,UniWebViewContentInsetAdjustmentBehavior)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetContentInsetAdjustmentBehavior_m9DE77B59ACE8CB73956A45BD81790351BA7FC2E9 (String_t* ___name0, int32_t ___behavior1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowAutoPlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mA1FE6AEDCBB140C40E6063388D258EAD93A65E49 (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowInlinePlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowInlinePlay_m2E1A79DBB76EFCD39BAEC9AB2215355B7839C276 (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetJavaScriptEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_m04D1509DD92CF1A64C68B75FA1EE79E1E5727943 (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowJavaScriptOpenWindow(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mF2AE14094B64357A385F7D593684781B0A5C4719 (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::CleanCache(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m43E8616FDA422D5BF753B7D3BB8785036FD9976D (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::ClearCookies()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_m72B3F4D3528E139945C434244867FB41B1B3F0AD (const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m9ED0E7BBF1A7286A398265AFE9F5C7103D4AAC1F (String_t* ___url0, String_t* ___cookie1, bool ___skipEncoding2, const RuntimeMethod* method);
// System.String UniWebViewInterface::GetCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_mC5F17BA8EA41FBE95C5A85617CBDD1822C8BFA37 (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::ClearHttpAuthUsernamePassword(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_m6EC49CC8FF8E0AC636EF9C57572C51FA0373B911 (String_t* ___host0, String_t* ___realm1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_m93343F2F37B5035B19377D54AE03D22FA089C54F (String_t* ___name0, float ___r1, float ___g2, float ___b3, float ___a4, const RuntimeMethod* method);
// System.Single UniWebViewInterface::GetWebViewAlpha(System.String)
extern "C" IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_mC4E13D24FD9F85AD3D4442061FF7F9509D0514CA (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetWebViewAlpha(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_m74D9A737E3C67924CEACEF0CC38DE049892611B0 (String_t* ___name0, float ___alpha1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetShowSpinnerWhileLoading(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m76AA6C5A405AE0672EEE3456778B6F1921036586 (String_t* ___name0, bool ___show1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetSpinnerText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_mC83965466BC863A9146B220D9AD37D9B6C9B5E8A (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetHorizontalScrollBarEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_mEBB621A28239F91BE3CF0A20039A628DE08C0FF5 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetVerticalScrollBarEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_mBFF4CC7088166668CC7D2EF221D7336933289C68 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetBouncesEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m670BE14C4FF7CE0057543F9B60E426B01E77AD47 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetZoomEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mFC141CAD5C05FB6BC3EFA31BA3C6EE54F9FBC5CB (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetShowToolbar(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowToolbar_mB77E1A5B3024055BC412EF3094FA2D5B85F7EB31 (String_t* ___name0, bool ___show1, bool ___animated2, bool ___onTop3, bool ___adjustInset4, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetToolbarDoneButtonText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarDoneButtonText_m67460BCFB5A0F2C107B085C1425A243BAA2915B9 (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetWebContentsDebuggingEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_m306139A08DD96B8452EB76F489BC075103073503 (bool ___enabled0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetWindowUserResizeEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWindowUserResizeEnabled_mFE8B7EB0698902554BF51762DFBB6576DAE90E54 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebView/<>c__DisplayClass116_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass116_0__ctor_mF714012F41B34648FEE41FA66BCD31ABACD322FD (U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UniWebViewNativeResultPayload>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m92FA084476B2BED9E68F7C879639A420BBEDD6A6 (Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mAFC7442D9D3CEC6701C3C5599F8CF12476095510_gshared)(__this, p0, p1, method);
}
// System.Void UniWebView::EvaluateJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_EvaluateJavaScript_mF02AD8F18B6CC9295D851DCED539B3A23A20948F (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___jsString0, Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * ___completionHandler1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowFileAccessFromFileURLs(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m0EA69CB39548A0D4FE38002B39BB38A416F41B4B (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_m62FA395AB7C15B993508ADF70AE1CD542FB66B81 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetCalloutEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_m1D3B59F03B1B4F2C161A25206ED80069BC887756 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetDragInteractionEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDragInteractionEnabled_m444267791BEDCCF721858FC15E75EA558C7E3D06 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Print(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m6F3083D8FCB49C0C32A624502A10CE088E074B13 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::ScrollTo(System.String,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_mB3A61236870EDBE9A3B5BDF0A6F52C59AFAC8F65 (String_t* ___name0, int32_t ___x1, int32_t ___y2, bool ___animated3, const RuntimeMethod* method);
// System.Void UniWebViewNativeListener::RemoveListener(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_RemoveListener_m9BC70FC2918E2293BE520CD3199476CE7F82FE4D (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::Destroy(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_m7345EA8903325F4165F93B52F45089296C879F32 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mEA1F4C7224BD29F37B8956B05FD5E91804054C21 (Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * __this, String_t* p0, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 *, String_t*, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action>::Remove(!0)
inline bool Dictionary_2_Remove_m3B8F7FE85D1D0D96319D7D1465CB561DE806A7C7 (Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mF53A6CB8A87F2E73C8995ED41F32BCB937B75688 (Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * __this, String_t* p0, Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 *, String_t*, Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, p0, p1, method);
}
// System.Void System.Action`1<UniWebViewNativeResultPayload>::Invoke(!0)
inline void Action_1_Invoke_mFF05822BE96997345A8FCC3A1C54F7E8D08E3276 (Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD *, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::Remove(!0)
inline bool Dictionary_2_Remove_mF7A6A6F958388BCEF2FDE3F807F3486796739C65 (Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, p0, method);
}
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
extern "C" IL2CPP_METHOD_ATTR bool Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00 (String_t* p0, int32_t* p1, const RuntimeMethod* method);
// System.Void UniWebView/PageFinishedDelegate::Invoke(UniWebView,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mB4DF606447929D18728C0F89C29782A4CB86C04E (PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___statusCode1, String_t* ___url2, const RuntimeMethod* method);
// System.Void UniWebView/PageStartedDelegate::Invoke(UniWebView,System.String)
extern "C" IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_m5B70710865E0D115E5F74CEAA76198F711FC8D03 (PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, String_t* ___url1, const RuntimeMethod* method);
// System.Void UniWebView/PageErrorReceivedDelegate::Invoke(UniWebView,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_m6B22D089FB82653576DFB32910CEBB751978BA6D (PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___errorCode1, String_t* ___errorMessage2, const RuntimeMethod* method);
// System.Void UniWebViewMessage::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage__ctor_m8E662A552E545F3D1E2CD4A86647B1F016E2E4E7 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, String_t* ___rawMessage0, const RuntimeMethod* method);
// System.Void UniWebView/MessageReceivedDelegate::Invoke(UniWebView,UniWebViewMessage)
extern "C" IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mFB573DEACA94CB24A97DF4E5E160F4045C2C938C (MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  ___message1, const RuntimeMethod* method);
// System.Void UniWebView/KeyCodeReceivedDelegate::Invoke(UniWebView,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_Invoke_m2453E2829A04D4ACE6D9D636869982EF1A7E472F (KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___keyCode1, const RuntimeMethod* method);
// System.Boolean UniWebView/ShouldCloseDelegate::Invoke(UniWebView)
extern "C" IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m6FC38AEF568D2D48B55874B308838BEEC5E0B9E3 (ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, const RuntimeMethod* method);
// System.Void UniWebView/OnWebContentProcessTerminatedDelegate::Invoke(UniWebView)
extern "C" IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m0D03858D19F0C0A85F126326D4C10487A2C26C83 (OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action>::.ctor()
inline void Dictionary_2__ctor_m617D8188B02482AEFF9C461F647566C7FAC40841 (Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Action`1<UniWebViewNativeResultPayload>>::.ctor()
inline void Dictionary_2__ctor_mCAFCDBBEE563C6B755CA36CEE4D1ADFBE966B41C (Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m8C199C95ECF35C974DA12746E7E408FA36A66523 (Action_1_t19CAF500829927B30EC94F39939F749E4919669E * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t19CAF500829927B30EC94F39939F749E4919669E *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, const RuntimeMethod* method);
// UniWebViewNativeListener UniWebViewNativeListener::GetListener(System.String)
extern "C" IL2CPP_METHOD_ATTR UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * UniWebViewNativeListener_GetListener_mC6C1E26D38D9B13A624349A855EB6987ADAC87F3 (String_t* ___name0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C" IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6 (RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  p0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C" IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE (Type_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1E51FB51169B9B8FB3120ED5F9B454785932C5D0 (MethodInfo_t * p0, MethodInfo_t * p1, const RuntimeMethod* method);
// System.String System.String::Join(System.String,System.String[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* p0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p1, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674 (MethodBase_t * __this, RuntimeObject * p0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* p1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311 (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B (const RuntimeMethod* method);
// System.Void UniWebViewInterface::SendMessage(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SendMessage_mDAA737307C21D279A176FE30038F5B73FD5EE7CE (intptr_t ___namePtr0, intptr_t ___methodPtr1, intptr_t ___parameterPtr2, const RuntimeMethod* method);
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
extern "C" IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Void UniWebViewInterface::ConnectMessageSender()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_ConnectMessageSender_mE96D2E06C759329F19D26A33B3794D499C373DE1 (const RuntimeMethod* method);
// System.Void UniWebViewInterface::CheckPlatform()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467 (const RuntimeMethod* method);
// System.Void UniWebViewInterface/UnitySendMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnitySendMessageDelegate__ctor_m41C0E2F0FA04571519322A4EE9F15FEBAF42F62A (UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_connectMessageSender(UniWebViewInterface/UnitySendMessageDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_connectMessageSender_m6F94F1EDF1E2594088FB1EF940D031C97302CF7C (UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 * ___sendMessageDelegate0, const RuntimeMethod* method);
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_mEB58737930C2F57CFE9E32B03524D7210DB94027 (intptr_t p0, const RuntimeMethod* method);
// System.Void UniWebViewLogger::Verbose(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Verbose_mBB8EDD12E337C8CA1A28D60BDACF0D895F339BCC (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Inequality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C" IL2CPP_METHOD_ATTR bool MethodInfo_op_Inequality_m76AC38C8B8FB8F28C21E6F9A3F0268FF8E4CC237 (MethodInfo_t * p0, MethodInfo_t * p1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setLogLevel(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setLogLevel_m9DD0E920BAF5466B6705AD40D39239989B73BF02 (int32_t ___level0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_init_mF08FB3D5197AC07B2A1A27035646B9DD07570AF6 (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_destroy(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_destroy_m9C2F06BA0984AD30E10B1B2D2B44AF37F7316113 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_load(System.String,System.String,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_load_m2F75EF4BE6D452E9F79099DA82DEF1F2C524ABF5 (String_t* ___name0, String_t* ___url1, bool ___skipEncoding2, String_t* ___readAccessURL3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_loadHTMLString(System.String,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_loadHTMLString_mD627822C8A9FD0128976C06DD6B460939E0807E6 (String_t* ___name0, String_t* ___html1, String_t* ___baseUrl2, bool ___skipEncoding3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_reload(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_reload_m3722FD125DF942EC41BFBEFF7E97867D2B82D57A (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_stop(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_stop_mC73152F27DDE95B0FA6EE5AD9791EB641C87204F (String_t* ___name0, const RuntimeMethod* method);
// System.String UniWebViewInterface::uv_getUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getUrl_m5054D19DFB5AE6A0DA64AAFE46A38E05A066407D (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setFrame_m8F7714C20B0CCAAACB2A3F325C1ADA8C4F04AAD5 (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setPosition(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setPosition_mB11CD31EA2D2F2C6422AF5E65B1DB0C7E618FE57 (String_t* ___name0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setSize(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSize_mA23517880738647A59B32752826FAF5D31B24AE3 (String_t* ___name0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::uv_show(System.String,System.Boolean,System.Int32,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_show_mB25EB1BC611294B9E2B38AFF8C0AAB3F02FDB524 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::uv_hide(System.String,System.Boolean,System.Int32,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_hide_m8444440233A9321DC4D9E7FAFA4177E2F37F9A09 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::uv_animateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_animateTo_m50B3085A812EB66A3235FAE5B6641A889873D578 (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, float ___duration5, float ___delay6, String_t* ___identifier7, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_addJavaScript(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addJavaScript_mD79E82C81492141969962CA9F1CF6A139C4730C8 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_evaluateJavaScript(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_evaluateJavaScript_m52C448F65FC632CD15917513CFA2C89A0B6DDD36 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_addUrlScheme(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addUrlScheme_mD219030975BDD057E460D9C585B4B8232D034618 (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_removeUrlScheme(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeUrlScheme_m25410F76C111ECBA1B4184960A656CD26972EAAB (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_addSslExceptionDomain(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addSslExceptionDomain_m4C79BE5F6E8C0C5295562790A4D2EE0D3ED2CC9A (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_removeSslExceptionDomain(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeSslExceptionDomain_m505212CE4AD1CD1513AFE6E995E759B604DF3957 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setHeaderField(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setHeaderField_m48DBE405AC72A2693051FE7FEAA1E600FF5751A4 (String_t* ___name0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setUserAgent(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setUserAgent_m1601C6F145E9CE35255C7C768CFECE459796D0DF (String_t* ___name0, String_t* ___userAgent1, const RuntimeMethod* method);
// System.String UniWebViewInterface::uv_getUserAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getUserAgent_mC20424ECDD3D102A60587BBCD50F1ABEBA789315 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setContentInsetAdjustmentBehavior(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setContentInsetAdjustmentBehavior_m077524DC9C36143B3AF685C7179F7F596929055E (String_t* ___name0, int32_t ___behavior1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setAllowAutoPlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowAutoPlay_mD53FC3B67F64F07EB441CF583E5DD53DD33D31C4 (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setAllowInlinePlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowInlinePlay_m372D113A23331BD10EF344180A9D79179E4F971C (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setAllowJavaScriptOpenWindow(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowJavaScriptOpenWindow_m29D00B7C804B82694A78F43E0535451ED179E6FF (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setJavaScriptEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setJavaScriptEnabled_m19C84DCD9D915F1BB00F94A8BD7C7D3C663DF9E9 (bool ___flag0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_cleanCache(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_cleanCache_m502FE80F05FBEECF1BC241267640EE09CFC0D04E (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_clearCookies()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_clearCookies_mE40B07E4B719B42A47F0FA47FA283F2667840039 (const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setCookie_mD2F93AE32708107864D1E1AB4616894A1BED4D24 (String_t* ___url0, String_t* ___cookie1, bool ___skipEncoding2, const RuntimeMethod* method);
// System.String UniWebViewInterface::uv_getCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getCookie_m01C5441634E2BF34590D497373D4EC74D1FFAF61 (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_clearHttpAuthUsernamePasswordHost(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_clearHttpAuthUsernamePasswordHost_mB95624904CF5D02359F531F72A7EBEBA1AF823B9 (String_t* ___host0, String_t* ___realm1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setBackgroundColor_mD469A3ACBAA7D2553510A4258825F5EC548F7A7F (String_t* ___name0, float ___r1, float ___g2, float ___b3, float ___a4, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setWebViewAlpha(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWebViewAlpha_m82517649C4C288133D37A51EE96CAC4FC9D5DC9D (String_t* ___name0, float ___alpha1, const RuntimeMethod* method);
// System.Single UniWebViewInterface::uv_getWebViewAlpha(System.String)
extern "C" IL2CPP_METHOD_ATTR float UniWebViewInterface_uv_getWebViewAlpha_mC41828C2F92E3486104E3B57A7BADF32EA0385AE (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setShowSpinnerWhileLoading(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowSpinnerWhileLoading_m095A4BE9B3CB5CD20DFA1601BBD4BF2B8EAF3351 (String_t* ___name0, bool ___show1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setSpinnerText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSpinnerText_m06D683017806DD98D8235B425ED589E374068E86 (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::uv_canGoBack(System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_canGoBack_m68743C590EFF4189AED841F21543A618F393A49E (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean UniWebViewInterface::uv_canGoForward(System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_canGoForward_mF9F0B116D44E82DD41BC97004EA5D1B5A3A2A681 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_goBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_goBack_mE80609592266EB8DAA8BE0128A2B3FB8C8A92D61 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_goForward(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_goForward_mCC6B11E451F5C10B9883E296808EAFF994D7BF31 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setOpenLinksInExternalBrowser(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setOpenLinksInExternalBrowser_m4E7B6A2304562C5FCDFDD43595A55C95FC3F4649 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setHorizontalScrollBarEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setHorizontalScrollBarEnabled_m434B120375801D4E19A7666D43C17EE431EA4B5B (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setVerticalScrollBarEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setVerticalScrollBarEnabled_m1D219B2F850BB1D195B5FC77897C43B6FD8BE76A (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setBouncesEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setBouncesEnabled_m2C15AAFAEF8A8392EAADEE98963B6D9212D425CC (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setZoomEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setZoomEnabled_mF549E563DCFBECB67929B579ECD226ABA77183BD (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setShowToolbar(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowToolbar_mF63908C8428030B155E6641B3C27FC73633AB664 (String_t* ___name0, bool ___show1, bool ___animated2, bool ___onTop3, bool ___adjustInset4, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setToolbarDoneButtonText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setToolbarDoneButtonText_m498ACD56D9341494DFA225C1210D0C539727340B (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setWindowUserResizeEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWindowUserResizeEnabled_m1CD7ED879E832341A485BBB289C11209BEAAAB2F (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setWebContentsDebuggingEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWebContentsDebuggingEnabled_m9FD58B25B63409A07E596037FC4D159D31414912 (bool ___enabled0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setAllowFileAccessFromFileURLs(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowFileAccessFromFileURLs_m21D9CE64B13022EAA0C32C2B286582A44B8755DC (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowHTTPAuthPopUpWindow_m9C8F30B25C3CD67EEC40D0ED63EA516A01B2E072 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_print(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_print_m1DA385D1F5472301B42E69A09D62806924E37825 (String_t* ___name0, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_scrollTo(System.String,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_scrollTo_m32F09351333E3B9BE4B56FE05BC281BDB63ED86F (String_t* ___name0, int32_t ___x1, int32_t ___y2, bool ___animated3, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setCalloutEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setCalloutEnabled_m2D62AB0E869A8874E82EB0AC119E2B73C5D6A2E7 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::uv_setDragInteractionEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setDragInteractionEnabled_mFD7431A648448A28D0A3658FBCA580CF2483FEA6 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706 (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UniWebViewLogger::Log(UniWebViewLogger/Level,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Log_m4FE9B1187AA77948F8392D731D0BC612D4BE5B3C (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method);
// System.Void UniWebViewInterface::SetLogLevel(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_mDAAD013E6D6E08D5A398610E3AAAEB3F9D681E67 (int32_t ___level0, const RuntimeMethod* method);
// System.Void UniWebViewLogger::.ctor(UniWebViewLogger/Level)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger__ctor_mB2D95316B397135A77F936FDCF191A5F13E5EAB7 (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, int32_t ___level0, const RuntimeMethod* method);
// UniWebViewLogger/Level UniWebViewLogger::get_LogLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_m7544AAB7D079152E482B83BCAC9DCC0894B8DB49 (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String UniWebViewMessage::get_RawMessage()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_mEB9E20FCBB860B58A47CE726C32D424A1291E3F4 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, const RuntimeMethod* method);
// System.Void UniWebViewMessage::set_RawMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_m4D1501064E20693E8047C22E449085F1B72532DE (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UniWebViewMessage::get_Scheme()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_m4BE09E85392AA0B5BFDB6C2F9804FEF55D6CA552 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, const RuntimeMethod* method);
// System.Void UniWebViewMessage::set_Scheme(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m10D04B9414173D36D06FD2A6EC4323F882781D9F (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UniWebViewMessage::get_Path()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_m0827AA16C9F2A1E5B5A63B0D3A6E4D1D6C6D1BE7 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, const RuntimeMethod* method);
// System.Void UniWebViewMessage::set_Path(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_m1E81F3BFF5EAF06C866252B9543CF7C66ABD31D1 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::get_Args()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UniWebViewMessage_get_Args_m112C17F16135A0C633F4D6B944D2536C587BF7E2 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, const RuntimeMethod* method);
// System.Void UniWebViewMessage::set_Args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mF4301F73D4A884228D6987316E891A3CA3AAE561 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___value0, const RuntimeMethod* method);
// System.Void UniWebViewLogger::Debug(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Debug_mB025AB06112890DB90A1DC3E2B5A90B4351BCB97 (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m1116758CB532FF38D2A639CE6BD44F84F7EB2DEB (String_t* __this, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::TrimEnd(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_TrimEnd_m8D4905B71A4AEBF9D0BC36C6003FC9A5AD630403 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::UnEscapeURL(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_UnEscapeURL_m1224F23674AC91179573482A2993CB9E4EC98980 (String_t* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m6035A72C0D6A9432F46DE0742776CC7B866AB127 (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4EBC00E16E83DA33851A551757D2B7332D5756B9_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(!0)
inline String_t* Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m6625C3BA931A6EE5D6DB46B9E743B40AAA30010B_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * __this, String_t* p0, String_t* p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::Add(!0,!1)
inline void Dictionary_2_Add_m04273DEA69EA43CCF49FEE87E80CD5E760FE0FB7 (Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * __this, String_t* p0, UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 *, String_t*, UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD *, const RuntimeMethod*))Dictionary_2_Add_mC741BBB0A647C814227953DB9B23CB1BDF571C5B_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::Remove(!0)
inline bool Dictionary_2_Remove_m972C90F4E6EF9CA13D3CF6133D547068D39DCFEC (Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m0FCCD33CE2C6A7589E52A2AB0872FE361BF5EF60_gshared)(__this, p0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mA715731746947BCAEFB0F5453C4A084CB71F7A02 (Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * __this, String_t* p0, UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 *, String_t*, UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3455807C552312C60038DF52EF328C3687442DE3_gshared)(__this, p0, p1, method);
}
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnPageStarted(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageStarted_mCB979A41164D7CF5D144695D16AAB647B0092C0A (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___url0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<UniWebViewNativeResultPayload>(System.String)
inline UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE (String_t* p0, const RuntimeMethod* method)
{
	return ((  UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m38BFFDE45556DDE756B8EDCA5E0775A8320E1296_gshared)(p0, method);
}
// System.Void UniWebView::InternalOnPageFinished(UniWebViewNativeResultPayload)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageFinished_m66D50B18FA57FB39FBBFDA22A23E1C2B3ECAB063 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * ___payload0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnPageErrorReceived(UniWebViewNativeResultPayload)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageErrorReceived_mD96650FCD2788D0EA6B4950236A1BA5904A354E4 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * ___payload0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnShowTransitionFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnShowTransitionFinished_m675ACF3ED200F80D5C7D9BDE4BDE94296812FB16 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnHideTransitionFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnHideTransitionFinished_mF460676425275EB554B59E1A746819D7D1B8B6A5 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnAnimateToFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnAnimateToFinished_m2486792057F058A88CC3F489034D0487B6FBD4F8 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___identifier0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnAddJavaScriptFinished(UniWebViewNativeResultPayload)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnAddJavaScriptFinished_mE643B519375F8A85AFA04C199624DF4E172FD6D5 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * ___payload0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnEvalJavaScriptFinished(UniWebViewNativeResultPayload)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnEvalJavaScriptFinished_mA4C5FF23D930C98CE746642E7114340FF830D2A8 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * ___payload0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnMessageReceived(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnMessageReceived_m10F1B6B8A96C5231210A76131D194374BCEB1AE4 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___result0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnWebViewKeyDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnWebViewKeyDown_m64506AD86C1754E262675E28665C380ED01DF76A (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, int32_t ___keyCode0, const RuntimeMethod* method);
// System.Void UniWebView::InternalOnShouldClose()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnShouldClose_m4996AE2EF6FF169504485BE9E87607844490AD26 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method);
// System.Void UniWebView::InternalWebContentProcessDidTerminate()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalWebContentProcessDidTerminate_mDB25D615EB2A4CED76E3D559147CC99836F8883C (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,UniWebViewNativeListener>::.ctor()
inline void Dictionary_2__ctor_mC5754B6545F7E423941D9C54242BC05ADFD95987 (Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
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
// System.Void Spin::Start()
extern "C" IL2CPP_METHOD_ATTR void Spin_Start_m901AD6E2F5660A740ABACB57456BDF165093908E (Spin_tD4DFECB24A365A6C4C12E9848949153EDA1F1EBB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void Spin::Update()
extern "C" IL2CPP_METHOD_ATTR void Spin_Update_m16D68BD7DB10ACF2E53EBCC005971DDB458FF22C (Spin_tD4DFECB24A365A6C4C12E9848949153EDA1F1EBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spin_Update_m16D68BD7DB10ACF2E53EBCC005971DDB458FF22C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_2, L_3, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_4, (30.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Rotate_m610B6793DCC2F987290D328942E649B5B7DE0F9A(L_1, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spin::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Spin__ctor_mB1F9C254B92FC6C2A992C897B58C54D3A5D8C2E7 (Spin_tD4DFECB24A365A6C4C12E9848949153EDA1F1EBB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void SpotiftyLogin::Start()
extern "C" IL2CPP_METHOD_ATTR void SpotiftyLogin_Start_mF0CB5B3938011A276846D921A9B50A031AAF059D (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotiftyLogin_Start_mF0CB5B3938011A276846D921A9B50A031AAF059D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral77371EBC2D84DFF90E5FD1358DFA40AB94D93920, /*hidden argument*/NULL);
		V_0 = L_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		NullCheck(L_1);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_2 = GameObject_AddComponent_TisUniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB_m333454E40F1E6B59EA21CB600871CEAEA814667A(L_1, /*hidden argument*/GameObject_AddComponent_TisUniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB_m333454E40F1E6B59EA21CB600871CEAEA814667A_RuntimeMethod_var);
		__this->set_webView_4(L_2);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_3 = __this->get_webView_4();
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_4 = (ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 *)il2cpp_codegen_object_new(ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998_il2cpp_TypeInfo_var);
		ShouldCloseDelegate__ctor_mF65DFABA7263681AACE8A4E6A46543AE77E3CAC0(L_4, __this, (intptr_t)((intptr_t)SpotiftyLogin_U3CStartU3Eb__5_0_mD46D41AE18AE0DC76D7A602E85B3CB120EFA14B5_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		UniWebView_add_OnShouldClose_mF4E8FADA63C9F8549DA92D3C46097F334826D887(L_3, L_4, /*hidden argument*/NULL);
		HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_5 = (HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 *)il2cpp_codegen_object_new(HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7_il2cpp_TypeInfo_var);
		HttpClient__ctor_m179C3B29F7C664CDC5B5761E24EC2E9685385A1F(L_5, /*hidden argument*/NULL);
		__this->set_client_7(L_5);
		return;
	}
}
// System.Void SpotiftyLogin::Update()
extern "C" IL2CPP_METHOD_ATTR void SpotiftyLogin_Update_m76FC82398B78D0F3B41DE54E4DAF377D11F4E1F0 (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotiftyLogin_Update_m76FC82398B78D0F3B41DE54E4DAF377D11F4E1F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = Input_GetKeyDown_m0CBC4672BC86FE82A9210B7FD2F475E2DD9C3163(_stringLiteral07C342BE6E560E7F43842E2E21B774E61D85F047, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		SpotiftyLogin_DoSignInAsync_m063D3947DA59864F4DABD1920AF41A83709B202B(__this, /*hidden argument*/NULL);
		return;
	}

IL_0014:
	{
		bool L_1 = Input_GetKeyDown_m0CBC4672BC86FE82A9210B7FD2F475E2DD9C3163(_stringLiteral516B9783FCA517EECBD1D064DA2D165310B19759, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		SpotiftyLogin_PlayPause_m6266607EBE5BD177B3FE83C4006798874EF73B63(__this, /*hidden argument*/NULL);
	}

IL_0026:
	{
		return;
	}
}
// System.Threading.Tasks.Task SpotiftyLogin::DoSignInAsync()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpotiftyLogin_DoSignInAsync_m063D3947DA59864F4DABD1920AF41A83709B202B (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotiftyLogin_DoSignInAsync_m063D3947DA59864F4DABD1920AF41A83709B202B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2  L_1 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_m2C1F1C4A3C36AC3AF6A6933666FF50FB22562668((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_m2C1F1C4A3C36AC3AF6A6933666FF50FB22562668_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task SpotiftyLogin::WaitForCallback(System.Net.Http.HttpClient,System.String)
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpotiftyLogin_WaitForCallback_m8728D0B5560ADC5D230DECB90AF9829E08BA8BF6 (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * ___client0, String_t* ___state1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotiftyLogin_WaitForCallback_m8728D0B5560ADC5D230DECB90AF9829E08BA8BF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_3(__this);
		HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_0 = ___client0;
		(&V_0)->set_client_2(L_0);
		String_t* L_1 = ___state1;
		(&V_0)->set_state_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_2 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_2);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257  L_3 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_4 = L_3.get_U3CU3Et__builder_1();
		V_1 = L_4;
		AsyncTaskMethodBuilder_Start_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m7DC605016D0DA8AC47C4C811AAD78B6BBBCF2BD8((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m7DC605016D0DA8AC47C4C811AAD78B6BBBCF2BD8_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_5 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_6 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void SpotiftyLogin::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void SpotiftyLogin_OnDestroy_m4D31BFA1AE13BB80529723E2197636D12FF1069D (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	{
		SpotiftyLogin_CloseWebView_m75F327DD482F4839DE3B12A80AD3D5F41344DA21(__this, /*hidden argument*/NULL);
		HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_0 = __this->get_client_7();
		NullCheck(L_0);
		HttpMessageInvoker_Dispose_mD4F72E4580D4BE545E8E3AB97C0A9BB0AB49C212(L_0, /*hidden argument*/NULL);
		__this->set_client_7((HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 *)NULL);
		return;
	}
}
// System.Void SpotiftyLogin::CloseWebView()
extern "C" IL2CPP_METHOD_ATTR void SpotiftyLogin_CloseWebView_m75F327DD482F4839DE3B12A80AD3D5F41344DA21 (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotiftyLogin_CloseWebView_m75F327DD482F4839DE3B12A80AD3D5F41344DA21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * V_0 = NULL;
	{
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_0 = __this->get_webView_4();
		V_0 = L_0;
		__this->set_webView_4((UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *)NULL);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Threading.Tasks.Task SpotiftyLogin::Play()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpotiftyLogin_Play_m2F4F3137D6BDFC563905895703C89CC520CAEE7B (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotiftyLogin_Play_m2F4F3137D6BDFC563905895703C89CC520CAEE7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C  L_1 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mDD7D66C4C1749D6D33B99988591C77949AFCF88E((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mDD7D66C4C1749D6D33B99988591C77949AFCF88E_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task SpotiftyLogin::Pause()
extern "C" IL2CPP_METHOD_ATTR Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * SpotiftyLogin_Pause_mEA99580E9179AD71470FD390C64FCF8A19FF080D (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotiftyLogin_Pause_mEA99580E9179AD71470FD390C64FCF8A19FF080D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3  V_0;
	memset(&V_0, 0, sizeof(V_0));
	AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		(&V_0)->set_U3CU3E4__this_2(__this);
		IL2CPP_RUNTIME_CLASS_INIT(AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_0 = AsyncTaskMethodBuilder_Create_m081DF9A202E7C2F3CF3D41E1E63E63DA18F19FDB(/*hidden argument*/NULL);
		(&V_0)->set_U3CU3Et__builder_1(L_0);
		(&V_0)->set_U3CU3E1__state_0((-1));
		U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3  L_1 = V_0;
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487  L_2 = L_1.get_U3CU3Et__builder_1();
		V_1 = L_2;
		AsyncTaskMethodBuilder_Start_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEF76E010AA1628E6C30816358ADF786CF5A22A9((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)(&V_1), (U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 *)(&V_0), /*hidden argument*/AsyncTaskMethodBuilder_Start_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEF76E010AA1628E6C30816358ADF786CF5A22A9_RuntimeMethod_var);
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_3 = (&V_0)->get_address_of_U3CU3Et__builder_1();
		Task_t1F48C203E163126EBC69ACCA679D1A462DEE9EB2 * L_4 = AsyncTaskMethodBuilder_get_Task_m3E45BC00F7D224FEA04AB9BF26DB52E131D33022((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void SpotiftyLogin::PlayPause()
extern "C" IL2CPP_METHOD_ATTR void SpotiftyLogin_PlayPause_m6266607EBE5BD177B3FE83C4006798874EF73B63 (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_IsPaused_8();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		SpotiftyLogin_Play_m2F4F3137D6BDFC563905895703C89CC520CAEE7B(__this, /*hidden argument*/NULL);
		goto IL_0018;
	}

IL_0011:
	{
		SpotiftyLogin_Pause_mEA99580E9179AD71470FD390C64FCF8A19FF080D(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		bool L_1 = __this->get_IsPaused_8();
		__this->set_IsPaused_8((bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void SpotiftyLogin::Login()
extern "C" IL2CPP_METHOD_ATTR void SpotiftyLogin_Login_m5DF83D00F1110270F9DBF7BD70D8819C0772D55E (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	{
		SpotiftyLogin_DoSignInAsync_m063D3947DA59864F4DABD1920AF41A83709B202B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SpotiftyLogin::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SpotiftyLogin__ctor_m42C9C49987DD419902AB87EC0FEC3804E081FC25 (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpotiftyLogin__ctor_m42C9C49987DD419902AB87EC0FEC3804E081FC25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_ApiBaseUrl_6(_stringLiteral27D8065B51E8577B2ED34800B1C74E812539FC84);
		__this->set_IsPaused_8((bool)1);
		__this->set_DeviceId_9(_stringLiteral3D9E765D7BA857C78A48E394812257CD7794C617);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean SpotiftyLogin::<Start>b__5_0(UniWebView)
extern "C" IL2CPP_METHOD_ATTR bool SpotiftyLogin_U3CStartU3Eb__5_0_mD46D41AE18AE0DC76D7A602E85B3CB120EFA14B5 (SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___view0, const RuntimeMethod* method)
{
	{
		__this->set_webView_4((UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *)NULL);
		return (bool)1;
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
// System.Void SpotiftyLogin_<DoSignInAsync>d__7::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CDoSignInAsyncU3Ed__7_MoveNext_mA623832C4C1226069800A1B3F9874017B26A0EB4 (U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDoSignInAsyncU3Ed__7_MoveNext_mA623832C4C1226069800A1B3F9874017B26A0EB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00d7;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral9805AC55B9E584DBE26361DAAFBC0DADD634CE0A, /*hidden argument*/NULL);
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_4 = V_1;
			NullCheck(L_4);
			HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_5 = L_4->get_client_7();
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_6 = V_1;
			NullCheck(L_6);
			String_t* L_7 = L_6->get_ApiBaseUrl_6();
			String_t* L_8 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_7, _stringLiteralEB3EF5B64FEA70627EE286D5AD0C95AF4DE65A7C, /*hidden argument*/NULL);
			NullCheck(L_5);
			Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * L_9 = HttpClient_GetAsync_mB979915E31872E80CA29D0724DB7F6239A914D99(L_5, L_8, /*hidden argument*/NULL);
			NullCheck(L_9);
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_10 = Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0(L_9, /*hidden argument*/Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0_RuntimeMethod_var);
			V_3 = L_10;
			bool L_11 = TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_008b;
			}
		}

IL_004c:
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->set_U3CU3E1__state_0(L_12);
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_13 = V_3;
			__this->set_U3CU3Eu__1_3(L_13);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_14 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mA05BBE8EB654A813785564578AD6A2B3A5EEE8D2((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_14, (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_3), (U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mA05BBE8EB654A813785564578AD6A2B3A5EEE8D2_RuntimeMethod_var);
			goto IL_01af;
		}

IL_006f:
		{
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_15 = __this->get_U3CU3Eu__1_3();
			V_3 = L_15;
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * L_16 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 ));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->set_U3CU3E1__state_0(L_17);
		}

IL_008b:
		{
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_18 = TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2_RuntimeMethod_var);
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_19 = L_18;
			NullCheck(L_19);
			HttpResponseMessage_EnsureSuccessStatusCode_mFC49F01BD731C4FE89B7143E0AA8C6137F372B44(L_19, /*hidden argument*/NULL);
			NullCheck(L_19);
			HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_20 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_21 = HttpContent_ReadAsStringAsync_m499CCA8B02B3AFB793C0783D28220FC7A531A24D(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_22 = Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61(L_21, /*hidden argument*/Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61_RuntimeMethod_var);
			V_4 = L_22;
			bool L_23 = TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94((TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_00f4;
			}
		}

IL_00b3:
		{
			int32_t L_24 = 1;
			V_0 = L_24;
			__this->set_U3CU3E1__state_0(L_24);
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_25 = V_4;
			__this->set_U3CU3Eu__2_4(L_25);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_26 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mBC8F8A17181CC5DD63F7ED3EB599D28FC6D087FE((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_26, (TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_4), (U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2_mBC8F8A17181CC5DD63F7ED3EB599D28FC6D087FE_RuntimeMethod_var);
			goto IL_01af;
		}

IL_00d7:
		{
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_27 = __this->get_U3CU3Eu__2_4();
			V_4 = L_27;
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * L_28 = __this->get_address_of_U3CU3Eu__2_4();
			il2cpp_codegen_initobj(L_28, sizeof(TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 ));
			int32_t L_29 = (-1);
			V_0 = L_29;
			__this->set_U3CU3E1__state_0(L_29);
		}

IL_00f4:
		{
			String_t* L_30 = TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3((TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3_RuntimeMethod_var);
			V_2 = L_30;
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_31 = V_1;
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_32 = V_1;
			NullCheck(L_32);
			HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_33 = L_32->get_client_7();
			String_t* L_34 = V_2;
			NullCheck(L_31);
			SpotiftyLogin_WaitForCallback_m8728D0B5560ADC5D230DECB90AF9829E08BA8BF6(L_31, L_33, L_34, /*hidden argument*/NULL);
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_35 = V_1;
			NullCheck(L_35);
			UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_36 = L_35->get_webView_4();
			int32_t L_37 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
			int32_t L_38 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
			Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_39;
			memset(&L_39, 0, sizeof(L_39));
			Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_39), (0.0f), (0.0f), (((float)((float)L_37))), (((float)((float)L_38))), /*hidden argument*/NULL);
			NullCheck(L_36);
			UniWebView_set_Frame_m5D8A545371F854091361FB698DCCF45A10C76CB9(L_36, L_39, /*hidden argument*/NULL);
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_40 = V_1;
			NullCheck(L_40);
			UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_41 = L_40->get_webView_4();
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_42 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_43 = L_42;
			NullCheck(L_43);
			ArrayElementTypeCheck (L_43, _stringLiteral310C3A2FA52D468C1A69568D9E3448429DC7B705);
			(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral310C3A2FA52D468C1A69568D9E3448429DC7B705);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_44 = L_43;
			String_t* L_45 = V_2;
			NullCheck(L_44);
			ArrayElementTypeCheck (L_44, L_45);
			(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_45);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_46 = L_44;
			NullCheck(L_46);
			ArrayElementTypeCheck (L_46, _stringLiteral20AE2117886DAEA45AD17FAE5272B38A530F7F95);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral20AE2117886DAEA45AD17FAE5272B38A530F7F95);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_47 = L_46;
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_48 = V_1;
			NullCheck(L_48);
			String_t* L_49 = L_48->get_ApiBaseUrl_6();
			NullCheck(L_47);
			ArrayElementTypeCheck (L_47, L_49);
			(L_47)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_49);
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_50 = L_47;
			NullCheck(L_50);
			ArrayElementTypeCheck (L_50, _stringLiteral75A25C2BE83FDFA0BB221B04CF3A4525E9F1203A);
			(L_50)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral75A25C2BE83FDFA0BB221B04CF3A4525E9F1203A);
			String_t* L_51 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_50, /*hidden argument*/NULL);
			NullCheck(L_41);
			UniWebView_Load_m27CFE9E72534ABEAEA16DE6AAABF6C7556305B6E(L_41, L_51, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_52 = V_1;
			NullCheck(L_52);
			UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_53 = L_52->get_webView_4();
			NullCheck(L_53);
			UniWebView_Show_m900E118C2CE18F8DBB39C49E4E25948478FC4102(L_53, (bool)0, 0, (0.4f), (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL, /*hidden argument*/NULL);
			goto IL_019c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0183;
		throw e;
	}

CATCH_0183:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_54 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_55 = V_5;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_54, L_55, /*hidden argument*/NULL);
		goto IL_01af;
	} // end catch (depth: 1)

IL_019c:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_56 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_56, /*hidden argument*/NULL);
	}

IL_01af:
	{
		return;
	}
}
extern "C"  void U3CDoSignInAsyncU3Ed__7_MoveNext_mA623832C4C1226069800A1B3F9874017B26A0EB4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * _thisAdjusted = reinterpret_cast<U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 *>(__this + 1);
	U3CDoSignInAsyncU3Ed__7_MoveNext_mA623832C4C1226069800A1B3F9874017B26A0EB4(_thisAdjusted, method);
}
// System.Void SpotiftyLogin_<DoSignInAsync>d__7::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CDoSignInAsyncU3Ed__7_SetStateMachine_m8B30C1F8D99C63814E026A71EB4ACDD679265E46 (U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CDoSignInAsyncU3Ed__7_SetStateMachine_m8B30C1F8D99C63814E026A71EB4ACDD679265E46_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 * _thisAdjusted = reinterpret_cast<U3CDoSignInAsyncU3Ed__7_t374DD674BF5C20CFCCBB68C4D82CBDEE602C50D2 *>(__this + 1);
	U3CDoSignInAsyncU3Ed__7_SetStateMachine_m8B30C1F8D99C63814E026A71EB4ACDD679265E46(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpotiftyLogin_<Pause>d__13::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CPauseU3Ed__13_MoveNext_mE89FC1E787DB329D3706DA25D843D1377E23E7F8 (U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPauseU3Ed__13_MoveNext_mE89FC1E787DB329D3706DA25D843D1377E23E7F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_006e;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00cc;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral781961BC81C25697841ECCE5D4D9DAD9F6B261C6, /*hidden argument*/NULL);
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_4 = V_1;
			NullCheck(L_4);
			HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_5 = L_4->get_client_7();
			StringContent_t0E49805143AA8BCE4640914150158663B9061079 * L_6 = (StringContent_t0E49805143AA8BCE4640914150158663B9061079 *)il2cpp_codegen_object_new(StringContent_t0E49805143AA8BCE4640914150158663B9061079_il2cpp_TypeInfo_var);
			StringContent__ctor_m14C504A380661472DEB032923DD27742561EC45C(L_6, _stringLiteralBF21A9E8FBC5A3846FB05B4FA0859E0917B2202F, /*hidden argument*/NULL);
			NullCheck(L_5);
			Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * L_7 = HttpClient_PutAsync_m600B18C3B5B9C424DD541EF1AAD0A248B24829E7(L_5, _stringLiteral30F9F91F5CF7A0B6F4D11D0BCD16A5F9D4A1CAED, L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_8 = Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0(L_7, /*hidden argument*/Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0_RuntimeMethod_var);
			V_3 = L_8;
			bool L_9 = TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_008a;
			}
		}

IL_004b:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_11 = V_3;
			__this->set_U3CU3Eu__1_3(L_11);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_m5D6BE89DCCED75301497F9998148B85EE8135C35((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_12, (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_3), (U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_m5D6BE89DCCED75301497F9998148B85EE8135C35_RuntimeMethod_var);
			goto IL_012f;
		}

IL_006e:
		{
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_13 = __this->get_U3CU3Eu__1_3();
			V_3 = L_13;
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * L_14 = __this->get_address_of_U3CU3Eu__1_3();
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_008a:
		{
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_16 = TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2_RuntimeMethod_var);
			NullCheck(L_16);
			HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_17 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_18 = HttpContent_ReadAsStringAsync_m499CCA8B02B3AFB793C0783D28220FC7A531A24D(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_19 = Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61(L_18, /*hidden argument*/Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61_RuntimeMethod_var);
			V_4 = L_19;
			bool L_20 = TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94((TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_00e9;
			}
		}

IL_00ab:
		{
			int32_t L_21 = 1;
			V_0 = L_21;
			__this->set_U3CU3E1__state_0(L_21);
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_22 = V_4;
			__this->set_U3CU3Eu__2_4(L_22);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_23 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEBCE726EC238FCE181D231A149EAD42A94CF250((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_23, (TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_4), (U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3_mBEBCE726EC238FCE181D231A149EAD42A94CF250_RuntimeMethod_var);
			goto IL_012f;
		}

IL_00cc:
		{
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_24 = __this->get_U3CU3Eu__2_4();
			V_4 = L_24;
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * L_25 = __this->get_address_of_U3CU3Eu__2_4();
			il2cpp_codegen_initobj(L_25, sizeof(TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 ));
			int32_t L_26 = (-1);
			V_0 = L_26;
			__this->set_U3CU3E1__state_0(L_26);
		}

IL_00e9:
		{
			String_t* L_27 = TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3((TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3_RuntimeMethod_var);
			V_2 = L_27;
			String_t* L_28 = V_2;
			String_t* L_29 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCDE1EB2FE366B2C13B8B9C56597730709C974A4C, L_28, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_29, /*hidden argument*/NULL);
			goto IL_011c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0103;
		throw e;
	}

CATCH_0103:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_30 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_31 = V_5;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_30, L_31, /*hidden argument*/NULL);
		goto IL_012f;
	} // end catch (depth: 1)

IL_011c:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_32 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_32, /*hidden argument*/NULL);
	}

IL_012f:
	{
		return;
	}
}
extern "C"  void U3CPauseU3Ed__13_MoveNext_mE89FC1E787DB329D3706DA25D843D1377E23E7F8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * _thisAdjusted = reinterpret_cast<U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 *>(__this + 1);
	U3CPauseU3Ed__13_MoveNext_mE89FC1E787DB329D3706DA25D843D1377E23E7F8(_thisAdjusted, method);
}
// System.Void SpotiftyLogin_<Pause>d__13::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CPauseU3Ed__13_SetStateMachine_mB45D3DDED01289717DDF958005F1577078EA27EE (U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CPauseU3Ed__13_SetStateMachine_mB45D3DDED01289717DDF958005F1577078EA27EE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 * _thisAdjusted = reinterpret_cast<U3CPauseU3Ed__13_t7C5AE3B827129116ACE98E9B9EE4EEF76A7253C3 *>(__this + 1);
	U3CPauseU3Ed__13_SetStateMachine_mB45D3DDED01289717DDF958005F1577078EA27EE(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpotiftyLogin_<Play>d__12::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CPlayU3Ed__12_MoveNext_m92D0C2A3162EB0837371FA384EB8670F4AE3E429 (U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPlayU3Ed__12_MoveNext_m92D0C2A3162EB0837371FA384EB8670F4AE3E429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * V_1 = NULL;
	String_t* V_2 = NULL;
	HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * V_3 = NULL;
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  V_4;
	memset(&V_4, 0, sizeof(V_4));
	TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Exception_t * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0070;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00dd;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral5D12BD53552CAFC41CA6146C04870DF2E1574E13, /*hidden argument*/NULL);
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_4 = V_1;
			NullCheck(L_4);
			HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_5 = L_4->get_client_7();
			StringContent_t0E49805143AA8BCE4640914150158663B9061079 * L_6 = (StringContent_t0E49805143AA8BCE4640914150158663B9061079 *)il2cpp_codegen_object_new(StringContent_t0E49805143AA8BCE4640914150158663B9061079_il2cpp_TypeInfo_var);
			StringContent__ctor_m14C504A380661472DEB032923DD27742561EC45C(L_6, _stringLiteral0727C5584851CE551EAB519A195EC4C1DA48EBF5, /*hidden argument*/NULL);
			NullCheck(L_5);
			Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * L_7 = HttpClient_PutAsync_m600B18C3B5B9C424DD541EF1AAD0A248B24829E7(L_5, _stringLiteral22CA7BEB9A08D067CF5F7298B11507321D496458, L_6, /*hidden argument*/NULL);
			NullCheck(L_7);
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_8 = Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0(L_7, /*hidden argument*/Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0_RuntimeMethod_var);
			V_4 = L_8;
			bool L_9 = TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_008d;
			}
		}

IL_004c:
		{
			int32_t L_10 = 0;
			V_0 = L_10;
			__this->set_U3CU3E1__state_0(L_10);
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_11 = V_4;
			__this->set_U3CU3Eu__1_4(L_11);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_12 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mD4115B988D4E229C42FF1CA2CAE29CC5518015E5((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_12, (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_4), (U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_mD4115B988D4E229C42FF1CA2CAE29CC5518015E5_RuntimeMethod_var);
			goto IL_015a;
		}

IL_0070:
		{
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_13 = __this->get_U3CU3Eu__1_4();
			V_4 = L_13;
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * L_14 = __this->get_address_of_U3CU3Eu__1_4();
			il2cpp_codegen_initobj(L_14, sizeof(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 ));
			int32_t L_15 = (-1);
			V_0 = L_15;
			__this->set_U3CU3E1__state_0(L_15);
		}

IL_008d:
		{
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_16 = TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2_RuntimeMethod_var);
			V_3 = L_16;
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_17 = V_3;
			__this->set_U3CrU3E5__2_3(L_17);
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_18 = __this->get_U3CrU3E5__2_3();
			NullCheck(L_18);
			HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_19 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_20 = HttpContent_ReadAsStringAsync_m499CCA8B02B3AFB793C0783D28220FC7A531A24D(L_19, /*hidden argument*/NULL);
			NullCheck(L_20);
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_21 = Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61(L_20, /*hidden argument*/Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61_RuntimeMethod_var);
			V_5 = L_21;
			bool L_22 = TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94((TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_5), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_00fa;
			}
		}

IL_00bc:
		{
			int32_t L_23 = 1;
			V_0 = L_23;
			__this->set_U3CU3E1__state_0(L_23);
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_24 = V_5;
			__this->set_U3CU3Eu__2_5(L_24);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_25 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_m6A99DEB927FE2720A7A013F154D0D4775CAEEC27((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_25, (TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_5), (U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C_m6A99DEB927FE2720A7A013F154D0D4775CAEEC27_RuntimeMethod_var);
			goto IL_015a;
		}

IL_00dd:
		{
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_26 = __this->get_U3CU3Eu__2_5();
			V_5 = L_26;
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * L_27 = __this->get_address_of_U3CU3Eu__2_5();
			il2cpp_codegen_initobj(L_27, sizeof(TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 ));
			int32_t L_28 = (-1);
			V_0 = L_28;
			__this->set_U3CU3E1__state_0(L_28);
		}

IL_00fa:
		{
			String_t* L_29 = TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3((TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_5), /*hidden argument*/TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3_RuntimeMethod_var);
			V_2 = L_29;
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_30 = __this->get_U3CrU3E5__2_3();
			NullCheck(L_30);
			HttpResponseHeaders_t51F7C46C9CE47E3B424A6137CE8F5BCA4E2B1D59 * L_31 = HttpResponseMessage_get_Headers_mBD52D7A018509B2A6A55C0925A40955A33D20B98(L_30, /*hidden argument*/NULL);
			NullCheck(L_31);
			HttpHeaders_Add_m41401B7E6B948DF760D603C2F43AC19ACC48D7FA(L_31, _stringLiteral77D12B97BA61FFCCB079E0DD2EF6809C1E957255, _stringLiteralCA9FD0B2414177B79AC2EA7AD76252E4EF6DD65C, /*hidden argument*/NULL);
			String_t* L_32 = V_2;
			String_t* L_33 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralFBAA357ACBCB9D448868F8AB1D86F48D4AAEFD11, L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_33, /*hidden argument*/NULL);
			goto IL_0147;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_012e;
		throw e;
	}

CATCH_012e:
	{ // begin catch(System.Exception)
		V_6 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_34 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_35 = V_6;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_34, L_35, /*hidden argument*/NULL);
		goto IL_015a;
	} // end catch (depth: 1)

IL_0147:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_36 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_36, /*hidden argument*/NULL);
	}

IL_015a:
	{
		return;
	}
}
extern "C"  void U3CPlayU3Ed__12_MoveNext_m92D0C2A3162EB0837371FA384EB8670F4AE3E429_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * _thisAdjusted = reinterpret_cast<U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C *>(__this + 1);
	U3CPlayU3Ed__12_MoveNext_m92D0C2A3162EB0837371FA384EB8670F4AE3E429(_thisAdjusted, method);
}
// System.Void SpotiftyLogin_<Play>d__12::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CPlayU3Ed__12_SetStateMachine_m1C4E013C3F6C418FA4D4A965DF459783F65E3DC1 (U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CPlayU3Ed__12_SetStateMachine_m1C4E013C3F6C418FA4D4A965DF459783F65E3DC1_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C * _thisAdjusted = reinterpret_cast<U3CPlayU3Ed__12_t89A2EF9EF2800D6FB431D881738694CAE970089C *>(__this + 1);
	U3CPlayU3Ed__12_SetStateMachine_m1C4E013C3F6C418FA4D4A965DF459783F65E3DC1(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpotiftyLogin_<WaitForCallback>d__8::MoveNext()
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForCallbackU3Ed__8_MoveNext_m57D5F79AD33858368B51F01D61A2A820F7716432 (U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitForCallbackU3Ed__8_MoveNext_m57D5F79AD33858368B51F01D61A2A820F7716432_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * V_1 = NULL;
	String_t* V_2 = NULL;
	TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  V_3;
	memset(&V_3, 0, sizeof(V_3));
	TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_0070;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00d8;
			}
		}

IL_0018:
		{
			HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_4 = __this->get_client_2();
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_5 = V_1;
			NullCheck(L_5);
			String_t* L_6 = L_5->get_ApiBaseUrl_6();
			String_t* L_7 = __this->get_state_4();
			IL2CPP_RUNTIME_CLASS_INIT(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E_il2cpp_TypeInfo_var);
			String_t* L_8 = Uri_EscapeDataString_mE1095E7A694DF447B699676C651F5EA5D98A2925(L_7, /*hidden argument*/NULL);
			String_t* L_9 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_6, _stringLiteralCF1AD600BAD94AA9A997B61D9569D46E3DCC5EE7, L_8, /*hidden argument*/NULL);
			NullCheck(L_4);
			Task_1_t519CB3A303B53176BD616AC273201D66B84FF270 * L_10 = HttpClient_GetAsync_mB979915E31872E80CA29D0724DB7F6239A914D99(L_4, L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_11 = Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0(L_10, /*hidden argument*/Task_1_GetAwaiter_m511397276BFE6D43B77D1BD80905DF2FB0FA54E0_RuntimeMethod_var);
			V_3 = L_11;
			bool L_12 = TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_3), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m0F711316D40833EE5C67F3E65571EF033B9364DF_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_008c;
			}
		}

IL_004d:
		{
			int32_t L_13 = 0;
			V_0 = L_13;
			__this->set_U3CU3E1__state_0(L_13);
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_14 = V_3;
			__this->set_U3CU3Eu__1_5(L_14);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_15 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m803944ED22822FD2A20B37214871D084C007DD96((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_15, (TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_3), (U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m803944ED22822FD2A20B37214871D084C007DD96_RuntimeMethod_var);
			goto IL_0163;
		}

IL_0070:
		{
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86  L_16 = __this->get_U3CU3Eu__1_5();
			V_3 = L_16;
			TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 * L_17 = __this->get_address_of_U3CU3Eu__1_5();
			il2cpp_codegen_initobj(L_17, sizeof(TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 ));
			int32_t L_18 = (-1);
			V_0 = L_18;
			__this->set_U3CU3E1__state_0(L_18);
		}

IL_008c:
		{
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_19 = TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2((TaskAwaiter_1_t0CD71BC02837B0D53252196D19DABDA73A615B86 *)(&V_3), /*hidden argument*/TaskAwaiter_1_GetResult_m706665648BB29D83FD0C72CFA6279966143192A2_RuntimeMethod_var);
			HttpResponseMessage_t619DB9FDC8E63CDF2D0A314B61A4C6609A43F904 * L_20 = L_19;
			NullCheck(L_20);
			HttpResponseMessage_EnsureSuccessStatusCode_mFC49F01BD731C4FE89B7143E0AA8C6137F372B44(L_20, /*hidden argument*/NULL);
			NullCheck(L_20);
			HttpContent_t678722F60CA151DD19AFCA917657BE24F111A41D * L_21 = HttpResponseMessage_get_Content_m325C3E47B0D7E1DD70CA36FA04B894A152AD4420(L_20, /*hidden argument*/NULL);
			NullCheck(L_21);
			Task_1_t4A75FEC8F36C5D4F8793BB8C94E4DAA7457D0286 * L_22 = HttpContent_ReadAsStringAsync_m499CCA8B02B3AFB793C0783D28220FC7A531A24D(L_21, /*hidden argument*/NULL);
			NullCheck(L_22);
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_23 = Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61(L_22, /*hidden argument*/Task_1_GetAwaiter_mBC24D09E3C1AB76F290AB7E9017AB8913242EC61_RuntimeMethod_var);
			V_4 = L_23;
			bool L_24 = TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94((TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_4), /*hidden argument*/TaskAwaiter_1_get_IsCompleted_m087FA74E453B58AB5AAD0A64BEDDB49070C6CE94_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00f5;
			}
		}

IL_00b4:
		{
			int32_t L_25 = 1;
			V_0 = L_25;
			__this->set_U3CU3E1__state_0(L_25);
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_26 = V_4;
			__this->set_U3CU3Eu__2_6(L_26);
			AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_27 = __this->get_address_of_U3CU3Et__builder_1();
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m37C373317E7D5EE46545F0D2F7F86C264263E62A((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_27, (TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_4), (U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 *)__this, /*hidden argument*/AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483_TisU3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257_m37C373317E7D5EE46545F0D2F7F86C264263E62A_RuntimeMethod_var);
			goto IL_0163;
		}

IL_00d8:
		{
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483  L_28 = __this->get_U3CU3Eu__2_6();
			V_4 = L_28;
			TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 * L_29 = __this->get_address_of_U3CU3Eu__2_6();
			il2cpp_codegen_initobj(L_29, sizeof(TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 ));
			int32_t L_30 = (-1);
			V_0 = L_30;
			__this->set_U3CU3E1__state_0(L_30);
		}

IL_00f5:
		{
			String_t* L_31 = TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3((TaskAwaiter_1_t614647F82D882519EA620421E613B1DB6A463483 *)(&V_4), /*hidden argument*/TaskAwaiter_1_GetResult_m2CE622156E52C41B443C3751AB08398ECC3CA3F3_RuntimeMethod_var);
			V_2 = L_31;
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_32 = V_1;
			String_t* L_33 = V_2;
			NullCheck(L_32);
			L_32->set_Token_5(L_33);
			String_t* L_34 = V_2;
			String_t* L_35 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral8E54285CFC41A77DC6AF23178CC201C8A0C7FA60, L_34, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_35, /*hidden argument*/NULL);
			HttpClient_tC7477E4B30DD5CFE1B41DD9CD2EA1F83DB4DE9E7 * L_36 = __this->get_client_2();
			NullCheck(L_36);
			HttpRequestHeaders_tD29E9D795891A7A0D4FE8C8AA7BF0E756FCA40D4 * L_37 = HttpClient_get_DefaultRequestHeaders_m3D044032F7024F2F9E6AD821FFCF49FBEBF0152F(L_36, /*hidden argument*/NULL);
			String_t* L_38 = V_2;
			AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 * L_39 = (AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6 *)il2cpp_codegen_object_new(AuthenticationHeaderValue_tC285A16C25538CA86FA59B88CC25E6999BB5F1A6_il2cpp_TypeInfo_var);
			AuthenticationHeaderValue__ctor_m8EBD61CBB89C61631F2C2B4E592B390098F72D3C(L_39, _stringLiteral2C035AC06ADD3F441D7B835885958B03DEAC3D50, L_38, /*hidden argument*/NULL);
			NullCheck(L_37);
			HttpRequestHeaders_set_Authorization_m093B11E4E81ADCAF59C32CDFEF0C71111D9FE206(L_37, L_39, /*hidden argument*/NULL);
			SpotiftyLogin_t4A08281A3B749813DFC009D01820F3E8F332CD1B * L_40 = V_1;
			NullCheck(L_40);
			SpotiftyLogin_CloseWebView_m75F327DD482F4839DE3B12A80AD3D5F41344DA21(L_40, /*hidden argument*/NULL);
			goto IL_0150;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0137;
		throw e;
	}

CATCH_0137:
	{ // begin catch(System.Exception)
		V_5 = ((Exception_t *)__exception_local);
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_41 = __this->get_address_of_U3CU3Et__builder_1();
		Exception_t * L_42 = V_5;
		AsyncTaskMethodBuilder_SetException_m370C484922A63A6EF96E241D1370B8814F1F2D6B((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_41, L_42, /*hidden argument*/NULL);
		goto IL_0163;
	} // end catch (depth: 1)

IL_0150:
	{
		__this->set_U3CU3E1__state_0(((int32_t)-2));
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_43 = __this->get_address_of_U3CU3Et__builder_1();
		AsyncTaskMethodBuilder_SetResult_m151016FB698F3BB34A73BAE693A97513A7E4C838((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_43, /*hidden argument*/NULL);
	}

IL_0163:
	{
		return;
	}
}
extern "C"  void U3CWaitForCallbackU3Ed__8_MoveNext_m57D5F79AD33858368B51F01D61A2A820F7716432_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * _thisAdjusted = reinterpret_cast<U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 *>(__this + 1);
	U3CWaitForCallbackU3Ed__8_MoveNext_m57D5F79AD33858368B51F01D61A2A820F7716432(_thisAdjusted, method);
}
// System.Void SpotiftyLogin_<WaitForCallback>d__8::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern "C" IL2CPP_METHOD_ATTR void U3CWaitForCallbackU3Ed__8_SetStateMachine_mD9881514197FCD9957E1CF24B39C5201FF0278EF (U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	{
		AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 * L_0 = __this->get_address_of_U3CU3Et__builder_1();
		RuntimeObject* L_1 = ___stateMachine0;
		AsyncTaskMethodBuilder_SetStateMachine_mB5DD68F7C49EA6D452AEBA02B1B98AED898C3C25((AsyncTaskMethodBuilder_t0CD1893D670405BED201BE8CA6F2E811F2C0F487 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void U3CWaitForCallbackU3Ed__8_SetStateMachine_mD9881514197FCD9957E1CF24B39C5201FF0278EF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___stateMachine0, const RuntimeMethod* method)
{
	U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 * _thisAdjusted = reinterpret_cast<U3CWaitForCallbackU3Ed__8_t6C2EC894924B135435275582071A1B6835524257 *>(__this + 1);
	U3CWaitForCallbackU3Ed__8_SetStateMachine_mD9881514197FCD9957E1CF24B39C5201FF0278EF(_thisAdjusted, ___stateMachine0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView::add_OnPageStarted(UniWebView_PageStartedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnPageStarted_m5B48F82C490A334824AE27FADCA951F6649DE9B3 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_add_OnPageStarted_m5B48F82C490A334824AE27FADCA951F6649DE9B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * V_0 = NULL;
	PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * V_1 = NULL;
	PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * V_2 = NULL;
	{
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_0 = __this->get_OnPageStarted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_1 = V_0;
		V_1 = L_1;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_2 = V_1;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 *)CastclassSealed((RuntimeObject*)L_4, PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78_il2cpp_TypeInfo_var));
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 ** L_5 = __this->get_address_of_OnPageStarted_4();
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_6 = V_2;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_7 = V_1;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_8 = InterlockedCompareExchangeImpl<PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 *>((PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 **)L_5, L_6, L_7);
		V_0 = L_8;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_9 = V_0;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 *)L_9) == ((RuntimeObject*)(PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageStarted(UniWebView_PageStartedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageStarted_mC1681EDF5820E94D9F8E86D012A7D6A54846895A (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_remove_OnPageStarted_mC1681EDF5820E94D9F8E86D012A7D6A54846895A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * V_0 = NULL;
	PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * V_1 = NULL;
	PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * V_2 = NULL;
	{
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_0 = __this->get_OnPageStarted_4();
		V_0 = L_0;
	}

IL_0007:
	{
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_1 = V_0;
		V_1 = L_1;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_2 = V_1;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 *)CastclassSealed((RuntimeObject*)L_4, PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78_il2cpp_TypeInfo_var));
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 ** L_5 = __this->get_address_of_OnPageStarted_4();
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_6 = V_2;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_7 = V_1;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_8 = InterlockedCompareExchangeImpl<PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 *>((PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 **)L_5, L_6, L_7);
		V_0 = L_8;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_9 = V_0;
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 *)L_9) == ((RuntimeObject*)(PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnPageFinished(UniWebView_PageFinishedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnPageFinished_m534C3632F3245390FDEEF7741F90C002E62B9F63 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_add_OnPageFinished_m534C3632F3245390FDEEF7741F90C002E62B9F63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * V_0 = NULL;
	PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * V_1 = NULL;
	PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * V_2 = NULL;
	{
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_0 = __this->get_OnPageFinished_5();
		V_0 = L_0;
	}

IL_0007:
	{
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_1 = V_0;
		V_1 = L_1;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_2 = V_1;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 *)CastclassSealed((RuntimeObject*)L_4, PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702_il2cpp_TypeInfo_var));
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 ** L_5 = __this->get_address_of_OnPageFinished_5();
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_6 = V_2;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_7 = V_1;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_8 = InterlockedCompareExchangeImpl<PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 *>((PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 **)L_5, L_6, L_7);
		V_0 = L_8;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_9 = V_0;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 *)L_9) == ((RuntimeObject*)(PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageFinished(UniWebView_PageFinishedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageFinished_m8A590979F41AFEC55A39193813B5BA1C0ADDCCB1 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_remove_OnPageFinished_m8A590979F41AFEC55A39193813B5BA1C0ADDCCB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * V_0 = NULL;
	PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * V_1 = NULL;
	PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * V_2 = NULL;
	{
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_0 = __this->get_OnPageFinished_5();
		V_0 = L_0;
	}

IL_0007:
	{
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_1 = V_0;
		V_1 = L_1;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_2 = V_1;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 *)CastclassSealed((RuntimeObject*)L_4, PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702_il2cpp_TypeInfo_var));
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 ** L_5 = __this->get_address_of_OnPageFinished_5();
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_6 = V_2;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_7 = V_1;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_8 = InterlockedCompareExchangeImpl<PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 *>((PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 **)L_5, L_6, L_7);
		V_0 = L_8;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_9 = V_0;
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 *)L_9) == ((RuntimeObject*)(PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnPageErrorReceived(UniWebView_PageErrorReceivedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnPageErrorReceived_m7781B02F743510F2FDFAAFC1D895F42AC5B342BA (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_add_OnPageErrorReceived_m7781B02F743510F2FDFAAFC1D895F42AC5B342BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * V_0 = NULL;
	PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * V_1 = NULL;
	PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * V_2 = NULL;
	{
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_0 = __this->get_OnPageErrorReceived_6();
		V_0 = L_0;
	}

IL_0007:
	{
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_1 = V_0;
		V_1 = L_1;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_2 = V_1;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E *)CastclassSealed((RuntimeObject*)L_4, PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E_il2cpp_TypeInfo_var));
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E ** L_5 = __this->get_address_of_OnPageErrorReceived_6();
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_6 = V_2;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_7 = V_1;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_8 = InterlockedCompareExchangeImpl<PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E *>((PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E **)L_5, L_6, L_7);
		V_0 = L_8;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_9 = V_0;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E *)L_9) == ((RuntimeObject*)(PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnPageErrorReceived(UniWebView_PageErrorReceivedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_remove_OnPageErrorReceived_mECD672EE600B43249C2334800606EED753C9BA2F (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_remove_OnPageErrorReceived_mECD672EE600B43249C2334800606EED753C9BA2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * V_0 = NULL;
	PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * V_1 = NULL;
	PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * V_2 = NULL;
	{
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_0 = __this->get_OnPageErrorReceived_6();
		V_0 = L_0;
	}

IL_0007:
	{
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_1 = V_0;
		V_1 = L_1;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_2 = V_1;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E *)CastclassSealed((RuntimeObject*)L_4, PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E_il2cpp_TypeInfo_var));
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E ** L_5 = __this->get_address_of_OnPageErrorReceived_6();
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_6 = V_2;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_7 = V_1;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_8 = InterlockedCompareExchangeImpl<PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E *>((PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E **)L_5, L_6, L_7);
		V_0 = L_8;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_9 = V_0;
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_10 = V_1;
		if ((!(((RuntimeObject*)(PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E *)L_9) == ((RuntimeObject*)(PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnMessageReceived(UniWebView_MessageReceivedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnMessageReceived_m464E414C7161A9199A4C754AB168AEADE5D215E7 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_add_OnMessageReceived_m464E414C7161A9199A4C754AB168AEADE5D215E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * V_0 = NULL;
	MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * V_1 = NULL;
	MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * V_2 = NULL;
	{
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_0 = __this->get_OnMessageReceived_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_1 = V_0;
		V_1 = L_1;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_2 = V_1;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 *)CastclassSealed((RuntimeObject*)L_4, MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582_il2cpp_TypeInfo_var));
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 ** L_5 = __this->get_address_of_OnMessageReceived_7();
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_6 = V_2;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_7 = V_1;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_8 = InterlockedCompareExchangeImpl<MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 *>((MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_9 = V_0;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 *)L_9) == ((RuntimeObject*)(MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnMessageReceived(UniWebView_MessageReceivedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_remove_OnMessageReceived_mCE6F1E9392F7570159368768BFA9FB2A332666A0 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_remove_OnMessageReceived_mCE6F1E9392F7570159368768BFA9FB2A332666A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * V_0 = NULL;
	MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * V_1 = NULL;
	MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * V_2 = NULL;
	{
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_0 = __this->get_OnMessageReceived_7();
		V_0 = L_0;
	}

IL_0007:
	{
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_1 = V_0;
		V_1 = L_1;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_2 = V_1;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 *)CastclassSealed((RuntimeObject*)L_4, MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582_il2cpp_TypeInfo_var));
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 ** L_5 = __this->get_address_of_OnMessageReceived_7();
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_6 = V_2;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_7 = V_1;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_8 = InterlockedCompareExchangeImpl<MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 *>((MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 **)L_5, L_6, L_7);
		V_0 = L_8;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_9 = V_0;
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 *)L_9) == ((RuntimeObject*)(MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnShouldClose(UniWebView_ShouldCloseDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnShouldClose_mF4E8FADA63C9F8549DA92D3C46097F334826D887 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_add_OnShouldClose_mF4E8FADA63C9F8549DA92D3C46097F334826D887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * V_0 = NULL;
	ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * V_1 = NULL;
	ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * V_2 = NULL;
	{
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_0 = __this->get_OnShouldClose_8();
		V_0 = L_0;
	}

IL_0007:
	{
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_1 = V_0;
		V_1 = L_1;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_2 = V_1;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 *)CastclassSealed((RuntimeObject*)L_4, ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998_il2cpp_TypeInfo_var));
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 ** L_5 = __this->get_address_of_OnShouldClose_8();
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_6 = V_2;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_7 = V_1;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_8 = InterlockedCompareExchangeImpl<ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 *>((ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 **)L_5, L_6, L_7);
		V_0 = L_8;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_9 = V_0;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 *)L_9) == ((RuntimeObject*)(ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnShouldClose(UniWebView_ShouldCloseDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_remove_OnShouldClose_m7BD8ECC77CCD181E7F0B84432BF00E9EEF3B7451 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_remove_OnShouldClose_m7BD8ECC77CCD181E7F0B84432BF00E9EEF3B7451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * V_0 = NULL;
	ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * V_1 = NULL;
	ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * V_2 = NULL;
	{
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_0 = __this->get_OnShouldClose_8();
		V_0 = L_0;
	}

IL_0007:
	{
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_1 = V_0;
		V_1 = L_1;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_2 = V_1;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 *)CastclassSealed((RuntimeObject*)L_4, ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998_il2cpp_TypeInfo_var));
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 ** L_5 = __this->get_address_of_OnShouldClose_8();
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_6 = V_2;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_7 = V_1;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_8 = InterlockedCompareExchangeImpl<ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 *>((ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 **)L_5, L_6, L_7);
		V_0 = L_8;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_9 = V_0;
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_10 = V_1;
		if ((!(((RuntimeObject*)(ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 *)L_9) == ((RuntimeObject*)(ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnKeyCodeReceived(UniWebView_KeyCodeReceivedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnKeyCodeReceived_m12061277F3A155EF8EAD34F09D096AA876CAD2D3 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_add_OnKeyCodeReceived_m12061277F3A155EF8EAD34F09D096AA876CAD2D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * V_0 = NULL;
	KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * V_1 = NULL;
	KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * V_2 = NULL;
	{
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_0 = __this->get_OnKeyCodeReceived_9();
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_2 = V_1;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C *)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C ** L_5 = __this->get_address_of_OnKeyCodeReceived_9();
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_6 = V_2;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_7 = V_1;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C *>((KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C **)L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_9 = V_0;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C *)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnKeyCodeReceived(UniWebView_KeyCodeReceivedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_remove_OnKeyCodeReceived_m2D9DD2650657092A57165D5B7C4EB6BD3733ED7E (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_remove_OnKeyCodeReceived_m2D9DD2650657092A57165D5B7C4EB6BD3733ED7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * V_0 = NULL;
	KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * V_1 = NULL;
	KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * V_2 = NULL;
	{
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_0 = __this->get_OnKeyCodeReceived_9();
		V_0 = L_0;
	}

IL_0007:
	{
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_1 = V_0;
		V_1 = L_1;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_2 = V_1;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C *)CastclassSealed((RuntimeObject*)L_4, KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C_il2cpp_TypeInfo_var));
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C ** L_5 = __this->get_address_of_OnKeyCodeReceived_9();
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_6 = V_2;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_7 = V_1;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_8 = InterlockedCompareExchangeImpl<KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C *>((KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C **)L_5, L_6, L_7);
		V_0 = L_8;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_9 = V_0;
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_10 = V_1;
		if ((!(((RuntimeObject*)(KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C *)L_9) == ((RuntimeObject*)(KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnOrientationChanged(UniWebView_OrientationChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnOrientationChanged_m4368C8554E3220329EB39A4CA637F7BCB52AFC29 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_add_OnOrientationChanged_m4368C8554E3220329EB39A4CA637F7BCB52AFC29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_0 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_1 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_2 = NULL;
	{
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_0 = __this->get_OnOrientationChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_2 = V_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 ** L_5 = __this->get_address_of_OnOrientationChanged_10();
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_6 = V_2;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_7 = V_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *>((OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 **)L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_9 = V_0;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnOrientationChanged(UniWebView_OrientationChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_remove_OnOrientationChanged_mE91A3626157D7F3F32354B1E29F5CD48CD171382 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_remove_OnOrientationChanged_mE91A3626157D7F3F32354B1E29F5CD48CD171382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_0 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_1 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_2 = NULL;
	{
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_0 = __this->get_OnOrientationChanged_10();
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_2 = V_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 ** L_5 = __this->get_address_of_OnOrientationChanged_10();
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_6 = V_2;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_7 = V_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *>((OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 **)L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_9 = V_0;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::add_OnWebContentProcessTerminated(UniWebView_OnWebContentProcessTerminatedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnWebContentProcessTerminated_m639DC5CE6C344F05843EB11CD6F237F12948A2CC (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_add_OnWebContentProcessTerminated_m639DC5CE6C344F05843EB11CD6F237F12948A2CC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * V_0 = NULL;
	OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * V_1 = NULL;
	OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * V_2 = NULL;
	{
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_0 = __this->get_OnWebContentProcessTerminated_11();
		V_0 = L_0;
	}

IL_0007:
	{
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_1 = V_0;
		V_1 = L_1;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_2 = V_1;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD *)CastclassSealed((RuntimeObject*)L_4, OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD_il2cpp_TypeInfo_var));
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD ** L_5 = __this->get_address_of_OnWebContentProcessTerminated_11();
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_6 = V_2;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_7 = V_1;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_8 = InterlockedCompareExchangeImpl<OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD *>((OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD **)L_5, L_6, L_7);
		V_0 = L_8;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_9 = V_0;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD *)L_9) == ((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnWebContentProcessTerminated(UniWebView_OnWebContentProcessTerminatedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_remove_OnWebContentProcessTerminated_m97D93E6AEE619308DDD55B7A0D681CD2D847C332 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_remove_OnWebContentProcessTerminated_m97D93E6AEE619308DDD55B7A0D681CD2D847C332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * V_0 = NULL;
	OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * V_1 = NULL;
	OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * V_2 = NULL;
	{
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_0 = __this->get_OnWebContentProcessTerminated_11();
		V_0 = L_0;
	}

IL_0007:
	{
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_1 = V_0;
		V_1 = L_1;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_2 = V_1;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD *)CastclassSealed((RuntimeObject*)L_4, OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD_il2cpp_TypeInfo_var));
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD ** L_5 = __this->get_address_of_OnWebContentProcessTerminated_11();
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_6 = V_2;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_7 = V_1;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_8 = InterlockedCompareExchangeImpl<OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD *>((OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD **)L_5, L_6, L_7);
		V_0 = L_8;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_9 = V_0;
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_10 = V_1;
		if ((!(((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD *)L_9) == ((RuntimeObject*)(OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// UnityEngine.Rect UniWebView::get_Frame()
extern "C" IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  UniWebView_get_Frame_m23BCC6573FD4C853AAF28E4D2CBCD19F32F30222 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = __this->get_frame_22();
		return L_0;
	}
}
// System.Void UniWebView::set_Frame(UnityEngine.Rect)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_set_Frame_m5D8A545371F854091361FB698DCCF45A10C76CB9 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___value0, const RuntimeMethod* method)
{
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = ___value0;
		__this->set_frame_22(L_0);
		UniWebView_UpdateFrame_m93DF63C1B824C4EB185CC45D48EE846A76E9606E(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.RectTransform UniWebView::get_ReferenceRectTransform()
extern "C" IL2CPP_METHOD_ATTR RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * UniWebView_get_ReferenceRectTransform_m1B81C0F1889B7C728FB03C31BFA4A137F260256A (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = __this->get_referenceRectTransform_23();
		return L_0;
	}
}
// System.Void UniWebView::set_ReferenceRectTransform(UnityEngine.RectTransform)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_set_ReferenceRectTransform_m017A45736B8B71D3D830C4AB0CDB1A2BB75557EC (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___value0, const RuntimeMethod* method)
{
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = ___value0;
		__this->set_referenceRectTransform_23(L_0);
		UniWebView_UpdateFrame_m93DF63C1B824C4EB185CC45D48EE846A76E9606E(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UniWebView::get_Url()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebView_get_Url_mE68DD775BFA61BF9183D3D6F72D1BB5034E9CA9F (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_get_Url_mE68DD775BFA61BF9183D3D6F72D1BB5034E9CA9F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		String_t* L_2 = UniWebViewInterface_GetUrl_m99AC915DE080DC8263764AD049DF1E8D47C4B480(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UniWebView::UpdateFrame()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_UpdateFrame_m93DF63C1B824C4EB185CC45D48EE846A76E9606E (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_UpdateFrame_m93DF63C1B824C4EB185CC45D48EE846A76E9606E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_0 = UniWebView_NextFrameRect_m1F89703962C698142518400DC872743B55AD4A00(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_1 = __this->get_listener_13();
		NullCheck(L_1);
		String_t* L_2 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_1, /*hidden argument*/NULL);
		float L_3 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_4 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_5 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		float L_6 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetFrame_mD15A8FFD7720039EEC147596AD8DBB6669D3865E(L_2, (((int32_t)((int32_t)(int32_t)L_3))), (((int32_t)((int32_t)(int32_t)L_4))), (((int32_t)((int32_t)(int32_t)L_5))), (((int32_t)((int32_t)(int32_t)L_6))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Rect UniWebView::NextFrameRect()
extern "C" IL2CPP_METHOD_ATTR Rect_t35B976DE901B5423C11705E156938EA27AB402CE  UniWebView_NextFrameRect_m1F89703962C698142518400DC872743B55AD4A00 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_NextFrameRect_m1F89703962C698142518400DC872743B55AD4A00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	int32_t V_9 = 0;
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_10 = NULL;
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_0 = __this->get_referenceRectTransform_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_2 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_2);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_2, _stringLiteral2D5B6C3B30DE3100C51BB52EC659A4C468E2F1D3, /*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3 = __this->get_frame_22();
		return L_3;
	}

IL_0024:
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_4 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_4, _stringLiteral67A8741EAD44382DFF99FAE66966F536E211ECBF, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_5 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_5;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_6 = __this->get_referenceRectTransform_23();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_7 = V_0;
		NullCheck(L_6);
		RectTransform_GetWorldCorners_m073AA4D13C51C5654A5983EE3FE7E2E60F7761B6(L_6, L_7, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9 = 0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_2 = L_13;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_3 = L_16;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_4 = L_19;
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_20 = __this->get_referenceRectTransform_23();
		NullCheck(L_20);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_21 = Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B(L_20, /*hidden argument*/Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var);
		V_5 = L_21;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_22 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_23 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_22, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_24 = __this->get_frame_22();
		return L_24;
	}

IL_0085:
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_25 = V_5;
		NullCheck(L_25);
		int32_t L_26 = Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8(L_25, /*hidden argument*/NULL);
		V_9 = L_26;
		int32_t L_27 = V_9;
		if (!L_27)
		{
			goto IL_00f2;
		}
	}
	{
		int32_t L_28 = V_9;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_00f2;
		}
	}
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_29 = V_5;
		NullCheck(L_29);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_30 = Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409(L_29, /*hidden argument*/NULL);
		V_10 = L_30;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_31 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_32 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_31, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00cc;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_33 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_33);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_33, _stringLiteral23E752D68C1EBE11AEF33CC41950EFF47F3BD1CD, /*hidden argument*/NULL);
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_34 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_34);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_34, _stringLiteralAFB3FC10898D2E7FEFC8E88C89E38D46DC7E5E2F, /*hidden argument*/NULL);
		goto IL_00f2;
	}

IL_00cc:
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_35 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_1;
		NullCheck(L_35);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_35, L_36, /*hidden argument*/NULL);
		V_1 = L_37;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_38 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_2;
		NullCheck(L_38);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_38, L_39, /*hidden argument*/NULL);
		V_2 = L_40;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_41 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = V_3;
		NullCheck(L_41);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_41, L_42, /*hidden argument*/NULL);
		V_3 = L_43;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_44 = V_10;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_4;
		NullCheck(L_44);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_44, L_45, /*hidden argument*/NULL);
		V_4 = L_46;
	}

IL_00f2:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_2;
		float L_48 = L_47.get_x_2();
		int32_t L_49 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = V_2;
		float L_51 = L_50.get_y_3();
		V_6 = ((float)il2cpp_codegen_subtract((float)(((float)((float)L_49))), (float)L_51));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_4;
		float L_53 = L_52.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = V_2;
		float L_55 = L_54.get_x_2();
		V_7 = ((float)il2cpp_codegen_subtract((float)L_53, (float)L_55));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_56 = V_2;
		float L_57 = L_56.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = V_4;
		float L_59 = L_58.get_y_3();
		V_8 = ((float)il2cpp_codegen_subtract((float)L_57, (float)L_59));
		float L_60 = V_6;
		float L_61 = V_7;
		float L_62 = V_8;
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_63;
		memset(&L_63, 0, sizeof(L_63));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_63), L_48, L_60, L_61, L_62, /*hidden argument*/NULL);
		return L_63;
	}
}
// System.Void UniWebView::Awake()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_Awake_m164D771EC11B2B70593746ABBB20C37026100821 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_Awake_m164D771EC11B2B70593746ABBB20C37026100821_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	Rect_t35B976DE901B5423C11705E156938EA27AB402CE  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		String_t* L_0 = __this->get_id_12();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = V_0;
		NullCheck(L_2);
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_3 = GameObject_AddComponent_TisUniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_m9113CDBF5813015A5B852B62661579E1CAA9C54F(L_2, /*hidden argument*/GameObject_AddComponent_TisUniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_m9113CDBF5813015A5B852B62661579E1CAA9C54F_RuntimeMethod_var);
		__this->set_listener_13(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_5, L_6, /*hidden argument*/NULL);
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_7 = __this->get_listener_13();
		NullCheck(L_7);
		L_7->set_webView_5(__this);
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_8 = __this->get_listener_13();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_AddListener_m66CD8DDE368A077A8B0BB68FF42986F376582F72(L_8, /*hidden argument*/NULL);
		bool L_9 = __this->get_fullScreen_17();
		if (!L_9)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_10 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_11 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), (0.0f), (0.0f), (((float)((float)L_10))), (((float)((float)L_11))), /*hidden argument*/NULL);
		goto IL_006e;
	}

IL_0067:
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_12 = UniWebView_NextFrameRect_m1F89703962C698142518400DC872743B55AD4A00(__this, /*hidden argument*/NULL);
		V_1 = L_12;
	}

IL_006e:
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_13 = __this->get_listener_13();
		NullCheck(L_13);
		String_t* L_14 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_13, /*hidden argument*/NULL);
		float L_15 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		float L_16 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		float L_17 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		float L_18 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_Init_m9AE89395D39758A3D82EE41ACC341C054E2AE78A(L_14, (((int32_t)((int32_t)(int32_t)L_15))), (((int32_t)((int32_t)(int32_t)L_16))), (((int32_t)((int32_t)(int32_t)L_17))), (((int32_t)((int32_t)(int32_t)L_18))), /*hidden argument*/NULL);
		int32_t L_19 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_20 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		__this->set_isPortrait_14((bool)((((int32_t)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0)) == ((int32_t)0))? 1 : 0));
		return;
	}
}
// System.Void UniWebView::Start()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_Start_m6125294DDD520BFE2345ACBFE54276AFE505D11F (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_Start_m6125294DDD520BFE2345ACBFE54276AFE505D11F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_showOnStart_16();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		UniWebView_Show_m900E118C2CE18F8DBB39C49E4E25948478FC4102(__this, (bool)0, 0, (0.4f), (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		String_t* L_1 = __this->get_urlOnStart_15();
		bool L_2 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_3 = __this->get_urlOnStart_15();
		UniWebView_Load_m27CFE9E72534ABEAEA16DE6AAABF6C7556305B6E(__this, L_3, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0032:
	{
		__this->set_started_24((bool)1);
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_4 = __this->get_referenceRectTransform_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		UniWebView_UpdateFrame_m93DF63C1B824C4EB185CC45D48EE846A76E9606E(__this, /*hidden argument*/NULL);
	}

IL_004d:
	{
		return;
	}
}
// System.Void UniWebView::Update()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_Update_mA81453C5D2F707BBF8CF10BED59DFF0826631C13 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_Update_mA81453C5D2F707BBF8CF10BED59DFF0826631C13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * G_B4_0 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * G_B4_1 = NULL;
	UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * G_B3_0 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * G_B3_1 = NULL;
	int32_t G_B5_0 = 0;
	UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * G_B5_1 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * G_B5_2 = NULL;
	{
		int32_t L_0 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		int32_t L_1 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = __this->get_isPortrait_14();
		bool L_3 = V_0;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0054;
		}
	}
	{
		bool L_4 = V_0;
		__this->set_isPortrait_14(L_4);
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_5 = __this->get_OnOrientationChanged_10();
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_6 = __this->get_OnOrientationChanged_10();
		bool L_7 = __this->get_isPortrait_14();
		G_B3_0 = __this;
		G_B3_1 = L_6;
		if (L_7)
		{
			G_B4_0 = __this;
			G_B4_1 = L_6;
			goto IL_003a;
		}
	}
	{
		G_B5_0 = 3;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_003b:
	{
		NullCheck(G_B5_2);
		OrientationChangedDelegate_Invoke_mE43729DDE703E170C724165DCD78C3F5D135D2B2(G_B5_2, G_B5_1, G_B5_0, /*hidden argument*/NULL);
	}

IL_0040:
	{
		RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * L_8 = __this->get_referenceRectTransform_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		UniWebView_UpdateFrame_m93DF63C1B824C4EB185CC45D48EE846A76E9606E(__this, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.Void UniWebView::OnEnable()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_OnEnable_mA97B2C2537A2FBC8695E688DCABD315DB9BC195C (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_started_24();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		UniWebView_Show_m900E118C2CE18F8DBB39C49E4E25948478FC4102(__this, (bool)0, 0, (0.4f), (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UniWebView::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_OnDisable_mD10277961563C18E3DFC8378AA554C1ADDF1E3B3 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_started_24();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		UniWebView_Hide_mDBD3CA6C1F42CC695188CFFC4F7F4B1ADB6EBC4E(__this, (bool)0, 0, (0.4f), (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 *)NULL, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UniWebView::Load(System.String,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_Load_m27CFE9E72534ABEAEA16DE6AAABF6C7556305B6E (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___url0, bool ___skipEncoding1, String_t* ___readAccessURL2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_Load_m27CFE9E72534ABEAEA16DE6AAABF6C7556305B6E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___url0;
		bool L_3 = ___skipEncoding1;
		String_t* L_4 = ___readAccessURL2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_Load_mD590C5D4EC77275A7FB3FB675B313C17AFAE28FB(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::LoadHTMLString(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_LoadHTMLString_m9E5C0E8E37B7A7C4EB9AF9031972011750F8CC3F (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___htmlString0, String_t* ___baseUrl1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_LoadHTMLString_m9E5C0E8E37B7A7C4EB9AF9031972011750F8CC3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___htmlString0;
		String_t* L_3 = ___baseUrl1;
		bool L_4 = ___skipEncoding2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_LoadHTMLString_m8503019BDF405BBAD96ADF206BC554BC23253E9D(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::Reload()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_Reload_mD05D118C2EFBFFE2D5C514E014159563985B4846 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_Reload_mD05D118C2EFBFFE2D5C514E014159563985B4846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_Reload_mF59A428BA67116A01420C9263CECDD4913A06C44(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::Stop()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_Stop_m7225CD5C1AB020518602C4DE16DC377ED3D5EA24 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_Stop_m7225CD5C1AB020518602C4DE16DC377ED3D5EA24_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_Stop_m18E9AEE0A3E00D60AEE8BAD8AD4180F2D2D00A87(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UniWebView::get_CanGoBack()
extern "C" IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoBack_m41A24E2CDFAB03B32A3D31CB11C52D07003C85AA (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_get_CanGoBack_m41A24E2CDFAB03B32A3D31CB11C52D07003C85AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		bool L_2 = UniWebViewInterface_CanGoBack_m85BED7E236C3D95F4BD121AE0090AE72A40C68C3(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean UniWebView::get_CanGoForward()
extern "C" IL2CPP_METHOD_ATTR bool UniWebView_get_CanGoForward_m36DDA52762D994B05C974C4A674AFCD611950A60 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_get_CanGoForward_m36DDA52762D994B05C974C4A674AFCD611950A60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		bool L_2 = UniWebViewInterface_CanGoForward_m0BD3965D49CE9F8C680418B1DD949956F626F070(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UniWebView::GoBack()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_GoBack_mFB0F0C148B228947D5DD6ACDBD255A66A13FF8C2 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_GoBack_mFB0F0C148B228947D5DD6ACDBD255A66A13FF8C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoBack_m7B7B009A3769F2D2ABDAB1FCEE9A9AD0EC134BF1(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::GoForward()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_GoForward_m177CC0C47552D4D77CA28872CD82940F8DE05B35 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_GoForward_m177CC0C47552D4D77CA28872CD82940F8DE05B35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_GoForward_m69D8A8C091D3F3212C529C99C2B49DC9B56E9FC3(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetOpenLinksInExternalBrowser(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetOpenLinksInExternalBrowser_mB439E5F17D6C92CB3C293002BCD3A94DB6FD43B8 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetOpenLinksInExternalBrowser_mB439E5F17D6C92CB3C293002BCD3A94DB6FD43B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetOpenLinksInExternalBrowser_m8F1949DB73568676BA1D347DD17D78D4BA888219(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UniWebView::Show(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
extern "C" IL2CPP_METHOD_ATTR bool UniWebView_Show_m900E118C2CE18F8DBB39C49E4E25948478FC4102 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___fade0, int32_t ___edge1, float ___duration2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___completionHandler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_Show_m900E118C2CE18F8DBB39C49E4E25948478FC4102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_2 = __this->get_listener_13();
		NullCheck(L_2);
		String_t* L_3 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_2, /*hidden argument*/NULL);
		bool L_4 = ___fade0;
		int32_t L_5 = ___edge1;
		float L_6 = ___duration2;
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		bool L_8 = UniWebViewInterface_Show_mDBF6C81C451078AD3BE7BA0E47660846D83612B6(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		bool L_9 = L_8;
		G_B1_0 = L_9;
		if (!L_9)
		{
			G_B8_0 = L_9;
			goto IL_0052;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = ___completionHandler3;
		G_B2_0 = G_B1_0;
		if (!L_10)
		{
			G_B8_0 = G_B1_0;
			goto IL_0052;
		}
	}
	{
		bool L_11 = ___fade0;
		G_B3_0 = G_B2_0;
		if (L_11)
		{
			G_B4_0 = G_B2_0;
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = ___edge1;
		G_B5_0 = ((!(((uint32_t)L_12) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0039:
	{
		G_B6_0 = G_B5_1;
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004b;
		}
	}
	{
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_13 = __this->get_actions_20();
		String_t* L_14 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_15 = ___completionHandler3;
		NullCheck(L_13);
		Dictionary_2_Add_mF0550D7D4BB219888E3038ACAE4212E201C10DCD(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_mF0550D7D4BB219888E3038ACAE4212E201C10DCD_RuntimeMethod_var);
		G_B8_0 = G_B6_0;
		goto IL_0052;
	}

IL_004b:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_16 = ___completionHandler3;
		NullCheck(L_16);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_16, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_0052:
	{
		bool L_17 = G_B8_0;
		G_B9_0 = L_17;
		if (!L_17)
		{
			G_B11_0 = L_17;
			goto IL_0076;
		}
	}
	{
		bool L_18 = __this->get_useToolbar_18();
		G_B10_0 = G_B9_0;
		if (!L_18)
		{
			G_B11_0 = G_B9_0;
			goto IL_0076;
		}
	}
	{
		int32_t L_19 = __this->get_toolbarPosition_19();
		V_2 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_2;
		bool L_21 = __this->get_fullScreen_17();
		UniWebView_SetShowToolbar_m84AF66B0BA267BFE87B295C6AF9D077BCACE8A5C(__this, (bool)1, (bool)0, L_20, L_21, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
	}

IL_0076:
	{
		return G_B11_0;
	}
}
// System.Boolean UniWebView::Hide(System.Boolean,UniWebViewTransitionEdge,System.Single,System.Action)
extern "C" IL2CPP_METHOD_ATTR bool UniWebView_Hide_mDBD3CA6C1F42CC695188CFFC4F7F4B1ADB6EBC4E (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___fade0, int32_t ___edge1, float ___duration2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___completionHandler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_Hide_mDBD3CA6C1F42CC695188CFFC4F7F4B1ADB6EBC4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool G_B8_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	int32_t G_B5_0 = 0;
	bool G_B5_1 = false;
	bool G_B7_0 = false;
	bool G_B6_0 = false;
	bool G_B11_0 = false;
	bool G_B9_0 = false;
	bool G_B10_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_2 = __this->get_listener_13();
		NullCheck(L_2);
		String_t* L_3 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_2, /*hidden argument*/NULL);
		bool L_4 = ___fade0;
		int32_t L_5 = ___edge1;
		float L_6 = ___duration2;
		String_t* L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		bool L_8 = UniWebViewInterface_Hide_m9172C8D99F47706FEBA5B64BEAD2F66EB55F5791(L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		bool L_9 = L_8;
		G_B1_0 = L_9;
		if (!L_9)
		{
			G_B8_0 = L_9;
			goto IL_0052;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_10 = ___completionHandler3;
		G_B2_0 = G_B1_0;
		if (!L_10)
		{
			G_B8_0 = G_B1_0;
			goto IL_0052;
		}
	}
	{
		bool L_11 = ___fade0;
		G_B3_0 = G_B2_0;
		if (L_11)
		{
			G_B4_0 = G_B2_0;
			goto IL_0038;
		}
	}
	{
		int32_t L_12 = ___edge1;
		G_B5_0 = ((!(((uint32_t)L_12) <= ((uint32_t)0)))? 1 : 0);
		G_B5_1 = G_B3_0;
		goto IL_0039;
	}

IL_0038:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
	}

IL_0039:
	{
		G_B6_0 = G_B5_1;
		if (!G_B5_0)
		{
			G_B7_0 = G_B5_1;
			goto IL_004b;
		}
	}
	{
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_13 = __this->get_actions_20();
		String_t* L_14 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_15 = ___completionHandler3;
		NullCheck(L_13);
		Dictionary_2_Add_mF0550D7D4BB219888E3038ACAE4212E201C10DCD(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_Add_mF0550D7D4BB219888E3038ACAE4212E201C10DCD_RuntimeMethod_var);
		G_B8_0 = G_B6_0;
		goto IL_0052;
	}

IL_004b:
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_16 = ___completionHandler3;
		NullCheck(L_16);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_16, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
	}

IL_0052:
	{
		bool L_17 = G_B8_0;
		G_B9_0 = L_17;
		if (!L_17)
		{
			G_B11_0 = L_17;
			goto IL_0076;
		}
	}
	{
		bool L_18 = __this->get_useToolbar_18();
		G_B10_0 = G_B9_0;
		if (!L_18)
		{
			G_B11_0 = G_B9_0;
			goto IL_0076;
		}
	}
	{
		int32_t L_19 = __this->get_toolbarPosition_19();
		V_2 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_2;
		bool L_21 = __this->get_fullScreen_17();
		UniWebView_SetShowToolbar_m84AF66B0BA267BFE87B295C6AF9D077BCACE8A5C(__this, (bool)0, (bool)0, L_20, L_21, /*hidden argument*/NULL);
		G_B11_0 = G_B10_0;
	}

IL_0076:
	{
		return G_B11_0;
	}
}
// System.Boolean UniWebView::AnimateTo(UnityEngine.Rect,System.Single,System.Single,System.Action)
extern "C" IL2CPP_METHOD_ATTR bool UniWebView_AnimateTo_m8408BC4142E62FE39B21B62966B015B72EDEE575 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___frame0, float ___duration1, float ___delay2, Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * ___completionHandler3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_AnimateTo_m8408BC4142E62FE39B21B62966B015B72EDEE575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool G_B3_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_2 = __this->get_listener_13();
		NullCheck(L_2);
		String_t* L_3 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_2, /*hidden argument*/NULL);
		float L_4 = Rect_get_x_mC51A461F546D14832EB96B11A7198DADDE2597B7((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___frame0), /*hidden argument*/NULL);
		float L_5 = Rect_get_y_m53E3E4F62D9840FBEA751A66293038F1F5D1D45C((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___frame0), /*hidden argument*/NULL);
		float L_6 = Rect_get_width_m54FF69FC2C086E2DC349ED091FD0D6576BFB1484((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___frame0), /*hidden argument*/NULL);
		float L_7 = Rect_get_height_m088C36990E0A255C5D7DCE36575DCE23ABB364B5((Rect_t35B976DE901B5423C11705E156938EA27AB402CE *)(&___frame0), /*hidden argument*/NULL);
		float L_8 = ___duration1;
		float L_9 = ___delay2;
		String_t* L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		bool L_11 = UniWebViewInterface_AnimateTo_m37B4D301C354BD000046C696F77BC274CA7A6561(L_3, (((int32_t)((int32_t)(int32_t)L_4))), (((int32_t)((int32_t)(int32_t)L_5))), (((int32_t)((int32_t)(int32_t)L_6))), (((int32_t)((int32_t)(int32_t)L_7))), L_8, L_9, L_10, /*hidden argument*/NULL);
		bool L_12 = L_11;
		G_B1_0 = L_12;
		if (!L_12)
		{
			G_B3_0 = L_12;
			goto IL_0063;
		}
	}
	{
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_13 = ___frame0;
		__this->set_frame_22(L_13);
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_14 = ___completionHandler3;
		G_B2_0 = G_B1_0;
		if (!L_14)
		{
			G_B3_0 = G_B1_0;
			goto IL_0063;
		}
	}
	{
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_15 = __this->get_actions_20();
		String_t* L_16 = V_0;
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_17 = ___completionHandler3;
		NullCheck(L_15);
		Dictionary_2_Add_mF0550D7D4BB219888E3038ACAE4212E201C10DCD(L_15, L_16, L_17, /*hidden argument*/Dictionary_2_Add_mF0550D7D4BB219888E3038ACAE4212E201C10DCD_RuntimeMethod_var);
		G_B3_0 = G_B2_0;
	}

IL_0063:
	{
		return G_B3_0;
	}
}
// System.Void UniWebView::AddJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_AddJavaScript_m9F59F108A884BF49513B28572A3024FA50B1B32D (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___jsString0, Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * ___completionHandler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_AddJavaScript_m9F59F108A884BF49513B28572A3024FA50B1B32D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_2 = __this->get_listener_13();
		NullCheck(L_2);
		String_t* L_3 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___jsString0;
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddJavaScript_m0821BD310D90C6DA1E8BC9F9D1E1F13F7919EF4E(L_3, L_4, L_5, /*hidden argument*/NULL);
		Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * L_6 = ___completionHandler1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * L_7 = __this->get_payloadActions_21();
		String_t* L_8 = V_0;
		Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * L_9 = ___completionHandler1;
		NullCheck(L_7);
		Dictionary_2_Add_m96F0A15AFA91061BF6A27AE7DE7734BD5EA48322(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_Add_m96F0A15AFA91061BF6A27AE7DE7734BD5EA48322_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
// System.Void UniWebView::EvaluateJavaScript(System.String,System.Action`1<UniWebViewNativeResultPayload>)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_EvaluateJavaScript_mF02AD8F18B6CC9295D851DCED539B3A23A20948F (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___jsString0, Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * ___completionHandler1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_EvaluateJavaScript_mF02AD8F18B6CC9295D851DCED539B3A23A20948F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Guid_t  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_2 = __this->get_listener_13();
		NullCheck(L_2);
		String_t* L_3 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___jsString0;
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_EvaluateJavaScript_m790554C524888A5078EECC3A5AF97F5F112AE0A0(L_3, L_4, L_5, /*hidden argument*/NULL);
		Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * L_6 = ___completionHandler1;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * L_7 = __this->get_payloadActions_21();
		String_t* L_8 = V_0;
		Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * L_9 = ___completionHandler1;
		NullCheck(L_7);
		Dictionary_2_Add_m96F0A15AFA91061BF6A27AE7DE7734BD5EA48322(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_Add_m96F0A15AFA91061BF6A27AE7DE7734BD5EA48322_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
// System.Void UniWebView::AddUrlScheme(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_AddUrlScheme_m1107A97210522D8329B4FDFCF57571C74AC65F82 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___scheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_AddUrlScheme_m1107A97210522D8329B4FDFCF57571C74AC65F82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___scheme0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_1 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_1, _stringLiteralCAB1283BE997E1412A790AF7C749C371CD62086E, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		String_t* L_2 = ___scheme0;
		NullCheck(L_2);
		bool L_3 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_2, _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_4 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_4, _stringLiteral9B286A82D61E16262C03E954B59AF89C982C8308, /*hidden argument*/NULL);
		return;
	}

IL_0030:
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_5 = __this->get_listener_13();
		NullCheck(L_5);
		String_t* L_6 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___scheme0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddUrlScheme_m093135E876EB07E0286665C23483ED93FEF02649(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::RemoveUrlScheme(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_RemoveUrlScheme_m569A655527D022388A52614D00511890CD2363B1 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___scheme0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_RemoveUrlScheme_m569A655527D022388A52614D00511890CD2363B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___scheme0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_1 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_1, _stringLiteralCAB1283BE997E1412A790AF7C749C371CD62086E, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		String_t* L_2 = ___scheme0;
		NullCheck(L_2);
		bool L_3 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_2, _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_4 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_4, _stringLiteral9B286A82D61E16262C03E954B59AF89C982C8308, /*hidden argument*/NULL);
		return;
	}

IL_0030:
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_5 = __this->get_listener_13();
		NullCheck(L_5);
		String_t* L_6 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___scheme0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveUrlScheme_m0F2710272BD6DAFCD3444BE3B9FEA1281D670FE5(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::AddSslExceptionDomain(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_AddSslExceptionDomain_mB66F28931A6690301361BA1213FC66CD92694570 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___domain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_AddSslExceptionDomain_mB66F28931A6690301361BA1213FC66CD92694570_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___domain0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_1 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_1, _stringLiteralAE1B86951A163D0885F05B3FD743DF1045BA07A5, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		String_t* L_2 = ___domain0;
		NullCheck(L_2);
		bool L_3 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_2, _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_4 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_4, _stringLiteral735BB596C7191AC87A3C4965F95D305B76E49F17, /*hidden argument*/NULL);
		return;
	}

IL_0030:
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_5 = __this->get_listener_13();
		NullCheck(L_5);
		String_t* L_6 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___domain0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_AddSslExceptionDomain_mE9F6EA6225D2C7C2FD556E2648796F7D6BFCEAEB(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::RemoveSslExceptionDomain(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_RemoveSslExceptionDomain_mFED1AC58CF9E385113D6429E27D9ED1ABCE0DACA (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___domain0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_RemoveSslExceptionDomain_mFED1AC58CF9E385113D6429E27D9ED1ABCE0DACA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___domain0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_1 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_1, _stringLiteralAE1B86951A163D0885F05B3FD743DF1045BA07A5, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		String_t* L_2 = ___domain0;
		NullCheck(L_2);
		bool L_3 = String_Contains_m4488034AF8CB3EEA9A205EB8A1F25D438FF8704B(L_2, _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_4 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_4);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_4, _stringLiteral735BB596C7191AC87A3C4965F95D305B76E49F17, /*hidden argument*/NULL);
		return;
	}

IL_0030:
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_5 = __this->get_listener_13();
		NullCheck(L_5);
		String_t* L_6 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_5, /*hidden argument*/NULL);
		String_t* L_7 = ___domain0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_RemoveSslExceptionDomain_m952D43F1FE6F6BE9AC15DC66D42C51780C5702C9(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetHeaderField(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetHeaderField_m270C02C536C52955ACDED59A8E57A45614D19F92 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetHeaderField_m270C02C536C52955ACDED59A8E57A45614D19F92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___key0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_1 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_1);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_1, _stringLiteralE3B36486FA4754A07B231BCFECB196BC098D2B91, /*hidden argument*/NULL);
		return;
	}

IL_0013:
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_2 = __this->get_listener_13();
		NullCheck(L_2);
		String_t* L_3 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_2, /*hidden argument*/NULL);
		String_t* L_4 = ___key0;
		String_t* L_5 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHeaderField_m6248C66E1CEAF27CDDDA66A525F1D71CBD502A22(L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetUserAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetUserAgent_mCEF71342B3DF49EA568197BA7122C89CCD2CBC43 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___agent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetUserAgent_mCEF71342B3DF49EA568197BA7122C89CCD2CBC43_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___agent0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetUserAgent_m0636D0C6ED992F5D8210FEFDC0B6A4ABAFB23B71(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UniWebView::GetUserAgent()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebView_GetUserAgent_mA896DF253A148E240F9B51CC1DD40BA267C3CB7C (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_GetUserAgent_mA896DF253A148E240F9B51CC1DD40BA267C3CB7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		String_t* L_2 = UniWebViewInterface_GetUserAgent_m62ED5910A8DED966C44559700D276687B70E10A3(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UniWebView::SetContentInsetAdjustmentBehavior(UniWebViewContentInsetAdjustmentBehavior)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetContentInsetAdjustmentBehavior_m1A6AC3954BD429C447F0606AAC378586E6DABBEA (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, int32_t ___behavior0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetContentInsetAdjustmentBehavior_m1A6AC3954BD429C447F0606AAC378586E6DABBEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___behavior0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetContentInsetAdjustmentBehavior_m9DE77B59ACE8CB73956A45BD81790351BA7FC2E9(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetAllowAutoPlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetAllowAutoPlay_mAEFF89B32B2CF23F49D0586B2050A0436DCDBB0A (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetAllowAutoPlay_mAEFF89B32B2CF23F49D0586B2050A0436DCDBB0A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowAutoPlay_mA1FE6AEDCBB140C40E6063388D258EAD93A65E49(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetAllowInlinePlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetAllowInlinePlay_m73344B1F021A7C9E05978B7257159908BA7E635F (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetAllowInlinePlay_m73344B1F021A7C9E05978B7257159908BA7E635F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowInlinePlay_m2E1A79DBB76EFCD39BAEC9AB2215355B7839C276(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetJavaScriptEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetJavaScriptEnabled_m6771A574762BBF709D67FE1BA7852B269CB52498 (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetJavaScriptEnabled_m6771A574762BBF709D67FE1BA7852B269CB52498_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetJavaScriptEnabled_m04D1509DD92CF1A64C68B75FA1EE79E1E5727943(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetAllowJavaScriptOpenWindow(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetAllowJavaScriptOpenWindow_mEFE7413B096E8704C8078DFB27D554F7278332BD (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetAllowJavaScriptOpenWindow_mEFE7413B096E8704C8078DFB27D554F7278332BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowJavaScriptOpenWindow_mF2AE14094B64357A385F7D593684781B0A5C4719(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::CleanCache()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_CleanCache_m21AE9BD6F4843655D5235054CF298065D19F8EF9 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_CleanCache_m21AE9BD6F4843655D5235054CF298065D19F8EF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CleanCache_m43E8616FDA422D5BF753B7D3BB8785036FD9976D(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::ClearCookies()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_ClearCookies_mB3B9BB5247C9A0680F1B8E7F77A73668CC79A98E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_ClearCookies_mB3B9BB5247C9A0680F1B8E7F77A73668CC79A98E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearCookies_m72B3F4D3528E139945C434244867FB41B1B3F0AD(/*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetCookie_m1DF664FEE49AF9914C885FF3180DD8C828A073EE (String_t* ___url0, String_t* ___cookie1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetCookie_m1DF664FEE49AF9914C885FF3180DD8C828A073EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		String_t* L_1 = ___cookie1;
		bool L_2 = ___skipEncoding2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCookie_m9ED0E7BBF1A7286A398265AFE9F5C7103D4AAC1F(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String UniWebView::GetCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebView_GetCookie_m4A45536B78FC05E3C3DE4056EDBA0A80D14F9175 (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_GetCookie_m4A45536B78FC05E3C3DE4056EDBA0A80D14F9175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___url0;
		String_t* L_1 = ___key1;
		bool L_2 = ___skipEncoding2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		String_t* L_3 = UniWebViewInterface_GetCookie_mC5F17BA8EA41FBE95C5A85617CBDD1822C8BFA37(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UniWebView::ClearHttpAuthUsernamePassword(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_ClearHttpAuthUsernamePassword_mFBF4286115988BBA6336BB32A4CAD56367598480 (String_t* ___host0, String_t* ___realm1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_ClearHttpAuthUsernamePassword_mFBF4286115988BBA6336BB32A4CAD56367598480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___host0;
		String_t* L_1 = ___realm1;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_ClearHttpAuthUsernamePassword_m6EC49CC8FF8E0AC636EF9C57572C51FA0373B911(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Color UniWebView::get_BackgroundColor()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  UniWebView_get_BackgroundColor_mDABDC8644B482FB6C8783C5DAD747214C51D9978 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = __this->get_backgroundColor_25();
		return L_0;
	}
}
// System.Void UniWebView::set_BackgroundColor(UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_set_BackgroundColor_m87B8A08F4B3D5B8539BA397A6887B73DABBCEB10 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_set_BackgroundColor_m87B8A08F4B3D5B8539BA397A6887B73DABBCEB10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = ___value0;
		__this->set_backgroundColor_25(L_0);
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_1 = __this->get_listener_13();
		NullCheck(L_1);
		String_t* L_2 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_1, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_3 = ___value0;
		float L_4 = L_3.get_r_0();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_5 = ___value0;
		float L_6 = L_5.get_g_1();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_7 = ___value0;
		float L_8 = L_7.get_b_2();
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_9 = ___value0;
		float L_10 = L_9.get_a_3();
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBackgroundColor_m93343F2F37B5035B19377D54AE03D22FA089C54F(L_2, L_4, L_6, L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Single UniWebView::get_Alpha()
extern "C" IL2CPP_METHOD_ATTR float UniWebView_get_Alpha_mF4CE3BCA2CCF41A98566C0CA805586C661C48BDF (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_get_Alpha_mF4CE3BCA2CCF41A98566C0CA805586C661C48BDF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		float L_2 = UniWebViewInterface_GetWebViewAlpha_mC4E13D24FD9F85AD3D4442061FF7F9509D0514CA(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void UniWebView::set_Alpha(System.Single)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_set_Alpha_m6F25F5D539203919421D5DBB3293F15339655CE7 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_set_Alpha_m6F25F5D539203919421D5DBB3293F15339655CE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		float L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebViewAlpha_m74D9A737E3C67924CEACEF0CC38DE049892611B0(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetShowSpinnerWhileLoading(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetShowSpinnerWhileLoading_m288CB26A2D602685D7984DF5AC6B18F4CA73238C (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetShowSpinnerWhileLoading_m288CB26A2D602685D7984DF5AC6B18F4CA73238C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetShowSpinnerWhileLoading_m76AA6C5A405AE0672EEE3456778B6F1921036586(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetSpinnerText(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetSpinnerText_m67EF13829067CF4C139F53B30A527E3A4EC46E37 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetSpinnerText_m67EF13829067CF4C139F53B30A527E3A4EC46E37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetSpinnerText_mC83965466BC863A9146B220D9AD37D9B6C9B5E8A(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetHorizontalScrollBarEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetHorizontalScrollBarEnabled_mD7982E64E2B6C6440C411700163BC4B20DD91EC0 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetHorizontalScrollBarEnabled_mD7982E64E2B6C6440C411700163BC4B20DD91EC0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetHorizontalScrollBarEnabled_mEBB621A28239F91BE3CF0A20039A628DE08C0FF5(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetVerticalScrollBarEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetVerticalScrollBarEnabled_mB68E19A554DBA4AD4B6A823845887636028D851B (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetVerticalScrollBarEnabled_mB68E19A554DBA4AD4B6A823845887636028D851B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetVerticalScrollBarEnabled_mBFF4CC7088166668CC7D2EF221D7336933289C68(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetBouncesEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetBouncesEnabled_m5A4E834027F96962D28F89A249593D762DB4C249 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetBouncesEnabled_m5A4E834027F96962D28F89A249593D762DB4C249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetBouncesEnabled_m670BE14C4FF7CE0057543F9B60E426B01E77AD47(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetZoomEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetZoomEnabled_m0E42D6000733C8880C59617EAEE33C5B876F5E69 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetZoomEnabled_m0E42D6000733C8880C59617EAEE33C5B876F5E69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetZoomEnabled_mFC141CAD5C05FB6BC3EFA31BA3C6EE54F9FBC5CB(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::AddPermissionTrustDomain(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_AddPermissionTrustDomain_m6BFCF1EDEC734DBC0519A89F598F2C125C088E66 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___domain0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UniWebView::RemovePermissionTrustDomain(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_RemovePermissionTrustDomain_mEB004D4A90A9E231E7E1111A0845B5F5333EEAEF (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___domain0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UniWebView::SetBackButtonEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetBackButtonEnabled_mBBCD9773940E9AE4C1256ECEC759CFADFE15D9DA (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UniWebView::SetUseWideViewPort(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetUseWideViewPort_m61437E9BF769B6C70343034435ED0E740741FB03 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___flag0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UniWebView::SetLoadWithOverviewMode(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetLoadWithOverviewMode_m86D368770F127F3E0BF01A6FB10E85790392D1DA (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___flag0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UniWebView::SetImmersiveModeEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetImmersiveModeEnabled_mAADBBF71A48231D59C45B750D86E3F8BD0290F3C (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___enabled0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UniWebView::SetShowToolbar(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetShowToolbar_m84AF66B0BA267BFE87B295C6AF9D077BCACE8A5C (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___show0, bool ___animated1, bool ___onTop2, bool ___adjustInset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetShowToolbar_m84AF66B0BA267BFE87B295C6AF9D077BCACE8A5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___show0;
		bool L_3 = ___animated1;
		bool L_4 = ___onTop2;
		bool L_5 = ___adjustInset3;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetShowToolbar_mB77E1A5B3024055BC412EF3094FA2D5B85F7EB31(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetToolbarDoneButtonText(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetToolbarDoneButtonText_m8674C7441C8E9B59BEAC06CC876434C2B3FAD66A (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetToolbarDoneButtonText_m8674C7441C8E9B59BEAC06CC876434C2B3FAD66A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___text0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetToolbarDoneButtonText_m67460BCFB5A0F2C107B085C1425A243BAA2915B9(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetWebContentsDebuggingEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetWebContentsDebuggingEnabled_mAA1AE7F06282D0C3C06B5EA5DF17187B3584B19E (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetWebContentsDebuggingEnabled_mAA1AE7F06282D0C3C06B5EA5DF17187B3584B19E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWebContentsDebuggingEnabled_m306139A08DD96B8452EB76F489BC075103073503(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetWindowUserResizeEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetWindowUserResizeEnabled_m4CF297207C470742418D02C048AAB1BDCCFDDE25 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetWindowUserResizeEnabled_m4CF297207C470742418D02C048AAB1BDCCFDDE25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetWindowUserResizeEnabled_mFE8B7EB0698902554BF51762DFBB6576DAE90E54(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::GetHTMLContent(System.Action`1<System.String>)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_GetHTMLContent_mF48697BDC2B50334B33DBA0AF913FB8337BC11A5 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, Action_1_t19CAF500829927B30EC94F39939F749E4919669E * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_GetHTMLContent_mF48697BDC2B50334B33DBA0AF913FB8337BC11A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8 * L_0 = (U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass116_0__ctor_mF714012F41B34648FEE41FA66BCD31ABACD322FD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8 * L_1 = V_0;
		Action_1_t19CAF500829927B30EC94F39939F749E4919669E * L_2 = ___handler0;
		NullCheck(L_1);
		L_1->set_handler_0(L_2);
		U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8 * L_3 = V_0;
		Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * L_4 = (Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD *)il2cpp_codegen_object_new(Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD_il2cpp_TypeInfo_var);
		Action_1__ctor_m92FA084476B2BED9E68F7C879639A420BBEDD6A6(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass116_0_U3CGetHTMLContentU3Eb__0_m1F02C7561CC2EC79CB8EDCD44B2347B6337537A6_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m92FA084476B2BED9E68F7C879639A420BBEDD6A6_RuntimeMethod_var);
		UniWebView_EvaluateJavaScript_mF02AD8F18B6CC9295D851DCED539B3A23A20948F(__this, _stringLiteralBD8A770F1B123F4C889784E9069EAA3D76724ECE, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetAllowFileAccessFromFileURLs(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetAllowFileAccessFromFileURLs_mEAD2CA59C767ACA24CF087550CAB1B46B7A084C7 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetAllowFileAccessFromFileURLs_mEAD2CA59C767ACA24CF087550CAB1B46B7A084C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowFileAccessFromFileURLs_m0EA69CB39548A0D4FE38002B39BB38A416F41B4B(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetAllowHTTPAuthPopUpWindow(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetAllowHTTPAuthPopUpWindow_mDAABDC88FC1166C37D9378BC0FAA42D1C46DE513 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetAllowHTTPAuthPopUpWindow_mDAABDC88FC1166C37D9378BC0FAA42D1C46DE513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___flag0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_m62FA395AB7C15B993508ADF70AE1CD542FB66B81(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetCalloutEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetCalloutEnabled_m205016D6E672799B6EBD56AC6B7B32C494DA9BC8 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetCalloutEnabled_m205016D6E672799B6EBD56AC6B7B32C494DA9BC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetCalloutEnabled_m1D3B59F03B1B4F2C161A25206ED80069BC887756(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::SetDragInteractionEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_SetDragInteractionEnabled_m55D2FD6C78871DB7E325BDF9742FE6ECB2B051D5 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_SetDragInteractionEnabled_m55D2FD6C78871DB7E325BDF9742FE6ECB2B051D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		bool L_2 = ___enabled0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetDragInteractionEnabled_m444267791BEDCCF721858FC15E75EA558C7E3D06(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::Print()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_Print_m50D6099D14BD874CE4CC29DBAE5C9035E83F8F68 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_Print_m50D6099D14BD874CE4CC29DBAE5C9035E83F8F68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_Print_m6F3083D8FCB49C0C32A624502A10CE088E074B13(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::ScrollTo(System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_ScrollTo_m0C9957B19A8C83F7AE9911B6203FB5F74B437297 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, int32_t ___x0, int32_t ___y1, bool ___animated2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_ScrollTo_m0C9957B19A8C83F7AE9911B6203FB5F74B437297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___x0;
		int32_t L_3 = ___y1;
		bool L_4 = ___animated2;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_ScrollTo_mB3A61236870EDBE9A3B5BDF0A6F52C59AFAC8F65(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::OnDestroy()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_OnDestroy_m152FC94439188B84D99991FF93709E84812F95BD (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_OnDestroy_m152FC94439188B84D99991FF93709E84812F95BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_0 = __this->get_listener_13();
		NullCheck(L_0);
		String_t* L_1 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_RemoveListener_m9BC70FC2918E2293BE520CD3199476CE7F82FE4D(L_1, /*hidden argument*/NULL);
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_2 = __this->get_listener_13();
		NullCheck(L_2);
		String_t* L_3 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_Destroy_m7345EA8903325F4165F93B52F45089296C879F32(L_3, /*hidden argument*/NULL);
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_4 = __this->get_listener_13();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView::OnApplicationPause(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_OnApplicationPause_mDC02877777E1CB716BF7CAB5E2946C5774425C2E (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, bool ___pause0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UniWebView::InternalOnShowTransitionFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnShowTransitionFinished_m675ACF3ED200F80D5C7D9BDE4BDE94296812FB16 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_InternalOnShowTransitionFinished_m675ACF3ED200F80D5C7D9BDE4BDE94296812FB16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	{
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_0 = __this->get_actions_20();
		String_t* L_1 = ___identifier0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mEA1F4C7224BD29F37B8956B05FD5E91804054C21(L_0, L_1, (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mEA1F4C7224BD29F37B8956B05FD5E91804054C21_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_3, /*hidden argument*/NULL);
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_4 = __this->get_actions_20();
		String_t* L_5 = ___identifier0;
		NullCheck(L_4);
		Dictionary_2_Remove_m3B8F7FE85D1D0D96319D7D1465CB561DE806A7C7(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m3B8F7FE85D1D0D96319D7D1465CB561DE806A7C7_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnHideTransitionFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnHideTransitionFinished_mF460676425275EB554B59E1A746819D7D1B8B6A5 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_InternalOnHideTransitionFinished_mF460676425275EB554B59E1A746819D7D1B8B6A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	{
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_0 = __this->get_actions_20();
		String_t* L_1 = ___identifier0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mEA1F4C7224BD29F37B8956B05FD5E91804054C21(L_0, L_1, (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mEA1F4C7224BD29F37B8956B05FD5E91804054C21_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_3, /*hidden argument*/NULL);
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_4 = __this->get_actions_20();
		String_t* L_5 = ___identifier0;
		NullCheck(L_4);
		Dictionary_2_Remove_m3B8F7FE85D1D0D96319D7D1465CB561DE806A7C7(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m3B8F7FE85D1D0D96319D7D1465CB561DE806A7C7_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnAnimateToFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnAnimateToFinished_m2486792057F058A88CC3F489034D0487B6FBD4F8 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___identifier0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_InternalOnAnimateToFinished_m2486792057F058A88CC3F489034D0487B6FBD4F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * V_0 = NULL;
	{
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_0 = __this->get_actions_20();
		String_t* L_1 = ___identifier0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mEA1F4C7224BD29F37B8956B05FD5E91804054C21(L_0, L_1, (Action_t591D2A86165F896B4B800BB5C25CE18672A55579 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mEA1F4C7224BD29F37B8956B05FD5E91804054C21_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		Action_t591D2A86165F896B4B800BB5C25CE18672A55579 * L_3 = V_0;
		NullCheck(L_3);
		Action_Invoke_mC8D676E5DDF967EC5D23DD0E96FB52AA499817FD(L_3, /*hidden argument*/NULL);
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_4 = __this->get_actions_20();
		String_t* L_5 = ___identifier0;
		NullCheck(L_4);
		Dictionary_2_Remove_m3B8F7FE85D1D0D96319D7D1465CB561DE806A7C7(L_4, L_5, /*hidden argument*/Dictionary_2_Remove_m3B8F7FE85D1D0D96319D7D1465CB561DE806A7C7_RuntimeMethod_var);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnAddJavaScriptFinished(UniWebViewNativeResultPayload)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnAddJavaScriptFinished_mE643B519375F8A85AFA04C199624DF4E172FD6D5 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_InternalOnAddJavaScriptFinished_mE643B519375F8A85AFA04C199624DF4E172FD6D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_0 = ___payload0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_identifier_0();
		V_1 = L_1;
		Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * L_2 = __this->get_payloadActions_21();
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_TryGetValue_mF53A6CB8A87F2E73C8995ED41F32BCB937B75688(L_2, L_3, (Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mF53A6CB8A87F2E73C8995ED41F32BCB937B75688_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * L_5 = V_0;
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_6 = ___payload0;
		NullCheck(L_5);
		Action_1_Invoke_mFF05822BE96997345A8FCC3A1C54F7E8D08E3276(L_5, L_6, /*hidden argument*/Action_1_Invoke_mFF05822BE96997345A8FCC3A1C54F7E8D08E3276_RuntimeMethod_var);
		Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * L_7 = __this->get_payloadActions_21();
		String_t* L_8 = V_1;
		NullCheck(L_7);
		Dictionary_2_Remove_mF7A6A6F958388BCEF2FDE3F807F3486796739C65(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_mF7A6A6F958388BCEF2FDE3F807F3486796739C65_RuntimeMethod_var);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnEvalJavaScriptFinished(UniWebViewNativeResultPayload)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnEvalJavaScriptFinished_mA4C5FF23D930C98CE746642E7114340FF830D2A8 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_InternalOnEvalJavaScriptFinished_mA4C5FF23D930C98CE746642E7114340FF830D2A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_0 = ___payload0;
		NullCheck(L_0);
		String_t* L_1 = L_0->get_identifier_0();
		V_1 = L_1;
		Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * L_2 = __this->get_payloadActions_21();
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4 = Dictionary_2_TryGetValue_mF53A6CB8A87F2E73C8995ED41F32BCB937B75688(L_2, L_3, (Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mF53A6CB8A87F2E73C8995ED41F32BCB937B75688_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Action_1_t8EC8542A14B338E47DC15B6835D141446E6F83AD * L_5 = V_0;
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_6 = ___payload0;
		NullCheck(L_5);
		Action_1_Invoke_mFF05822BE96997345A8FCC3A1C54F7E8D08E3276(L_5, L_6, /*hidden argument*/Action_1_Invoke_mFF05822BE96997345A8FCC3A1C54F7E8D08E3276_RuntimeMethod_var);
		Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * L_7 = __this->get_payloadActions_21();
		String_t* L_8 = V_1;
		NullCheck(L_7);
		Dictionary_2_Remove_mF7A6A6F958388BCEF2FDE3F807F3486796739C65(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_mF7A6A6F958388BCEF2FDE3F807F3486796739C65_RuntimeMethod_var);
	}

IL_002b:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnPageFinished(UniWebViewNativeResultPayload)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageFinished_m66D50B18FA57FB39FBBFDA22A23E1C2B3ECAB063 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_InternalOnPageFinished_m66D50B18FA57FB39FBBFDA22A23E1C2B3ECAB063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_0 = __this->get_OnPageFinished_5();
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (-1);
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_1 = ___payload0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_resultCode_1();
		bool L_3 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * L_4 = __this->get_OnPageFinished_5();
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_6 = ___payload0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_data_2();
		NullCheck(L_4);
		PageFinishedDelegate_Invoke_mB4DF606447929D18728C0F89C29782A4CB86C04E(L_4, __this, L_5, L_7, /*hidden argument*/NULL);
		return;
	}

IL_002d:
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_8 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_9 = ___payload0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_resultCode_1();
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral4BC81818A1FADD05909E6673403338B061B25752, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnPageStarted(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageStarted_mCB979A41164D7CF5D144695D16AAB647B0092C0A (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_0 = __this->get_OnPageStarted_4();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * L_1 = __this->get_OnPageStarted_4();
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		PageStartedDelegate_Invoke_m5B70710865E0D115E5F74CEAA76198F711FC8D03(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnPageErrorReceived(UniWebViewNativeResultPayload)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnPageErrorReceived_mD96650FCD2788D0EA6B4950236A1BA5904A354E4 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_InternalOnPageErrorReceived_mD96650FCD2788D0EA6B4950236A1BA5904A354E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_0 = __this->get_OnPageErrorReceived_6();
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (-1);
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_1 = ___payload0;
		NullCheck(L_1);
		String_t* L_2 = L_1->get_resultCode_1();
		bool L_3 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * L_4 = __this->get_OnPageErrorReceived_6();
		int32_t L_5 = V_0;
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_6 = ___payload0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_data_2();
		NullCheck(L_4);
		PageErrorReceivedDelegate_Invoke_m6B22D089FB82653576DFB32910CEBB751978BA6D(L_4, __this, L_5, L_7, /*hidden argument*/NULL);
		return;
	}

IL_002d:
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_8 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_9 = ___payload0;
		NullCheck(L_9);
		String_t* L_10 = L_9->get_resultCode_1();
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral4E3E67EBFAB65BF150827CC64823FCC9BB68D9D3, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_8, L_11, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnMessageReceived(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnMessageReceived_m10F1B6B8A96C5231210A76131D194374BCEB1AE4 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, String_t* ___result0, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___result0;
		UniWebViewMessage__ctor_m8E662A552E545F3D1E2CD4A86647B1F016E2E4E7((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)(&V_0), L_0, /*hidden argument*/NULL);
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_1 = __this->get_OnMessageReceived_7();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * L_2 = __this->get_OnMessageReceived_7();
		UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  L_3 = V_0;
		NullCheck(L_2);
		MessageReceivedDelegate_Invoke_mFB573DEACA94CB24A97DF4E5E160F4045C2C938C(L_2, __this, L_3, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnWebViewKeyDown(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnWebViewKeyDown_m64506AD86C1754E262675E28665C380ED01DF76A (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, int32_t ___keyCode0, const RuntimeMethod* method)
{
	{
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_0 = __this->get_OnKeyCodeReceived_9();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * L_1 = __this->get_OnKeyCodeReceived_9();
		int32_t L_2 = ___keyCode0;
		NullCheck(L_1);
		KeyCodeReceivedDelegate_Invoke_m2453E2829A04D4ACE6D9D636869982EF1A7E472F(L_1, __this, L_2, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Void UniWebView::InternalOnShouldClose()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalOnShouldClose_m4996AE2EF6FF169504485BE9E87607844490AD26 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_InternalOnShouldClose_m4996AE2EF6FF169504485BE9E87607844490AD26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_0 = __this->get_OnShouldClose_8();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * L_1 = __this->get_OnShouldClose_8();
		NullCheck(L_1);
		bool L_2 = ShouldCloseDelegate_Invoke_m6FC38AEF568D2D48B55874B308838BEEC5E0B9E3(L_1, __this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(__this, /*hidden argument*/NULL);
		return;
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(__this, /*hidden argument*/NULL);
	}

IL_0023:
	{
		return;
	}
}
// System.Void UniWebView::InternalWebContentProcessDidTerminate()
extern "C" IL2CPP_METHOD_ATTR void UniWebView_InternalWebContentProcessDidTerminate_mDB25D615EB2A4CED76E3D559147CC99836F8883C (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	{
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_0 = __this->get_OnWebContentProcessTerminated_11();
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * L_1 = __this->get_OnWebContentProcessTerminated_11();
		NullCheck(L_1);
		OnWebContentProcessTerminatedDelegate_Invoke_m0D03858D19F0C0A85F126326D4C10487A2C26C83(L_1, __this, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UniWebView::add_OnOreintationChanged(UniWebView_OrientationChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_add_OnOreintationChanged_m0E9972BCE87764BE69E499F2E372EA871CAB908D (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_add_OnOreintationChanged_m0E9972BCE87764BE69E499F2E372EA871CAB908D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_0 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_1 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_2 = NULL;
	{
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_0 = __this->get_OnOreintationChanged_26();
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_2 = V_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 ** L_5 = __this->get_address_of_OnOreintationChanged_26();
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_6 = V_2;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_7 = V_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *>((OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 **)L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_9 = V_0;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::remove_OnOreintationChanged(UniWebView_OrientationChangedDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebView_remove_OnOreintationChanged_m2C41802A75A28307B9A419CD37B6F6E8BB2E4967 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView_remove_OnOreintationChanged_m2C41802A75A28307B9A419CD37B6F6E8BB2E4967_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_0 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_1 = NULL;
	OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * V_2 = NULL;
	{
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_0 = __this->get_OnOreintationChanged_26();
		V_0 = L_0;
	}

IL_0007:
	{
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_1 = V_0;
		V_1 = L_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_2 = V_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)CastclassSealed((RuntimeObject*)L_4, OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482_il2cpp_TypeInfo_var));
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 ** L_5 = __this->get_address_of_OnOreintationChanged_26();
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_6 = V_2;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_7 = V_1;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_8 = InterlockedCompareExchangeImpl<OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *>((OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 **)L_5, L_6, L_7);
		V_0 = L_8;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_9 = V_0;
		OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * L_10 = V_1;
		if ((!(((RuntimeObject*)(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)L_9) == ((RuntimeObject*)(OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UniWebView::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UniWebView__ctor_m3A85D8AA67F3C62F2651D19AF2C71D431355F1E1 (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebView__ctor_m3A85D8AA67F3C62F2651D19AF2C71D431355F1E1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Guid_t_il2cpp_TypeInfo_var);
		Guid_t  L_0 = Guid_NewGuid_m541CAC23EBB140DFD3AB5B313315647E95FADB29(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Guid_ToString_m3024AB4FA6189BC28BE77BBD6A9F55841FE190A5((Guid_t *)(&V_0), /*hidden argument*/NULL);
		__this->set_id_12(L_1);
		Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 * L_2 = (Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45 *)il2cpp_codegen_object_new(Dictionary_2_t6869420B5ACFF0569A65586D45920B0F608DDB45_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m617D8188B02482AEFF9C461F647566C7FAC40841(L_2, /*hidden argument*/Dictionary_2__ctor_m617D8188B02482AEFF9C461F647566C7FAC40841_RuntimeMethod_var);
		__this->set_actions_20(L_2);
		Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 * L_3 = (Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216 *)il2cpp_codegen_object_new(Dictionary_2_tF7EF1EBF77E39D94C275304B89431CE3F887E216_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCAFCDBBEE563C6B755CA36CEE4D1ADFBE966B41C(L_3, /*hidden argument*/Dictionary_2__ctor_mCAFCDBBEE563C6B755CA36CEE4D1ADFBE966B41C_RuntimeMethod_var);
		__this->set_payloadActions_21(L_3);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_4 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		__this->set_backgroundColor_25(L_4);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void UniWebView_<>c__DisplayClass116_0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass116_0__ctor_mF714012F41B34648FEE41FA66BCD31ABACD322FD (U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebView_<>c__DisplayClass116_0::<GetHTMLContent>b__0(UniWebViewNativeResultPayload)
extern "C" IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass116_0_U3CGetHTMLContentU3Eb__0_m1F02C7561CC2EC79CB8EDCD44B2347B6337537A6 (U3CU3Ec__DisplayClass116_0_t5D96BEB4D5AA3C288B4CAC28F112569DE73F53C8 * __this, UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * ___payload0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass116_0_U3CGetHTMLContentU3Eb__0_m1F02C7561CC2EC79CB8EDCD44B2347B6337537A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t19CAF500829927B30EC94F39939F749E4919669E * L_0 = __this->get_handler_0();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Action_1_t19CAF500829927B30EC94F39939F749E4919669E * L_1 = __this->get_handler_0();
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_2 = ___payload0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_data_2();
		NullCheck(L_1);
		Action_1_Invoke_m8C199C95ECF35C974DA12746E7E408FA36A66523(L_1, L_3, /*hidden argument*/Action_1_Invoke_m8C199C95ECF35C974DA12746E7E408FA36A66523_RuntimeMethod_var);
	}

IL_0019:
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
// System.Void UniWebView_KeyCodeReceivedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate__ctor_mC87B7C03944B6F8D70089C4F40C558E6C010A1AD (KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView_KeyCodeReceivedDelegate::Invoke(UniWebView,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_Invoke_m2453E2829A04D4ACE6D9D636869982EF1A7E472F (KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___keyCode1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___keyCode1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___keyCode1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___keyCode1);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___keyCode1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___keyCode1);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___keyCode1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___keyCode1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___webView0, ___keyCode1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___keyCode1);
							else
								GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___keyCode1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___keyCode1);
							else
								VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___keyCode1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___keyCode1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___keyCode1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___keyCode1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___keyCode1);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___keyCode1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___keyCode1);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___keyCode1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___keyCode1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___webView0, ___keyCode1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___keyCode1);
						else
							GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___keyCode1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___keyCode1);
						else
							VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___keyCode1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___keyCode1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView_KeyCodeReceivedDelegate::BeginInvoke(UniWebView,System.Int32,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* KeyCodeReceivedDelegate_BeginInvoke_m80FEFE44763F6DAF3ED4465FDED44FA390574052 (KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___keyCode1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyCodeReceivedDelegate_BeginInvoke_m80FEFE44763F6DAF3ED4465FDED44FA390574052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___keyCode1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UniWebView_KeyCodeReceivedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void KeyCodeReceivedDelegate_EndInvoke_mF6DB20B1FBD85780AD07992A2B645AC4356A4315 (KeyCodeReceivedDelegate_tA8930CEAF69FA713516FC48F6899262B9E8E1C6C * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView_MessageReceivedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void MessageReceivedDelegate__ctor_m145B3F8BF362F77CBEB1255BF112136591EAD6BB (MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView_MessageReceivedDelegate::Invoke(UniWebView,UniWebViewMessage)
extern "C" IL2CPP_METHOD_ATTR void MessageReceivedDelegate_Invoke_mFB573DEACA94CB24A97DF4E5E160F4045C2C938C (MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  ___message1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___message1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___message1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(targetMethod, ___webView0, ___message1);
							else
								GenericVirtActionInvoker1< UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(targetMethod, ___webView0, ___message1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___message1);
							else
								VirtActionInvoker1< UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___message1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___message1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___webView0, ___message1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(targetMethod, targetThis, ___webView0, ___message1);
							else
								GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(targetMethod, targetThis, ___webView0, ___message1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___message1);
							else
								VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___message1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___message1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___message1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___message1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(targetMethod, ___webView0, ___message1);
						else
							GenericVirtActionInvoker1< UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(targetMethod, ___webView0, ___message1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___message1);
						else
							VirtActionInvoker1< UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___message1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___message1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___webView0, ___message1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(targetMethod, targetThis, ___webView0, ___message1);
						else
							GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(targetMethod, targetThis, ___webView0, ___message1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___message1);
						else
							VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___message1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___message1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView_MessageReceivedDelegate::BeginInvoke(UniWebView,UniWebViewMessage,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MessageReceivedDelegate_BeginInvoke_m4A2233F58F8B06F0B1514C541A54A701C38649A2 (MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3  ___message1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MessageReceivedDelegate_BeginInvoke_m4A2233F58F8B06F0B1514C541A54A701C38649A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_il2cpp_TypeInfo_var, &___message1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UniWebView_MessageReceivedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void MessageReceivedDelegate_EndInvoke_mCDAD2B2752E8A9AC6B9DCC849A3FE248D4929751 (MessageReceivedDelegate_t30F573625B3F4C806D9073C9FB6773DC92922582 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView_OnWebContentProcessTerminatedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate__ctor_mBD2A67C810EB2F9B0F30D2D5779020248EB287DB (OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView_OnWebContentProcessTerminatedDelegate::Invoke(UniWebView)
extern "C" IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_Invoke_m0D03858D19F0C0A85F126326D4C10487A2C26C83 (OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___webView0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___webView0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(targetMethod, targetThis, ___webView0);
							else
								GenericVirtActionInvoker1< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(targetMethod, targetThis, ___webView0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0);
							else
								VirtActionInvoker1< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___webView0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___webView0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(targetMethod, targetThis, ___webView0);
						else
							GenericVirtActionInvoker1< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(targetMethod, targetThis, ___webView0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0);
						else
							VirtActionInvoker1< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView_OnWebContentProcessTerminatedDelegate::BeginInvoke(UniWebView,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnWebContentProcessTerminatedDelegate_BeginInvoke_m0DBC570D93FD34204ACDE138DF764C5C1648BD9B (OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___webView0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UniWebView_OnWebContentProcessTerminatedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnWebContentProcessTerminatedDelegate_EndInvoke_m500283C661B4B638F187A47B37C146419FB937CE (OnWebContentProcessTerminatedDelegate_tAE07B0FEE5481D5653C82395ADAA3DF1A0DA2ECD * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView_OreintationChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OreintationChangedDelegate__ctor_m79B2D180AD4657550FD270A78B1ABF5F193B9521 (OreintationChangedDelegate_t42B38D7E92042A4E7C93015C2C675A483D7238E7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView_OreintationChangedDelegate::Invoke(UniWebView,UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void OreintationChangedDelegate_Invoke_m6EA1D0723D11CA94BC23326326B7A2FBF993DCBD (OreintationChangedDelegate_t42B38D7E92042A4E7C93015C2C675A483D7238E7 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___orientation1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___orientation1);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___orientation1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___orientation1);
							else
								GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___orientation1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___orientation1);
							else
								VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___orientation1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___orientation1);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___orientation1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___orientation1);
						else
							GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___orientation1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___orientation1);
						else
							VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___orientation1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView_OreintationChangedDelegate::BeginInvoke(UniWebView,UnityEngine.ScreenOrientation,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OreintationChangedDelegate_BeginInvoke_mDF4B329050A7233B86F4956B9F3149BA90F5BE0B (OreintationChangedDelegate_t42B38D7E92042A4E7C93015C2C675A483D7238E7 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___orientation1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OreintationChangedDelegate_BeginInvoke_mDF4B329050A7233B86F4956B9F3149BA90F5BE0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_il2cpp_TypeInfo_var, &___orientation1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UniWebView_OreintationChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OreintationChangedDelegate_EndInvoke_mBBF420DA2144DE97F4CE509088F769813543B057 (OreintationChangedDelegate_t42B38D7E92042A4E7C93015C2C675A483D7238E7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView_OrientationChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OrientationChangedDelegate__ctor_m6834DE1FCF4ECE4C41F6C0D18CEF180D7E67D8D6 (OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView_OrientationChangedDelegate::Invoke(UniWebView,UnityEngine.ScreenOrientation)
extern "C" IL2CPP_METHOD_ATTR void OrientationChangedDelegate_Invoke_mE43729DDE703E170C724165DCD78C3F5D135D2B2 (OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___orientation1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
							else
								GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___orientation1);
							else
								VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___orientation1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___orientation1);
							else
								GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___orientation1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___orientation1);
							else
								VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___orientation1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
						else
							GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___webView0, ___orientation1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___orientation1);
						else
							VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___orientation1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___webView0, ___orientation1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___orientation1);
						else
							GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(targetMethod, targetThis, ___webView0, ___orientation1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___orientation1);
						else
							VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___orientation1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___orientation1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView_OrientationChangedDelegate::BeginInvoke(UniWebView,UnityEngine.ScreenOrientation,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OrientationChangedDelegate_BeginInvoke_mE4F08537C45D015E9974052CD1AB932BD782456C (OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___orientation1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OrientationChangedDelegate_BeginInvoke_mE4F08537C45D015E9974052CD1AB932BD782456C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(ScreenOrientation_t4AB8E2E02033B0EAEA0260B05B1D88DA8058BB51_il2cpp_TypeInfo_var, &___orientation1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UniWebView_OrientationChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OrientationChangedDelegate_EndInvoke_m22B5340F48F165D0FD2E86DB63BE33552FC884F5 (OrientationChangedDelegate_t3D6957C9CC92E9341E30FCB84901049E0E8DA482 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView_PageErrorReceivedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate__ctor_m8468C922A8DE072BEE5A3769755774F356217B1B (PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView_PageErrorReceivedDelegate::Invoke(UniWebView,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_Invoke_m6B22D089FB82653576DFB32910CEBB751978BA6D (PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___errorCode1, String_t* ___errorMessage2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___errorMessage2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___errorMessage2, targetMethod);
				}
			}
			else if (___parameterCount != 3)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___errorMessage2);
							else
								GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___errorMessage2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___errorCode1, ___errorMessage2);
							else
								VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___errorCode1, ___errorMessage2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___errorMessage2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___errorMessage2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___errorCode1, ___errorMessage2);
							else
								GenericVirtActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___errorCode1, ___errorMessage2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___errorCode1, ___errorMessage2);
							else
								VirtActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___errorCode1, ___errorMessage2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___errorMessage2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___errorMessage2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___errorMessage2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___errorMessage2);
						else
							GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___errorCode1, ___errorMessage2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___errorCode1, ___errorMessage2);
						else
							VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___errorCode1, ___errorMessage2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___errorMessage2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___webView0, ___errorCode1, ___errorMessage2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___errorCode1, ___errorMessage2);
						else
							GenericVirtActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___errorCode1, ___errorMessage2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___errorCode1, ___errorMessage2);
						else
							VirtActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___errorCode1, ___errorMessage2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___errorCode1, ___errorMessage2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView_PageErrorReceivedDelegate::BeginInvoke(UniWebView,System.Int32,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PageErrorReceivedDelegate_BeginInvoke_m848DD5531FAE3B228469C1D09959E7FB0CD6C2B6 (PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___errorCode1, String_t* ___errorMessage2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PageErrorReceivedDelegate_BeginInvoke_m848DD5531FAE3B228469C1D09959E7FB0CD6C2B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___errorCode1);
	__d_args[2] = ___errorMessage2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UniWebView_PageErrorReceivedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PageErrorReceivedDelegate_EndInvoke_m17619EC6F06144151E6637DE25A16CE2AC2A2A18 (PageErrorReceivedDelegate_t091963788F14CE6459BBB18AC29566778DE8CB4E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView_PageFinishedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PageFinishedDelegate__ctor_mA08CDEF3A12AFE07D7F093DD091DF02A5CA09A77 (PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView_PageFinishedDelegate::Invoke(UniWebView,System.Int32,System.String)
extern "C" IL2CPP_METHOD_ATTR void PageFinishedDelegate_Invoke_mB4DF606447929D18728C0F89C29782A4CB86C04E (PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___statusCode1, String_t* ___url2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___statusCode1, ___url2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___statusCode1, ___url2, targetMethod);
				}
			}
			else if (___parameterCount != 3)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___statusCode1, ___url2);
							else
								GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___statusCode1, ___url2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___statusCode1, ___url2);
							else
								VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___statusCode1, ___url2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___statusCode1, ___url2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___webView0, ___statusCode1, ___url2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___statusCode1, ___url2);
							else
								GenericVirtActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___statusCode1, ___url2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___statusCode1, ___url2);
							else
								VirtActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___statusCode1, ___url2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___statusCode1, ___url2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___statusCode1, ___url2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___statusCode1, ___url2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___statusCode1, ___url2);
						else
							GenericVirtActionInvoker2< int32_t, String_t* >::Invoke(targetMethod, ___webView0, ___statusCode1, ___url2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___statusCode1, ___url2);
						else
							VirtActionInvoker2< int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___statusCode1, ___url2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___statusCode1, ___url2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___webView0, ___statusCode1, ___url2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___statusCode1, ___url2);
						else
							GenericVirtActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___statusCode1, ___url2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___statusCode1, ___url2);
						else
							VirtActionInvoker3< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___statusCode1, ___url2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___statusCode1, ___url2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView_PageFinishedDelegate::BeginInvoke(UniWebView,System.Int32,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PageFinishedDelegate_BeginInvoke_mD4E0D96649C40B223B6BD0C2594AA4CF859E0102 (PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, int32_t ___statusCode1, String_t* ___url2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PageFinishedDelegate_BeginInvoke_mD4E0D96649C40B223B6BD0C2594AA4CF859E0102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___statusCode1);
	__d_args[2] = ___url2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UniWebView_PageFinishedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PageFinishedDelegate_EndInvoke_mD772A71B855EE1AE442711647B29F6B394EF943F (PageFinishedDelegate_t86B321BA20AE98611CA5520C46D556970FF31702 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView_PageStartedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void PageStartedDelegate__ctor_mC29DB4C283C9746D9794FFB50F7F839A06706DA1 (PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebView_PageStartedDelegate::Invoke(UniWebView,System.String)
extern "C" IL2CPP_METHOD_ATTR void PageStartedDelegate_Invoke_m5B70710865E0D115E5F74CEAA76198F711FC8D03 (PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, String_t* ___url1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 2)
				{
					// open
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___url1, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___url1, targetMethod);
				}
			}
			else if (___parameterCount != 2)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___url1);
							else
								GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___url1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___url1);
							else
								VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___url1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___webView0, ___url1, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___webView0, ___url1, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___url1);
							else
								GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___url1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___url1);
							else
								VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___url1);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___url1, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___url1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___url1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___url1);
						else
							GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___webView0, ___url1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0, ___url1);
						else
							VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0, ___url1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___webView0, ___url1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___webView0, ___url1, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___url1);
						else
							GenericVirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t* >::Invoke(targetMethod, targetThis, ___webView0, ___url1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0, ___url1);
						else
							VirtActionInvoker2< UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0, ___url1);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, ___url1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebView_PageStartedDelegate::BeginInvoke(UniWebView,System.String,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* PageStartedDelegate_BeginInvoke_m83A805520C1A13286778A769741D7D659E94AE79 (PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, String_t* ___url1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___webView0;
	__d_args[1] = ___url1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UniWebView_PageStartedDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void PageStartedDelegate_EndInvoke_m119001493E0C7433D30B25A60DDAE1501A8905DF (PageStartedDelegate_t249FC70F5F447EFE3E8A30439569A96F05602E78 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebView_ShouldCloseDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ShouldCloseDelegate__ctor_mF65DFABA7263681AACE8A4E6A46543AE77E3CAC0 (ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UniWebView_ShouldCloseDelegate::Invoke(UniWebView)
extern "C" IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_Invoke_m6FC38AEF568D2D48B55874B308838BEEC5E0B9E3 (ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 1)
				{
					// open
					typedef bool (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
				}
				else
				{
					// closed
					typedef bool (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
				}
			}
			else if (___parameterCount != 1)
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___webView0);
							else
								result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___webView0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0);
							else
								result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0);
						}
					}
				}
				else
				{
					typedef bool (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef bool (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
							result = ((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = GenericInterfaceFuncInvoker1< bool, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(targetMethod, targetThis, ___webView0);
							else
								result = GenericVirtFuncInvoker1< bool, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(targetMethod, targetThis, ___webView0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								result = InterfaceFuncInvoker1< bool, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0);
							else
								result = VirtFuncInvoker1< bool, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0);
						}
					}
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___webView0);
						else
							result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___webView0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___webView0);
						else
							result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___webView0);
					}
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef bool (*FunctionPointerType) (UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
						result = ((FunctionPointerType)targetMethodPointer)(___webView0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = GenericInterfaceFuncInvoker1< bool, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(targetMethod, targetThis, ___webView0);
						else
							result = GenericVirtFuncInvoker1< bool, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(targetMethod, targetThis, ___webView0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							result = InterfaceFuncInvoker1< bool, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___webView0);
						else
							result = VirtFuncInvoker1< bool, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___webView0);
					}
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___webView0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult UniWebView_ShouldCloseDelegate::BeginInvoke(UniWebView,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ShouldCloseDelegate_BeginInvoke_mCFF77D8BCE4F27D9FFDB074E0DBDE84FBB01806B (ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * __this, UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * ___webView0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___webView0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean UniWebView_ShouldCloseDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool ShouldCloseDelegate_EndInvoke_m2FE187B378DE4682A1BF479E6710521E9F93486E (ShouldCloseDelegate_t2E3349B793354B80E34E5AF4CB035C2370160998 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebViewAndroidStaticListener::Awake()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_Awake_m73D37CD41247F5214E73929115991F57F41AE6EC (UniWebViewAndroidStaticListener_t9987AA383ACDCD75BF174C6A87CBC88B83414A79 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewAndroidStaticListener_Awake_m73D37CD41247F5214E73929115991F57F41AE6EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4DC90770AD6084E4B1B8489C6B41205DC020C207(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewAndroidStaticListener::OnJavaMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener_OnJavaMessage_m1F4138E7CC1D0BFF727E1DD4BD27E6016E2C1243 (UniWebViewAndroidStaticListener_t9987AA383ACDCD75BF174C6A87CBC88B83414A79 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewAndroidStaticListener_OnJavaMessage_m1F4138E7CC1D0BFF727E1DD4BD27E6016E2C1243_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * V_1 = NULL;
	MethodInfo_t * V_2 = NULL;
	int32_t V_3 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_4 = NULL;
	int32_t V_5 = 0;
	{
		String_t* L_0 = ___message0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_1 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = L_1;
		NullCheck(_stringLiteral9A78211436F6D425EC38F5C4E02270801F3524F8);
		Il2CppChar L_3 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(_stringLiteral9A78211436F6D425EC38F5C4E02270801F3524F8, 0, /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_3);
		NullCheck(L_0);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_4;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = V_0;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))))) >= ((int32_t)3)))
		{
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteral146030492EBA1AA0EB73B5D9C16DCED999DAEDBB, /*hidden argument*/NULL);
		return;
	}

IL_002c:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_9 = UniWebViewNativeListener_GetListener_mC6C1E26D38D9B13A624349A855EB6987ADAC87F3(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(_stringLiteralC4D081E5B8099F8DAFF1DEE346CACDBD2D5177F5, /*hidden argument*/NULL);
		return;
	}

IL_0049:
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_12 = { reinterpret_cast<intptr_t> (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_12, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 1;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_13);
		MethodInfo_t * L_17 = Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE(L_13, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		MethodInfo_t * L_18 = V_2;
		bool L_19 = MethodInfo_op_Equality_m1E51FB51169B9B8FB3120ED5F9B454785932C5D0(L_18, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		String_t* L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		String_t* L_23 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral602D3E503D008B8748F9A02F2273CD3FED413783, L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_23, /*hidden argument*/NULL);
	}

IL_0077:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_24 = V_0;
		NullCheck(L_24);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))), (int32_t)2));
		int32_t L_25 = V_3;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_26 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)L_25);
		V_4 = L_26;
		V_5 = 0;
		goto IL_009b;
	}

IL_008a:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_27 = V_4;
		int32_t L_28 = V_5;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_29 = V_0;
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)2));
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_32);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (String_t*)L_32);
		int32_t L_33 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_009b:
	{
		int32_t L_34 = V_5;
		int32_t L_35 = V_3;
		if ((((int32_t)L_34) < ((int32_t)L_35)))
		{
			goto IL_008a;
		}
	}
	{
		MethodInfo_t * L_36 = V_2;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_37 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_38 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_39 = L_38;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_40 = V_4;
		String_t* L_41 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteral9A78211436F6D425EC38F5C4E02270801F3524F8, L_40, /*hidden argument*/NULL);
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_41);
		NullCheck(L_36);
		MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_36, L_37, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewAndroidStaticListener::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewAndroidStaticListener__ctor_m77C840B0DA054BBF50E01B28A06404008A5E1802 (UniWebViewAndroidStaticListener_t9987AA383ACDCD75BF174C6A87CBC88B83414A79 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.String UniWebViewHelper::StreamingAssetURLForPath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewHelper_StreamingAssetURLForPath_m49DF44F463DFB56478C8B16D44D832B628529A46 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewHelper_StreamingAssetURLForPath_m49DF44F463DFB56478C8B16D44D832B628529A46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Application_get_streamingAssetsPath_m87163AE531BEB6A6588FABAD3207D829721CF31F(/*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String UniWebViewHelper::PersistentDataURLForPath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewHelper_PersistentDataURLForPath_mB598A5B27D9BA73209B60B852ED276D97E0B7506 (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewHelper_PersistentDataURLForPath_mB598A5B27D9BA73209B60B852ED276D97E0B7506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Application_get_persistentDataPath_m82E34156D8BD0A55CAC258CDFE8317FAD6945F5B(/*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA91E4897CA9F429677AFC57ED00D90DE8D3C7001, L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t0B99A4B924A6FDF08814FFA8DD4CD121ED1A0752_il2cpp_TypeInfo_var);
		String_t* L_3 = Path_Combine_mA495A18104786EB450EC0E44EE0FB7F9040C4311(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void UniWebViewHelper::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewHelper__ctor_mE511682893231A515544402DD25054B007ECD57D (UniWebViewHelper_t8768407D2ECCF39080CB4D426A7AD65CC6F7A2D3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_UniWebViewInterface_SendMessage_mDAA737307C21D279A176FE30038F5B73FD5EE7CE(intptr_t ___namePtr0, intptr_t ___methodPtr1, intptr_t ___parameterPtr2)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	UniWebViewInterface_SendMessage_mDAA737307C21D279A176FE30038F5B73FD5EE7CE(___namePtr0, ___methodPtr1, ___parameterPtr2, NULL);

}
// System.Void UniWebViewInterface::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface__cctor_m9F8C8548528C4039EBF852A066FBE222B0A3CAFE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface__cctor_m9F8C8548528C4039EBF852A066FBE222B0A3CAFE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		((UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var))->set_correctPlatform_1((bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0));
		UniWebViewInterface_ConnectMessageSender_mE96D2E06C759329F19D26A33B3794D499C373DE1(/*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_connectMessageSender(Il2CppMethodPointer);
// System.Void UniWebViewInterface::uv_connectMessageSender(UniWebViewInterface_UnitySendMessageDelegate)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_connectMessageSender_m6F94F1EDF1E2594088FB1EF940D031C97302CF7C (UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 * ___sendMessageDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter U27___sendMessageDelegate0U27 to native representation
	Il2CppMethodPointer ____sendMessageDelegate0_marshaled = NULL;
	____sendMessageDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___sendMessageDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_connectMessageSender)(____sendMessageDelegate0_marshaled);

}
// System.Void UniWebViewInterface::ConnectMessageSender()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_ConnectMessageSender_mE96D2E06C759329F19D26A33B3794D499C373DE1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_ConnectMessageSender_mE96D2E06C759329F19D26A33B3794D499C373DE1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, _stringLiteral1A697AE208D81FDAD82F19579E60E4ACFF6F1D77, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 * L_1 = (UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 *)il2cpp_codegen_object_new(UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68_il2cpp_TypeInfo_var);
		UnitySendMessageDelegate__ctor_m41C0E2F0FA04571519322A4EE9F15FEBAF42F62A(L_1, NULL, (intptr_t)((intptr_t)UniWebViewInterface_SendMessage_mDAA737307C21D279A176FE30038F5B73FD5EE7CE_RuntimeMethod_var), /*hidden argument*/NULL);
		UniWebViewInterface_uv_connectMessageSender_m6F94F1EDF1E2594088FB1EF940D031C97302CF7C(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewInterface::SendMessage(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SendMessage_mDAA737307C21D279A176FE30038F5B73FD5EE7CE (intptr_t ___namePtr0, intptr_t ___methodPtr1, intptr_t ___parameterPtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SendMessage_mDAA737307C21D279A176FE30038F5B73FD5EE7CE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * V_3 = NULL;
	MethodInfo_t * V_4 = NULL;
	{
		intptr_t L_0 = ___namePtr0;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tC795CE9CC2FFBA41EDB1AC1C0FEC04607DFA8A40_il2cpp_TypeInfo_var);
		String_t* L_1 = Marshal_PtrToStringAuto_mEB58737930C2F57CFE9E32B03524D7210DB94027((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		intptr_t L_2 = ___methodPtr1;
		String_t* L_3 = Marshal_PtrToStringAuto_mEB58737930C2F57CFE9E32B03524D7210DB94027((intptr_t)L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		intptr_t L_4 = ___parameterPtr2;
		String_t* L_5 = Marshal_PtrToStringAuto_mEB58737930C2F57CFE9E32B03524D7210DB94027((intptr_t)L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_6 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral06B74BC77BC139B54EA6631F98B79177AD2A78CB);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral06B74BC77BC139B54EA6631F98B79177AD2A78CB);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = L_8;
		String_t* L_10 = V_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_10);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralC4ACB1398FC901DE499C0A5927410EB3733DD8F6);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC4ACB1398FC901DE499C0A5927410EB3733DD8F6);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_12 = L_11;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_13);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral755FF1EC321A750FAD1BC3B789A4AB51EAB45B0B);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral755FF1EC321A750FAD1BC3B789A4AB51EAB45B0B);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = L_14;
		String_t* L_16 = V_2;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_16);
		String_t* L_17 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(L_15, /*hidden argument*/NULL);
		NullCheck(L_6);
		UniWebViewLogger_Verbose_mBB8EDD12E337C8CA1A28D60BDACF0D895F339BCC(L_6, L_17, /*hidden argument*/NULL);
		String_t* L_18 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var);
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_19 = UniWebViewNativeListener_GetListener_mC6C1E26D38D9B13A624349A855EB6987ADAC87F3(L_18, /*hidden argument*/NULL);
		V_3 = L_19;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_21 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_008c;
		}
	}
	{
		RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  L_22 = { reinterpret_cast<intptr_t> (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m9DC58ADF0512987012A8A016FB64B068F3B1AFF6(L_22, /*hidden argument*/NULL);
		String_t* L_24 = V_1;
		NullCheck(L_23);
		MethodInfo_t * L_25 = Type_GetMethod_mB8368D44E32C205D279BA3BB9E6FE1D09D45A6DE(L_23, L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		MethodInfo_t * L_26 = V_4;
		bool L_27 = MethodInfo_op_Inequality_m76AC38C8B8FB8F28C21E6F9A3F0268FF8E4CC237(L_26, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_008c;
		}
	}
	{
		MethodInfo_t * L_28 = V_4;
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_29 = V_3;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_30 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_31 = L_30;
		String_t* L_32 = V_2;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_32);
		NullCheck(L_28);
		MethodBase_Invoke_m471794D56262D9DB5B5A324883030AB16BD39674(L_28, L_29, L_31, /*hidden argument*/NULL);
	}

IL_008c:
	{
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setLogLevel(int32_t);
// System.Void UniWebViewInterface::uv_setLogLevel(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setLogLevel_m9DD0E920BAF5466B6705AD40D39239989B73BF02 (int32_t ___level0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setLogLevel)(___level0);

}
// System.Void UniWebViewInterface::SetLogLevel(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetLogLevel_mDAAD013E6D6E08D5A398610E3AAAEB3F9D681E67 (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetLogLevel_mDAAD013E6D6E08D5A398610E3AAAEB3F9D681E67_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		int32_t L_0 = ___level0;
		UniWebViewInterface_uv_setLogLevel_m9DD0E920BAF5466B6705AD40D39239989B73BF02(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_init(char*, int32_t, int32_t, int32_t, int32_t);
// System.Void UniWebViewInterface::uv_init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_init_mF08FB3D5197AC07B2A1A27035646B9DD07570AF6 (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_init)(____name0_marshaled, ___x1, ___y2, ___width3, ___height4);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::Init(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Init_m9AE89395D39758A3D82EE41ACC341C054E2AE78A (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_Init_m9AE89395D39758A3D82EE41ACC341C054E2AE78A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		String_t* L_2 = ___name0;
		int32_t L_3 = ___x1;
		int32_t L_4 = ___y2;
		int32_t L_5 = ___width3;
		int32_t L_6 = ___height4;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_uv_init_mF08FB3D5197AC07B2A1A27035646B9DD07570AF6(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_destroy(char*);
// System.Void UniWebViewInterface::uv_destroy(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_destroy_m9C2F06BA0984AD30E10B1B2D2B44AF37F7316113 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_destroy)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::Destroy(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Destroy_m7345EA8903325F4165F93B52F45089296C879F32 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_Destroy_m7345EA8903325F4165F93B52F45089296C879F32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		UniWebViewInterface_uv_destroy_m9C2F06BA0984AD30E10B1B2D2B44AF37F7316113(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_load(char*, char*, int32_t, char*);
// System.Void UniWebViewInterface::uv_load(System.String,System.String,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_load_m2F75EF4BE6D452E9F79099DA82DEF1F2C524ABF5 (String_t* ___name0, String_t* ___url1, bool ___skipEncoding2, String_t* ___readAccessURL3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___url1U27 to native representation
	char* ____url1_marshaled = NULL;
	____url1_marshaled = il2cpp_codegen_marshal_string(___url1);

	// Marshaling of parameter U27___readAccessURL3U27 to native representation
	char* ____readAccessURL3_marshaled = NULL;
	____readAccessURL3_marshaled = il2cpp_codegen_marshal_string(___readAccessURL3);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_load)(____name0_marshaled, ____url1_marshaled, static_cast<int32_t>(___skipEncoding2), ____readAccessURL3_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___url1U27 native representation
	il2cpp_codegen_marshal_free(____url1_marshaled);
	____url1_marshaled = NULL;

	// Marshaling cleanup of parameter U27___readAccessURL3U27 native representation
	il2cpp_codegen_marshal_free(____readAccessURL3_marshaled);
	____readAccessURL3_marshaled = NULL;

}
// System.Void UniWebViewInterface::Load(System.String,System.String,System.Boolean,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Load_mD590C5D4EC77275A7FB3FB675B313C17AFAE28FB (String_t* ___name0, String_t* ___url1, bool ___skipEncoding2, String_t* ___readAccessURL3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_Load_mD590C5D4EC77275A7FB3FB675B313C17AFAE28FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___url1;
		bool L_2 = ___skipEncoding2;
		String_t* L_3 = ___readAccessURL3;
		UniWebViewInterface_uv_load_m2F75EF4BE6D452E9F79099DA82DEF1F2C524ABF5(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_loadHTMLString(char*, char*, char*, int32_t);
// System.Void UniWebViewInterface::uv_loadHTMLString(System.String,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_loadHTMLString_mD627822C8A9FD0128976C06DD6B460939E0807E6 (String_t* ___name0, String_t* ___html1, String_t* ___baseUrl2, bool ___skipEncoding3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___html1U27 to native representation
	char* ____html1_marshaled = NULL;
	____html1_marshaled = il2cpp_codegen_marshal_string(___html1);

	// Marshaling of parameter U27___baseUrl2U27 to native representation
	char* ____baseUrl2_marshaled = NULL;
	____baseUrl2_marshaled = il2cpp_codegen_marshal_string(___baseUrl2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_loadHTMLString)(____name0_marshaled, ____html1_marshaled, ____baseUrl2_marshaled, static_cast<int32_t>(___skipEncoding3));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___html1U27 native representation
	il2cpp_codegen_marshal_free(____html1_marshaled);
	____html1_marshaled = NULL;

	// Marshaling cleanup of parameter U27___baseUrl2U27 native representation
	il2cpp_codegen_marshal_free(____baseUrl2_marshaled);
	____baseUrl2_marshaled = NULL;

}
// System.Void UniWebViewInterface::LoadHTMLString(System.String,System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_LoadHTMLString_m8503019BDF405BBAD96ADF206BC554BC23253E9D (String_t* ___name0, String_t* ___html1, String_t* ___baseUrl2, bool ___skipEncoding3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_LoadHTMLString_m8503019BDF405BBAD96ADF206BC554BC23253E9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___html1;
		String_t* L_2 = ___baseUrl2;
		bool L_3 = ___skipEncoding3;
		UniWebViewInterface_uv_loadHTMLString_mD627822C8A9FD0128976C06DD6B460939E0807E6(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_reload(char*);
// System.Void UniWebViewInterface::uv_reload(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_reload_m3722FD125DF942EC41BFBEFF7E97867D2B82D57A (String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_reload)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::Reload(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Reload_mF59A428BA67116A01420C9263CECDD4913A06C44 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_Reload_mF59A428BA67116A01420C9263CECDD4913A06C44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		UniWebViewInterface_uv_reload_m3722FD125DF942EC41BFBEFF7E97867D2B82D57A(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_stop(char*);
// System.Void UniWebViewInterface::uv_stop(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_stop_mC73152F27DDE95B0FA6EE5AD9791EB641C87204F (String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_stop)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::Stop(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Stop_m18E9AEE0A3E00D60AEE8BAD8AD4180F2D2D00A87 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_Stop_m18E9AEE0A3E00D60AEE8BAD8AD4180F2D2D00A87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		UniWebViewInterface_uv_stop_mC73152F27DDE95B0FA6EE5AD9791EB641C87204F(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" char* DEFAULT_CALL uv_getUrl(char*);
// System.String UniWebViewInterface::uv_getUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getUrl_m5054D19DFB5AE6A0DA64AAFE46A38E05A066407D (String_t* ___name0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(uv_getUrl)(____name0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String UniWebViewInterface::GetUrl(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUrl_m99AC915DE080DC8263764AD049DF1E8D47C4B480 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_GetUrl_m99AC915DE080DC8263764AD049DF1E8D47C4B480_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = UniWebViewInterface_uv_getUrl_m5054D19DFB5AE6A0DA64AAFE46A38E05A066407D(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C" void DEFAULT_CALL uv_setFrame(char*, int32_t, int32_t, int32_t, int32_t);
// System.Void UniWebViewInterface::uv_setFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setFrame_m8F7714C20B0CCAAACB2A3F325C1ADA8C4F04AAD5 (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setFrame)(____name0_marshaled, ___x1, ___y2, ___width3, ___height4);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetFrame(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetFrame_mD15A8FFD7720039EEC147596AD8DBB6669D3865E (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetFrame_mD15A8FFD7720039EEC147596AD8DBB6669D3865E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		int32_t L_1 = ___x1;
		int32_t L_2 = ___y2;
		int32_t L_3 = ___width3;
		int32_t L_4 = ___height4;
		UniWebViewInterface_uv_setFrame_m8F7714C20B0CCAAACB2A3F325C1ADA8C4F04AAD5(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setPosition(char*, int32_t, int32_t);
// System.Void UniWebViewInterface::uv_setPosition(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setPosition_mB11CD31EA2D2F2C6422AF5E65B1DB0C7E618FE57 (String_t* ___name0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setPosition)(____name0_marshaled, ___x1, ___y2);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetPosition(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetPosition_m3B0C3B7D8278CCBEC85F1D1C9678D7CA36CF12AA (String_t* ___name0, int32_t ___x1, int32_t ___y2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetPosition_m3B0C3B7D8278CCBEC85F1D1C9678D7CA36CF12AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		int32_t L_1 = ___x1;
		int32_t L_2 = ___y2;
		UniWebViewInterface_uv_setPosition_mB11CD31EA2D2F2C6422AF5E65B1DB0C7E618FE57(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setSize(char*, int32_t, int32_t);
// System.Void UniWebViewInterface::uv_setSize(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSize_mA23517880738647A59B32752826FAF5D31B24AE3 (String_t* ___name0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setSize)(____name0_marshaled, ___width1, ___height2);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetSize(System.String,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSize_mC92E171735A32C93137E072E2B82068523DC9DB3 (String_t* ___name0, int32_t ___width1, int32_t ___height2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetSize_mC92E171735A32C93137E072E2B82068523DC9DB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		int32_t L_1 = ___width1;
		int32_t L_2 = ___height2;
		UniWebViewInterface_uv_setSize_mA23517880738647A59B32752826FAF5D31B24AE3(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C" int32_t DEFAULT_CALL uv_show(char*, int32_t, int32_t, float, char*);
// System.Boolean UniWebViewInterface::uv_show(System.String,System.Boolean,System.Int32,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_show_mB25EB1BC611294B9E2B38AFF8C0AAB3F02FDB524 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___identifier4U27 to native representation
	char* ____identifier4_marshaled = NULL;
	____identifier4_marshaled = il2cpp_codegen_marshal_string(___identifier4);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_show)(____name0_marshaled, static_cast<int32_t>(___fade1), ___edge2, ___duration3, ____identifier4_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___identifier4U27 native representation
	il2cpp_codegen_marshal_free(____identifier4_marshaled);
	____identifier4_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean UniWebViewInterface::Show(System.String,System.Boolean,System.Int32,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_Show_mDBF6C81C451078AD3BE7BA0E47660846D83612B6 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_Show_mDBF6C81C451078AD3BE7BA0E47660846D83612B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___fade1;
		int32_t L_2 = ___edge2;
		float L_3 = ___duration3;
		String_t* L_4 = ___identifier4;
		bool L_5 = UniWebViewInterface_uv_show_mB25EB1BC611294B9E2B38AFF8C0AAB3F02FDB524(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
extern "C" int32_t DEFAULT_CALL uv_hide(char*, int32_t, int32_t, float, char*);
// System.Boolean UniWebViewInterface::uv_hide(System.String,System.Boolean,System.Int32,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_hide_m8444440233A9321DC4D9E7FAFA4177E2F37F9A09 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, float, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___identifier4U27 to native representation
	char* ____identifier4_marshaled = NULL;
	____identifier4_marshaled = il2cpp_codegen_marshal_string(___identifier4);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_hide)(____name0_marshaled, static_cast<int32_t>(___fade1), ___edge2, ___duration3, ____identifier4_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___identifier4U27 native representation
	il2cpp_codegen_marshal_free(____identifier4_marshaled);
	____identifier4_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean UniWebViewInterface::Hide(System.String,System.Boolean,System.Int32,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_Hide_m9172C8D99F47706FEBA5B64BEAD2F66EB55F5791 (String_t* ___name0, bool ___fade1, int32_t ___edge2, float ___duration3, String_t* ___identifier4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_Hide_m9172C8D99F47706FEBA5B64BEAD2F66EB55F5791_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___fade1;
		int32_t L_2 = ___edge2;
		float L_3 = ___duration3;
		String_t* L_4 = ___identifier4;
		bool L_5 = UniWebViewInterface_uv_hide_m8444440233A9321DC4D9E7FAFA4177E2F37F9A09(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
extern "C" int32_t DEFAULT_CALL uv_animateTo(char*, int32_t, int32_t, int32_t, int32_t, float, float, char*);
// System.Boolean UniWebViewInterface::uv_animateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_animateTo_m50B3085A812EB66A3235FAE5B6641A889873D578 (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, float ___duration5, float ___delay6, String_t* ___identifier7, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t, float, float, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___identifier7U27 to native representation
	char* ____identifier7_marshaled = NULL;
	____identifier7_marshaled = il2cpp_codegen_marshal_string(___identifier7);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_animateTo)(____name0_marshaled, ___x1, ___y2, ___width3, ___height4, ___duration5, ___delay6, ____identifier7_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___identifier7U27 native representation
	il2cpp_codegen_marshal_free(____identifier7_marshaled);
	____identifier7_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean UniWebViewInterface::AnimateTo(System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.Single,System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_AnimateTo_m37B4D301C354BD000046C696F77BC274CA7A6561 (String_t* ___name0, int32_t ___x1, int32_t ___y2, int32_t ___width3, int32_t ___height4, float ___duration5, float ___delay6, String_t* ___identifier7, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_AnimateTo_m37B4D301C354BD000046C696F77BC274CA7A6561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		int32_t L_1 = ___x1;
		int32_t L_2 = ___y2;
		int32_t L_3 = ___width3;
		int32_t L_4 = ___height4;
		float L_5 = ___duration5;
		float L_6 = ___delay6;
		String_t* L_7 = ___identifier7;
		bool L_8 = UniWebViewInterface_uv_animateTo_m50B3085A812EB66A3235FAE5B6641A889873D578(L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
extern "C" void DEFAULT_CALL uv_addJavaScript(char*, char*, char*);
// System.Void UniWebViewInterface::uv_addJavaScript(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addJavaScript_mD79E82C81492141969962CA9F1CF6A139C4730C8 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___jsString1U27 to native representation
	char* ____jsString1_marshaled = NULL;
	____jsString1_marshaled = il2cpp_codegen_marshal_string(___jsString1);

	// Marshaling of parameter U27___identifier2U27 to native representation
	char* ____identifier2_marshaled = NULL;
	____identifier2_marshaled = il2cpp_codegen_marshal_string(___identifier2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_addJavaScript)(____name0_marshaled, ____jsString1_marshaled, ____identifier2_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___jsString1U27 native representation
	il2cpp_codegen_marshal_free(____jsString1_marshaled);
	____jsString1_marshaled = NULL;

	// Marshaling cleanup of parameter U27___identifier2U27 native representation
	il2cpp_codegen_marshal_free(____identifier2_marshaled);
	____identifier2_marshaled = NULL;

}
// System.Void UniWebViewInterface::AddJavaScript(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_AddJavaScript_m0821BD310D90C6DA1E8BC9F9D1E1F13F7919EF4E (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_AddJavaScript_m0821BD310D90C6DA1E8BC9F9D1E1F13F7919EF4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___jsString1;
		String_t* L_2 = ___identifier2;
		UniWebViewInterface_uv_addJavaScript_mD79E82C81492141969962CA9F1CF6A139C4730C8(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_evaluateJavaScript(char*, char*, char*);
// System.Void UniWebViewInterface::uv_evaluateJavaScript(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_evaluateJavaScript_m52C448F65FC632CD15917513CFA2C89A0B6DDD36 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___jsString1U27 to native representation
	char* ____jsString1_marshaled = NULL;
	____jsString1_marshaled = il2cpp_codegen_marshal_string(___jsString1);

	// Marshaling of parameter U27___identifier2U27 to native representation
	char* ____identifier2_marshaled = NULL;
	____identifier2_marshaled = il2cpp_codegen_marshal_string(___identifier2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_evaluateJavaScript)(____name0_marshaled, ____jsString1_marshaled, ____identifier2_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___jsString1U27 native representation
	il2cpp_codegen_marshal_free(____jsString1_marshaled);
	____jsString1_marshaled = NULL;

	// Marshaling cleanup of parameter U27___identifier2U27 native representation
	il2cpp_codegen_marshal_free(____identifier2_marshaled);
	____identifier2_marshaled = NULL;

}
// System.Void UniWebViewInterface::EvaluateJavaScript(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_EvaluateJavaScript_m790554C524888A5078EECC3A5AF97F5F112AE0A0 (String_t* ___name0, String_t* ___jsString1, String_t* ___identifier2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_EvaluateJavaScript_m790554C524888A5078EECC3A5AF97F5F112AE0A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___jsString1;
		String_t* L_2 = ___identifier2;
		UniWebViewInterface_uv_evaluateJavaScript_m52C448F65FC632CD15917513CFA2C89A0B6DDD36(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_addUrlScheme(char*, char*);
// System.Void UniWebViewInterface::uv_addUrlScheme(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addUrlScheme_mD219030975BDD057E460D9C585B4B8232D034618 (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___scheme1U27 to native representation
	char* ____scheme1_marshaled = NULL;
	____scheme1_marshaled = il2cpp_codegen_marshal_string(___scheme1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_addUrlScheme)(____name0_marshaled, ____scheme1_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___scheme1U27 native representation
	il2cpp_codegen_marshal_free(____scheme1_marshaled);
	____scheme1_marshaled = NULL;

}
// System.Void UniWebViewInterface::AddUrlScheme(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_AddUrlScheme_m093135E876EB07E0286665C23483ED93FEF02649 (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_AddUrlScheme_m093135E876EB07E0286665C23483ED93FEF02649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___scheme1;
		UniWebViewInterface_uv_addUrlScheme_mD219030975BDD057E460D9C585B4B8232D034618(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_removeUrlScheme(char*, char*);
// System.Void UniWebViewInterface::uv_removeUrlScheme(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeUrlScheme_m25410F76C111ECBA1B4184960A656CD26972EAAB (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___scheme1U27 to native representation
	char* ____scheme1_marshaled = NULL;
	____scheme1_marshaled = il2cpp_codegen_marshal_string(___scheme1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_removeUrlScheme)(____name0_marshaled, ____scheme1_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___scheme1U27 native representation
	il2cpp_codegen_marshal_free(____scheme1_marshaled);
	____scheme1_marshaled = NULL;

}
// System.Void UniWebViewInterface::RemoveUrlScheme(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveUrlScheme_m0F2710272BD6DAFCD3444BE3B9FEA1281D670FE5 (String_t* ___name0, String_t* ___scheme1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_RemoveUrlScheme_m0F2710272BD6DAFCD3444BE3B9FEA1281D670FE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___scheme1;
		UniWebViewInterface_uv_removeUrlScheme_m25410F76C111ECBA1B4184960A656CD26972EAAB(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_addSslExceptionDomain(char*, char*);
// System.Void UniWebViewInterface::uv_addSslExceptionDomain(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_addSslExceptionDomain_m4C79BE5F6E8C0C5295562790A4D2EE0D3ED2CC9A (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___domain1U27 to native representation
	char* ____domain1_marshaled = NULL;
	____domain1_marshaled = il2cpp_codegen_marshal_string(___domain1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_addSslExceptionDomain)(____name0_marshaled, ____domain1_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___domain1U27 native representation
	il2cpp_codegen_marshal_free(____domain1_marshaled);
	____domain1_marshaled = NULL;

}
// System.Void UniWebViewInterface::AddSslExceptionDomain(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_AddSslExceptionDomain_mE9F6EA6225D2C7C2FD556E2648796F7D6BFCEAEB (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_AddSslExceptionDomain_mE9F6EA6225D2C7C2FD556E2648796F7D6BFCEAEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___domain1;
		UniWebViewInterface_uv_addSslExceptionDomain_m4C79BE5F6E8C0C5295562790A4D2EE0D3ED2CC9A(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_removeSslExceptionDomain(char*, char*);
// System.Void UniWebViewInterface::uv_removeSslExceptionDomain(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_removeSslExceptionDomain_m505212CE4AD1CD1513AFE6E995E759B604DF3957 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___domain1U27 to native representation
	char* ____domain1_marshaled = NULL;
	____domain1_marshaled = il2cpp_codegen_marshal_string(___domain1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_removeSslExceptionDomain)(____name0_marshaled, ____domain1_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___domain1U27 native representation
	il2cpp_codegen_marshal_free(____domain1_marshaled);
	____domain1_marshaled = NULL;

}
// System.Void UniWebViewInterface::RemoveSslExceptionDomain(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_RemoveSslExceptionDomain_m952D43F1FE6F6BE9AC15DC66D42C51780C5702C9 (String_t* ___name0, String_t* ___domain1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_RemoveSslExceptionDomain_m952D43F1FE6F6BE9AC15DC66D42C51780C5702C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___domain1;
		UniWebViewInterface_uv_removeSslExceptionDomain_m505212CE4AD1CD1513AFE6E995E759B604DF3957(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setHeaderField(char*, char*, char*);
// System.Void UniWebViewInterface::uv_setHeaderField(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setHeaderField_m48DBE405AC72A2693051FE7FEAA1E600FF5751A4 (String_t* ___name0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___key1U27 to native representation
	char* ____key1_marshaled = NULL;
	____key1_marshaled = il2cpp_codegen_marshal_string(___key1);

	// Marshaling of parameter U27___value2U27 to native representation
	char* ____value2_marshaled = NULL;
	____value2_marshaled = il2cpp_codegen_marshal_string(___value2);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setHeaderField)(____name0_marshaled, ____key1_marshaled, ____value2_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___key1U27 native representation
	il2cpp_codegen_marshal_free(____key1_marshaled);
	____key1_marshaled = NULL;

	// Marshaling cleanup of parameter U27___value2U27 native representation
	il2cpp_codegen_marshal_free(____value2_marshaled);
	____value2_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetHeaderField(System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHeaderField_m6248C66E1CEAF27CDDDA66A525F1D71CBD502A22 (String_t* ___name0, String_t* ___key1, String_t* ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetHeaderField_m6248C66E1CEAF27CDDDA66A525F1D71CBD502A22_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___key1;
		String_t* L_2 = ___value2;
		UniWebViewInterface_uv_setHeaderField_m48DBE405AC72A2693051FE7FEAA1E600FF5751A4(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setUserAgent(char*, char*);
// System.Void UniWebViewInterface::uv_setUserAgent(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setUserAgent_m1601C6F145E9CE35255C7C768CFECE459796D0DF (String_t* ___name0, String_t* ___userAgent1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___userAgent1U27 to native representation
	char* ____userAgent1_marshaled = NULL;
	____userAgent1_marshaled = il2cpp_codegen_marshal_string(___userAgent1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setUserAgent)(____name0_marshaled, ____userAgent1_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___userAgent1U27 native representation
	il2cpp_codegen_marshal_free(____userAgent1_marshaled);
	____userAgent1_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetUserAgent(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetUserAgent_m0636D0C6ED992F5D8210FEFDC0B6A4ABAFB23B71 (String_t* ___name0, String_t* ___userAgent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetUserAgent_m0636D0C6ED992F5D8210FEFDC0B6A4ABAFB23B71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___userAgent1;
		UniWebViewInterface_uv_setUserAgent_m1601C6F145E9CE35255C7C768CFECE459796D0DF(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" char* DEFAULT_CALL uv_getUserAgent(char*);
// System.String UniWebViewInterface::uv_getUserAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getUserAgent_mC20424ECDD3D102A60587BBCD50F1ABEBA789315 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(uv_getUserAgent)(____name0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String UniWebViewInterface::GetUserAgent(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetUserAgent_m62ED5910A8DED966C44559700D276687B70E10A3 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_GetUserAgent_m62ED5910A8DED966C44559700D276687B70E10A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = UniWebViewInterface_uv_getUserAgent_mC20424ECDD3D102A60587BBCD50F1ABEBA789315(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C" void DEFAULT_CALL uv_setContentInsetAdjustmentBehavior(char*, int32_t);
// System.Void UniWebViewInterface::uv_setContentInsetAdjustmentBehavior(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setContentInsetAdjustmentBehavior_m077524DC9C36143B3AF685C7179F7F596929055E (String_t* ___name0, int32_t ___behavior1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setContentInsetAdjustmentBehavior)(____name0_marshaled, ___behavior1);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetContentInsetAdjustmentBehavior(System.String,UniWebViewContentInsetAdjustmentBehavior)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetContentInsetAdjustmentBehavior_m9DE77B59ACE8CB73956A45BD81790351BA7FC2E9 (String_t* ___name0, int32_t ___behavior1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetContentInsetAdjustmentBehavior_m9DE77B59ACE8CB73956A45BD81790351BA7FC2E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		int32_t L_1 = ___behavior1;
		UniWebViewInterface_uv_setContentInsetAdjustmentBehavior_m077524DC9C36143B3AF685C7179F7F596929055E(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setAllowAutoPlay(int32_t);
// System.Void UniWebViewInterface::uv_setAllowAutoPlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowAutoPlay_mD53FC3B67F64F07EB441CF583E5DD53DD33D31C4 (bool ___flag0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setAllowAutoPlay)(static_cast<int32_t>(___flag0));

}
// System.Void UniWebViewInterface::SetAllowAutoPlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowAutoPlay_mA1FE6AEDCBB140C40E6063388D258EAD93A65E49 (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetAllowAutoPlay_mA1FE6AEDCBB140C40E6063388D258EAD93A65E49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		bool L_0 = ___flag0;
		UniWebViewInterface_uv_setAllowAutoPlay_mD53FC3B67F64F07EB441CF583E5DD53DD33D31C4(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setAllowInlinePlay(int32_t);
// System.Void UniWebViewInterface::uv_setAllowInlinePlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowInlinePlay_m372D113A23331BD10EF344180A9D79179E4F971C (bool ___flag0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setAllowInlinePlay)(static_cast<int32_t>(___flag0));

}
// System.Void UniWebViewInterface::SetAllowInlinePlay(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowInlinePlay_m2E1A79DBB76EFCD39BAEC9AB2215355B7839C276 (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetAllowInlinePlay_m2E1A79DBB76EFCD39BAEC9AB2215355B7839C276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		bool L_0 = ___flag0;
		UniWebViewInterface_uv_setAllowInlinePlay_m372D113A23331BD10EF344180A9D79179E4F971C(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setAllowJavaScriptOpenWindow(int32_t);
// System.Void UniWebViewInterface::uv_setAllowJavaScriptOpenWindow(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowJavaScriptOpenWindow_m29D00B7C804B82694A78F43E0535451ED179E6FF (bool ___flag0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setAllowJavaScriptOpenWindow)(static_cast<int32_t>(___flag0));

}
// System.Void UniWebViewInterface::SetAllowJavaScriptOpenWindow(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowJavaScriptOpenWindow_mF2AE14094B64357A385F7D593684781B0A5C4719 (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetAllowJavaScriptOpenWindow_mF2AE14094B64357A385F7D593684781B0A5C4719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		bool L_0 = ___flag0;
		UniWebViewInterface_uv_setAllowJavaScriptOpenWindow_m29D00B7C804B82694A78F43E0535451ED179E6FF(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setJavaScriptEnabled(int32_t);
// System.Void UniWebViewInterface::uv_setJavaScriptEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setJavaScriptEnabled_m19C84DCD9D915F1BB00F94A8BD7C7D3C663DF9E9 (bool ___flag0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setJavaScriptEnabled)(static_cast<int32_t>(___flag0));

}
// System.Void UniWebViewInterface::SetJavaScriptEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetJavaScriptEnabled_m04D1509DD92CF1A64C68B75FA1EE79E1E5727943 (bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetJavaScriptEnabled_m04D1509DD92CF1A64C68B75FA1EE79E1E5727943_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		bool L_0 = ___flag0;
		UniWebViewInterface_uv_setJavaScriptEnabled_m19C84DCD9D915F1BB00F94A8BD7C7D3C663DF9E9(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_cleanCache(char*);
// System.Void UniWebViewInterface::uv_cleanCache(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_cleanCache_m502FE80F05FBEECF1BC241267640EE09CFC0D04E (String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_cleanCache)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::CleanCache(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_CleanCache_m43E8616FDA422D5BF753B7D3BB8785036FD9976D (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_CleanCache_m43E8616FDA422D5BF753B7D3BB8785036FD9976D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		UniWebViewInterface_uv_cleanCache_m502FE80F05FBEECF1BC241267640EE09CFC0D04E(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_clearCookies();
// System.Void UniWebViewInterface::uv_clearCookies()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_clearCookies_mE40B07E4B719B42A47F0FA47FA283F2667840039 (const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_clearCookies)();

}
// System.Void UniWebViewInterface::ClearCookies()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearCookies_m72B3F4D3528E139945C434244867FB41B1B3F0AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_ClearCookies_m72B3F4D3528E139945C434244867FB41B1B3F0AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		UniWebViewInterface_uv_clearCookies_mE40B07E4B719B42A47F0FA47FA283F2667840039(/*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setCookie(char*, char*, int32_t);
// System.Void UniWebViewInterface::uv_setCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setCookie_mD2F93AE32708107864D1E1AB4616894A1BED4D24 (String_t* ___url0, String_t* ___cookie1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter U27___url0U27 to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Marshaling of parameter U27___cookie1U27 to native representation
	char* ____cookie1_marshaled = NULL;
	____cookie1_marshaled = il2cpp_codegen_marshal_string(___cookie1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setCookie)(____url0_marshaled, ____cookie1_marshaled, static_cast<int32_t>(___skipEncoding2));

	// Marshaling cleanup of parameter U27___url0U27 native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___cookie1U27 native representation
	il2cpp_codegen_marshal_free(____cookie1_marshaled);
	____cookie1_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCookie_m9ED0E7BBF1A7286A398265AFE9F5C7103D4AAC1F (String_t* ___url0, String_t* ___cookie1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetCookie_m9ED0E7BBF1A7286A398265AFE9F5C7103D4AAC1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		String_t* L_1 = ___cookie1;
		bool L_2 = ___skipEncoding2;
		UniWebViewInterface_uv_setCookie_mD2F93AE32708107864D1E1AB4616894A1BED4D24(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
extern "C" char* DEFAULT_CALL uv_getCookie(char*, char*, int32_t);
// System.String UniWebViewInterface::uv_getCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_uv_getCookie_m01C5441634E2BF34590D497373D4EC74D1FFAF61 (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter U27___url0U27 to native representation
	char* ____url0_marshaled = NULL;
	____url0_marshaled = il2cpp_codegen_marshal_string(___url0);

	// Marshaling of parameter U27___key1U27 to native representation
	char* ____key1_marshaled = NULL;
	____key1_marshaled = il2cpp_codegen_marshal_string(___key1);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(uv_getCookie)(____url0_marshaled, ____key1_marshaled, static_cast<int32_t>(___skipEncoding2));

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter U27___url0U27 native representation
	il2cpp_codegen_marshal_free(____url0_marshaled);
	____url0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___key1U27 native representation
	il2cpp_codegen_marshal_free(____key1_marshaled);
	____key1_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String UniWebViewInterface::GetCookie(System.String,System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewInterface_GetCookie_mC5F17BA8EA41FBE95C5A85617CBDD1822C8BFA37 (String_t* ___url0, String_t* ___key1, bool ___skipEncoding2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_GetCookie_mC5F17BA8EA41FBE95C5A85617CBDD1822C8BFA37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___url0;
		String_t* L_1 = ___key1;
		bool L_2 = ___skipEncoding2;
		String_t* L_3 = UniWebViewInterface_uv_getCookie_m01C5441634E2BF34590D497373D4EC74D1FFAF61(L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
extern "C" void DEFAULT_CALL uv_clearHttpAuthUsernamePasswordHost(char*, char*);
// System.Void UniWebViewInterface::uv_clearHttpAuthUsernamePasswordHost(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_clearHttpAuthUsernamePasswordHost_mB95624904CF5D02359F531F72A7EBEBA1AF823B9 (String_t* ___host0, String_t* ___realm1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___host0U27 to native representation
	char* ____host0_marshaled = NULL;
	____host0_marshaled = il2cpp_codegen_marshal_string(___host0);

	// Marshaling of parameter U27___realm1U27 to native representation
	char* ____realm1_marshaled = NULL;
	____realm1_marshaled = il2cpp_codegen_marshal_string(___realm1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_clearHttpAuthUsernamePasswordHost)(____host0_marshaled, ____realm1_marshaled);

	// Marshaling cleanup of parameter U27___host0U27 native representation
	il2cpp_codegen_marshal_free(____host0_marshaled);
	____host0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___realm1U27 native representation
	il2cpp_codegen_marshal_free(____realm1_marshaled);
	____realm1_marshaled = NULL;

}
// System.Void UniWebViewInterface::ClearHttpAuthUsernamePassword(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_ClearHttpAuthUsernamePassword_m6EC49CC8FF8E0AC636EF9C57572C51FA0373B911 (String_t* ___host0, String_t* ___realm1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_ClearHttpAuthUsernamePassword_m6EC49CC8FF8E0AC636EF9C57572C51FA0373B911_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___host0;
		String_t* L_1 = ___realm1;
		UniWebViewInterface_uv_clearHttpAuthUsernamePasswordHost_mB95624904CF5D02359F531F72A7EBEBA1AF823B9(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setBackgroundColor(char*, float, float, float, float);
// System.Void UniWebViewInterface::uv_setBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setBackgroundColor_mD469A3ACBAA7D2553510A4258825F5EC548F7A7F (String_t* ___name0, float ___r1, float ___g2, float ___b3, float ___a4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float, float, float, float);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setBackgroundColor)(____name0_marshaled, ___r1, ___g2, ___b3, ___a4);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetBackgroundColor(System.String,System.Single,System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBackgroundColor_m93343F2F37B5035B19377D54AE03D22FA089C54F (String_t* ___name0, float ___r1, float ___g2, float ___b3, float ___a4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetBackgroundColor_m93343F2F37B5035B19377D54AE03D22FA089C54F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		float L_1 = ___r1;
		float L_2 = ___g2;
		float L_3 = ___b3;
		float L_4 = ___a4;
		UniWebViewInterface_uv_setBackgroundColor_mD469A3ACBAA7D2553510A4258825F5EC548F7A7F(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setWebViewAlpha(char*, float);
// System.Void UniWebViewInterface::uv_setWebViewAlpha(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWebViewAlpha_m82517649C4C288133D37A51EE96CAC4FC9D5DC9D (String_t* ___name0, float ___alpha1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, float);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setWebViewAlpha)(____name0_marshaled, ___alpha1);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetWebViewAlpha(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebViewAlpha_m74D9A737E3C67924CEACEF0CC38DE049892611B0 (String_t* ___name0, float ___alpha1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetWebViewAlpha_m74D9A737E3C67924CEACEF0CC38DE049892611B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		float L_1 = ___alpha1;
		UniWebViewInterface_uv_setWebViewAlpha_m82517649C4C288133D37A51EE96CAC4FC9D5DC9D(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" float DEFAULT_CALL uv_getWebViewAlpha(char*);
// System.Single UniWebViewInterface::uv_getWebViewAlpha(System.String)
extern "C" IL2CPP_METHOD_ATTR float UniWebViewInterface_uv_getWebViewAlpha_mC41828C2F92E3486104E3B57A7BADF32EA0385AE (String_t* ___name0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	float returnValue = reinterpret_cast<PInvokeFunc>(uv_getWebViewAlpha)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	return returnValue;
}
// System.Single UniWebViewInterface::GetWebViewAlpha(System.String)
extern "C" IL2CPP_METHOD_ATTR float UniWebViewInterface_GetWebViewAlpha_mC4E13D24FD9F85AD3D4442061FF7F9509D0514CA (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_GetWebViewAlpha_mC4E13D24FD9F85AD3D4442061FF7F9509D0514CA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		float L_1 = UniWebViewInterface_uv_getWebViewAlpha_mC41828C2F92E3486104E3B57A7BADF32EA0385AE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C" void DEFAULT_CALL uv_setShowSpinnerWhileLoading(char*, int32_t);
// System.Void UniWebViewInterface::uv_setShowSpinnerWhileLoading(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowSpinnerWhileLoading_m095A4BE9B3CB5CD20DFA1601BBD4BF2B8EAF3351 (String_t* ___name0, bool ___show1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setShowSpinnerWhileLoading)(____name0_marshaled, static_cast<int32_t>(___show1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetShowSpinnerWhileLoading(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowSpinnerWhileLoading_m76AA6C5A405AE0672EEE3456778B6F1921036586 (String_t* ___name0, bool ___show1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetShowSpinnerWhileLoading_m76AA6C5A405AE0672EEE3456778B6F1921036586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___show1;
		UniWebViewInterface_uv_setShowSpinnerWhileLoading_m095A4BE9B3CB5CD20DFA1601BBD4BF2B8EAF3351(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setSpinnerText(char*, char*);
// System.Void UniWebViewInterface::uv_setSpinnerText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setSpinnerText_m06D683017806DD98D8235B425ED589E374068E86 (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___text1U27 to native representation
	char* ____text1_marshaled = NULL;
	____text1_marshaled = il2cpp_codegen_marshal_string(___text1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setSpinnerText)(____name0_marshaled, ____text1_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___text1U27 native representation
	il2cpp_codegen_marshal_free(____text1_marshaled);
	____text1_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetSpinnerText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetSpinnerText_mC83965466BC863A9146B220D9AD37D9B6C9B5E8A (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetSpinnerText_mC83965466BC863A9146B220D9AD37D9B6C9B5E8A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___text1;
		UniWebViewInterface_uv_setSpinnerText_m06D683017806DD98D8235B425ED589E374068E86(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" int32_t DEFAULT_CALL uv_canGoBack(char*);
// System.Boolean UniWebViewInterface::uv_canGoBack(System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_canGoBack_m68743C590EFF4189AED841F21543A618F393A49E (String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_canGoBack)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean UniWebViewInterface::CanGoBack(System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoBack_m85BED7E236C3D95F4BD121AE0090AE72A40C68C3 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_CanGoBack_m85BED7E236C3D95F4BD121AE0090AE72A40C68C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = UniWebViewInterface_uv_canGoBack_m68743C590EFF4189AED841F21543A618F393A49E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C" int32_t DEFAULT_CALL uv_canGoForward(char*);
// System.Boolean UniWebViewInterface::uv_canGoForward(System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_uv_canGoForward_mF9F0B116D44E82DD41BC97004EA5D1B5A3A2A681 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(uv_canGoForward)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	return static_cast<bool>(returnValue);
}
// System.Boolean UniWebViewInterface::CanGoForward(System.String)
extern "C" IL2CPP_METHOD_ATTR bool UniWebViewInterface_CanGoForward_m0BD3965D49CE9F8C680418B1DD949956F626F070 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_CanGoForward_m0BD3965D49CE9F8C680418B1DD949956F626F070_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = UniWebViewInterface_uv_canGoForward_mF9F0B116D44E82DD41BC97004EA5D1B5A3A2A681(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C" void DEFAULT_CALL uv_goBack(char*);
// System.Void UniWebViewInterface::uv_goBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_goBack_mE80609592266EB8DAA8BE0128A2B3FB8C8A92D61 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_goBack)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::GoBack(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_GoBack_m7B7B009A3769F2D2ABDAB1FCEE9A9AD0EC134BF1 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_GoBack_m7B7B009A3769F2D2ABDAB1FCEE9A9AD0EC134BF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		UniWebViewInterface_uv_goBack_mE80609592266EB8DAA8BE0128A2B3FB8C8A92D61(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_goForward(char*);
// System.Void UniWebViewInterface::uv_goForward(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_goForward_mCC6B11E451F5C10B9883E296808EAFF994D7BF31 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_goForward)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::GoForward(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_GoForward_m69D8A8C091D3F3212C529C99C2B49DC9B56E9FC3 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_GoForward_m69D8A8C091D3F3212C529C99C2B49DC9B56E9FC3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		UniWebViewInterface_uv_goForward_mCC6B11E451F5C10B9883E296808EAFF994D7BF31(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setOpenLinksInExternalBrowser(char*, int32_t);
// System.Void UniWebViewInterface::uv_setOpenLinksInExternalBrowser(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setOpenLinksInExternalBrowser_m4E7B6A2304562C5FCDFDD43595A55C95FC3F4649 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setOpenLinksInExternalBrowser)(____name0_marshaled, static_cast<int32_t>(___flag1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetOpenLinksInExternalBrowser(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetOpenLinksInExternalBrowser_m8F1949DB73568676BA1D347DD17D78D4BA888219 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetOpenLinksInExternalBrowser_m8F1949DB73568676BA1D347DD17D78D4BA888219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___flag1;
		UniWebViewInterface_uv_setOpenLinksInExternalBrowser_m4E7B6A2304562C5FCDFDD43595A55C95FC3F4649(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setHorizontalScrollBarEnabled(char*, int32_t);
// System.Void UniWebViewInterface::uv_setHorizontalScrollBarEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setHorizontalScrollBarEnabled_m434B120375801D4E19A7666D43C17EE431EA4B5B (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setHorizontalScrollBarEnabled)(____name0_marshaled, static_cast<int32_t>(___enabled1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetHorizontalScrollBarEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetHorizontalScrollBarEnabled_mEBB621A28239F91BE3CF0A20039A628DE08C0FF5 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetHorizontalScrollBarEnabled_mEBB621A28239F91BE3CF0A20039A628DE08C0FF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___enabled1;
		UniWebViewInterface_uv_setHorizontalScrollBarEnabled_m434B120375801D4E19A7666D43C17EE431EA4B5B(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setVerticalScrollBarEnabled(char*, int32_t);
// System.Void UniWebViewInterface::uv_setVerticalScrollBarEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setVerticalScrollBarEnabled_m1D219B2F850BB1D195B5FC77897C43B6FD8BE76A (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setVerticalScrollBarEnabled)(____name0_marshaled, static_cast<int32_t>(___enabled1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetVerticalScrollBarEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetVerticalScrollBarEnabled_mBFF4CC7088166668CC7D2EF221D7336933289C68 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetVerticalScrollBarEnabled_mBFF4CC7088166668CC7D2EF221D7336933289C68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___enabled1;
		UniWebViewInterface_uv_setVerticalScrollBarEnabled_m1D219B2F850BB1D195B5FC77897C43B6FD8BE76A(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setBouncesEnabled(char*, int32_t);
// System.Void UniWebViewInterface::uv_setBouncesEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setBouncesEnabled_m2C15AAFAEF8A8392EAADEE98963B6D9212D425CC (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setBouncesEnabled)(____name0_marshaled, static_cast<int32_t>(___enabled1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetBouncesEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetBouncesEnabled_m670BE14C4FF7CE0057543F9B60E426B01E77AD47 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetBouncesEnabled_m670BE14C4FF7CE0057543F9B60E426B01E77AD47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___enabled1;
		UniWebViewInterface_uv_setBouncesEnabled_m2C15AAFAEF8A8392EAADEE98963B6D9212D425CC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setZoomEnabled(char*, int32_t);
// System.Void UniWebViewInterface::uv_setZoomEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setZoomEnabled_mF549E563DCFBECB67929B579ECD226ABA77183BD (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setZoomEnabled)(____name0_marshaled, static_cast<int32_t>(___enabled1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetZoomEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetZoomEnabled_mFC141CAD5C05FB6BC3EFA31BA3C6EE54F9FBC5CB (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetZoomEnabled_mFC141CAD5C05FB6BC3EFA31BA3C6EE54F9FBC5CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___enabled1;
		UniWebViewInterface_uv_setZoomEnabled_mF549E563DCFBECB67929B579ECD226ABA77183BD(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setShowToolbar(char*, int32_t, int32_t, int32_t, int32_t);
// System.Void UniWebViewInterface::uv_setShowToolbar(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setShowToolbar_mF63908C8428030B155E6641B3C27FC73633AB664 (String_t* ___name0, bool ___show1, bool ___animated2, bool ___onTop3, bool ___adjustInset4, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setShowToolbar)(____name0_marshaled, static_cast<int32_t>(___show1), static_cast<int32_t>(___animated2), static_cast<int32_t>(___onTop3), static_cast<int32_t>(___adjustInset4));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetShowToolbar(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetShowToolbar_mB77E1A5B3024055BC412EF3094FA2D5B85F7EB31 (String_t* ___name0, bool ___show1, bool ___animated2, bool ___onTop3, bool ___adjustInset4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetShowToolbar_mB77E1A5B3024055BC412EF3094FA2D5B85F7EB31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___show1;
		bool L_2 = ___animated2;
		bool L_3 = ___onTop3;
		bool L_4 = ___adjustInset4;
		UniWebViewInterface_uv_setShowToolbar_mF63908C8428030B155E6641B3C27FC73633AB664(L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setToolbarDoneButtonText(char*, char*);
// System.Void UniWebViewInterface::uv_setToolbarDoneButtonText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setToolbarDoneButtonText_m498ACD56D9341494DFA225C1210D0C539727340B (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Marshaling of parameter U27___text1U27 to native representation
	char* ____text1_marshaled = NULL;
	____text1_marshaled = il2cpp_codegen_marshal_string(___text1);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setToolbarDoneButtonText)(____name0_marshaled, ____text1_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

	// Marshaling cleanup of parameter U27___text1U27 native representation
	il2cpp_codegen_marshal_free(____text1_marshaled);
	____text1_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetToolbarDoneButtonText(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetToolbarDoneButtonText_m67460BCFB5A0F2C107B085C1425A243BAA2915B9 (String_t* ___name0, String_t* ___text1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetToolbarDoneButtonText_m67460BCFB5A0F2C107B085C1425A243BAA2915B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		String_t* L_1 = ___text1;
		UniWebViewInterface_uv_setToolbarDoneButtonText_m498ACD56D9341494DFA225C1210D0C539727340B(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setWindowUserResizeEnabled(char*, int32_t);
// System.Void UniWebViewInterface::uv_setWindowUserResizeEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWindowUserResizeEnabled_m1CD7ED879E832341A485BBB289C11209BEAAAB2F (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setWindowUserResizeEnabled)(____name0_marshaled, static_cast<int32_t>(___enabled1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetWindowUserResizeEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWindowUserResizeEnabled_mFE8B7EB0698902554BF51762DFBB6576DAE90E54 (String_t* ___name0, bool ___enabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetWindowUserResizeEnabled_mFE8B7EB0698902554BF51762DFBB6576DAE90E54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___enabled1;
		UniWebViewInterface_uv_setWindowUserResizeEnabled_m1CD7ED879E832341A485BBB289C11209BEAAAB2F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setWebContentsDebuggingEnabled(int32_t);
// System.Void UniWebViewInterface::uv_setWebContentsDebuggingEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setWebContentsDebuggingEnabled_m9FD58B25B63409A07E596037FC4D159D31414912 (bool ___enabled0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setWebContentsDebuggingEnabled)(static_cast<int32_t>(___enabled0));

}
// System.Void UniWebViewInterface::SetWebContentsDebuggingEnabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetWebContentsDebuggingEnabled_m306139A08DD96B8452EB76F489BC075103073503 (bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetWebContentsDebuggingEnabled_m306139A08DD96B8452EB76F489BC075103073503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		bool L_0 = ___enabled0;
		UniWebViewInterface_uv_setWebContentsDebuggingEnabled_m9FD58B25B63409A07E596037FC4D159D31414912(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setAllowFileAccessFromFileURLs(char*, int32_t);
// System.Void UniWebViewInterface::uv_setAllowFileAccessFromFileURLs(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowFileAccessFromFileURLs_m21D9CE64B13022EAA0C32C2B286582A44B8755DC (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setAllowFileAccessFromFileURLs)(____name0_marshaled, static_cast<int32_t>(___flag1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetAllowFileAccessFromFileURLs(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowFileAccessFromFileURLs_m0EA69CB39548A0D4FE38002B39BB38A416F41B4B (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetAllowFileAccessFromFileURLs_m0EA69CB39548A0D4FE38002B39BB38A416F41B4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___flag1;
		UniWebViewInterface_uv_setAllowFileAccessFromFileURLs_m21D9CE64B13022EAA0C32C2B286582A44B8755DC(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setAllowHTTPAuthPopUpWindow(char*, int32_t);
// System.Void UniWebViewInterface::uv_setAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setAllowHTTPAuthPopUpWindow_m9C8F30B25C3CD67EEC40D0ED63EA516A01B2E072 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setAllowHTTPAuthPopUpWindow)(____name0_marshaled, static_cast<int32_t>(___flag1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetAllowHTTPAuthPopUpWindow(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_m62FA395AB7C15B993508ADF70AE1CD542FB66B81 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetAllowHTTPAuthPopUpWindow_m62FA395AB7C15B993508ADF70AE1CD542FB66B81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___flag1;
		UniWebViewInterface_uv_setAllowHTTPAuthPopUpWindow_m9C8F30B25C3CD67EEC40D0ED63EA516A01B2E072(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_print(char*);
// System.Void UniWebViewInterface::uv_print(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_print_m1DA385D1F5472301B42E69A09D62806924E37825 (String_t* ___name0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_print)(____name0_marshaled);

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::Print(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_Print_m6F3083D8FCB49C0C32A624502A10CE088E074B13 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_Print_m6F3083D8FCB49C0C32A624502A10CE088E074B13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		UniWebViewInterface_uv_print_m1DA385D1F5472301B42E69A09D62806924E37825(L_0, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_scrollTo(char*, int32_t, int32_t, int32_t);
// System.Void UniWebViewInterface::uv_scrollTo(System.String,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_scrollTo_m32F09351333E3B9BE4B56FE05BC281BDB63ED86F (String_t* ___name0, int32_t ___x1, int32_t ___y2, bool ___animated3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t, int32_t, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_scrollTo)(____name0_marshaled, ___x1, ___y2, static_cast<int32_t>(___animated3));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::ScrollTo(System.String,System.Int32,System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_ScrollTo_mB3A61236870EDBE9A3B5BDF0A6F52C59AFAC8F65 (String_t* ___name0, int32_t ___x1, int32_t ___y2, bool ___animated3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_ScrollTo_mB3A61236870EDBE9A3B5BDF0A6F52C59AFAC8F65_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		int32_t L_1 = ___x1;
		int32_t L_2 = ___y2;
		bool L_3 = ___animated3;
		UniWebViewInterface_uv_scrollTo_m32F09351333E3B9BE4B56FE05BC281BDB63ED86F(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setCalloutEnabled(char*, int32_t);
// System.Void UniWebViewInterface::uv_setCalloutEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setCalloutEnabled_m2D62AB0E869A8874E82EB0AC119E2B73C5D6A2E7 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setCalloutEnabled)(____name0_marshaled, static_cast<int32_t>(___flag1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetCalloutEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetCalloutEnabled_m1D3B59F03B1B4F2C161A25206ED80069BC887756 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetCalloutEnabled_m1D3B59F03B1B4F2C161A25206ED80069BC887756_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___flag1;
		UniWebViewInterface_uv_setCalloutEnabled_m2D62AB0E869A8874E82EB0AC119E2B73C5D6A2E7(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL uv_setDragInteractionEnabled(char*, int32_t);
// System.Void UniWebViewInterface::uv_setDragInteractionEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_uv_setDragInteractionEnabled_mFD7431A648448A28D0A3658FBCA580CF2483FEA6 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, int32_t);

	// Marshaling of parameter U27___name0U27 to native representation
	char* ____name0_marshaled = NULL;
	____name0_marshaled = il2cpp_codegen_marshal_string(___name0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(uv_setDragInteractionEnabled)(____name0_marshaled, static_cast<int32_t>(___flag1));

	// Marshaling cleanup of parameter U27___name0U27 native representation
	il2cpp_codegen_marshal_free(____name0_marshaled);
	____name0_marshaled = NULL;

}
// System.Void UniWebViewInterface::SetDragInteractionEnabled(System.String,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_SetDragInteractionEnabled_m444267791BEDCCF721858FC15E75EA558C7E3D06 (String_t* ___name0, bool ___flag1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_SetDragInteractionEnabled_m444267791BEDCCF721858FC15E75EA558C7E3D06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467(/*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		bool L_1 = ___flag1;
		UniWebViewInterface_uv_setDragInteractionEnabled_mFD7431A648448A28D0A3658FBCA580CF2483FEA6(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewInterface::CheckPlatform()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		bool L_0 = ((UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var))->get_correctPlatform_1();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral5733C6F9B29CE8F97BC318286D8452BED793E93C, L_3, /*hidden argument*/NULL);
		InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 * L_5 = (InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1 *)il2cpp_codegen_object_new(InvalidOperationException_t0530E734D823F78310CAFAFA424CA5164D93A1F1_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m72027D5F1D513C25C05137E203EEED8FD8297706(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, UniWebViewInterface_CheckPlatform_mE651DEF71F81DF462BDA19F47B9145C8DE5D4467_RuntimeMethod_var);
	}

IL_0021:
	{
		return;
	}
}
// System.Void UniWebViewInterface::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewInterface__ctor_m06AE9AFEFA59534CE6A1CCF014A4CE79DA31D1A1 (UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 (UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 * __this, intptr_t ___objectName0, intptr_t ___methodName1, intptr_t ___parameter2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___objectName0, ___methodName1, ___parameter2);

}
// System.Void UniWebViewInterface_UnitySendMessageDelegate::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnitySendMessageDelegate__ctor_m41C0E2F0FA04571519322A4EE9F15FEBAF42F62A (UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UniWebViewInterface_UnitySendMessageDelegate::Invoke(System.IntPtr,System.IntPtr,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void UnitySendMessageDelegate_Invoke_m73DA8D7EA36ACF37A99AEB1ECB0E853DA6F318DA (UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 * __this, intptr_t ___objectName0, intptr_t ___methodName1, intptr_t ___parameter2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			if (!il2cpp_codegen_method_is_virtual(targetMethod))
			{
				il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			}
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
			if (___methodIsStatic)
			{
				if (___parameterCount == 3)
				{
					// open
					typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___objectName0, ___methodName1, ___parameter2, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___objectName0, ___methodName1, ___parameter2, targetMethod);
				}
			}
			else
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
					{
						if (targetThis == NULL)
						{
							typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___objectName0, ___methodName1, ___parameter2, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___objectName0, ___methodName1, ___parameter2);
							else
								GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___objectName0, ___methodName1, ___parameter2);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___objectName0, ___methodName1, ___parameter2);
							else
								VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___objectName0, ___methodName1, ___parameter2);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___objectName0, ___methodName1, ___parameter2, targetMethod);
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___objectName0, ___methodName1, ___parameter2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___objectName0, ___methodName1, ___parameter2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
				{
					if (targetThis == NULL)
					{
						typedef void (*FunctionPointerType) (intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___objectName0, ___methodName1, ___parameter2, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___objectName0, ___methodName1, ___parameter2);
						else
							GenericVirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(targetMethod, targetThis, ___objectName0, ___methodName1, ___parameter2);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___objectName0, ___methodName1, ___parameter2);
						else
							VirtActionInvoker3< intptr_t, intptr_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___objectName0, ___methodName1, ___parameter2);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, intptr_t, intptr_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___objectName0, ___methodName1, ___parameter2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UniWebViewInterface_UnitySendMessageDelegate::BeginInvoke(System.IntPtr,System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* UnitySendMessageDelegate_BeginInvoke_mFBD0F11B75C713FA23D56C9BC44B5133352CFEEE (UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 * __this, intptr_t ___objectName0, intptr_t ___methodName1, intptr_t ___parameter2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySendMessageDelegate_BeginInvoke_mFBD0F11B75C713FA23D56C9BC44B5133352CFEEE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___objectName0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___methodName1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___parameter2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UniWebViewInterface_UnitySendMessageDelegate::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void UnitySendMessageDelegate_EndInvoke_mAC4FC27A23BD0F0D99B07B46247D280942F20574 (UnitySendMessageDelegate_t5D9F2A1448208AB6DB8BD0A4862C82C85C3F5D68 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UniWebViewLogger_Level UniWebViewLogger::get_LogLevel()
extern "C" IL2CPP_METHOD_ATTR int32_t UniWebViewLogger_get_LogLevel_m7544AAB7D079152E482B83BCAC9DCC0894B8DB49 (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_1();
		return L_0;
	}
}
// System.Void UniWebViewLogger::set_LogLevel(UniWebViewLogger_Level)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_set_LogLevel_mCF8628D3C001828C3C161AACAEF65FC1F5C47721 (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewLogger_set_LogLevel_mCF8628D3C001828C3C161AACAEF65FC1F5C47721_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Level_tB3797A8D0D24AF315855A7B3D8DF86C22DFF2875_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral978F75E0698BA219DE24F838CC4BCEB79D8D0163, L_2, /*hidden argument*/NULL);
		UniWebViewLogger_Log_m4FE9B1187AA77948F8392D731D0BC612D4BE5B3C(__this, ((int32_t)99), L_3, /*hidden argument*/NULL);
		int32_t L_4 = ___value0;
		__this->set_level_1(L_4);
		int32_t L_5 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewInterface_tE89E48E7F735126B06DE035E92DEFEFCA294E2CF_il2cpp_TypeInfo_var);
		UniWebViewInterface_SetLogLevel_mDAAD013E6D6E08D5A398610E3AAAEB3F9D681E67(L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewLogger::.ctor(UniWebViewLogger_Level)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger__ctor_mB2D95316B397135A77F936FDCF191A5F13E5EAB7 (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___level0;
		__this->set_level_1(L_0);
		return;
	}
}
// UniWebViewLogger UniWebViewLogger::get_Instance()
extern "C" IL2CPP_METHOD_ATTR UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = ((UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_il2cpp_TypeInfo_var))->get_instance_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_1 = (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 *)il2cpp_codegen_object_new(UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_il2cpp_TypeInfo_var);
		UniWebViewLogger__ctor_mB2D95316B397135A77F936FDCF191A5F13E5EAB7(L_1, ((int32_t)80), /*hidden argument*/NULL);
		((UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_il2cpp_TypeInfo_var))->set_instance_0(L_1);
	}

IL_0013:
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_2 = ((UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36_il2cpp_TypeInfo_var))->get_instance_0();
		return L_2;
	}
}
// System.Void UniWebViewLogger::Verbose(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Verbose_mBB8EDD12E337C8CA1A28D60BDACF0D895F339BCC (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		UniWebViewLogger_Log_m4FE9B1187AA77948F8392D731D0BC612D4BE5B3C(__this, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewLogger::Debug(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Debug_mB025AB06112890DB90A1DC3E2B5A90B4351BCB97 (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		UniWebViewLogger_Log_m4FE9B1187AA77948F8392D731D0BC612D4BE5B3C(__this, ((int32_t)10), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewLogger::Info(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		UniWebViewLogger_Log_m4FE9B1187AA77948F8392D731D0BC612D4BE5B3C(__this, ((int32_t)20), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewLogger::Critical(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		UniWebViewLogger_Log_m4FE9B1187AA77948F8392D731D0BC612D4BE5B3C(__this, ((int32_t)80), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewLogger::Log(UniWebViewLogger_Level,System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewLogger_Log_m4FE9B1187AA77948F8392D731D0BC612D4BE5B3C (UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewLogger_Log_m4FE9B1187AA77948F8392D731D0BC612D4BE5B3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t L_0 = ___level0;
		int32_t L_1 = UniWebViewLogger_get_LogLevel_m7544AAB7D079152E482B83BCAC9DCC0894B8DB49(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_2 = ___message1;
		String_t* L_3 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral57D9243BDF4ED04808C32AAB0A521113CAFA87CE, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = ___level0;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_5, /*hidden argument*/NULL);
		return;
	}

IL_0021:
	{
		String_t* L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_6, /*hidden argument*/NULL);
	}

IL_0027:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UniWebViewMessage
extern "C" void UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_pinvoke(const UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3& unmarshaled, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL, NULL);
}
extern "C" void UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_pinvoke_back(const UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshaled_pinvoke& marshaled, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UniWebViewMessage
extern "C" void UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_pinvoke_cleanup(UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UniWebViewMessage
extern "C" void UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_com(const UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3& unmarshaled, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshaled_com& marshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL, NULL);
}
extern "C" void UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_com_back(const UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshaled_com& marshaled, UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3& unmarshaled)
{
	Exception_t* ___U3CArgsU3Ek__BackingField_3Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '<Args>k__BackingField' of type 'UniWebViewMessage'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___U3CArgsU3Ek__BackingField_3Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UniWebViewMessage
extern "C" void UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshal_com_cleanup(UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3_marshaled_com& marshaled)
{
}
// System.String UniWebViewMessage::get_RawMessage()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_RawMessage_mEB9E20FCBB860B58A47CE726C32D424A1291E3F4 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CRawMessageU3Ek__BackingField_0();
		return L_0;
	}
}
extern "C"  String_t* UniWebViewMessage_get_RawMessage_mEB9E20FCBB860B58A47CE726C32D424A1291E3F4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * _thisAdjusted = reinterpret_cast<UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *>(__this + 1);
	return UniWebViewMessage_get_RawMessage_mEB9E20FCBB860B58A47CE726C32D424A1291E3F4(_thisAdjusted, method);
}
// System.Void UniWebViewMessage::set_RawMessage(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage_set_RawMessage_m4D1501064E20693E8047C22E449085F1B72532DE (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CRawMessageU3Ek__BackingField_0(L_0);
		return;
	}
}
extern "C"  void UniWebViewMessage_set_RawMessage_m4D1501064E20693E8047C22E449085F1B72532DE_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * _thisAdjusted = reinterpret_cast<UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *>(__this + 1);
	UniWebViewMessage_set_RawMessage_m4D1501064E20693E8047C22E449085F1B72532DE(_thisAdjusted, ___value0, method);
}
// System.String UniWebViewMessage::get_Scheme()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Scheme_m4BE09E85392AA0B5BFDB6C2F9804FEF55D6CA552 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CSchemeU3Ek__BackingField_1();
		return L_0;
	}
}
extern "C"  String_t* UniWebViewMessage_get_Scheme_m4BE09E85392AA0B5BFDB6C2F9804FEF55D6CA552_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * _thisAdjusted = reinterpret_cast<UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *>(__this + 1);
	return UniWebViewMessage_get_Scheme_m4BE09E85392AA0B5BFDB6C2F9804FEF55D6CA552(_thisAdjusted, method);
}
// System.Void UniWebViewMessage::set_Scheme(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Scheme_m10D04B9414173D36D06FD2A6EC4323F882781D9F (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CSchemeU3Ek__BackingField_1(L_0);
		return;
	}
}
extern "C"  void UniWebViewMessage_set_Scheme_m10D04B9414173D36D06FD2A6EC4323F882781D9F_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * _thisAdjusted = reinterpret_cast<UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *>(__this + 1);
	UniWebViewMessage_set_Scheme_m10D04B9414173D36D06FD2A6EC4323F882781D9F(_thisAdjusted, ___value0, method);
}
// System.String UniWebViewMessage::get_Path()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewMessage_get_Path_m0827AA16C9F2A1E5B5A63B0D3A6E4D1D6C6D1BE7 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPathU3Ek__BackingField_2();
		return L_0;
	}
}
extern "C"  String_t* UniWebViewMessage_get_Path_m0827AA16C9F2A1E5B5A63B0D3A6E4D1D6C6D1BE7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * _thisAdjusted = reinterpret_cast<UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *>(__this + 1);
	return UniWebViewMessage_get_Path_m0827AA16C9F2A1E5B5A63B0D3A6E4D1D6C6D1BE7(_thisAdjusted, method);
}
// System.Void UniWebViewMessage::set_Path(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Path_m1E81F3BFF5EAF06C866252B9543CF7C66ABD31D1 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPathU3Ek__BackingField_2(L_0);
		return;
	}
}
extern "C"  void UniWebViewMessage_set_Path_m1E81F3BFF5EAF06C866252B9543CF7C66ABD31D1_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * _thisAdjusted = reinterpret_cast<UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *>(__this + 1);
	UniWebViewMessage_set_Path_m1E81F3BFF5EAF06C866252B9543CF7C66ABD31D1(_thisAdjusted, ___value0, method);
}
// System.Collections.Generic.Dictionary`2<System.String,System.String> UniWebViewMessage::get_Args()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UniWebViewMessage_get_Args_m112C17F16135A0C633F4D6B944D2536C587BF7E2 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, const RuntimeMethod* method)
{
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = __this->get_U3CArgsU3Ek__BackingField_3();
		return L_0;
	}
}
extern "C"  Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * UniWebViewMessage_get_Args_m112C17F16135A0C633F4D6B944D2536C587BF7E2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * _thisAdjusted = reinterpret_cast<UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *>(__this + 1);
	return UniWebViewMessage_get_Args_m112C17F16135A0C633F4D6B944D2536C587BF7E2(_thisAdjusted, method);
}
// System.Void UniWebViewMessage::set_Args(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage_set_Args_mF4301F73D4A884228D6987316E891A3CA3AAE561 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___value0, const RuntimeMethod* method)
{
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_0 = ___value0;
		__this->set_U3CArgsU3Ek__BackingField_3(L_0);
		return;
	}
}
extern "C"  void UniWebViewMessage_set_Args_mF4301F73D4A884228D6987316E891A3CA3AAE561_AdjustorThunk (RuntimeObject * __this, Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * ___value0, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * _thisAdjusted = reinterpret_cast<UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *>(__this + 1);
	UniWebViewMessage_set_Args_mF4301F73D4A884228D6987316E891A3CA3AAE561(_thisAdjusted, ___value0, method);
}
// System.Void UniWebViewMessage::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewMessage__ctor_m8E662A552E545F3D1E2CD4A86647B1F016E2E4E7 (UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * __this, String_t* ___rawMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewMessage__ctor_m8E662A552E545F3D1E2CD4A86647B1F016E2E4E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_3 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_4 = NULL;
	int32_t V_5 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	{
		il2cpp_codegen_initobj(__this, sizeof(UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 ));
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___rawMessage0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral63BF13C36CDB29DF80295EBF2EEC4B9CDF8F4969, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Debug_mB025AB06112890DB90A1DC3E2B5A90B4351BCB97(L_0, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___rawMessage0;
		UniWebViewMessage_set_RawMessage_m4D1501064E20693E8047C22E449085F1B72532DE((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = ___rawMessage0;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralEF81042E1E86ACB765718EA37393A1292452BBCC);
		NullCheck(L_4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = String_Split_m1116758CB532FF38D2A639CE6BD44F84F7EB2DEB(L_4, L_6, 0, /*hidden argument*/NULL);
		V_0 = L_7;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))) < ((int32_t)2)))
		{
			goto IL_01d2;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 0;
		String_t* L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		UniWebViewMessage_set_Scheme_m10D04B9414173D36D06FD2A6EC4323F882781D9F((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, L_11, /*hidden argument*/NULL);
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_12 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_13 = UniWebViewMessage_get_Scheme_m4BE09E85392AA0B5BFDB6C2F9804FEF55D6CA552((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, /*hidden argument*/NULL);
		String_t* L_14 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral1FD124FEEF5DB8D5C4D26DCF6CBF0006BC793334, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		UniWebViewLogger_Debug_mB025AB06112890DB90A1DC3E2B5A90B4351BCB97(L_12, L_14, /*hidden argument*/NULL);
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		V_2 = 1;
		goto IL_007d;
	}

IL_006f:
	{
		String_t* L_15 = V_1;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_16 = V_0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		String_t* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		String_t* L_20 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_15, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_007d:
	{
		int32_t L_22 = V_2;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_23)->max_length)))))))
		{
			goto IL_006f;
		}
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_24 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_25 = V_1;
		String_t* L_26 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral924A23119CEAA3C9BC0782972948AC8F65C78193, L_25, /*hidden argument*/NULL);
		NullCheck(L_24);
		UniWebViewLogger_Verbose_mBB8EDD12E337C8CA1A28D60BDACF0D895F339BCC(L_24, L_26, /*hidden argument*/NULL);
		String_t* L_27 = V_1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_28 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_29 = L_28;
		NullCheck(_stringLiteral5BAB61EB53176449E25C2C82F172B82CB13FFB9D);
		Il2CppChar L_30 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(_stringLiteral5BAB61EB53176449E25C2C82F172B82CB13FFB9D, 0, /*hidden argument*/NULL);
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_30);
		NullCheck(L_27);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_31 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_27, L_29, /*hidden argument*/NULL);
		V_3 = L_31;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33 = 0;
		String_t* L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_35 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_36 = L_35;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
		NullCheck(L_34);
		String_t* L_37 = String_TrimEnd_m8D4905B71A4AEBF9D0BC36C6003FC9A5AD630403(L_34, L_36, /*hidden argument*/NULL);
		String_t* L_38 = UnityWebRequest_UnEscapeURL_m1224F23674AC91179573482A2993CB9E4EC98980(L_37, /*hidden argument*/NULL);
		UniWebViewMessage_set_Path_m1E81F3BFF5EAF06C866252B9543CF7C66ABD31D1((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, L_38, /*hidden argument*/NULL);
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_39 = (Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC *)il2cpp_codegen_object_new(Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B(L_39, /*hidden argument*/Dictionary_2__ctor_m5B1C279E77422BB0B2C7B0374ECF89E3224AF62B_RuntimeMethod_var);
		UniWebViewMessage_set_Args_mF4301F73D4A884228D6987316E891A3CA3AAE561((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, L_39, /*hidden argument*/NULL);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_40 = V_3;
		NullCheck(L_40);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_01e7;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_41 = V_3;
		NullCheck(L_41);
		int32_t L_42 = 1;
		String_t* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_44 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_45 = L_44;
		NullCheck(_stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996);
		Il2CppChar L_46 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(_stringLiteral7C4D33785DAA5C2370201FFA236B427AA37C9996, 0, /*hidden argument*/NULL);
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_46);
		NullCheck(L_43);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_47 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_43, L_45, /*hidden argument*/NULL);
		V_4 = L_47;
		V_5 = 0;
		goto IL_01c6;
	}

IL_010b:
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_48 = V_4;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		String_t* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_52 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_53 = L_52;
		NullCheck(_stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76);
		Il2CppChar L_54 = String_get_Chars_m14308AC3B95F8C1D9F1D1055B116B37D595F1D96(_stringLiteral21606782C65E44CAC7AFBB90977D8B6F82140E76, 0, /*hidden argument*/NULL);
		NullCheck(L_53);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)L_54);
		NullCheck(L_51);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_55 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_51, L_53, /*hidden argument*/NULL);
		V_6 = L_55;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_56 = V_6;
		NullCheck(L_56);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_56)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_01c0;
		}
	}
	{
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_57 = V_6;
		NullCheck(L_57);
		int32_t L_58 = 0;
		String_t* L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		String_t* L_60 = UnityWebRequest_UnEscapeURL_m1224F23674AC91179573482A2993CB9E4EC98980(L_59, /*hidden argument*/NULL);
		V_7 = L_60;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_61 = UniWebViewMessage_get_Args_m112C17F16135A0C633F4D6B944D2536C587BF7E2((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, /*hidden argument*/NULL);
		String_t* L_62 = V_7;
		NullCheck(L_61);
		bool L_63 = Dictionary_2_ContainsKey_m6035A72C0D6A9432F46DE0742776CC7B866AB127(L_61, L_62, /*hidden argument*/Dictionary_2_ContainsKey_m6035A72C0D6A9432F46DE0742776CC7B866AB127_RuntimeMethod_var);
		if (!L_63)
		{
			goto IL_0182;
		}
	}
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_64 = UniWebViewMessage_get_Args_m112C17F16135A0C633F4D6B944D2536C587BF7E2((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, /*hidden argument*/NULL);
		String_t* L_65 = V_7;
		NullCheck(L_64);
		String_t* L_66 = Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E(L_64, L_65, /*hidden argument*/Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var);
		V_8 = L_66;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_67 = UniWebViewMessage_get_Args_m112C17F16135A0C633F4D6B944D2536C587BF7E2((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, /*hidden argument*/NULL);
		String_t* L_68 = V_7;
		String_t* L_69 = V_8;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_70 = V_6;
		NullCheck(L_70);
		int32_t L_71 = 1;
		String_t* L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		String_t* L_73 = UnityWebRequest_UnEscapeURL_m1224F23674AC91179573482A2993CB9E4EC98980(L_72, /*hidden argument*/NULL);
		String_t* L_74 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_69, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808, L_73, /*hidden argument*/NULL);
		NullCheck(L_67);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_67, L_68, L_74, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
		goto IL_0198;
	}

IL_0182:
	{
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_75 = UniWebViewMessage_get_Args_m112C17F16135A0C633F4D6B944D2536C587BF7E2((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, /*hidden argument*/NULL);
		String_t* L_76 = V_7;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_77 = V_6;
		NullCheck(L_77);
		int32_t L_78 = 1;
		String_t* L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		String_t* L_80 = UnityWebRequest_UnEscapeURL_m1224F23674AC91179573482A2993CB9E4EC98980(L_79, /*hidden argument*/NULL);
		NullCheck(L_75);
		Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD(L_75, L_76, L_80, /*hidden argument*/Dictionary_2_set_Item_m597918251624A4BF29104324490143CFCA659FAD_RuntimeMethod_var);
	}

IL_0198:
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_81 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_82 = V_7;
		Dictionary_2_t931BF283048C4E74FC063C3036E5F3FE328861FC * L_83 = UniWebViewMessage_get_Args_m112C17F16135A0C633F4D6B944D2536C587BF7E2((UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *)__this, /*hidden argument*/NULL);
		String_t* L_84 = V_7;
		NullCheck(L_83);
		String_t* L_85 = Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E(L_83, L_84, /*hidden argument*/Dictionary_2_get_Item_m31D706AAE640EE1D91E561D8934F58AC765CFC3E_RuntimeMethod_var);
		String_t* L_86 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(_stringLiteralD85D73531E449DFC50EFAFF09A15700083F68759, L_82, _stringLiteral3872A3ED2ED0AAB18F1FB010F044E192B38A8AF5, L_85, /*hidden argument*/NULL);
		NullCheck(L_81);
		UniWebViewLogger_Debug_mB025AB06112890DB90A1DC3E2B5A90B4351BCB97(L_81, L_86, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		int32_t L_87 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_01c6:
	{
		int32_t L_88 = V_5;
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_89 = V_4;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_89)->max_length)))))))
		{
			goto IL_010b;
		}
	}
	{
		return;
	}

IL_01d2:
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_90 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_91 = ___rawMessage0;
		String_t* L_92 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral92D9989B9E7EDF35CDAA9FE01DC36CF20A3476EF, L_91, /*hidden argument*/NULL);
		NullCheck(L_90);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_90, L_92, /*hidden argument*/NULL);
	}

IL_01e7:
	{
		return;
	}
}
extern "C"  void UniWebViewMessage__ctor_m8E662A552E545F3D1E2CD4A86647B1F016E2E4E7_AdjustorThunk (RuntimeObject * __this, String_t* ___rawMessage0, const RuntimeMethod* method)
{
	UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 * _thisAdjusted = reinterpret_cast<UniWebViewMessage_tAC6CC5EC4233D8B92FB19548180D216E36A42EC3 *>(__this + 1);
	UniWebViewMessage__ctor_m8E662A552E545F3D1E2CD4A86647B1F016E2E4E7(_thisAdjusted, ___rawMessage0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniWebViewNativeListener::AddListener(UniWebViewNativeListener)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddListener_m66CD8DDE368A077A8B0BB68FF42986F376582F72 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_AddListener_m66CD8DDE368A077A8B0BB68FF42986F376582F72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var);
		Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * L_0 = ((UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var))->get_listeners_4();
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_1 = ___target0;
		NullCheck(L_1);
		String_t* L_2 = UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06(L_1, /*hidden argument*/NULL);
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_3 = ___target0;
		NullCheck(L_0);
		Dictionary_2_Add_m04273DEA69EA43CCF49FEE87E80CD5E760FE0FB7(L_0, L_2, L_3, /*hidden argument*/Dictionary_2_Add_m04273DEA69EA43CCF49FEE87E80CD5E760FE0FB7_RuntimeMethod_var);
		return;
	}
}
// System.Void UniWebViewNativeListener::RemoveListener(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_RemoveListener_m9BC70FC2918E2293BE520CD3199476CE7F82FE4D (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_RemoveListener_m9BC70FC2918E2293BE520CD3199476CE7F82FE4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var);
		Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * L_0 = ((UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var))->get_listeners_4();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		Dictionary_2_Remove_m972C90F4E6EF9CA13D3CF6133D547068D39DCFEC(L_0, L_1, /*hidden argument*/Dictionary_2_Remove_m972C90F4E6EF9CA13D3CF6133D547068D39DCFEC_RuntimeMethod_var);
		return;
	}
}
// UniWebViewNativeListener UniWebViewNativeListener::GetListener(System.String)
extern "C" IL2CPP_METHOD_ATTR UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * UniWebViewNativeListener_GetListener_mC6C1E26D38D9B13A624349A855EB6987ADAC87F3 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_GetListener_mC6C1E26D38D9B13A624349A855EB6987ADAC87F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * V_0 = NULL;
	{
		V_0 = (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var);
		Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * L_0 = ((UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var))->get_listeners_4();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		bool L_2 = Dictionary_2_TryGetValue_mA715731746947BCAEFB0F5453C4A084CB71F7A02(L_0, L_1, (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mA715731746947BCAEFB0F5453C4A084CB71F7A02_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * L_3 = V_0;
		return L_3;
	}

IL_0013:
	{
		return (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD *)NULL;
	}
}
// System.String UniWebViewNativeListener::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* UniWebViewNativeListener_get_Name_m26E4882103924A9D8153E20B7129D86EAFDC3D06 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void UniWebViewNativeListener::PageStarted(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageStarted_mF2A62902DFA901F505EC0890EDD73665266AE40F (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_PageStarted_mF2A62902DFA901F505EC0890EDD73665266AE40F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___url0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralDDC74C5DE3EC6D6BC5D4AD76FBCD198AB50CFB5E, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_3 = __this->get_webView_5();
		String_t* L_4 = ___url0;
		NullCheck(L_3);
		UniWebView_InternalOnPageStarted_mCB979A41164D7CF5D144695D16AAB647B0092C0A(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::PageFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageFinished_mEF727AF7F499209E54EEE36CAB324A506239D1C5 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_PageFinished_mEF727AF7F499209E54EEE36CAB324A506239D1C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * V_0 = NULL;
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA79EA984C4186FB47F4F5D431390C66A2B08D039, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnPageFinished_m66D50B18FA57FB39FBBFDA22A23E1C2B3ECAB063(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::PageErrorReceived(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_PageErrorReceived_m0B5479D3C3CACC56D6560F9EF372E3FCDFC4E17B (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_PageErrorReceived_m0B5479D3C3CACC56D6560F9EF372E3FCDFC4E17B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * V_0 = NULL;
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralC9676FD8E9D709F5F3BFFF46289CB1676A78C99C, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnPageErrorReceived_mD96650FCD2788D0EA6B4950236A1BA5904A354E4(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::ShowTransitionFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_ShowTransitionFinished_m6E32A8F100B600BDE206322FF34D3839F7928733 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___identifer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_ShowTransitionFinished_m6E32A8F100B600BDE206322FF34D3839F7928733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___identifer0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralB40BD825C866BFCE0122BB6B52982C2FA328767D, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_3 = __this->get_webView_5();
		String_t* L_4 = ___identifer0;
		NullCheck(L_3);
		UniWebView_InternalOnShowTransitionFinished_m675ACF3ED200F80D5C7D9BDE4BDE94296812FB16(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::HideTransitionFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_HideTransitionFinished_mB02B35283155C1188BB935ED3AAC9C41F940BE98 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___identifer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_HideTransitionFinished_mB02B35283155C1188BB935ED3AAC9C41F940BE98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___identifer0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralDF560A7771870716334E1E2F5D968E8A2CEADB30, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_3 = __this->get_webView_5();
		String_t* L_4 = ___identifer0;
		NullCheck(L_3);
		UniWebView_InternalOnHideTransitionFinished_mF460676425275EB554B59E1A746819D7D1B8B6A5(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::AnimateToFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AnimateToFinished_m5D2AC004AA6E6BEDC9E3A78E364E2ED8B218607F (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___identifer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_AnimateToFinished_m5D2AC004AA6E6BEDC9E3A78E364E2ED8B218607F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___identifer0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCD99426E1DF5926674D76369611D1512D2535774, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_3 = __this->get_webView_5();
		String_t* L_4 = ___identifer0;
		NullCheck(L_3);
		UniWebView_InternalOnAnimateToFinished_m2486792057F058A88CC3F489034D0487B6FBD4F8(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::AddJavaScriptFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_AddJavaScriptFinished_m51DD87F72D674E9AD89F0B3FED54FF1BAC3D7232 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_AddJavaScriptFinished_m51DD87F72D674E9AD89F0B3FED54FF1BAC3D7232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * V_0 = NULL;
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral117E9159A146DF4F4331086DE92E4F83AA1B0132, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnAddJavaScriptFinished_mE643B519375F8A85AFA04C199624DF4E172FD6D5(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::EvalJavaScriptFinished(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_EvalJavaScriptFinished_m434DE75E4D778419CB713F678A6A34ED62AD89CD (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_EvalJavaScriptFinished_m434DE75E4D778419CB713F678A6A34ED62AD89CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * V_0 = NULL;
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralD847EB0A6EC97CC9921F88B196872CF96005C5A9, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___result0;
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_4 = JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE(L_3, /*hidden argument*/JsonUtility_FromJson_TisUniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C_m404DF40C69B6F5FE7BB4D66307C862F7481B27BE_RuntimeMethod_var);
		V_0 = L_4;
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_5 = __this->get_webView_5();
		UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnEvalJavaScriptFinished_mA4C5FF23D930C98CE746642E7114340FF830D2A8(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::MessageReceived(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_MessageReceived_mF0CB9A208AD0E4A6B783A34CB8C33D0FE915579B (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_MessageReceived_mF0CB9A208AD0E4A6B783A34CB8C33D0FE915579B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___result0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteral9EBE43907E69A2FCE402E6EF94731B9B09AC09D1, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_3 = __this->get_webView_5();
		String_t* L_4 = ___result0;
		NullCheck(L_3);
		UniWebView_InternalOnMessageReceived_m10F1B6B8A96C5231210A76131D194374BCEB1AE4(L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::WebViewKeyDown(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_WebViewKeyDown_m1C36F0F3485D9307F94D810D606F79754AD01124 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___keyCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_WebViewKeyDown_m1C36F0F3485D9307F94D810D606F79754AD01124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_1 = ___keyCode0;
		String_t* L_2 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralCBCD4F405598B17B773CA6C140F710DCFEE3AF31, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___keyCode0;
		bool L_4 = Int32_TryParse_m03D31CAB7050E8286A8A90711C896B181006AD00(L_3, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_5 = __this->get_webView_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		UniWebView_InternalOnWebViewKeyDown_m64506AD86C1754E262675E28665C380ED01DF76A(L_5, L_6, /*hidden argument*/NULL);
		return;
	}

IL_002c:
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_7 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		String_t* L_8 = ___keyCode0;
		String_t* L_9 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralA69FD1A951C4B6C646992B2F8CD84CCAA6B382B3, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		UniWebViewLogger_Critical_mD720818B7B450EAE5BADC7ED11EA497371792CAB(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::WebViewDone(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_WebViewDone_mEB4B7007B444770580196B7853ADC00A49D77DC6 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___param0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_WebViewDone_mEB4B7007B444770580196B7853ADC00A49D77DC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, _stringLiteralEBD149AA42DF2C7170A5F9C8125CC974F3993211, /*hidden argument*/NULL);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_1 = __this->get_webView_5();
		NullCheck(L_1);
		UniWebView_InternalOnShouldClose_m4996AE2EF6FF169504485BE9E87607844490AD26(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::WebContentProcessDidTerminate(System.String)
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener_WebContentProcessDidTerminate_mDAF690E4FB7946760A3B7FDBCF3A5E1A5287DD57 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, String_t* ___param0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener_WebContentProcessDidTerminate_mDAF690E4FB7946760A3B7FDBCF3A5E1A5287DD57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UniWebViewLogger_tE1C8304AB4AFC816AB06B4B2E032DCB4F4C05D36 * L_0 = UniWebViewLogger_get_Instance_mC503BF2D04063E168D1719E904312029B0FB52F8(/*hidden argument*/NULL);
		NullCheck(L_0);
		UniWebViewLogger_Info_m1AD5B2457AA905AECA467576B4358B96E017FD5D(L_0, _stringLiteral00491CF0C8B39BC43165DF7F9594FA3F2FF4671E, /*hidden argument*/NULL);
		UniWebView_t70C5C5815FC5A948185238830E0AB8B221E34BBB * L_1 = __this->get_webView_5();
		NullCheck(L_1);
		UniWebView_InternalWebContentProcessDidTerminate_mDB25D615EB2A4CED76E3D559147CC99836F8883C(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener__ctor_m49E0DE17E25A4D710E221BFA7931AE12E57E0850 (UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UniWebViewNativeListener::.cctor()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeListener__cctor_m0CE600722963BEF508477238934BED9218EF1AC2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UniWebViewNativeListener__cctor_m0CE600722963BEF508477238934BED9218EF1AC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 * L_0 = (Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69 *)il2cpp_codegen_object_new(Dictionary_2_tC8DAC4C5C0B35DE2FF589D35287ED2F7FBBEBD69_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mC5754B6545F7E423941D9C54242BC05ADFD95987(L_0, /*hidden argument*/Dictionary_2__ctor_mC5754B6545F7E423941D9C54242BC05ADFD95987_RuntimeMethod_var);
		((UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_StaticFields*)il2cpp_codegen_static_fields_for(UniWebViewNativeListener_tFED75D47CB6B119CB39D323A1B14EDE2BD5CDBDD_il2cpp_TypeInfo_var))->set_listeners_4(L_0);
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
// System.Void UniWebViewNativeResultPayload::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UniWebViewNativeResultPayload__ctor_mBC3D81C77CBA30BA5C435842C70AFBB93AAA33CA (UniWebViewNativeResultPayload_t3A9397FEF18D4CB032484A81370D6BC52767730C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
