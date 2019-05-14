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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// IBM.Cloud.SDK.Widgetss.Widget
struct Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125;
// IBM.Cloud.SDK.Widgetss.Widget/Data
struct Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A;
// IBM.Cloud.SDK.Widgetss.Widget/Input
struct Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB;
// IBM.Cloud.SDK.Widgetss.Widget/Input[]
struct InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73;
// IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded
struct OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5;
// IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved
struct OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0;
// IBM.Cloud.SDK.Widgetss.Widget/OnOutputAdded
struct OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A;
// IBM.Cloud.SDK.Widgetss.Widget/OnOutputRemoved
struct OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73;
// IBM.Cloud.SDK.Widgetss.Widget/OnReceiveData
struct OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE;
// IBM.Cloud.SDK.Widgetss.Widget/Output
struct Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825;
// IBM.Cloud.SDK.Widgetss.Widget/Output/Connection
struct Connection_t7945CDD337019DD7365222588BB33FBD3D90980F;
// IBM.Cloud.SDK.Widgetss.Widget/Output/Connection[]
struct ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322;
// IBM.Cloud.SDK.Widgetss.Widget/Output[]
struct OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163;
// IBM.Cloud.SDK.Widgetss.Widget[]
struct WidgetU5BU5D_t829DD9A48C60C3CE46B1CA5737D655AFBA6CB9C6;
// MiniJSON.Json/Parser
struct Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C;
// MiniJSON.Json/Serializer
struct Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>
struct List_1_t10D3FD88EE77EEE4794842959C287FDF83281618;
// System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output>
struct List_1_t48BC3482D2CB67ABE67AF687BF83E2A36E60E669;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IList
struct IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6;
// System.Func`2<System.Object,System.String>
struct Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF;
// System.Globalization.Calendar
struct Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5;
// System.Globalization.CompareInfo
struct CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1;
// System.Globalization.CultureData
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD;
// System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8;
// System.Globalization.TextInfo
struct TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IFormatProvider
struct IFormatProvider_t4247E13AE2D97A079B88D594B7ABABF313259901;
// System.IO.StringReader
struct StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12;
// System.IO.TextReader
struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.UInt32[]
struct UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;

extern RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
extern RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
extern RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
extern RuntimeClass* Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var;
extern RuntimeClass* Connection_t7945CDD337019DD7365222588BB33FBD3D90980F_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var;
extern RuntimeClass* Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
extern RuntimeClass* IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var;
extern RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t10D3FD88EE77EEE4794842959C287FDF83281618_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C_il2cpp_TypeInfo_var;
extern RuntimeClass* SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var;
extern RuntimeClass* Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern RuntimeClass* StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C;
extern String_t* _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5;
extern String_t* _stringLiteral21AE27F947EF77236FD5E0029FDFE3E0913B464B;
extern String_t* _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
extern String_t* _stringLiteral2BFBE0BC53277529025720589E902C25BF01F2F4;
extern String_t* _stringLiteral39604FA50262F8380B5324213C88B0C4A519C567;
extern String_t* _stringLiteral397C1246CA06EADA5DB479697F14B26605223A28;
extern String_t* _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5;
extern String_t* _stringLiteral4C6708E76240A73FEABA1651A2B35464EE5DDF57;
extern String_t* _stringLiteral5A7BD4149D0D34D3EC86181CDAB1CB8DD3F441D7;
extern String_t* _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
extern String_t* _stringLiteral78A4530ECA15EE6F1A46E18C4652E06F85E4A1A6;
extern String_t* _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385;
extern String_t* _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
extern String_t* _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7;
extern String_t* _stringLiteral9E94758983980504AF303EF297FD2BF9D9CEA063;
extern String_t* _stringLiteralAB006BB8AACDF6E68299BC1DFFCCC9BCC8AC3EAF;
extern String_t* _stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376;
extern String_t* _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A;
extern String_t* _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8;
extern String_t* _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01;
extern const RuntimeMethod* Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m06054F3F3395BFC074621D311B822E81045019A3_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mD170B2E861E65C25F086557DCF625DBC303E93DE_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m165B432EA6AD099D3F2429C89EF3BBD23E4CD26F_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponents_TisWidget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125_m1CB059C4CA4B3DB187CABDAC823AF0F87BEA6E6E_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_mA7ABA51B418EA950796F8641B88F4469B44269E9_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m36C45DFB6839EF3600E0D6BFB34D416E1ED1285C_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Remove_mAC2192AA5F377780861FFF0106689E534E7BA5E6_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m1AE78DF348106708611F563E18E2324F5F486C22_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_mCC1DD2B7636CC2B6F48B1663006CCE238FCCDF55_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_mFE994078CC0373EF39E9684B283A230A50DF41ED_RuntimeMethod_var;
extern const uint32_t Connection_ResolveTargetInput_m66D54F8D658931C62F191A021FF1621FDD655D4B_MetadataUsageId;
extern const uint32_t Connection_set_TargetInput_m050BB79C258CA8AABB80B63CF781A0E8161BF6D9_MetadataUsageId;
extern const uint32_t Output_AddConnection_m3C06726595A8817DFFF4188AFCFA8498F75D5AD3_MetadataUsageId;
extern const uint32_t Output_AddConnection_mD93ACF286D155A24130537466AA773D5EE6B0EA4_MetadataUsageId;
extern const uint32_t Output_RemoveConnection_mE9F836599EA69B7CF3877D79EFD815D410C55CCA_MetadataUsageId;
extern const uint32_t Output_SendData_m082469FB45A3EF836EF4376E3BFE313BAC5D46F0_MetadataUsageId;
extern const uint32_t Output_Start_mA438491004F1E14B3C3070358889120629F21581_MetadataUsageId;
extern const uint32_t Output_ToString_m8B8F83D554E0D831E8BC4D20FD66847F60B6508F_MetadataUsageId;
extern const uint32_t Output__ctor_m9D6E865D37388691056581441C4237A682E8736D_MetadataUsageId;
extern const uint32_t Output_get_Connections_mC610F00F249BC753E78644F82D51831D3D0F07DC_MetadataUsageId;
extern const uint32_t Output_get_IsConnected_m5434EA3DA24020CF846D77520CE656C2F37C59EE_MetadataUsageId;
extern const uint32_t Parser_EatWhitespace_mAA89FFA18AFD404421ABD532B9FA55368A18DFA6_MetadataUsageId;
extern const uint32_t Parser_IsWordBreak_mE6E664F66B1625B7720C1B0D8B4D8C0FE31F82C4_MetadataUsageId;
extern const uint32_t Parser_ParseArray_m29774F1B3F7413DFBA47834DE2EEB4F10D8C5459_MetadataUsageId;
extern const uint32_t Parser_ParseByToken_m93ED2FE86BB6E2A5CF816641678F2667CCBC7D4E_MetadataUsageId;
extern const uint32_t Parser_ParseNumber_m78F25904D90669D289DF55F0EB7AEEBEAF3BBE46_MetadataUsageId;
extern const uint32_t Parser_ParseObject_mE5E99FDC4C8F06369E24CC384E3144424F271FAD_MetadataUsageId;
extern const uint32_t Parser_ParseString_m629C627FC14C36263D8448C6A3B4E2B3942B2C26_MetadataUsageId;
extern const uint32_t Parser_Parse_m3B824EC773A2D49532833BD0905AD5C6D69A8B97_MetadataUsageId;
extern const uint32_t Parser__ctor_m3B8D1D6FE19087F6A3EB1F7B7F3973C07758392A_MetadataUsageId;
extern const uint32_t Parser_get_NextChar_m38CCBB00AB3FB1817518978315D3913E2AFBEF83_MetadataUsageId;
extern const uint32_t Parser_get_NextToken_mD3D92779456F18B0554184C5A70DA3A7153273DF_MetadataUsageId;
extern const uint32_t Parser_get_NextWord_m5017751A72DA02541EE29C51628D1FB3E53BED9C_MetadataUsageId;
extern const uint32_t Parser_get_PeekChar_m81B818E3FBD85C701EC834880B7C5E061ABA2E73_MetadataUsageId;
extern const uint32_t Serializer_SerializeArray_mDD29A7DE9F18D8F0766699B0AEE1D589A69952D9_MetadataUsageId;
extern const uint32_t Serializer_SerializeObject_m096D7736A8490AB1664BB30526DC7064C2D49254_MetadataUsageId;
extern const uint32_t Serializer_SerializeOther_m26C42FAEE0E02E5904F4BFB33DD84EA649BA312E_MetadataUsageId;
extern const uint32_t Serializer_SerializeString_mFFF3FEE25B4BB674E98F65E4B037DC408FFD5F62_MetadataUsageId;
extern const uint32_t Serializer_SerializeValue_m284C34940B830A811B980A871A291C9B7EB546CD_MetadataUsageId;
extern const uint32_t Serializer_Serialize_m942D52C5E820A207F6C823B89ACC60092376C5D0_MetadataUsageId;
extern const uint32_t Serializer__ctor_m676B7E95D32E1B41BA778FA7FBB5EAF9F92CCF95_MetadataUsageId;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com;
struct CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com;
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73;
struct ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322;
struct WidgetU5BU5D_t829DD9A48C60C3CE46B1CA5737D655AFBA6CB9C6;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;


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
#ifndef DATA_TA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A_H
#define DATA_TA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget/Data
struct  Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATA_TA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A_H
#ifndef INPUT_T839CFF9DFEB3326D78ACFED520F80701F39A68EB_H
#define INPUT_T839CFF9DFEB3326D78ACFED520F80701F39A68EB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget/Input
struct  Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output> IBM.Cloud.SDK.Widgetss.Widget/Input::_connections
	List_1_t48BC3482D2CB67ABE67AF687BF83E2A36E60E669 * ____connections_0;
	// IBM.Cloud.SDK.Widgetss.Widget IBM.Cloud.SDK.Widgetss.Widget/Input::<Owner>k__BackingField
	Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * ___U3COwnerU3Ek__BackingField_1;
	// System.String IBM.Cloud.SDK.Widgetss.Widget/Input::<InputName>k__BackingField
	String_t* ___U3CInputNameU3Ek__BackingField_2;
	// System.Type IBM.Cloud.SDK.Widgetss.Widget/Input::<DataType>k__BackingField
	Type_t * ___U3CDataTypeU3Ek__BackingField_3;
	// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Input::<AllowMany>k__BackingField
	bool ___U3CAllowManyU3Ek__BackingField_4;
	// System.String IBM.Cloud.SDK.Widgetss.Widget/Input::<ReceiverFunction>k__BackingField
	String_t* ___U3CReceiverFunctionU3Ek__BackingField_5;
	// IBM.Cloud.SDK.Widgetss.Widget/OnReceiveData IBM.Cloud.SDK.Widgetss.Widget/Input::<DataReceiver>k__BackingField
	OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE * ___U3CDataReceiverU3Ek__BackingField_6;
	// IBM.Cloud.SDK.Widgetss.Widget/OnOutputAdded IBM.Cloud.SDK.Widgetss.Widget/Input::<OnOutputAdded>k__BackingField
	OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A * ___U3COnOutputAddedU3Ek__BackingField_7;
	// IBM.Cloud.SDK.Widgetss.Widget/OnOutputRemoved IBM.Cloud.SDK.Widgetss.Widget/Input::<OnOutputRemoved>k__BackingField
	OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73 * ___U3COnOutputRemovedU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of__connections_0() { return static_cast<int32_t>(offsetof(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB, ____connections_0)); }
	inline List_1_t48BC3482D2CB67ABE67AF687BF83E2A36E60E669 * get__connections_0() const { return ____connections_0; }
	inline List_1_t48BC3482D2CB67ABE67AF687BF83E2A36E60E669 ** get_address_of__connections_0() { return &____connections_0; }
	inline void set__connections_0(List_1_t48BC3482D2CB67ABE67AF687BF83E2A36E60E669 * value)
	{
		____connections_0 = value;
		Il2CppCodeGenWriteBarrier((&____connections_0), value);
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB, ___U3COwnerU3Ek__BackingField_1)); }
	inline Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * get_U3COwnerU3Ek__BackingField_1() const { return ___U3COwnerU3Ek__BackingField_1; }
	inline Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 ** get_address_of_U3COwnerU3Ek__BackingField_1() { return &___U3COwnerU3Ek__BackingField_1; }
	inline void set_U3COwnerU3Ek__BackingField_1(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * value)
	{
		___U3COwnerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CInputNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB, ___U3CInputNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CInputNameU3Ek__BackingField_2() const { return ___U3CInputNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CInputNameU3Ek__BackingField_2() { return &___U3CInputNameU3Ek__BackingField_2; }
	inline void set_U3CInputNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CInputNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInputNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CDataTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB, ___U3CDataTypeU3Ek__BackingField_3)); }
	inline Type_t * get_U3CDataTypeU3Ek__BackingField_3() const { return ___U3CDataTypeU3Ek__BackingField_3; }
	inline Type_t ** get_address_of_U3CDataTypeU3Ek__BackingField_3() { return &___U3CDataTypeU3Ek__BackingField_3; }
	inline void set_U3CDataTypeU3Ek__BackingField_3(Type_t * value)
	{
		___U3CDataTypeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataTypeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CAllowManyU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB, ___U3CAllowManyU3Ek__BackingField_4)); }
	inline bool get_U3CAllowManyU3Ek__BackingField_4() const { return ___U3CAllowManyU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CAllowManyU3Ek__BackingField_4() { return &___U3CAllowManyU3Ek__BackingField_4; }
	inline void set_U3CAllowManyU3Ek__BackingField_4(bool value)
	{
		___U3CAllowManyU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CReceiverFunctionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB, ___U3CReceiverFunctionU3Ek__BackingField_5)); }
	inline String_t* get_U3CReceiverFunctionU3Ek__BackingField_5() const { return ___U3CReceiverFunctionU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CReceiverFunctionU3Ek__BackingField_5() { return &___U3CReceiverFunctionU3Ek__BackingField_5; }
	inline void set_U3CReceiverFunctionU3Ek__BackingField_5(String_t* value)
	{
		___U3CReceiverFunctionU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CReceiverFunctionU3Ek__BackingField_5), value);
	}

	inline static int32_t get_offset_of_U3CDataReceiverU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB, ___U3CDataReceiverU3Ek__BackingField_6)); }
	inline OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE * get_U3CDataReceiverU3Ek__BackingField_6() const { return ___U3CDataReceiverU3Ek__BackingField_6; }
	inline OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE ** get_address_of_U3CDataReceiverU3Ek__BackingField_6() { return &___U3CDataReceiverU3Ek__BackingField_6; }
	inline void set_U3CDataReceiverU3Ek__BackingField_6(OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE * value)
	{
		___U3CDataReceiverU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataReceiverU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3COnOutputAddedU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB, ___U3COnOutputAddedU3Ek__BackingField_7)); }
	inline OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A * get_U3COnOutputAddedU3Ek__BackingField_7() const { return ___U3COnOutputAddedU3Ek__BackingField_7; }
	inline OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A ** get_address_of_U3COnOutputAddedU3Ek__BackingField_7() { return &___U3COnOutputAddedU3Ek__BackingField_7; }
	inline void set_U3COnOutputAddedU3Ek__BackingField_7(OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A * value)
	{
		___U3COnOutputAddedU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnOutputAddedU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3COnOutputRemovedU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB, ___U3COnOutputRemovedU3Ek__BackingField_8)); }
	inline OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73 * get_U3COnOutputRemovedU3Ek__BackingField_8() const { return ___U3COnOutputRemovedU3Ek__BackingField_8; }
	inline OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73 ** get_address_of_U3COnOutputRemovedU3Ek__BackingField_8() { return &___U3COnOutputRemovedU3Ek__BackingField_8; }
	inline void set_U3COnOutputRemovedU3Ek__BackingField_8(OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73 * value)
	{
		___U3COnOutputRemovedU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnOutputRemovedU3Ek__BackingField_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T839CFF9DFEB3326D78ACFED520F80701F39A68EB_H
#ifndef OUTPUT_TA66F9816B6925E8909C2CBCCF6AC6192CBFE5825_H
#define OUTPUT_TA66F9816B6925E8909C2CBCCF6AC6192CBFE5825_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget/Output
struct  Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825  : public RuntimeObject
{
public:
	// IBM.Cloud.SDK.Widgetss.Widget IBM.Cloud.SDK.Widgetss.Widget/Output::<Owner>k__BackingField
	Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * ___U3COwnerU3Ek__BackingField_0;
	// System.Type IBM.Cloud.SDK.Widgetss.Widget/Output::<DataType>k__BackingField
	Type_t * ___U3CDataTypeU3Ek__BackingField_1;
	// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output::<AllowMany>k__BackingField
	bool ___U3CAllowManyU3Ek__BackingField_2;
	// IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded IBM.Cloud.SDK.Widgetss.Widget/Output::<OnInputAdded>k__BackingField
	OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * ___U3COnInputAddedU3Ek__BackingField_3;
	// IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved IBM.Cloud.SDK.Widgetss.Widget/Output::<OnInputRemoved>k__BackingField
	OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * ___U3COnInputRemovedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection> IBM.Cloud.SDK.Widgetss.Widget/Output::_connections
	List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * ____connections_5;

public:
	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825, ___U3COwnerU3Ek__BackingField_0)); }
	inline Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * get_U3COwnerU3Ek__BackingField_0() const { return ___U3COwnerU3Ek__BackingField_0; }
	inline Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 ** get_address_of_U3COwnerU3Ek__BackingField_0() { return &___U3COwnerU3Ek__BackingField_0; }
	inline void set_U3COwnerU3Ek__BackingField_0(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * value)
	{
		___U3COwnerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3COwnerU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CDataTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825, ___U3CDataTypeU3Ek__BackingField_1)); }
	inline Type_t * get_U3CDataTypeU3Ek__BackingField_1() const { return ___U3CDataTypeU3Ek__BackingField_1; }
	inline Type_t ** get_address_of_U3CDataTypeU3Ek__BackingField_1() { return &___U3CDataTypeU3Ek__BackingField_1; }
	inline void set_U3CDataTypeU3Ek__BackingField_1(Type_t * value)
	{
		___U3CDataTypeU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDataTypeU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CAllowManyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825, ___U3CAllowManyU3Ek__BackingField_2)); }
	inline bool get_U3CAllowManyU3Ek__BackingField_2() const { return ___U3CAllowManyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CAllowManyU3Ek__BackingField_2() { return &___U3CAllowManyU3Ek__BackingField_2; }
	inline void set_U3CAllowManyU3Ek__BackingField_2(bool value)
	{
		___U3CAllowManyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COnInputAddedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825, ___U3COnInputAddedU3Ek__BackingField_3)); }
	inline OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * get_U3COnInputAddedU3Ek__BackingField_3() const { return ___U3COnInputAddedU3Ek__BackingField_3; }
	inline OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 ** get_address_of_U3COnInputAddedU3Ek__BackingField_3() { return &___U3COnInputAddedU3Ek__BackingField_3; }
	inline void set_U3COnInputAddedU3Ek__BackingField_3(OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * value)
	{
		___U3COnInputAddedU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnInputAddedU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3COnInputRemovedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825, ___U3COnInputRemovedU3Ek__BackingField_4)); }
	inline OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * get_U3COnInputRemovedU3Ek__BackingField_4() const { return ___U3COnInputRemovedU3Ek__BackingField_4; }
	inline OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 ** get_address_of_U3COnInputRemovedU3Ek__BackingField_4() { return &___U3COnInputRemovedU3Ek__BackingField_4; }
	inline void set_U3COnInputRemovedU3Ek__BackingField_4(OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * value)
	{
		___U3COnInputRemovedU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3COnInputRemovedU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of__connections_5() { return static_cast<int32_t>(offsetof(Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825, ____connections_5)); }
	inline List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * get__connections_5() const { return ____connections_5; }
	inline List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 ** get_address_of__connections_5() { return &____connections_5; }
	inline void set__connections_5(List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * value)
	{
		____connections_5 = value;
		Il2CppCodeGenWriteBarrier((&____connections_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTPUT_TA66F9816B6925E8909C2CBCCF6AC6192CBFE5825_H
#ifndef CONNECTION_T7945CDD337019DD7365222588BB33FBD3D90980F_H
#define CONNECTION_T7945CDD337019DD7365222588BB33FBD3D90980F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget/Output/Connection
struct  Connection_t7945CDD337019DD7365222588BB33FBD3D90980F  : public RuntimeObject
{
public:
	// IBM.Cloud.SDK.Widgetss.Widget/Output IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::_owner
	Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * ____owner_0;
	// UnityEngine.GameObject IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::_targetObject
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ____targetObject_1;
	// System.String IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::_targetConnection
	String_t* ____targetConnection_2;
	// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::_targetInputResolved
	bool ____targetInputResolved_3;
	// IBM.Cloud.SDK.Widgetss.Widget/Input IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::_targetInput
	Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ____targetInput_4;

public:
	inline static int32_t get_offset_of__owner_0() { return static_cast<int32_t>(offsetof(Connection_t7945CDD337019DD7365222588BB33FBD3D90980F, ____owner_0)); }
	inline Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * get__owner_0() const { return ____owner_0; }
	inline Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 ** get_address_of__owner_0() { return &____owner_0; }
	inline void set__owner_0(Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * value)
	{
		____owner_0 = value;
		Il2CppCodeGenWriteBarrier((&____owner_0), value);
	}

	inline static int32_t get_offset_of__targetObject_1() { return static_cast<int32_t>(offsetof(Connection_t7945CDD337019DD7365222588BB33FBD3D90980F, ____targetObject_1)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get__targetObject_1() const { return ____targetObject_1; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of__targetObject_1() { return &____targetObject_1; }
	inline void set__targetObject_1(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		____targetObject_1 = value;
		Il2CppCodeGenWriteBarrier((&____targetObject_1), value);
	}

	inline static int32_t get_offset_of__targetConnection_2() { return static_cast<int32_t>(offsetof(Connection_t7945CDD337019DD7365222588BB33FBD3D90980F, ____targetConnection_2)); }
	inline String_t* get__targetConnection_2() const { return ____targetConnection_2; }
	inline String_t** get_address_of__targetConnection_2() { return &____targetConnection_2; }
	inline void set__targetConnection_2(String_t* value)
	{
		____targetConnection_2 = value;
		Il2CppCodeGenWriteBarrier((&____targetConnection_2), value);
	}

	inline static int32_t get_offset_of__targetInputResolved_3() { return static_cast<int32_t>(offsetof(Connection_t7945CDD337019DD7365222588BB33FBD3D90980F, ____targetInputResolved_3)); }
	inline bool get__targetInputResolved_3() const { return ____targetInputResolved_3; }
	inline bool* get_address_of__targetInputResolved_3() { return &____targetInputResolved_3; }
	inline void set__targetInputResolved_3(bool value)
	{
		____targetInputResolved_3 = value;
	}

	inline static int32_t get_offset_of__targetInput_4() { return static_cast<int32_t>(offsetof(Connection_t7945CDD337019DD7365222588BB33FBD3D90980F, ____targetInput_4)); }
	inline Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * get__targetInput_4() const { return ____targetInput_4; }
	inline Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB ** get_address_of__targetInput_4() { return &____targetInput_4; }
	inline void set__targetInput_4(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * value)
	{
		____targetInput_4 = value;
		Il2CppCodeGenWriteBarrier((&____targetInput_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTION_T7945CDD337019DD7365222588BB33FBD3D90980F_H
#ifndef JSON_T5439C730490654ADE3B732B9912F40A4D16692B2_H
#define JSON_T5439C730490654ADE3B732B9912F40A4D16692B2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json
struct  Json_t5439C730490654ADE3B732B9912F40A4D16692B2  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSON_T5439C730490654ADE3B732B9912F40A4D16692B2_H
#ifndef PARSER_T412861C3F8F54B5F881D7E60A7A8935449BD730C_H
#define PARSER_T412861C3F8F54B5F881D7E60A7A8935449BD730C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser
struct  Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C  : public RuntimeObject
{
public:
	// System.IO.StringReader MiniJSON.Json/Parser::json
	StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * ___json_1;

public:
	inline static int32_t get_offset_of_json_1() { return static_cast<int32_t>(offsetof(Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C, ___json_1)); }
	inline StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * get_json_1() const { return ___json_1; }
	inline StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 ** get_address_of_json_1() { return &___json_1; }
	inline void set_json_1(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * value)
	{
		___json_1 = value;
		Il2CppCodeGenWriteBarrier((&___json_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T412861C3F8F54B5F881D7E60A7A8935449BD730C_H
#ifndef SERIALIZER_TF73E798BF4D92C860691F7F1C0EE3C72B3B60B40_H
#define SERIALIZER_TF73E798BF4D92C860691F7F1C0EE3C72B3B60B40_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Serializer
struct  Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40  : public RuntimeObject
{
public:
	// System.Text.StringBuilder MiniJSON.Json/Serializer::builder
	StringBuilder_t * ___builder_0;

public:
	inline static int32_t get_offset_of_builder_0() { return static_cast<int32_t>(offsetof(Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40, ___builder_0)); }
	inline StringBuilder_t * get_builder_0() const { return ___builder_0; }
	inline StringBuilder_t ** get_address_of_builder_0() { return &___builder_0; }
	inline void set_builder_0(StringBuilder_t * value)
	{
		___builder_0 = value;
		Il2CppCodeGenWriteBarrier((&___builder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZER_TF73E798BF4D92C860691F7F1C0EE3C72B3B60B40_H
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
#ifndef DICTIONARY_2_T9140A71329927AE4FD0F3CF4D4D66668EBE151EA_H
#define DICTIONARY_2_T9140A71329927AE4FD0F3CF4D4D66668EBE151EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
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
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
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
#endif // DICTIONARY_2_T9140A71329927AE4FD0F3CF4D4D66668EBE151EA_H
#ifndef LIST_1_T10D3FD88EE77EEE4794842959C287FDF83281618_H
#define LIST_1_T10D3FD88EE77EEE4794842959C287FDF83281618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>
struct  List_1_t10D3FD88EE77EEE4794842959C287FDF83281618  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t10D3FD88EE77EEE4794842959C287FDF83281618, ____items_1)); }
	inline ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* get__items_1() const { return ____items_1; }
	inline ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t10D3FD88EE77EEE4794842959C287FDF83281618, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t10D3FD88EE77EEE4794842959C287FDF83281618, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t10D3FD88EE77EEE4794842959C287FDF83281618, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t10D3FD88EE77EEE4794842959C287FDF83281618_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t10D3FD88EE77EEE4794842959C287FDF83281618_StaticFields, ____emptyArray_5)); }
	inline ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T10D3FD88EE77EEE4794842959C287FDF83281618_H
#ifndef LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#define LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T05CC3C859AB5E6024394EF9A42E3E696628CA02D_H
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
#ifndef CULTUREINFO_T345AC6924134F039ED9A11F3E03F8E91B6A3225F_H
#define CULTUREINFO_T345AC6924134F039ED9A11F3E03F8E91B6A3225F_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F  : public RuntimeObject
{
public:
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
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
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
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___numInfo_10)); }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_10), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_11), value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textInfo_12)); }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_12), value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_13), value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_14), value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_15), value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_16), value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_17), value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_18), value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((&___territory_19), value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___native_calendar_names_20)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((&___native_calendar_names_20), value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___compareInfo_21)); }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_21), value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___calendar_24)); }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_24), value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___parent_culture_25)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_25), value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_27), value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_cultureData_28)); }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_cultureData_28), value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_0), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_1), value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((&___default_current_culture_2), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentUICulture_33), value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultThreadCurrentCulture_34), value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_tC88A56872F7C79DBB9582D4F3FC22ED5D8E0B98B * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_35), value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_tBA5388DBB42BF620266F9A48E8B859BBBB224E25 * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_36), value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_tFDF57037EBC5BC833D0A53EF0327B805994860A8 * ___numInfo_10;
	DateTimeFormatInfo_tF4BB3AA482C2F772D2A9022F78BF8727830FAF5F * ___dateTimeInfo_11;
	TextInfo_t5F1E697CB6A7E5EC80F0DC3A968B9B4A70C291D8 * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_tB9A071DBC11AC00AF2EA2066D0C2AE1DCB1865D1 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_tF55A785ACD277504CF0D2F2C6AD56F76C6E91BD5 * ___calendar_24;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	uint8_t* ___cached_serialized_form_27;
	CultureData_tF43B080FFA6EB278F4F289BCDA3FB74B6C208ECD_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
#endif // CULTUREINFO_T345AC6924134F039ED9A11F3E03F8E91B6A3225F_H
#ifndef MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#define MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};
#endif // MARSHALBYREFOBJECT_TC4577953D0A44D0AB8597CFA868E01C858B1C9AF_H
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
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkChars_0), value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ChunkPrevious_1), value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
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
#ifndef BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#define BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_TF87C579059BD4633E6840EBBBEEF899C6E33EF07_H
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
#ifndef ENUMERATOR_T94842D800402B61CDCAB1368380FB4055A3B407E_H
#define ENUMERATOR_T94842D800402B61CDCAB1368380FB4055A3B407E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>
struct  Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E, ___list_0)); }
	inline List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * get_list_0() const { return ___list_0; }
	inline List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E, ___current_3)); }
	inline Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * get_current_3() const { return ___current_3; }
	inline Connection_t7945CDD337019DD7365222588BB33FBD3D90980F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T94842D800402B61CDCAB1368380FB4055A3B407E_H
#ifndef ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#define ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TE0C99528D3DCE5863566CE37BD94162A4C0431CD_H
#ifndef DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#define DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_t9AA834AF2940E75BBF8E3F08FF0D20D266DB71CB* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((&___Powers10_6), value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___Zero_7)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___One_8)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_One_8() const { return ___One_8; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinusOne_9)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MaxValue_10)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___MinValue_11)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8  value)
	{
		___NearPositiveZero_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_H
#ifndef DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#define DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T358B8F23BDC52A5DD700E727E204F9F7CDE12409_H
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
#ifndef TEXTREADER_T7DF8314B601D202ECFEDF623093A87BFDAB58D0A_H
#define TEXTREADER_T7DF8314B601D202ECFEDF623093A87BFDAB58D0A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A  : public MarshalByRefObject_tC4577953D0A44D0AB8597CFA868E01C858B1C9AF
{
public:

public:
};

struct TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t44B347E67E515867D995E8BD5EFD67FA88CE53CF * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&____ReadLineDelegate_1), value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t8B2DA3FB30280CE3D92F50E9CCAACEE4828789A6 * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&____ReadDelegate_2), value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A_StaticFields, ___Null_3)); }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * get_Null_3() const { return ___Null_3; }
	inline TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((&___Null_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T7DF8314B601D202ECFEDF623093A87BFDAB58D0A_H
#ifndef INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#define INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_H
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
#ifndef INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#define INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T7A386C2FF7B0280A0F516992401DDFCF0FF7B436_H
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
#ifndef SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#define SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T9070AEA2966184235653CB9B4D33B149CDA831DF_H
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
#ifndef UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#define UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_TAE45CEF73BF720100519F6867F32145D075F928E_H
#ifndef UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#define UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T4980FA09003AFAAB5A6E361BA2748EA9A005709B_H
#ifndef UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#define UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_TA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_H
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
#ifndef TOKEN_TD66020BEB3E37D2DB6CB37E40AF93C1E247D33FB_H
#define TOKEN_TD66020BEB3E37D2DB6CB37E40AF93C1E247D33FB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MiniJSON.Json/Parser/TOKEN
struct  TOKEN_tD66020BEB3E37D2DB6CB37E40AF93C1E247D33FB 
{
public:
	// System.Int32 MiniJSON.Json/Parser/TOKEN::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TOKEN_tD66020BEB3E37D2DB6CB37E40AF93C1E247D33FB, ___value___2)); }
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
#endif // TOKEN_TD66020BEB3E37D2DB6CB37E40AF93C1E247D33FB_H
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
#ifndef NUMBERSTYLES_TB0ADA2D9CCAA236331AED14C42BE5832B2351592_H
#define NUMBERSTYLES_TB0ADA2D9CCAA236331AED14C42BE5832B2351592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_tB0ADA2D9CCAA236331AED14C42BE5832B2351592, ___value___2)); }
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
#endif // NUMBERSTYLES_TB0ADA2D9CCAA236331AED14C42BE5832B2351592_H
#ifndef STRINGREADER_T3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_H
#define STRINGREADER_T3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12  : public TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((&____s_4), value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_H
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
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
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
#ifndef ONINPUTADDED_TC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5_H
#define ONINPUTADDED_TC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded
struct  OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONINPUTADDED_TC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5_H
#ifndef ONINPUTREMOVED_TE92B46091A2A424C157F52EDEDC81BAA7A50B3D0_H
#define ONINPUTREMOVED_TE92B46091A2A424C157F52EDEDC81BAA7A50B3D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved
struct  OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONINPUTREMOVED_TE92B46091A2A424C157F52EDEDC81BAA7A50B3D0_H
#ifndef ONOUTPUTADDED_T870DAF31EE4A45652CA569CB7D73C0E0EF37215A_H
#define ONOUTPUTADDED_T870DAF31EE4A45652CA569CB7D73C0E0EF37215A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget/OnOutputAdded
struct  OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONOUTPUTADDED_T870DAF31EE4A45652CA569CB7D73C0E0EF37215A_H
#ifndef ONOUTPUTREMOVED_T9377C8A96435F587B69A9DF536319FA94CB0EC73_H
#define ONOUTPUTREMOVED_T9377C8A96435F587B69A9DF536319FA94CB0EC73_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget/OnOutputRemoved
struct  OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONOUTPUTREMOVED_T9377C8A96435F587B69A9DF536319FA94CB0EC73_H
#ifndef ONRECEIVEDATA_T588EB021041987DEF8C62EB834528F697D142DCE_H
#define ONRECEIVEDATA_T588EB021041987DEF8C62EB834528F697D142DCE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget/OnReceiveData
struct  OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONRECEIVEDATA_T588EB021041987DEF8C62EB834528F697D142DCE_H
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
#ifndef WIDGET_T05C1CC60A354A977AA5330CEF2F16A279C9DB125_H
#define WIDGET_T05C1CC60A354A977AA5330CEF2F16A279C9DB125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IBM.Cloud.SDK.Widgetss.Widget
struct  Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean IBM.Cloud.SDK.Widgetss.Widget::_autoConnect
	bool ____autoConnect_4;
	// System.Boolean IBM.Cloud.SDK.Widgetss.Widget::_initialized
	bool ____initialized_5;
	// IBM.Cloud.SDK.Widgetss.Widget/Input[] IBM.Cloud.SDK.Widgetss.Widget::_inputs
	InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* ____inputs_6;
	// IBM.Cloud.SDK.Widgetss.Widget/Output[] IBM.Cloud.SDK.Widgetss.Widget::_outputs
	OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163* ____outputs_7;

public:
	inline static int32_t get_offset_of__autoConnect_4() { return static_cast<int32_t>(offsetof(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125, ____autoConnect_4)); }
	inline bool get__autoConnect_4() const { return ____autoConnect_4; }
	inline bool* get_address_of__autoConnect_4() { return &____autoConnect_4; }
	inline void set__autoConnect_4(bool value)
	{
		____autoConnect_4 = value;
	}

	inline static int32_t get_offset_of__initialized_5() { return static_cast<int32_t>(offsetof(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125, ____initialized_5)); }
	inline bool get__initialized_5() const { return ____initialized_5; }
	inline bool* get_address_of__initialized_5() { return &____initialized_5; }
	inline void set__initialized_5(bool value)
	{
		____initialized_5 = value;
	}

	inline static int32_t get_offset_of__inputs_6() { return static_cast<int32_t>(offsetof(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125, ____inputs_6)); }
	inline InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* get__inputs_6() const { return ____inputs_6; }
	inline InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73** get_address_of__inputs_6() { return &____inputs_6; }
	inline void set__inputs_6(InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* value)
	{
		____inputs_6 = value;
		Il2CppCodeGenWriteBarrier((&____inputs_6), value);
	}

	inline static int32_t get_offset_of__outputs_7() { return static_cast<int32_t>(offsetof(Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125, ____outputs_7)); }
	inline OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163* get__outputs_7() const { return ____outputs_7; }
	inline OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163** get_address_of__outputs_7() { return &____outputs_7; }
	inline void set__outputs_7(OutputU5BU5D_tBACE3EF22AB63DF2A5F888FABDF8550BA84FD163* value)
	{
		____outputs_7 = value;
		Il2CppCodeGenWriteBarrier((&____outputs_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIDGET_T05C1CC60A354A977AA5330CEF2F16A279C9DB125_H
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
// IBM.Cloud.SDK.Widgetss.Widget/Output/Connection[]
struct ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * m_Items[1];

public:
	inline Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Connection_t7945CDD337019DD7365222588BB33FBD3D90980F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Connection_t7945CDD337019DD7365222588BB33FBD3D90980F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// IBM.Cloud.SDK.Widgetss.Widget[]
struct WidgetU5BU5D_t829DD9A48C60C3CE46B1CA5737D655AFBA6CB9C6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * m_Items[1];

public:
	inline Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// IBM.Cloud.SDK.Widgetss.Widget/Input[]
struct InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * m_Items[1];

public:
	inline Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * value)
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


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<System.Object>()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponents_TisRuntimeObject_mAB5B62A0C9EF4405B4E20D13F3CD7BC06A96FD40_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>::.ctor()
inline void List_1__ctor_mCC1DD2B7636CC2B6F48B1663006CCE238FCCDF55 (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::set_DataType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Output_set_DataType_mE772FEFA8037E87BA068BEABBE400B8B809CD913 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, Type_t * ___value0, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::set_AllowMany(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Output_set_AllowMany_m66805F0951906F90C62074FFD36E439331E62812 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, bool ___value0, const RuntimeMethod* method);
// IBM.Cloud.SDK.Widgetss.Widget IBM.Cloud.SDK.Widgetss.Widget/Output::get_Owner()
extern "C" IL2CPP_METHOD_ATTR Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * Output_get_Owner_mEE77C5BF637CD931EDD85F66A480951BC3183C2F (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
extern "C" IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Type IBM.Cloud.SDK.Widgetss.Widget/Output::get_DataType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Output_get_DataType_mF39911FC6FD52E1F8C047ECE97D64CCE9529D957 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>::GetEnumerator()
inline Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E  List_1_GetEnumerator_m36C45DFB6839EF3600E0D6BFB34D416E1ED1285C (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E  (*) (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>::get_Current()
inline Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * Enumerator_get_Current_m165B432EA6AD099D3F2429C89EF3BBD23E4CD26F (Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E * __this, const RuntimeMethod* method)
{
	return ((  Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * (*) (Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared)(__this, method);
}
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::ResolveTargetInput()
extern "C" IL2CPP_METHOD_ATTR bool Connection_ResolveTargetInput_m66D54F8D658931C62F191A021FF1621FDD655D4B (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>::MoveNext()
inline bool Enumerator_MoveNext_mD170B2E861E65C25F086557DCF625DBC303E93DE (Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>::Dispose()
inline void Enumerator_Dispose_m06054F3F3395BFC074621D311B822E81045019A3 (Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>::ToArray()
inline ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* List_1_ToArray_m1AE78DF348106708611F563E18E2324F5F486C22 (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * __this, const RuntimeMethod* method)
{
	return ((  ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* (*) (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::set_Owner(IBM.Cloud.SDK.Widgetss.Widget)
extern "C" IL2CPP_METHOD_ATTR void Output_set_Owner_mE24EA5DEC3F0AF394384FC2300776836C857B9ED (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * ___value0, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::Start(IBM.Cloud.SDK.Widgetss.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void Connection_Start_m37030214A5C54B710A95164308ECD4F7693FE54E (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * ___owner0, const RuntimeMethod* method);
// IBM.Cloud.SDK.Widgetss.Widget/Input IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::get_TargetInput()
extern "C" IL2CPP_METHOD_ATTR Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * Connection_get_TargetInput_m5101CEBB3C9AF53806D0F6407FED830B5D98A0CE (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, const RuntimeMethod* method);
// System.String IBM.Cloud.SDK.Widgetss.Widget/Data::get_Name()
extern "C" IL2CPP_METHOD_ATTR String_t* Data_get_Name_m8CFD3F49F2F2A40DFD7A550F34B7A0ABE99A3BA1 (Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * __this, const RuntimeMethod* method);
// System.String IBM.Cloud.SDK.Widgetss.Widget/Input::get_InputName()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_InputName_m8B2FE663F4DBB899BB69643B3ED113EF3F48829D (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * __this, const RuntimeMethod* method);
// UnityEngine.GameObject IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::get_TargetObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Connection_get_TargetObject_m820AC6894F1734DA302FF9032328F74E10F809E4 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Log::Error(System.String,System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Log_Error_m51D29E9B2BD8352C843A50E7E7C24B8E79FB7AC8 (String_t* ___subSystem0, String_t* ___messageFmt1, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args2, const RuntimeMethod* method);
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output::get_AllowMany()
extern "C" IL2CPP_METHOD_ATTR bool Output_get_AllowMany_mA73D3FD9D46738FA0BAB7DAEEFE41A137DD1AF10 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>::get_Count()
inline int32_t List_1_get_Count_mFE994078CC0373EF39E9684B283A230A50DF41ED (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared)(__this, method);
}
// System.Type IBM.Cloud.SDK.Widgetss.Widget/Input::get_DataType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Input_get_DataType_m3D2F5D12C6731A23A94D4C1F491CA66743B3D243 (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
extern "C" IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * p0, Type_t * p1, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Connection__ctor_mF19149765AA985ECF956322D705110BAC5CC78B8 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::set_TargetInput(IBM.Cloud.SDK.Widgetss.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetInput_m050BB79C258CA8AABB80B63CF781A0E8161BF6D9 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>::Add(!0)
inline void List_1_Add_mA7ABA51B418EA950796F8641B88F4469B44269E9 (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * __this, Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 *, Connection_t7945CDD337019DD7365222588BB33FBD3D90980F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded IBM.Cloud.SDK.Widgetss.Widget/Output::get_OnInputAdded()
extern "C" IL2CPP_METHOD_ATTR OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * Output_get_OnInputAdded_m27900CD5E7346353D08D1AAC56CAAE5E94C6A5F6 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded::Invoke(IBM.Cloud.SDK.Widgetss.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void OnInputAdded_Invoke_m361CDE09656A7C5A220662AC168C447D12D78F2E (OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * __this, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ___input0, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::set_TargetObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetObject_m8A2020EAC0B469946C0FCCF94160E1EDC8B60F79 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::set_TargetConnection(System.String)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetConnection_m6300ADC249BE3ED3B9E22A3AD30FB2C0E70EA420 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<IBM.Cloud.SDK.Widgetss.Widget/Output/Connection>::Remove(!0)
inline bool List_1_Remove_mAC2192AA5F377780861FFF0106689E534E7BA5E6 (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * __this, Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 *, Connection_t7945CDD337019DD7365222588BB33FBD3D90980F *, const RuntimeMethod*))List_1_Remove_m908B647BB9F807676DACE34E3E73475C3C3751D4_gshared)(__this, p0, method);
}
// IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved IBM.Cloud.SDK.Widgetss.Widget/Output::get_OnInputRemoved()
extern "C" IL2CPP_METHOD_ATTR OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * Output_get_OnInputRemoved_m8F4E81143FA4F88B0DA0B6FA43996116F3AD1990 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method);
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved::Invoke(IBM.Cloud.SDK.Widgetss.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void OnInputRemoved_Invoke_m5EFA311C24F1979608292F26C7BFEFB807110DA3 (OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * __this, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ___input0, const RuntimeMethod* method);
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Input::RemoveOutput(IBM.Cloud.SDK.Widgetss.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR bool Input_RemoveOutput_mC8E2E01B15B0A072DBC101C79CEBF9DB3FB5ED96 (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * __this, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * ___output0, const RuntimeMethod* method);
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Input::AddOutput(IBM.Cloud.SDK.Widgetss.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR bool Input_AddOutput_m92708A388A223BCCDB7458C0C8189ADDA8A04187 (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * __this, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * ___output0, const RuntimeMethod* method);
// IBM.Cloud.SDK.Widgetss.Widget IBM.Cloud.SDK.Widgetss.Widget/Input::get_Owner()
extern "C" IL2CPP_METHOD_ATTR Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * Input_get_Owner_m680E8E415DF22713F02761AFE080DF51C6194AB4 (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.String IBM.Cloud.SDK.Widgetss.Widget/Input::get_FullInputName()
extern "C" IL2CPP_METHOD_ATTR String_t* Input_get_FullInputName_mC858F1A269AF58CF537FE70CA6D1CC5E4EC4655C (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD (String_t* __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE (String_t* __this, int32_t p0, const RuntimeMethod* method);
// !!0[] UnityEngine.GameObject::GetComponents<IBM.Cloud.SDK.Widgetss.Widget>()
inline WidgetU5BU5D_t829DD9A48C60C3CE46B1CA5737D655AFBA6CB9C6* GameObject_GetComponents_TisWidget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125_m1CB059C4CA4B3DB187CABDAC823AF0F87BEA6E6E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WidgetU5BU5D_t829DD9A48C60C3CE46B1CA5737D655AFBA6CB9C6* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_mAB5B62A0C9EF4405B4E20D13F3CD7BC06A96FD40_gshared)(__this, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* p0, const RuntimeMethod* method);
// System.String IBM.Cloud.SDK.Widgetss.Widget::get_WidgetName()
extern "C" IL2CPP_METHOD_ATTR String_t* Widget_get_WidgetName_m74F015E742A575F80DA66F8A4E77AFDA6C09CD04 (Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* p0, String_t* p1, const RuntimeMethod* method);
// IBM.Cloud.SDK.Widgetss.Widget/Input[] IBM.Cloud.SDK.Widgetss.Widget::get_Inputs()
extern "C" IL2CPP_METHOD_ATTR InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* Widget_get_Inputs_m839ED101309E1DFB06F7BDBE47B7BA851BF21F2D (Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * __this, const RuntimeMethod* method);
// System.Object MiniJSON.Json/Parser::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m3B824EC773A2D49532833BD0905AD5C6D69A8B97 (String_t* ___jsonString0, const RuntimeMethod* method);
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m942D52C5E820A207F6C823B89ACC60092376C5D0 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B (Il2CppChar p0, const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17 (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Parser__ctor_m3B8D1D6FE19087F6A3EB1F7B7F3973C07758392A (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, String_t* ___jsonString0, const RuntimeMethod* method);
// System.Object MiniJSON.Json/Parser::ParseValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mCE7AAA1AD26F47D1CD69FBBBBF868573FD89B15A (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.Void System.IO.TextReader::Dispose()
extern "C" IL2CPP_METHOD_ATTR void TextReader_Dispose_m9DA31CD42D5E73A1452F4EEC014C5703B5872930 (TextReader_t7DF8314B601D202ECFEDF623093A87BFDAB58D0A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997 (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, const RuntimeMethod*))Dictionary_2__ctor_m2C7E51568033239B506E15E7804A0B8658246498_gshared)(__this, method);
}
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
extern "C" IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mD3D92779456F18B0554184C5A70DA3A7153273DF (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::ParseString()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m629C627FC14C36263D8448C6A3B4E2B3942B2C26 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * __this, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *, String_t*, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_m466D001F105E25DEB5C9BCB17837EE92A27FDE93_gshared)(__this, p0, p1, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m93ED2FE86BB6E2A5CF816641678F2667CCBC7D4E (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
inline void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138 (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *, RuntimeObject *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, p0, method);
}
// System.Object MiniJSON.Json/Parser::ParseNumber()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m78F25904D90669D289DF55F0EB7AEEBEAF3BBE46 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * Parser_ParseObject_mE5E99FDC4C8F06369E24CC384E3144424F271FAD (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
extern "C" IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Parser_ParseArray_m29774F1B3F7413DFBA47834DE2EEB4F10D8C5459 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
extern "C" IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_NextChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m38CCBB00AB3FB1817518978315D3913E2AFBEF83 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A (StringBuilder_t * __this, Il2CppChar p0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___val0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8DC81C7C49EE4A9334E71E45E3A220644E45B4F4 (String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.String MiniJSON.Json/Parser::get_NextWord()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m5017751A72DA02541EE29C51628D1FB3E53BED9C (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.Void System.Globalization.CultureInfo::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void CultureInfo__ctor_mA0E7CC1F0262900B57C2CD04E1FEB30FD87281C3 (CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C" IL2CPP_METHOD_ATTR bool Int64_TryParse_m5C60567D82BACC7D9C18F7A9A83025FC94AD0E95 (String_t* p0, int64_t* p1, const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
extern "C" IL2CPP_METHOD_ATTR bool Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7 (String_t* p0, int32_t p1, RuntimeObject* p2, double* p3, const RuntimeMethod* method);
// System.Char MiniJSON.Json/Parser::get_PeekChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m81B818E3FBD85C701EC834880B7C5E061ABA2E73 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245 (int32_t p0, const RuntimeMethod* method);
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mE6E664F66B1625B7720C1B0D8B4D8C0FE31F82C4 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Parser::EatWhitespace()
extern "C" IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mAA89FFA18AFD404421ABD532B9FA55368A18DFA6 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Serializer__ctor_m676B7E95D32E1B41BA778FA7FBB5EAF9F92CCF95 (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m284C34940B830A811B980A871A291C9B7EB546CD (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260 (StringBuilder_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeString_mFFF3FEE25B4BB674E98F65E4B037DC408FFD5F62 (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mDD29A7DE9F18D8F0766699B0AEE1D589A69952D9 (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m096D7736A8490AB1664BB30526DC7064C2D49254 (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93 (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method);
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m26C42FAEE0E02E5904F4BFB33DD84EA649BA312E (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
extern "C" IL2CPP_METHOD_ATTR CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6 (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Char)
extern "C" IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m8BE65713C8D5E0AD45D53B82A5A7BD187BEBA917 (Il2CppChar p0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5A125A41C41701E41FA0C4CC52CADBC73C1C96D8 (int32_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE (float* __this, String_t* p0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
extern "C" IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65 (StringBuilder_t * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Object)
extern "C" IL2CPP_METHOD_ATTR double Convert_ToDouble_mAB66BA75AC3CDFA1FEC09E3125EA444B46CD7050 (RuntimeObject * p0, const RuntimeMethod* method);
// System.String System.Double::ToString(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Double_ToString_m4A142BE5E5F1EF1434658FC874A19E124D95313F (double* __this, String_t* p0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnInputAdded__ctor_m41BA79F2EDA2F57E06A4784881030CD701C661FA (OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded::Invoke(IBM.Cloud.SDK.Widgetss.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void OnInputAdded_Invoke_m361CDE09656A7C5A220662AC168C447D12D78F2E (OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * __this, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ___input0, const RuntimeMethod* method)
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
					typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
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
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___input0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___input0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
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
							typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(targetMethod, targetThis, ___input0);
							else
								GenericVirtActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(targetMethod, targetThis, ___input0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
							else
								VirtActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
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
				typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
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
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___input0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___input0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
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
						typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(targetMethod, targetThis, ___input0);
						else
							GenericVirtActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(targetMethod, targetThis, ___input0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
						else
							VirtActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded::BeginInvoke(IBM.Cloud.SDK.Widgetss.Widget/Input,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnInputAdded_BeginInvoke_mEDEE89D7AADEDFD0E37E0A37D811518B82CF65F9 (OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * __this, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ___input0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnInputAdded_EndInvoke_m4025D7B090A19394D90B8177F688B3505CACF49E (OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnInputRemoved__ctor_m26FAF73630F345EF90995F4F6A5A66E389F03A8C (OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved::Invoke(IBM.Cloud.SDK.Widgetss.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void OnInputRemoved_Invoke_m5EFA311C24F1979608292F26C7BFEFB807110DA3 (OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * __this, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ___input0, const RuntimeMethod* method)
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
					typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
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
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___input0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___input0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
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
							typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(targetMethod, targetThis, ___input0);
							else
								GenericVirtActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(targetMethod, targetThis, ___input0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
							else
								VirtActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
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
				typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
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
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___input0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___input0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
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
						typedef void (*FunctionPointerType) (Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(targetMethod, targetThis, ___input0);
						else
							GenericVirtActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(targetMethod, targetThis, ___input0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
						else
							VirtActionInvoker1< Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved::BeginInvoke(IBM.Cloud.SDK.Widgetss.Widget/Input,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnInputRemoved_BeginInvoke_mDE5603757390B9C85E126A97DCA405CC6306194F (OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * __this, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ___input0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnInputRemoved_EndInvoke_m001EE2B54D526E36DAFF22F56D1A61209C8E22FB (OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnOutputAdded::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnOutputAdded__ctor_m1036E5FE78175F7BEA34E94C8ACDB4AA54A73CF8 (OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnOutputAdded::Invoke(IBM.Cloud.SDK.Widgetss.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void OnOutputAdded_Invoke_mE7A52ECC9490FABC3258F2E116909A833597AD13 (OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A * __this, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * ___output0, const RuntimeMethod* method)
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
					typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
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
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___output0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___output0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___output0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___output0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
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
							typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(targetMethod, targetThis, ___output0);
							else
								GenericVirtActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(targetMethod, targetThis, ___output0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___output0);
							else
								VirtActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___output0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
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
				typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
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
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___output0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___output0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___output0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___output0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
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
						typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(targetMethod, targetThis, ___output0);
						else
							GenericVirtActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(targetMethod, targetThis, ___output0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___output0);
						else
							VirtActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___output0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Cloud.SDK.Widgetss.Widget/OnOutputAdded::BeginInvoke(IBM.Cloud.SDK.Widgetss.Widget/Output,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnOutputAdded_BeginInvoke_mBE9FCFA6B22D1C4F66ED211836B86CD27660E15E (OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A * __this, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * ___output0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___output0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnOutputAdded::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnOutputAdded_EndInvoke_mD7D808E86ACDF3DD290B72022478017667AE4156 (OnOutputAdded_t870DAF31EE4A45652CA569CB7D73C0E0EF37215A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnOutputRemoved::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnOutputRemoved__ctor_m03B90E32416A9F26681D937C61C6B7EE0D620E3E (OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnOutputRemoved::Invoke(IBM.Cloud.SDK.Widgetss.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void OnOutputRemoved_Invoke_mED7BB449C16BE5EE9A5674F6722C71E5CC44DC3B (OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73 * __this, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * ___output0, const RuntimeMethod* method)
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
					typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
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
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___output0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___output0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___output0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___output0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
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
							typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(targetMethod, targetThis, ___output0);
							else
								GenericVirtActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(targetMethod, targetThis, ___output0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___output0);
							else
								VirtActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___output0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
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
				typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
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
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___output0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___output0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___output0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___output0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
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
						typedef void (*FunctionPointerType) (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___output0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(targetMethod, targetThis, ___output0);
						else
							GenericVirtActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(targetMethod, targetThis, ___output0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___output0);
						else
							VirtActionInvoker1< Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___output0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___output0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Cloud.SDK.Widgetss.Widget/OnOutputRemoved::BeginInvoke(IBM.Cloud.SDK.Widgetss.Widget/Output,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnOutputRemoved_BeginInvoke_m9CAF1CEC26604F9FD15176C5631C5B06B96C4161 (OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73 * __this, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * ___output0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___output0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnOutputRemoved::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnOutputRemoved_EndInvoke_m20F5B063D61679C787112E6F503B784980E2AC91 (OnOutputRemoved_t9377C8A96435F587B69A9DF536319FA94CB0EC73 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnReceiveData::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void OnReceiveData__ctor_m46F8B9AD05F1986F46E7710C70D1A8873B592F85 (OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnReceiveData::Invoke(IBM.Cloud.SDK.Widgetss.Widget/Data)
extern "C" IL2CPP_METHOD_ATTR void OnReceiveData_Invoke_mE58F92CE6C8B51C0B816B331ABC0ADCF036F3A93 (OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE * __this, Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * ___data0, const RuntimeMethod* method)
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
					typedef void (*FunctionPointerType) (Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else
				{
					// closed
					typedef void (*FunctionPointerType) (void*, Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
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
								GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
							else
								GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
							else
								VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
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
							typedef void (*FunctionPointerType) (Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
							((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
						}
						else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * >::Invoke(targetMethod, targetThis, ___data0);
							else
								GenericVirtActionInvoker1< Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * >::Invoke(targetMethod, targetThis, ___data0);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
							else
								VirtActionInvoker1< Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
						}
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
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
				typedef void (*FunctionPointerType) (Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
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
							GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
						else
							GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
						else
							VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
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
						typedef void (*FunctionPointerType) (Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
					}
					else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * >::Invoke(targetMethod, targetThis, ___data0);
						else
							GenericVirtActionInvoker1< Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * >::Invoke(targetMethod, targetThis, ___data0);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
						else
							VirtActionInvoker1< Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
					}
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult IBM.Cloud.SDK.Widgetss.Widget/OnReceiveData::BeginInvoke(IBM.Cloud.SDK.Widgetss.Widget/Data,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* OnReceiveData_BeginInvoke_mD71B5F813D1485D3E788228FEE5B0A5956F48BD1 (OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE * __this, Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * ___data0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/OnReceiveData::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void OnReceiveData_EndInvoke_m907100E78533807AAF7563CB9289532ED63205E9 (OnReceiveData_t588EB021041987DEF8C62EB834528F697D142DCE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::.ctor(System.Type,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Output__ctor_m9D6E865D37388691056581441C4237A682E8736D (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, Type_t * ___dataType0, bool ___allowMany1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output__ctor_m9D6E865D37388691056581441C4237A682E8736D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_0 = (List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 *)il2cpp_codegen_object_new(List_1_t10D3FD88EE77EEE4794842959C287FDF83281618_il2cpp_TypeInfo_var);
		List_1__ctor_mCC1DD2B7636CC2B6F48B1663006CCE238FCCDF55(L_0, /*hidden argument*/List_1__ctor_mCC1DD2B7636CC2B6F48B1663006CCE238FCCDF55_RuntimeMethod_var);
		__this->set__connections_5(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___dataType0;
		Output_set_DataType_mE772FEFA8037E87BA068BEABBE400B8B809CD913(__this, L_1, /*hidden argument*/NULL);
		bool L_2 = ___allowMany1;
		Output_set_AllowMany_m66805F0951906F90C62074FFD36E439331E62812(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String IBM.Cloud.SDK.Widgetss.Widget/Output::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Output_ToString_m8B8F83D554E0D831E8BC4D20FD66847F60B6508F (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_ToString_m8B8F83D554E0D831E8BC4D20FD66847F60B6508F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	{
		Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * L_0 = Output_get_Owner_mEE77C5BF637CD931EDD85F66A480951BC3183C2F(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		G_B3_0 = _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833;
		goto IL_0020;
	}

IL_0015:
	{
		Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * L_2 = Output_get_Owner_mEE77C5BF637CD931EDD85F66A480951BC3183C2F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0020:
	{
		Type_t * L_4 = Output_get_DataType_mF39911FC6FD52E1F8C047ECE97D64CCE9529D957(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		String_t* L_6 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(G_B3_0, _stringLiteralD21048C5C5B019FA0A181ABA5C8DC41BEE59E376, L_5, _stringLiteralE7064F0B80F61DBC65915311032D27BAA569AE2A, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output::get_IsConnected()
extern "C" IL2CPP_METHOD_ATTR bool Output_get_IsConnected_m5434EA3DA24020CF846D77520CE656C2F37C59EE (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_get_IsConnected_m5434EA3DA24020CF846D77520CE656C2F37C59EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_0 = __this->get__connections_5();
		NullCheck(L_0);
		Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E  L_1 = List_1_GetEnumerator_m36C45DFB6839EF3600E0D6BFB34D416E1ED1285C(L_0, /*hidden argument*/List_1_GetEnumerator_m36C45DFB6839EF3600E0D6BFB34D416E1ED1285C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0020;
		}

IL_000e:
		{
			Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_2 = Enumerator_get_Current_m165B432EA6AD099D3F2429C89EF3BBD23E4CD26F((Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *)(&V_0), /*hidden argument*/Enumerator_get_Current_m165B432EA6AD099D3F2429C89EF3BBD23E4CD26F_RuntimeMethod_var);
			NullCheck(L_2);
			bool L_3 = Connection_ResolveTargetInput_m66D54F8D658931C62F191A021FF1621FDD655D4B(L_2, /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0020;
			}
		}

IL_001c:
		{
			V_1 = (bool)1;
			IL2CPP_LEAVE(0x3B, FINALLY_002b);
		}

IL_0020:
		{
			bool L_4 = Enumerator_MoveNext_mD170B2E861E65C25F086557DCF625DBC303E93DE((Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mD170B2E861E65C25F086557DCF625DBC303E93DE_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x39, FINALLY_002b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002b;
	}

FINALLY_002b:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m06054F3F3395BFC074621D311B822E81045019A3((Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *)(&V_0), /*hidden argument*/Enumerator_Dispose_m06054F3F3395BFC074621D311B822E81045019A3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(43)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(43)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_JUMP_TBL(0x39, IL_0039)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0039:
	{
		return (bool)0;
	}

IL_003b:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// IBM.Cloud.SDK.Widgetss.Widget/Output/Connection[] IBM.Cloud.SDK.Widgetss.Widget/Output::get_Connections()
extern "C" IL2CPP_METHOD_ATTR ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* Output_get_Connections_mC610F00F249BC753E78644F82D51831D3D0F07DC (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_get_Connections_mC610F00F249BC753E78644F82D51831D3D0F07DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_0 = __this->get__connections_5();
		NullCheck(L_0);
		ConnectionU5BU5D_t81506407BEDFFAF7FB03A040A7C635416F766322* L_1 = List_1_ToArray_m1AE78DF348106708611F563E18E2324F5F486C22(L_0, /*hidden argument*/List_1_ToArray_m1AE78DF348106708611F563E18E2324F5F486C22_RuntimeMethod_var);
		return L_1;
	}
}
// IBM.Cloud.SDK.Widgetss.Widget IBM.Cloud.SDK.Widgetss.Widget/Output::get_Owner()
extern "C" IL2CPP_METHOD_ATTR Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * Output_get_Owner_mEE77C5BF637CD931EDD85F66A480951BC3183C2F (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method)
{
	{
		Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * L_0 = __this->get_U3COwnerU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::set_Owner(IBM.Cloud.SDK.Widgetss.Widget)
extern "C" IL2CPP_METHOD_ATTR void Output_set_Owner_mE24EA5DEC3F0AF394384FC2300776836C857B9ED (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * ___value0, const RuntimeMethod* method)
{
	{
		Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * L_0 = ___value0;
		__this->set_U3COwnerU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Type IBM.Cloud.SDK.Widgetss.Widget/Output::get_DataType()
extern "C" IL2CPP_METHOD_ATTR Type_t * Output_get_DataType_mF39911FC6FD52E1F8C047ECE97D64CCE9529D957 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CDataTypeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::set_DataType(System.Type)
extern "C" IL2CPP_METHOD_ATTR void Output_set_DataType_mE772FEFA8037E87BA068BEABBE400B8B809CD913 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CDataTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output::get_AllowMany()
extern "C" IL2CPP_METHOD_ATTR bool Output_get_AllowMany_mA73D3FD9D46738FA0BAB7DAEEFE41A137DD1AF10 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowManyU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::set_AllowMany(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Output_set_AllowMany_m66805F0951906F90C62074FFD36E439331E62812 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAllowManyU3Ek__BackingField_2(L_0);
		return;
	}
}
// IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded IBM.Cloud.SDK.Widgetss.Widget/Output::get_OnInputAdded()
extern "C" IL2CPP_METHOD_ATTR OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * Output_get_OnInputAdded_m27900CD5E7346353D08D1AAC56CAAE5E94C6A5F6 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method)
{
	{
		OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * L_0 = __this->get_U3COnInputAddedU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::set_OnInputAdded(IBM.Cloud.SDK.Widgetss.Widget/OnInputAdded)
extern "C" IL2CPP_METHOD_ATTR void Output_set_OnInputAdded_m5E32853C6833DCA90BC049A6E7D83DB0375398D4 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * ___value0, const RuntimeMethod* method)
{
	{
		OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * L_0 = ___value0;
		__this->set_U3COnInputAddedU3Ek__BackingField_3(L_0);
		return;
	}
}
// IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved IBM.Cloud.SDK.Widgetss.Widget/Output::get_OnInputRemoved()
extern "C" IL2CPP_METHOD_ATTR OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * Output_get_OnInputRemoved_m8F4E81143FA4F88B0DA0B6FA43996116F3AD1990 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, const RuntimeMethod* method)
{
	{
		OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * L_0 = __this->get_U3COnInputRemovedU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::set_OnInputRemoved(IBM.Cloud.SDK.Widgetss.Widget/OnInputRemoved)
extern "C" IL2CPP_METHOD_ATTR void Output_set_OnInputRemoved_mB62491B8BEE04D7E3E98FE5B247DE8C8FB69DED9 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * ___value0, const RuntimeMethod* method)
{
	{
		OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * L_0 = ___value0;
		__this->set_U3COnInputRemovedU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output::Start(IBM.Cloud.SDK.Widgetss.Widget)
extern "C" IL2CPP_METHOD_ATTR void Output_Start_mA438491004F1E14B3C3070358889120629F21581 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * ___owner0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_Start_mA438491004F1E14B3C3070358889120629F21581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * L_0 = ___owner0;
		Output_set_Owner_mE24EA5DEC3F0AF394384FC2300776836C857B9ED(__this, L_0, /*hidden argument*/NULL);
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_1 = __this->get__connections_5();
		NullCheck(L_1);
		Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E  L_2 = List_1_GetEnumerator_m36C45DFB6839EF3600E0D6BFB34D416E1ED1285C(L_1, /*hidden argument*/List_1_GetEnumerator_m36C45DFB6839EF3600E0D6BFB34D416E1ED1285C_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_0015:
		{
			Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_3 = Enumerator_get_Current_m165B432EA6AD099D3F2429C89EF3BBD23E4CD26F((Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *)(&V_0), /*hidden argument*/Enumerator_get_Current_m165B432EA6AD099D3F2429C89EF3BBD23E4CD26F_RuntimeMethod_var);
			NullCheck(L_3);
			Connection_Start_m37030214A5C54B710A95164308ECD4F7693FE54E(L_3, __this, /*hidden argument*/NULL);
		}

IL_0022:
		{
			bool L_4 = Enumerator_MoveNext_mD170B2E861E65C25F086557DCF625DBC303E93DE((Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mD170B2E861E65C25F086557DCF625DBC303E93DE_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0015;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m06054F3F3395BFC074621D311B822E81045019A3((Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *)(&V_0), /*hidden argument*/Enumerator_Dispose_m06054F3F3395BFC074621D311B822E81045019A3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output::SendData(IBM.Cloud.SDK.Widgetss.Widget/Data)
extern "C" IL2CPP_METHOD_ATTR bool Output_SendData_m082469FB45A3EF836EF4376E3BFE313BAC5D46F0 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_SendData_m082469FB45A3EF836EF4376E3BFE313BAC5D46F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)0;
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_0 = __this->get__connections_5();
		NullCheck(L_0);
		Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E  L_1 = List_1_GetEnumerator_m36C45DFB6839EF3600E0D6BFB34D416E1ED1285C(L_0, /*hidden argument*/List_1_GetEnumerator_m36C45DFB6839EF3600E0D6BFB34D416E1ED1285C_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_0010:
		{
			Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_2 = Enumerator_get_Current_m165B432EA6AD099D3F2429C89EF3BBD23E4CD26F((Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *)(&V_1), /*hidden argument*/Enumerator_get_Current_m165B432EA6AD099D3F2429C89EF3BBD23E4CD26F_RuntimeMethod_var);
			V_2 = L_2;
			Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_3 = V_2;
			NullCheck(L_3);
			bool L_4 = Connection_ResolveTargetInput_m66D54F8D658931C62F191A021FF1621FDD655D4B(L_3, /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0076;
			}
		}

IL_0020:
		try
		{ // begin try (depth: 2)
			Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_5 = V_2;
			NullCheck(L_5);
			Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_6 = Connection_get_TargetInput_m5101CEBB3C9AF53806D0F6407FED830B5D98A0CE(L_5, /*hidden argument*/NULL);
			Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * L_7 = ___data0;
			NullCheck(L_6);
			VirtActionInvoker1< Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * >::Invoke(5 /* System.Void IBM.Cloud.SDK.Widgetss.Widget/Input::ReceiveData(IBM.Cloud.SDK.Widgetss.Widget/Data) */, L_6, L_7);
			V_0 = (bool)1;
			goto IL_0076;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
				goto CATCH_0030;
			throw e;
		}

CATCH_0030:
		{ // begin catch(System.Exception)
			V_3 = ((Exception_t *)__exception_local);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
			Data_tA5BE89ABC4D7D44DDD40525942BDAB3E2671DC0A * L_10 = ___data0;
			NullCheck(L_10);
			String_t* L_11 = Data_get_Name_m8CFD3F49F2F2A40DFD7A550F34B7A0ABE99A3BA1(L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			ArrayElementTypeCheck (L_9, L_11);
			(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_11);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_9;
			Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_13 = V_2;
			NullCheck(L_13);
			Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_14 = Connection_get_TargetInput_m5101CEBB3C9AF53806D0F6407FED830B5D98A0CE(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			String_t* L_15 = Input_get_InputName_m8B2FE663F4DBB899BB69643B3ED113EF3F48829D(L_14, /*hidden argument*/NULL);
			NullCheck(L_12);
			ArrayElementTypeCheck (L_12, L_15);
			(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_12;
			Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_17 = V_2;
			NullCheck(L_17);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = Connection_get_TargetObject_m820AC6894F1734DA302FF9032328F74E10F809E4(L_17, /*hidden argument*/NULL);
			NullCheck(L_18);
			String_t* L_19 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_18, /*hidden argument*/NULL);
			NullCheck(L_16);
			ArrayElementTypeCheck (L_16, L_19);
			(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_19);
			ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_20 = L_16;
			Exception_t * L_21 = V_3;
			NullCheck(L_21);
			String_t* L_22 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
			NullCheck(L_20);
			ArrayElementTypeCheck (L_20, L_22);
			(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_22);
			Log_Error_m51D29E9B2BD8352C843A50E7E7C24B8E79FB7AC8(_stringLiteral397C1246CA06EADA5DB479697F14B26605223A28, _stringLiteral4C6708E76240A73FEABA1651A2B35464EE5DDF57, L_20, /*hidden argument*/NULL);
			goto IL_0076;
		} // end catch (depth: 2)

IL_0076:
		{
			bool L_23 = Enumerator_MoveNext_mD170B2E861E65C25F086557DCF625DBC303E93DE((Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mD170B2E861E65C25F086557DCF625DBC303E93DE_RuntimeMethod_var);
			if (L_23)
			{
				goto IL_0010;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0081);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m06054F3F3395BFC074621D311B822E81045019A3((Enumerator_t94842D800402B61CDCAB1368380FB4055A3B407E *)(&V_1), /*hidden argument*/Enumerator_Dispose_m06054F3F3395BFC074621D311B822E81045019A3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(129)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008f:
	{
		bool L_24 = V_0;
		return L_24;
	}
}
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output::AddConnection(IBM.Cloud.SDK.Widgetss.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR bool Output_AddConnection_mD93ACF286D155A24130537466AA773D5EE6B0EA4 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_AddConnection_mD93ACF286D155A24130537466AA773D5EE6B0EA4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * V_0 = NULL;
	{
		bool L_0 = Output_get_AllowMany_mA73D3FD9D46738FA0BAB7DAEEFE41A137DD1AF10(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_1 = __this->get__connections_5();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mFE994078CC0373EF39E9684B283A230A50DF41ED(L_1, /*hidden argument*/List_1_get_Count_mFE994078CC0373EF39E9684B283A230A50DF41ED_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_3 = ___input0;
		NullCheck(L_3);
		Type_t * L_4 = Input_get_DataType_m3D2F5D12C6731A23A94D4C1F491CA66743B3D243(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = Output_get_DataType_mF39911FC6FD52E1F8C047ECE97D64CCE9529D957(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		return (bool)0;
	}

IL_002d:
	{
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_7 = (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F *)il2cpp_codegen_object_new(Connection_t7945CDD337019DD7365222588BB33FBD3D90980F_il2cpp_TypeInfo_var);
		Connection__ctor_mF19149765AA985ECF956322D705110BAC5CC78B8(L_7, /*hidden argument*/NULL);
		V_0 = L_7;
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_8 = V_0;
		NullCheck(L_8);
		Connection_Start_m37030214A5C54B710A95164308ECD4F7693FE54E(L_8, __this, /*hidden argument*/NULL);
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_9 = V_0;
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_10 = ___input0;
		NullCheck(L_9);
		Connection_set_TargetInput_m050BB79C258CA8AABB80B63CF781A0E8161BF6D9(L_9, L_10, /*hidden argument*/NULL);
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_11 = __this->get__connections_5();
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_12 = V_0;
		NullCheck(L_11);
		List_1_Add_mA7ABA51B418EA950796F8641B88F4469B44269E9(L_11, L_12, /*hidden argument*/List_1_Add_mA7ABA51B418EA950796F8641B88F4469B44269E9_RuntimeMethod_var);
		OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * L_13 = Output_get_OnInputAdded_m27900CD5E7346353D08D1AAC56CAAE5E94C6A5F6(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * L_14 = Output_get_OnInputAdded_m27900CD5E7346353D08D1AAC56CAAE5E94C6A5F6(__this, /*hidden argument*/NULL);
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_15 = ___input0;
		NullCheck(L_14);
		OnInputAdded_Invoke_m361CDE09656A7C5A220662AC168C447D12D78F2E(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0061:
	{
		return (bool)1;
	}
}
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output::AddConnection(UnityEngine.GameObject,System.String)
extern "C" IL2CPP_METHOD_ATTR bool Output_AddConnection_m3C06726595A8817DFFF4188AFCFA8498F75D5AD3 (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___targetObject0, String_t* ___targetConnection1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_AddConnection_m3C06726595A8817DFFF4188AFCFA8498F75D5AD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * V_0 = NULL;
	{
		bool L_0 = Output_get_AllowMany_mA73D3FD9D46738FA0BAB7DAEEFE41A137DD1AF10(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_1 = __this->get__connections_5();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mFE994078CC0373EF39E9684B283A230A50DF41ED(L_1, /*hidden argument*/List_1_get_Count_mFE994078CC0373EF39E9684B283A230A50DF41ED_RuntimeMethod_var);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		return (bool)0;
	}

IL_0018:
	{
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_3 = (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F *)il2cpp_codegen_object_new(Connection_t7945CDD337019DD7365222588BB33FBD3D90980F_il2cpp_TypeInfo_var);
		Connection__ctor_mF19149765AA985ECF956322D705110BAC5CC78B8(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_4 = V_0;
		NullCheck(L_4);
		Connection_Start_m37030214A5C54B710A95164308ECD4F7693FE54E(L_4, __this, /*hidden argument*/NULL);
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_5 = V_0;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = ___targetObject0;
		NullCheck(L_5);
		Connection_set_TargetObject_m8A2020EAC0B469946C0FCCF94160E1EDC8B60F79(L_5, L_6, /*hidden argument*/NULL);
		String_t* L_7 = ___targetConnection1;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_8 = V_0;
		String_t* L_9 = ___targetConnection1;
		NullCheck(L_8);
		Connection_set_TargetConnection_m6300ADC249BE3ED3B9E22A3AD30FB2C0E70EA420(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0036:
	{
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = Connection_ResolveTargetInput_m66D54F8D658931C62F191A021FF1621FDD655D4B(L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0040;
		}
	}
	{
		return (bool)0;
	}

IL_0040:
	{
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_12 = __this->get__connections_5();
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_13 = V_0;
		NullCheck(L_12);
		List_1_Add_mA7ABA51B418EA950796F8641B88F4469B44269E9(L_12, L_13, /*hidden argument*/List_1_Add_mA7ABA51B418EA950796F8641B88F4469B44269E9_RuntimeMethod_var);
		OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * L_14 = Output_get_OnInputAdded_m27900CD5E7346353D08D1AAC56CAAE5E94C6A5F6(__this, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		OnInputAdded_tC7AF50A77CB4B70F8EE93108089DA5EBB3C1D2C5 * L_15 = Output_get_OnInputAdded_m27900CD5E7346353D08D1AAC56CAAE5E94C6A5F6(__this, /*hidden argument*/NULL);
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_16 = V_0;
		NullCheck(L_16);
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_17 = Connection_get_TargetInput_m5101CEBB3C9AF53806D0F6407FED830B5D98A0CE(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		OnInputAdded_Invoke_m361CDE09656A7C5A220662AC168C447D12D78F2E(L_15, L_17, /*hidden argument*/NULL);
	}

IL_0065:
	{
		return (bool)1;
	}
}
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output::RemoveConnection(IBM.Cloud.SDK.Widgetss.Widget/Output/Connection)
extern "C" IL2CPP_METHOD_ATTR bool Output_RemoveConnection_mE9F836599EA69B7CF3877D79EFD815D410C55CCA (Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * __this, Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Output_RemoveConnection_mE9F836599EA69B7CF3877D79EFD815D410C55CCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool G_B3_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	{
		List_1_t10D3FD88EE77EEE4794842959C287FDF83281618 * L_0 = __this->get__connections_5();
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_1 = ___c0;
		NullCheck(L_0);
		bool L_2 = List_1_Remove_mAC2192AA5F377780861FFF0106689E534E7BA5E6(L_0, L_1, /*hidden argument*/List_1_Remove_mAC2192AA5F377780861FFF0106689E534E7BA5E6_RuntimeMethod_var);
		bool L_3 = L_2;
		G_B1_0 = L_3;
		if (!L_3)
		{
			G_B3_0 = L_3;
			goto IL_0028;
		}
	}
	{
		OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * L_4 = Output_get_OnInputRemoved_m8F4E81143FA4F88B0DA0B6FA43996116F3AD1990(__this, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if (!L_4)
		{
			G_B3_0 = G_B1_0;
			goto IL_0028;
		}
	}
	{
		OnInputRemoved_tE92B46091A2A424C157F52EDEDC81BAA7A50B3D0 * L_5 = Output_get_OnInputRemoved_m8F4E81143FA4F88B0DA0B6FA43996116F3AD1990(__this, /*hidden argument*/NULL);
		Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * L_6 = ___c0;
		NullCheck(L_6);
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_7 = Connection_get_TargetInput_m5101CEBB3C9AF53806D0F6407FED830B5D98A0CE(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		OnInputRemoved_Invoke_m5EFA311C24F1979608292F26C7BFEFB807110DA3(L_5, L_7, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
	}

IL_0028:
	{
		return G_B3_0;
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
// UnityEngine.GameObject IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::get_TargetObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Connection_get_TargetObject_m820AC6894F1734DA302FF9032328F74E10F809E4 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get__targetObject_1();
		return L_0;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::set_TargetObject(UnityEngine.GameObject)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetObject_m8A2020EAC0B469946C0FCCF94160E1EDC8B60F79 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set__targetObject_1(L_0);
		__this->set__targetInputResolved_3((bool)0);
		return;
	}
}
// System.String IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::get_TargetConnection()
extern "C" IL2CPP_METHOD_ATTR String_t* Connection_get_TargetConnection_m72F0656F43F6F41B21766D4A7B3A97537DDD7F78 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__targetConnection_2();
		return L_0;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::set_TargetConnection(System.String)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetConnection_m6300ADC249BE3ED3B9E22A3AD30FB2C0E70EA420 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__targetConnection_2(L_0);
		__this->set__targetInputResolved_3((bool)0);
		return;
	}
}
// IBM.Cloud.SDK.Widgetss.Widget/Input IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::get_TargetInput()
extern "C" IL2CPP_METHOD_ATTR Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * Connection_get_TargetInput_m5101CEBB3C9AF53806D0F6407FED830B5D98A0CE (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, const RuntimeMethod* method)
{
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_0 = __this->get__targetInput_4();
		return L_0;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::set_TargetInput(IBM.Cloud.SDK.Widgetss.Widget/Input)
extern "C" IL2CPP_METHOD_ATTR void Connection_set_TargetInput_m050BB79C258CA8AABB80B63CF781A0E8161BF6D9 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Connection_set_TargetInput_m050BB79C258CA8AABB80B63CF781A0E8161BF6D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_0 = __this->get__targetInput_4();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_1 = __this->get__targetInput_4();
		Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * L_2 = __this->get__owner_0();
		NullCheck(L_1);
		Input_RemoveOutput_mC8E2E01B15B0A072DBC101C79CEBF9DB3FB5ED96(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001a:
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_3 = ___value0;
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_4 = ___value0;
		Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * L_5 = __this->get__owner_0();
		NullCheck(L_4);
		bool L_6 = Input_AddOutput_m92708A388A223BCCDB7458C0C8189ADDA8A04187(L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005b;
		}
	}
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_7 = ___value0;
		__this->set__targetInput_4(L_7);
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_8 = __this->get__targetInput_4();
		NullCheck(L_8);
		Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * L_9 = Input_get_Owner_m680E8E415DF22713F02761AFE080DF51C6194AB4(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_9, /*hidden argument*/NULL);
		__this->set__targetObject_1(L_10);
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_11 = __this->get__targetInput_4();
		NullCheck(L_11);
		String_t* L_12 = Input_get_FullInputName_mC858F1A269AF58CF537FE70CA6D1CC5E4EC4655C(L_11, /*hidden argument*/NULL);
		__this->set__targetConnection_2(L_12);
		goto IL_006d;
	}

IL_005b:
	{
		__this->set__targetObject_1((GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		__this->set__targetConnection_2(L_13);
	}

IL_006d:
	{
		__this->set__targetInputResolved_3((bool)1);
		return;
	}
}
// System.Boolean IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::ResolveTargetInput()
extern "C" IL2CPP_METHOD_ATTR bool Connection_ResolveTargetInput_m66D54F8D658931C62F191A021FF1621FDD655D4B (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Connection_ResolveTargetInput_m66D54F8D658931C62F191A021FF1621FDD655D4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	WidgetU5BU5D_t829DD9A48C60C3CE46B1CA5737D655AFBA6CB9C6* V_3 = NULL;
	int32_t V_4 = 0;
	Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * V_5 = NULL;
	InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* V_6 = NULL;
	int32_t V_7 = 0;
	Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * V_8 = NULL;
	{
		bool L_0 = __this->get__targetInputResolved_3();
		if (L_0)
		{
			goto IL_0131;
		}
	}
	{
		__this->set__targetInputResolved_3((bool)1);
		__this->set__targetInput_4((Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *)NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get__targetObject_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		return (bool)0;
	}

IL_0029:
	{
		String_t* L_3 = __this->get__targetConnection_2();
		V_0 = L_3;
		V_1 = (String_t*)NULL;
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_4, ((int32_t)47), /*hidden argument*/NULL);
		V_2 = L_5;
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) < ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		String_t* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_7, 0, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		String_t* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		String_t* L_12 = String_Substring_m2C4AFF5E79DD8BADFD2DFBCF156BF728FBB8E1AE(L_10, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0052:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get__targetObject_1();
		NullCheck(L_13);
		WidgetU5BU5D_t829DD9A48C60C3CE46B1CA5737D655AFBA6CB9C6* L_14 = GameObject_GetComponents_TisWidget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125_m1CB059C4CA4B3DB187CABDAC823AF0F87BEA6E6E(L_13, /*hidden argument*/GameObject_GetComponents_TisWidget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125_m1CB059C4CA4B3DB187CABDAC823AF0F87BEA6E6E_RuntimeMethod_var);
		V_3 = L_14;
		V_4 = 0;
		goto IL_00f9;
	}

IL_0066:
	{
		WidgetU5BU5D_t829DD9A48C60C3CE46B1CA5737D655AFBA6CB9C6* L_15 = V_3;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_5 = L_18;
		String_t* L_19 = V_1;
		bool L_20 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0083;
		}
	}
	{
		Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * L_21 = V_5;
		NullCheck(L_21);
		String_t* L_22 = Widget_get_WidgetName_m74F015E742A575F80DA66F8A4E77AFDA6C09CD04(L_21, /*hidden argument*/NULL);
		String_t* L_23 = V_1;
		bool L_24 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_22, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00f3;
		}
	}

IL_0083:
	{
		Widget_t05C1CC60A354A977AA5330CEF2F16A279C9DB125 * L_25 = V_5;
		NullCheck(L_25);
		InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* L_26 = Widget_get_Inputs_m839ED101309E1DFB06F7BDBE47B7BA851BF21F2D(L_25, /*hidden argument*/NULL);
		V_6 = L_26;
		V_7 = 0;
		goto IL_00eb;
	}

IL_0091:
	{
		InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* L_27 = V_6;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_8 = L_30;
		String_t* L_31 = V_0;
		bool L_32 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00af;
		}
	}
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_33 = V_8;
		NullCheck(L_33);
		String_t* L_34 = Input_get_InputName_m8B2FE663F4DBB899BB69643B3ED113EF3F48829D(L_33, /*hidden argument*/NULL);
		String_t* L_35 = V_0;
		bool L_36 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_34, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_00e5;
		}
	}

IL_00af:
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_37 = V_8;
		NullCheck(L_37);
		Type_t * L_38 = Input_get_DataType_m3D2F5D12C6731A23A94D4C1F491CA66743B3D243(L_37, /*hidden argument*/NULL);
		Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * L_39 = __this->get__owner_0();
		NullCheck(L_39);
		Type_t * L_40 = Output_get_DataType_mF39911FC6FD52E1F8C047ECE97D64CCE9529D957(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_41 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_38, L_40, /*hidden argument*/NULL);
		if (L_41)
		{
			goto IL_00e5;
		}
	}
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_42 = __this->get__targetInput_4();
		Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * L_43 = __this->get__owner_0();
		NullCheck(L_42);
		bool L_44 = Input_AddOutput_m92708A388A223BCCDB7458C0C8189ADDA8A04187(L_42, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00e5;
		}
	}
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_45 = V_8;
		__this->set__targetInput_4(L_45);
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00eb:
	{
		int32_t L_47 = V_7;
		InputU5BU5D_t88167AC65F5274041E525E910C78C0243EF19D73* L_48 = V_6;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_48)->max_length)))))))
		{
			goto IL_0091;
		}
	}

IL_00f3:
	{
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_00f9:
	{
		int32_t L_50 = V_4;
		WidgetU5BU5D_t829DD9A48C60C3CE46B1CA5737D655AFBA6CB9C6* L_51 = V_3;
		NullCheck(L_51);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_51)->max_length)))))))
		{
			goto IL_0066;
		}
	}
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_52 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_53 = L_52;
		String_t* L_54 = __this->get__targetConnection_2();
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_54);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_55 = L_53;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = __this->get__targetObject_1();
		NullCheck(L_56);
		String_t* L_57 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_57);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_57);
		Log_Error_m51D29E9B2BD8352C843A50E7E7C24B8E79FB7AC8(_stringLiteral78A4530ECA15EE6F1A46E18C4652E06F85E4A1A6, _stringLiteral39604FA50262F8380B5324213C88B0C4A519C567, L_55, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_0131:
	{
		Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB * L_58 = __this->get__targetInput_4();
		return (bool)((!(((RuntimeObject*)(Input_t839CFF9DFEB3326D78ACFED520F80701F39A68EB *)L_58) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::Start(IBM.Cloud.SDK.Widgetss.Widget/Output)
extern "C" IL2CPP_METHOD_ATTR void Connection_Start_m37030214A5C54B710A95164308ECD4F7693FE54E (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * ___owner0, const RuntimeMethod* method)
{
	{
		Output_tA66F9816B6925E8909C2CBCCF6AC6192CBFE5825 * L_0 = ___owner0;
		__this->set__owner_0(L_0);
		return;
	}
}
// System.Void IBM.Cloud.SDK.Widgetss.Widget/Output/Connection::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Connection__ctor_mF19149765AA985ECF956322D705110BAC5CC78B8 (Connection_t7945CDD337019DD7365222588BB33FBD3D90980F * __this, const RuntimeMethod* method)
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
// System.Object MiniJSON.Json::Deserialize(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Json_Deserialize_m909B0D945A44FB8791A9926E4E4059377E1820B2 (String_t* ___json0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___json0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___json0;
		RuntimeObject * L_2 = Parser_Parse_m3B824EC773A2D49532833BD0905AD5C6D69A8B97(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json::Serialize(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Json_Serialize_m3A827A433491F8B28D92EA6B90DD6AEFCFE38CE5 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		String_t* L_1 = Serializer_Serialize_m942D52C5E820A207F6C823B89ACC60092376C5D0(L_0, /*hidden argument*/NULL);
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
// System.Boolean MiniJSON.Json/Parser::IsWordBreak(System.Char)
extern "C" IL2CPP_METHOD_ATTR bool Parser_IsWordBreak_mE6E664F66B1625B7720C1B0D8B4D8C0FE31F82C4 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_IsWordBreak_mE6E664F66B1625B7720C1B0D8B4D8C0FE31F82C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_001a;
		}
	}
	{
		Il2CppChar L_2 = ___c0;
		NullCheck(_stringLiteral21AE27F947EF77236FD5E0029FDFE3E0913B464B);
		int32_t L_3 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(_stringLiteral21AE27F947EF77236FD5E0029FDFE3E0913B464B, L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001a:
	{
		return (bool)1;
	}
}
// System.Void MiniJSON.Json/Parser::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Parser__ctor_m3B8D1D6FE19087F6A3EB1F7B7F3973C07758392A (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser__ctor_m3B8D1D6FE19087F6A3EB1F7B7F3973C07758392A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonString0;
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = (StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 *)il2cpp_codegen_object_new(StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12_il2cpp_TypeInfo_var);
		StringReader__ctor_mA55383C19EFBC075E762145D88F15A2B8B0CDA17(L_1, L_0, /*hidden argument*/NULL);
		__this->set_json_1(L_1);
		return;
	}
}
// System.Object MiniJSON.Json/Parser::Parse(System.String)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_Parse_m3B824EC773A2D49532833BD0905AD5C6D69A8B97 (String_t* ___jsonString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Parse_m3B824EC773A2D49532833BD0905AD5C6D69A8B97_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___jsonString0;
		Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * L_1 = (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C *)il2cpp_codegen_object_new(Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C_il2cpp_TypeInfo_var);
		Parser__ctor_m3B8D1D6FE19087F6A3EB1F7B7F3973C07758392A(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_0007:
	try
	{ // begin try (depth: 1)
		Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject * L_3 = Parser_ParseValue_mCE7AAA1AD26F47D1CD69FBBBBF868573FD89B15A(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_LEAVE(0x1A, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		{
			Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * L_4 = V_0;
			if (!L_4)
			{
				goto IL_0019;
			}
		}

IL_0013:
		{
			Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * L_5 = V_0;
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_5);
		}

IL_0019:
		{
			IL2CPP_END_FINALLY(16)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		RuntimeObject * L_6 = V_1;
		return L_6;
	}
}
// System.Void MiniJSON.Json/Parser::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Parser_Dispose_mA78442F59A309D6941461F63DAB5EF06F19AE3F9 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		TextReader_Dispose_m9DA31CD42D5E73A1452F4EEC014C5703B5872930(L_0, /*hidden argument*/NULL);
		__this->set_json_1((StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 *)NULL);
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> MiniJSON.Json/Parser::ParseObject()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * Parser_ParseObject_mE5E99FDC4C8F06369E24CC384E3144424F271FAD (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseObject_mE5E99FDC4C8F06369E24CC384E3144424F271FAD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)il2cpp_codegen_object_new(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997(L_0, /*hidden argument*/Dictionary_2__ctor_mCA7075EA6548A18B929368520217975094841997_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
	}

IL_0012:
	{
		int32_t L_2 = Parser_get_NextToken_mD3D92779456F18B0554184C5A70DA3A7153273DF(__this, /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002a;
	}

IL_0026:
	{
		return (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)NULL;
	}

IL_0028:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_6 = V_0;
		return L_6;
	}

IL_002a:
	{
		String_t* L_7 = Parser_ParseString_m629C627FC14C36263D8448C6A3B4E2B3942B2C26(__this, /*hidden argument*/NULL);
		V_2 = L_7;
		String_t* L_8 = V_2;
		if (L_8)
		{
			goto IL_0036;
		}
	}
	{
		return (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)NULL;
	}

IL_0036:
	{
		int32_t L_9 = Parser_get_NextToken_mD3D92779456F18B0554184C5A70DA3A7153273DF(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_0041;
		}
	}
	{
		return (Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)NULL;
	}

IL_0041:
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_10 = __this->get_json_1();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_11 = V_0;
		String_t* L_12 = V_2;
		RuntimeObject * L_13 = Parser_ParseValue_mCE7AAA1AD26F47D1CD69FBBBBF868573FD89B15A(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_set_Item_mEA41AEAE79570A9410777F6B90969532564025DD_RuntimeMethod_var);
		goto IL_0012;
	}
}
// System.Collections.Generic.List`1<System.Object> MiniJSON.Json/Parser::ParseArray()
extern "C" IL2CPP_METHOD_ATTR List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * Parser_ParseArray_m29774F1B3F7413DFBA47834DE2EEB4F10D8C5459 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseArray_m29774F1B3F7413DFBA47834DE2EEB4F10D8C5459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_0 = (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)il2cpp_codegen_object_new(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_il2cpp_TypeInfo_var);
		List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3(L_0, /*hidden argument*/List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_RuntimeMethod_var);
		V_0 = L_0;
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_1 = (bool)1;
		goto IL_003f;
	}

IL_0016:
	{
		int32_t L_2 = Parser_get_NextToken_mD3D92779456F18B0554184C5A70DA3A7153273DF(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_2;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)4)))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)6)))
		{
			goto IL_003f;
		}
	}
	{
		goto IL_0030;
	}

IL_002a:
	{
		return (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D *)NULL;
	}

IL_002c:
	{
		V_1 = (bool)0;
		goto IL_003f;
	}

IL_0030:
	{
		int32_t L_6 = V_2;
		RuntimeObject * L_7 = Parser_ParseByToken_m93ED2FE86BB6E2A5CF816641678F2667CCBC7D4E(__this, L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		NullCheck(L_8);
		List_1_Add_m6930161974C7504C80F52EC379EF012387D43138(L_8, L_9, /*hidden argument*/List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_RuntimeMethod_var);
	}

IL_003f:
	{
		bool L_10 = V_1;
		if (L_10)
		{
			goto IL_0016;
		}
	}
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_11 = V_0;
		return L_11;
	}
}
// System.Object MiniJSON.Json/Parser::ParseValue()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseValue_mCE7AAA1AD26F47D1CD69FBBBBF868573FD89B15A (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = Parser_get_NextToken_mD3D92779456F18B0554184C5A70DA3A7153273DF(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		RuntimeObject * L_2 = Parser_ParseByToken_m93ED2FE86BB6E2A5CF816641678F2667CCBC7D4E(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object MiniJSON.Json/Parser::ParseByToken(MiniJSON.Json/Parser/TOKEN)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseByToken_m93ED2FE86BB6E2A5CF816641678F2667CCBC7D4E (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, int32_t ___token0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseByToken_m93ED2FE86BB6E2A5CF816641678F2667CCBC7D4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_0062;
			}
			case 4:
			{
				goto IL_0062;
			}
			case 5:
			{
				goto IL_0062;
			}
			case 6:
			{
				goto IL_0036;
			}
			case 7:
			{
				goto IL_003d;
			}
			case 8:
			{
				goto IL_0052;
			}
			case 9:
			{
				goto IL_0059;
			}
			case 10:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0062;
	}

IL_0036:
	{
		String_t* L_1 = Parser_ParseString_m629C627FC14C36263D8448C6A3B4E2B3942B2C26(__this, /*hidden argument*/NULL);
		return L_1;
	}

IL_003d:
	{
		RuntimeObject * L_2 = Parser_ParseNumber_m78F25904D90669D289DF55F0EB7AEEBEAF3BBE46(__this, /*hidden argument*/NULL);
		return L_2;
	}

IL_0044:
	{
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_3 = Parser_ParseObject_mE5E99FDC4C8F06369E24CC384E3144424F271FAD(__this, /*hidden argument*/NULL);
		return L_3;
	}

IL_004b:
	{
		List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * L_4 = Parser_ParseArray_m29774F1B3F7413DFBA47834DE2EEB4F10D8C5459(__this, /*hidden argument*/NULL);
		return L_4;
	}

IL_0052:
	{
		bool L_5 = ((bool)1);
		RuntimeObject * L_6 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_5);
		return L_6;
	}

IL_0059:
	{
		bool L_7 = ((bool)0);
		RuntimeObject * L_8 = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}

IL_0060:
	{
		return NULL;
	}

IL_0062:
	{
		return NULL;
	}
}
// System.String MiniJSON.Json/Parser::ParseString()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_ParseString_m629C627FC14C36263D8448C6A3B4E2B3942B2C26 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseString_m629C627FC14C36263D8448C6A3B4E2B3942B2C26_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	Il2CppChar V_1 = 0x0;
	bool V_2 = false;
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_3 = NULL;
	int32_t V_4 = 0;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_1);
		V_2 = (bool)1;
		goto IL_0137;
	}

IL_0019:
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_2 = __this->get_json_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002e;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_013d;
	}

IL_002e:
	{
		Il2CppChar L_4 = Parser_get_NextChar_m38CCBB00AB3FB1817518978315D3913E2AFBEF83(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		Il2CppChar L_5 = V_1;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppChar L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)92))))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_012f;
	}

IL_0044:
	{
		V_2 = (bool)0;
		goto IL_0137;
	}

IL_004b:
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_7 = __this->get_json_1();
		NullCheck(L_7);
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_7);
		if ((!(((uint32_t)L_8) == ((uint32_t)(-1)))))
		{
			goto IL_0060;
		}
	}
	{
		V_2 = (bool)0;
		goto IL_0137;
	}

IL_0060:
	{
		Il2CppChar L_9 = Parser_get_NextChar_m38CCBB00AB3FB1817518978315D3913E2AFBEF83(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		Il2CppChar L_10 = V_1;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)92)))))
		{
			goto IL_0080;
		}
	}
	{
		Il2CppChar L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)34))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)47))))
		{
			goto IL_00b7;
		}
	}
	{
		Il2CppChar L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)92))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_0137;
	}

IL_0080:
	{
		Il2CppChar L_14 = V_1;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)102)))))
		{
			goto IL_0094;
		}
	}
	{
		Il2CppChar L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)98))))
		{
			goto IL_00c1;
		}
	}
	{
		Il2CppChar L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)102))))
		{
			goto IL_00cb;
		}
	}
	{
		goto IL_0137;
	}

IL_0094:
	{
		Il2CppChar L_17 = V_1;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)110))))
		{
			goto IL_00d6;
		}
	}
	{
		Il2CppChar L_18 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_0137;
			}
			case 2:
			{
				goto IL_00ec;
			}
			case 3:
			{
				goto IL_00f7;
			}
		}
	}
	{
		goto IL_0137;
	}

IL_00b7:
	{
		StringBuilder_t * L_19 = V_0;
		Il2CppChar L_20 = V_1;
		NullCheck(L_19);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_19, L_20, /*hidden argument*/NULL);
		goto IL_0137;
	}

IL_00c1:
	{
		StringBuilder_t * L_21 = V_0;
		NullCheck(L_21);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_21, 8, /*hidden argument*/NULL);
		goto IL_0137;
	}

IL_00cb:
	{
		StringBuilder_t * L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_22, ((int32_t)12), /*hidden argument*/NULL);
		goto IL_0137;
	}

IL_00d6:
	{
		StringBuilder_t * L_23 = V_0;
		NullCheck(L_23);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_23, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_0137;
	}

IL_00e1:
	{
		StringBuilder_t * L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_24, ((int32_t)13), /*hidden argument*/NULL);
		goto IL_0137;
	}

IL_00ec:
	{
		StringBuilder_t * L_25 = V_0;
		NullCheck(L_25);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_25, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_0137;
	}

IL_00f7:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_26 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)4);
		V_3 = L_26;
		V_4 = 0;
		goto IL_0113;
	}

IL_0103:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_27 = V_3;
		int32_t L_28 = V_4;
		Il2CppChar L_29 = Parser_get_NextChar_m38CCBB00AB3FB1817518978315D3913E2AFBEF83(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Il2CppChar)L_29);
		int32_t L_30 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_0113:
	{
		int32_t L_31 = V_4;
		if ((((int32_t)L_31) < ((int32_t)4)))
		{
			goto IL_0103;
		}
	}
	{
		StringBuilder_t * L_32 = V_0;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_33 = V_3;
		String_t* L_34 = String_CreateString_m394C06654854ADD4C51FF957BE0CC72EF52BAA96(NULL, L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_35 = Convert_ToInt32_m8DC81C7C49EE4A9334E71E45E3A220644E45B4F4(L_34, ((int32_t)16), /*hidden argument*/NULL);
		NullCheck(L_32);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_32, (((int32_t)((uint16_t)L_35))), /*hidden argument*/NULL);
		goto IL_0137;
	}

IL_012f:
	{
		StringBuilder_t * L_36 = V_0;
		Il2CppChar L_37 = V_1;
		NullCheck(L_36);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_36, L_37, /*hidden argument*/NULL);
	}

IL_0137:
	{
		bool L_38 = V_2;
		if (L_38)
		{
			goto IL_0019;
		}
	}

IL_013d:
	{
		StringBuilder_t * L_39 = V_0;
		NullCheck(L_39);
		String_t* L_40 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_39);
		return L_40;
	}
}
// System.Object MiniJSON.Json/Parser::ParseNumber()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Parser_ParseNumber_m78F25904D90669D289DF55F0EB7AEEBEAF3BBE46 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseNumber_m78F25904D90669D289DF55F0EB7AEEBEAF3BBE46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * V_1 = NULL;
	double V_2 = 0.0;
	int64_t V_3 = 0;
	{
		String_t* L_0 = Parser_get_NextWord_m5017751A72DA02541EE29C51628D1FB3E53BED9C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_1 = (CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F *)il2cpp_codegen_object_new(CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F_il2cpp_TypeInfo_var);
		CultureInfo__ctor_mA0E7CC1F0262900B57C2CD04E1FEB30FD87281C3(L_1, _stringLiteral5A7BD4149D0D34D3EC86181CDAB1CB8DD3F441D7, /*hidden argument*/NULL);
		V_1 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_IndexOf_m2909B8CF585E1BD0C81E11ACA2F48012156FD5BD(L_2, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_4 = V_0;
		Int64_TryParse_m5C60567D82BACC7D9C18F7A9A83025FC94AD0E95(L_4, (int64_t*)(&V_3), /*hidden argument*/NULL);
		int64_t L_5 = V_3;
		int64_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var, &L_6);
		return L_7;
	}

IL_002d:
	{
		String_t* L_8 = V_0;
		CultureInfo_t345AC6924134F039ED9A11F3E03F8E91B6A3225F * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var);
		Double_TryParse_m1A7BCBA90DE896E448E3CA09AAD1CA43846567D7(L_8, ((int32_t)511), L_9, (double*)(&V_2), /*hidden argument*/NULL);
		double L_10 = V_2;
		double L_11 = L_10;
		RuntimeObject * L_12 = Box(Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var, &L_11);
		return L_12;
	}
}
// System.Void MiniJSON.Json/Parser::EatWhitespace()
extern "C" IL2CPP_METHOD_ATTR void Parser_EatWhitespace_mAA89FFA18AFD404421ABD532B9FA55368A18DFA6 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_EatWhitespace_mAA89FFA18AFD404421ABD532B9FA55368A18DFA6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_001c;
	}

IL_0002:
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_1 = __this->get_json_1();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_1);
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}

IL_001c:
	{
		Il2CppChar L_3 = Parser_get_PeekChar_m81B818E3FBD85C701EC834880B7C5E061ABA2E73(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m8AE1C4157A1E1D8F5022630F4229AB26223BDC6B(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0002;
		}
	}

IL_0029:
	{
		return;
	}
}
// System.Char MiniJSON.Json/Parser::get_PeekChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_PeekChar_m81B818E3FBD85C701EC834880B7C5E061ABA2E73 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_PeekChar_m81B818E3FBD85C701EC834880B7C5E061ABA2E73_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Char MiniJSON.Json/Parser::get_NextChar()
extern "C" IL2CPP_METHOD_ATTR Il2CppChar Parser_get_NextChar_m38CCBB00AB3FB1817518978315D3913E2AFBEF83 (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextChar_m38CCBB00AB3FB1817518978315D3913E2AFBEF83_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Il2CppChar L_2 = Convert_ToChar_m5BD134B72978B879B81A824DFAC8FF29F5300245(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String MiniJSON.Json/Parser::get_NextWord()
extern "C" IL2CPP_METHOD_ATTR String_t* Parser_get_NextWord_m5017751A72DA02541EE29C51628D1FB3E53BED9C (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextWord_m5017751A72DA02541EE29C51628D1FB3E53BED9C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_0023;
	}

IL_0008:
	{
		StringBuilder_t * L_1 = V_0;
		Il2CppChar L_2 = Parser_get_NextChar_m38CCBB00AB3FB1817518978315D3913E2AFBEF83(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_1, L_2, /*hidden argument*/NULL);
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_3 = __this->get_json_1();
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_3);
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0030;
		}
	}

IL_0023:
	{
		Il2CppChar L_5 = Parser_get_PeekChar_m81B818E3FBD85C701EC834880B7C5E061ABA2E73(__this, /*hidden argument*/NULL);
		bool L_6 = Parser_IsWordBreak_mE6E664F66B1625B7720C1B0D8B4D8C0FE31F82C4(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0008;
		}
	}

IL_0030:
	{
		StringBuilder_t * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// MiniJSON.Json/Parser/TOKEN MiniJSON.Json/Parser::get_NextToken()
extern "C" IL2CPP_METHOD_ATTR int32_t Parser_get_NextToken_mD3D92779456F18B0554184C5A70DA3A7153273DF (Parser_t412861C3F8F54B5F881D7E60A7A8935449BD730C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_get_NextToken_mD3D92779456F18B0554184C5A70DA3A7153273DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	String_t* V_1 = NULL;
	{
		Parser_EatWhitespace_mAA89FFA18AFD404421ABD532B9FA55368A18DFA6(__this, /*hidden argument*/NULL);
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_0 = __this->get_json_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 System.IO.TextReader::Peek() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0016;
		}
	}
	{
		return (int32_t)(0);
	}

IL_0016:
	{
		Il2CppChar L_2 = Parser_get_PeekChar_m81B818E3FBD85C701EC834880B7C5E061ABA2E73(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		Il2CppChar L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)91)))))
		{
			goto IL_0096;
		}
	}
	{
		Il2CppChar L_4 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)34))))
		{
			case 0:
			{
				goto IL_00d5;
			}
			case 1:
			{
				goto IL_00db;
			}
			case 2:
			{
				goto IL_00db;
			}
			case 3:
			{
				goto IL_00db;
			}
			case 4:
			{
				goto IL_00db;
			}
			case 5:
			{
				goto IL_00db;
			}
			case 6:
			{
				goto IL_00db;
			}
			case 7:
			{
				goto IL_00db;
			}
			case 8:
			{
				goto IL_00db;
			}
			case 9:
			{
				goto IL_00db;
			}
			case 10:
			{
				goto IL_00c7;
			}
			case 11:
			{
				goto IL_00d9;
			}
			case 12:
			{
				goto IL_00db;
			}
			case 13:
			{
				goto IL_00db;
			}
			case 14:
			{
				goto IL_00d9;
			}
			case 15:
			{
				goto IL_00d9;
			}
			case 16:
			{
				goto IL_00d9;
			}
			case 17:
			{
				goto IL_00d9;
			}
			case 18:
			{
				goto IL_00d9;
			}
			case 19:
			{
				goto IL_00d9;
			}
			case 20:
			{
				goto IL_00d9;
			}
			case 21:
			{
				goto IL_00d9;
			}
			case 22:
			{
				goto IL_00d9;
			}
			case 23:
			{
				goto IL_00d9;
			}
			case 24:
			{
				goto IL_00d7;
			}
		}
	}
	{
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)91))))
		{
			goto IL_00b7;
		}
	}
	{
		goto IL_00db;
	}

IL_0096:
	{
		Il2CppChar L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b9;
		}
	}
	{
		Il2CppChar L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)123))))
		{
			goto IL_00a7;
		}
	}
	{
		Il2CppChar L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)125))))
		{
			goto IL_00a9;
		}
	}
	{
		goto IL_00db;
	}

IL_00a7:
	{
		return (int32_t)(1);
	}

IL_00a9:
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_9 = __this->get_json_1();
		NullCheck(L_9);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_9);
		return (int32_t)(2);
	}

IL_00b7:
	{
		return (int32_t)(3);
	}

IL_00b9:
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_10 = __this->get_json_1();
		NullCheck(L_10);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_10);
		return (int32_t)(4);
	}

IL_00c7:
	{
		StringReader_t3095DEB3D26F40D1A7F9B76835D80AFE70E47E12 * L_11 = __this->get_json_1();
		NullCheck(L_11);
		VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_11);
		return (int32_t)(6);
	}

IL_00d5:
	{
		return (int32_t)(7);
	}

IL_00d7:
	{
		return (int32_t)(5);
	}

IL_00d9:
	{
		return (int32_t)(8);
	}

IL_00db:
	{
		String_t* L_12 = Parser_get_NextWord_m5017751A72DA02541EE29C51628D1FB3E53BED9C(__this, /*hidden argument*/NULL);
		V_1 = L_12;
		String_t* L_13 = V_1;
		bool L_14 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_13, _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_010b;
		}
	}
	{
		String_t* L_15 = V_1;
		bool L_16 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_15, _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_17 = V_1;
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0111;
		}
	}
	{
		goto IL_0114;
	}

IL_010b:
	{
		return (int32_t)(((int32_t)10));
	}

IL_010e:
	{
		return (int32_t)(((int32_t)9));
	}

IL_0111:
	{
		return (int32_t)(((int32_t)11));
	}

IL_0114:
	{
		return (int32_t)(0);
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
// System.Void MiniJSON.Json/Serializer::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Serializer__ctor_m676B7E95D32E1B41BA778FA7FBB5EAF9F92CCF95 (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer__ctor_m676B7E95D32E1B41BA778FA7FBB5EAF9F92CCF95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_0, /*hidden argument*/NULL);
		__this->set_builder_0(L_0);
		return;
	}
}
// System.String MiniJSON.Json/Serializer::Serialize(System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* Serializer_Serialize_m942D52C5E820A207F6C823B89ACC60092376C5D0 (RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_Serialize_m942D52C5E820A207F6C823B89ACC60092376C5D0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * L_0 = (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 *)il2cpp_codegen_object_new(Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40_il2cpp_TypeInfo_var);
		Serializer__ctor_m676B7E95D32E1B41BA778FA7FBB5EAF9F92CCF95(L_0, /*hidden argument*/NULL);
		Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * L_1 = L_0;
		RuntimeObject * L_2 = ___obj0;
		NullCheck(L_1);
		Serializer_SerializeValue_m284C34940B830A811B980A871A291C9B7EB546CD(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_t * L_3 = L_1->get_builder_0();
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		return L_4;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeValue(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeValue_m284C34940B830A811B980A871A291C9B7EB546CD (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeValue_m284C34940B830A811B980A871A291C9B7EB546CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t * G_B7_0 = NULL;
	StringBuilder_t * G_B6_0 = NULL;
	String_t* G_B8_0 = NULL;
	StringBuilder_t * G_B8_1 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		NullCheck(L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, _stringLiteral2BE88CA4242C76E8253AC62474851065032D6833, /*hidden argument*/NULL);
		return;
	}

IL_0015:
	{
		RuntimeObject * L_2 = ___value0;
		String_t* L_3 = ((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		V_2 = L_3;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		String_t* L_4 = V_2;
		Serializer_SerializeString_mFFF3FEE25B4BB674E98F65E4B037DC408FFD5F62(__this, L_4, /*hidden argument*/NULL);
		return;
	}

IL_0027:
	{
		RuntimeObject * L_5 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}
	{
		StringBuilder_t * L_6 = __this->get_builder_0();
		RuntimeObject * L_7 = ___value0;
		G_B6_0 = L_6;
		if (((*(bool*)((bool*)UnBox(L_7, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))))
		{
			G_B7_0 = L_6;
			goto IL_0044;
		}
	}
	{
		G_B8_0 = _stringLiteral7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04;
		G_B8_1 = G_B6_0;
		goto IL_0049;
	}

IL_0044:
	{
		G_B8_0 = _stringLiteral5FFE533B830F08A0326348A9160AFAFC8ADA44DB;
		G_B8_1 = G_B7_0;
	}

IL_0049:
	{
		NullCheck(G_B8_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		return;
	}

IL_0050:
	{
		RuntimeObject * L_8 = ___value0;
		RuntimeObject* L_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, IList_tA637AB426E16F84F84ACC2813BDCF3A0414AF0AA_il2cpp_TypeInfo_var));
		V_0 = L_9;
		if (!L_9)
		{
			goto IL_0062;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		Serializer_SerializeArray_mDD29A7DE9F18D8F0766699B0AEE1D589A69952D9(__this, L_10, /*hidden argument*/NULL);
		return;
	}

IL_0062:
	{
		RuntimeObject * L_11 = ___value0;
		RuntimeObject* L_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var));
		V_1 = L_12;
		if (!L_12)
		{
			goto IL_0074;
		}
	}
	{
		RuntimeObject* L_13 = V_1;
		Serializer_SerializeObject_m096D7736A8490AB1664BB30526DC7064C2D49254(__this, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0074:
	{
		RuntimeObject * L_14 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))
		{
			goto IL_008f;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		String_t* L_16 = String_CreateString_m0E7BBCE09E386877E2B63BF7FA36B956BF221C93(NULL, ((*(Il2CppChar*)((Il2CppChar*)UnBox(L_15, Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_il2cpp_TypeInfo_var)))), 1, /*hidden argument*/NULL);
		Serializer_SerializeString_mFFF3FEE25B4BB674E98F65E4B037DC408FFD5F62(__this, L_16, /*hidden argument*/NULL);
		return;
	}

IL_008f:
	{
		RuntimeObject * L_17 = ___value0;
		Serializer_SerializeOther_m26C42FAEE0E02E5904F4BFB33DD84EA649BA312E(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeObject(System.Collections.IDictionary)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeObject_m096D7736A8490AB1664BB30526DC7064C2D49254 (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeObject_m096D7736A8490AB1664BB30526DC7064C2D49254_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (bool)1;
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_0, ((int32_t)123), /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.ICollection System.Collections.IDictionary::get_Keys() */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_001e:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			bool L_6 = V_0;
			if (L_6)
			{
				goto IL_0036;
			}
		}

IL_0028:
		{
			StringBuilder_t * L_7 = __this->get_builder_0();
			NullCheck(L_7);
			StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_7, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0036:
		{
			RuntimeObject * L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
			Serializer_SerializeString_mFFF3FEE25B4BB674E98F65E4B037DC408FFD5F62(__this, L_9, /*hidden argument*/NULL);
			StringBuilder_t * L_10 = __this->get_builder_0();
			NullCheck(L_10);
			StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_10, ((int32_t)58), /*hidden argument*/NULL);
			RuntimeObject* L_11 = ___obj0;
			RuntimeObject * L_12 = V_2;
			NullCheck(L_11);
			RuntimeObject * L_13 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7_il2cpp_TypeInfo_var, L_11, L_12);
			Serializer_SerializeValue_m284C34940B830A811B980A871A291C9B7EB546CD(__this, L_13, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_005f:
		{
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_001e;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x7A, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_3;
			if (!L_17)
			{
				goto IL_0079;
			}
		}

IL_0073:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_18);
		}

IL_0079:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_JUMP_TBL(0x7A, IL_007a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_007a:
	{
		StringBuilder_t * L_19 = __this->get_builder_0();
		NullCheck(L_19);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_19, ((int32_t)125), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeArray(System.Collections.IList)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeArray_mDD29A7DE9F18D8F0766699B0AEE1D589A69952D9 (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, RuntimeObject* ___anArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeArray_mDD29A7DE9F18D8F0766699B0AEE1D589A69952D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_0, ((int32_t)91), /*hidden argument*/NULL);
		V_0 = (bool)1;
		RuntimeObject* L_1 = ___anArray0;
		NullCheck(L_1);
		RuntimeObject* L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_tD74549CEA1AA48E768382B94FEACBB07E2E3FA2C_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003a;
		}

IL_0019:
		{
			RuntimeObject* L_3 = V_1;
			NullCheck(L_3);
			RuntimeObject * L_4 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_3);
			V_2 = L_4;
			bool L_5 = V_0;
			if (L_5)
			{
				goto IL_0031;
			}
		}

IL_0023:
		{
			StringBuilder_t * L_6 = __this->get_builder_0();
			NullCheck(L_6);
			StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_6, ((int32_t)44), /*hidden argument*/NULL);
		}

IL_0031:
		{
			RuntimeObject * L_7 = V_2;
			Serializer_SerializeValue_m284C34940B830A811B980A871A291C9B7EB546CD(__this, L_7, /*hidden argument*/NULL);
			V_0 = (bool)0;
		}

IL_003a:
		{
			RuntimeObject* L_8 = V_1;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0019;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0044);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0044;
	}

FINALLY_0044:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_1;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_3;
			if (!L_11)
			{
				goto IL_0054;
			}
		}

IL_004e:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_12);
		}

IL_0054:
		{
			IL2CPP_END_FINALLY(68)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(68)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0055:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_13, ((int32_t)93), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeString(System.String)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeString_mFFF3FEE25B4BB674E98F65E4B037DC408FFD5F62 (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeString_mFFF3FEE25B4BB674E98F65E4B037DC408FFD5F62_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	int32_t V_3 = 0;
	{
		StringBuilder_t * L_0 = __this->get_builder_0();
		NullCheck(L_0);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_0, ((int32_t)34), /*hidden argument*/NULL);
		String_t* L_1 = ___str0;
		NullCheck(L_1);
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_2 = String_ToCharArray_mFCFF32A5EC698E81075E0C72C874282B9ED197A6(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_012d;
	}

IL_001c:
	{
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		uint16_t L_6 = (uint16_t)(L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_00cd;
			}
			case 2:
			{
				goto IL_00a7;
			}
			case 3:
			{
				goto IL_00e0;
			}
			case 4:
			{
				goto IL_0091;
			}
			case 5:
			{
				goto IL_00ba;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_004f;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_0065;
		}
	}
	{
		goto IL_00e0;
	}

IL_004f:
	{
		StringBuilder_t * L_10 = __this->get_builder_0();
		NullCheck(L_10);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_10, _stringLiteralAB006BB8AACDF6E68299BC1DFFCCC9BCC8AC3EAF, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_0065:
	{
		StringBuilder_t * L_11 = __this->get_builder_0();
		NullCheck(L_11);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_11, _stringLiteral9E94758983980504AF303EF297FD2BF9D9CEA063, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_007b:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		NullCheck(L_12);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_12, _stringLiteral4629CA1B60E263BDC4326334B23323E0434717A5, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_0091:
	{
		StringBuilder_t * L_13 = __this->get_builder_0();
		NullCheck(L_13);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_13, _stringLiteral794A729D2E4FFBB094FEC03AE9B3ACD219371385, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_00a7:
	{
		StringBuilder_t * L_14 = __this->get_builder_0();
		NullCheck(L_14);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_14, _stringLiteralEF7E6794CA9C6A06B54B66F279237FB8DAAAEEA8, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_00ba:
	{
		StringBuilder_t * L_15 = __this->get_builder_0();
		NullCheck(L_15);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_15, _stringLiteralF12C84902108895980702C88DB900CEEA2D2EC01, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_00cd:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		NullCheck(L_16);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_16, _stringLiteral8BF81043E29DFC96A6FE1F30F7116F552DE6E7D7, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_00e0:
	{
		Il2CppChar L_17 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		int32_t L_18 = Convert_ToInt32_m8BE65713C8D5E0AD45D53B82A5A7BD187BEBA917(L_17, /*hidden argument*/NULL);
		V_3 = L_18;
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)32))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)L_20) > ((int32_t)((int32_t)126))))
		{
			goto IL_0100;
		}
	}
	{
		StringBuilder_t * L_21 = __this->get_builder_0();
		Il2CppChar L_22 = V_2;
		NullCheck(L_21);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_21, L_22, /*hidden argument*/NULL);
		goto IL_0129;
	}

IL_0100:
	{
		StringBuilder_t * L_23 = __this->get_builder_0();
		NullCheck(L_23);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_23, _stringLiteral153809851B33CE0CDCE06E5A572C675E18D0C3B5, /*hidden argument*/NULL);
		StringBuilder_t * L_24 = __this->get_builder_0();
		String_t* L_25 = Int32_ToString_m5A125A41C41701E41FA0C4CC52CADBC73C1C96D8((int32_t*)(&V_3), _stringLiteral2BFBE0BC53277529025720589E902C25BF01F2F4, /*hidden argument*/NULL);
		NullCheck(L_24);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_24, L_25, /*hidden argument*/NULL);
	}

IL_0129:
	{
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_012d:
	{
		int32_t L_27 = V_1;
		CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_28 = V_0;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		StringBuilder_t * L_29 = __this->get_builder_0();
		NullCheck(L_29);
		StringBuilder_Append_m05C12F58ADC2D807613A9301DF438CB3CD09B75A(L_29, ((int32_t)34), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MiniJSON.Json/Serializer::SerializeOther(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Serializer_SerializeOther_m26C42FAEE0E02E5904F4BFB33DD84EA649BA312E (Serializer_tF73E798BF4D92C860691F7F1C0EE3C72B3B60B40 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Serializer_SerializeOther_m26C42FAEE0E02E5904F4BFB33DD84EA649BA312E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		RuntimeObject * L_0 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var)))
		{
			goto IL_0028;
		}
	}
	{
		StringBuilder_t * L_1 = __this->get_builder_0();
		RuntimeObject * L_2 = ___value0;
		V_0 = ((*(float*)((float*)UnBox(L_2, Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var))));
		String_t* L_3 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)(&V_0), _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, /*hidden argument*/NULL);
		NullCheck(L_1);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_1, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0028:
	{
		RuntimeObject * L_4 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_5 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_5, UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_6 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_7 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_7, SByte_t9070AEA2966184235653CB9B4D33B149CDA831DF_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_8 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_8, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_9 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_9, Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_10 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_10, UInt16_tAE45CEF73BF720100519F6867F32145D075F928E_il2cpp_TypeInfo_var)))
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject * L_11 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_11, UInt64_tA02DF3B59C8FC4A849BD207DA11038CC64E4CB4E_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}

IL_0068:
	{
		StringBuilder_t * L_12 = __this->get_builder_0();
		RuntimeObject * L_13 = ___value0;
		NullCheck(L_12);
		StringBuilder_Append_mA1A063A1388A21C8EA011DBA7FC98C24C3EE3D65(L_12, L_13, /*hidden argument*/NULL);
		return;
	}

IL_0076:
	{
		RuntimeObject * L_14 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_14, Double_t358B8F23BDC52A5DD700E727E204F9F7CDE12409_il2cpp_TypeInfo_var)))
		{
			goto IL_0086;
		}
	}
	{
		RuntimeObject * L_15 = ___value0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_15, Decimal_t44EE9DA309A1BF848308DE4DDFC070CAE6D95EE8_il2cpp_TypeInfo_var)))
		{
			goto IL_00a6;
		}
	}

IL_0086:
	{
		StringBuilder_t * L_16 = __this->get_builder_0();
		RuntimeObject * L_17 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		double L_18 = Convert_ToDouble_mAB66BA75AC3CDFA1FEC09E3125EA444B46CD7050(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		String_t* L_19 = Double_ToString_m4A142BE5E5F1EF1434658FC874A19E124D95313F((double*)(&V_1), _stringLiteral06576556D1AD802F247CAD11AE748BE47B70CD9C, /*hidden argument*/NULL);
		NullCheck(L_16);
		StringBuilder_Append_mDBB8CCBB7750C67BE2F2D92F47E6C0FA42793260(L_16, L_19, /*hidden argument*/NULL);
		return;
	}

IL_00a6:
	{
		RuntimeObject * L_20 = ___value0;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		Serializer_SerializeString_mFFF3FEE25B4BB674E98F65E4B037DC408FFD5F62(__this, L_21, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
