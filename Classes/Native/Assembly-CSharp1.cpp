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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// cam_load
struct cam_load_tF76D93D06003D14C69F4973D86FAEA5E32936DB4;
// cam_load/<wait_for_scene>d__1
struct U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3;
// loadCQ
struct loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121;
// loadCQ/<LoadAsynchronously>d__3
struct U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053;
// loadingBar
struct loadingBar_tBEFE160470869292B491407F050DE1816C56EECD;
// loadingBar/<LoadAsynchronously>d__3
struct U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971;
// menu_in_book
struct menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC;
// menu_in_book/<wait_for_load>d__2
struct U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703;
// menu_in_cam
struct menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F;
// menu_in_cam/<wait_for_load>d__2
struct U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4;
// menu_in_music
struct menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528;
// menu_in_music/<wait_for_load>d__2
struct U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB;
// menu_load
struct menu_load_tB61E2C5802B2EE97BD2BECF4E3225B42B6A051CB;
// menu_load/<wait_for_scene>d__1
struct U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699;
// menu_out_book
struct menu_out_book_tA5AE4DA2BB343B57F222B8C50D90E97CFEED6422;
// menu_out_cam
struct menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865;
// menu_out_cam/<wait_for_scene>d__3
struct U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE;
// menu_out_d
struct menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF;
// menu_out_d/<wait_for_scene>d__5
struct U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759;
// menu_out_music
struct menu_out_music_t657518243B5702F35540D6F9D83DA814ABBB23B7;
// music_load
struct music_load_t7F4798206A330341B2D72101E5AACA04CF7B84A0;
// music_load/<wait_for_scene>d__1
struct U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B;
// music_player
struct music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969;
// open_cv_out_static_cam
struct open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB;
// open_cv_out_static_cam/<wait_for_scene>d__2
struct U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D;
// opencv_in
struct opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E;
// opencv_in/<wait_for_load>d__2
struct U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A;
// opencv_out
struct opencv_out_tF344D77317A419A584CDEC59D69614437764F106;
// opencv_out/<wait_for_scene>d__3
struct U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52;
// resize_screen
struct resize_screen_t79A026E0E5D65451A1BEBBCAE2BAE8384AF64591;
// splashIntro
struct splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB;
// splashIntro/<wait_for_intro>d__2
struct U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED;

IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral600584C2D5CCB97C0C0C424D9F32D6B102FCB040;
IL2CPP_EXTERN_C String_t* _stringLiteral932E4050F7491C21C10649063299D2199541E4DD;
IL2CPP_EXTERN_C String_t* _stringLiteralE31AFD02487A015B14F913595372FDB581ADE6BF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_m543844711EF9273F3F1896035EDE0742142DD2E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mFFA87AF8D9CFE9CB3CBE3F67446810E8A057BF21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_introU3Ed__2_System_Collections_IEnumerator_Reset_m013A86EECD5D9271A5F91F8A725E6EB665C29FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m22FFA213A3766C494C70191C7C7803AC881511F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m88B1370BE877BE6D67813DC69246CA0AE5D01F07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m8A4E4CCA47E71C0EDA0FAD53D31B20A282425A59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_mC770269F9DD47600996404860507FA06A1832239_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m79E419B46A1575592B7780AB0B5B939C21AFB6F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m7D0C2F60C38348E7BCDFA54AB5180058214B8065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_mF0697289E76F3D421B5781A0C02EEA164A0D096E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__2_System_Collections_IEnumerator_Reset_m577B73C6D19469BF72595CC83200A26416C0B592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mA2D0E46DD0026CDA3B762BDE7A8EDD5F85ADCB34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mE112F991BFB9F7A500100173D76931D4679C633B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__5_System_Collections_IEnumerator_Reset_m3673A3FC9719E58D40A39B30E0E2F7EF989823BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t U3CLoadAsynchronouslyU3Ed__3_MoveNext_m4C6D739389B90607D7B6DB950B531BC71570A5D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadAsynchronouslyU3Ed__3_MoveNext_m7C905BDEC390878ABB6AF2D197F1004485343BF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_m543844711EF9273F3F1896035EDE0742142DD2E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mFFA87AF8D9CFE9CB3CBE3F67446810E8A057BF21_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_introU3Ed__2_MoveNext_m646EAAA1E8D296342D60DB755340945EC309A2E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_introU3Ed__2_System_Collections_IEnumerator_Reset_m013A86EECD5D9271A5F91F8A725E6EB665C29FC6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_loadU3Ed__2_MoveNext_m22CAD5A347507736F1DCBBEC1C5EFA87C1803DD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_loadU3Ed__2_MoveNext_m2B6A23339C2937E2682389CF5F209866916160F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_loadU3Ed__2_MoveNext_m6FA3B9C5379FC8FFF39F4BA13E7DCC6EFE07311D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_loadU3Ed__2_MoveNext_mAA14FA264AFC41A2093912AC4FE2D909A7B004AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m22FFA213A3766C494C70191C7C7803AC881511F5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m88B1370BE877BE6D67813DC69246CA0AE5D01F07_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m8A4E4CCA47E71C0EDA0FAD53D31B20A282425A59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_mC770269F9DD47600996404860507FA06A1832239_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__1_MoveNext_m1A22726A9EBEC5A9FF5A28BEEA62F194488A9D10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__1_MoveNext_m3D02C2BD032DEB05857C3A34638A51737E4EEE4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__1_MoveNext_m78740A27EB9FEB19C9C27D4C719F83E586A3EBA0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m79E419B46A1575592B7780AB0B5B939C21AFB6F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m7D0C2F60C38348E7BCDFA54AB5180058214B8065_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_mF0697289E76F3D421B5781A0C02EEA164A0D096E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__2_MoveNext_mB115A3FABCBAAF43C28E5035B692B8EA7D24125E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__2_System_Collections_IEnumerator_Reset_m577B73C6D19469BF72595CC83200A26416C0B592_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__3_MoveNext_m9B2A7632A2E3DB28C8C673FCEE6508B1F0D9CADB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__3_MoveNext_mE4C191841B27A64D12D40AEFD600FE43CFC30958_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mA2D0E46DD0026CDA3B762BDE7A8EDD5F85ADCB34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mE112F991BFB9F7A500100173D76931D4679C633B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__5_MoveNext_mAA4B5E06BDAF2BBDA9860A71F036F7D9E4E41ABF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__5_System_Collections_IEnumerator_Reset_m3673A3FC9719E58D40A39B30E0E2F7EF989823BA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t cam_load_wait_for_scene_m8C01F03C544CC7046245573952572469470C4501_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t loadCQ_LoadAsynchronously_mD0AD16B8CBCA391211BC144050A9A8B4006F9E47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t loadingBar_LoadAsynchronously_m71FE456B4152245FB6B10EBA5F619CC2892C4E75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_in_book_wait_for_load_mF927EACEF16CC26BF7133DD921057BE1A442429F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_in_cam_wait_for_load_m8DD1F4B6C7CF2195FCF644C8C3451837A5D7D993_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_in_music_wait_for_load_m90F8AADF55EF71D8397A5D56217333A4DEA6620C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_load_wait_for_scene_m631D9804B07DA8DE768D5EE89E0F0B34A9602FD4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_out_book_Awake_mD02ACB58C873BECFD0EA30DA2C52880E47D6769E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_out_cam_wait_for_scene_m9C1DBB8837619491769C5E99FD7B79D7DD13150A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_out_d_wait_for_scene_m788E20DC457AD404B721C0FE9A4B017D113C0AE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t menu_out_music_Awake_m78E896CF2C96F9CE7EC47144AE7082ACBEFD4533_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t music_load_wait_for_scene_m4FF0993566EFBCFD55F050A9179226BF04882E5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t music_player_NextPreviousAudio_m2F518AB08746B74DE0F3DF9224D94EC0EBD445DA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t music_player_StartAudio_mACD0C24B91D95DC313C4C700D06927CBF3BCB240_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t music_player_Start_mAC58DF194DE53D6B7BE9E5022F1E49F60AAE6021_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t open_cv_out_static_cam_wait_for_scene_mA69F2B24F11DCEFA1A178438BE06C4EB95FCF92A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t opencv_in_wait_for_load_m5930E1B5E704389057C20ABA24399238EEC98BB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t opencv_out_wait_for_scene_m9F86106B9A5F3DC9F3952C3B4A6806DDE1C1ADB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t resize_screen_Start_mB4EFC84EBAF99C169E15D8F424974D29E70EAE5B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t splashIntro_wait_for_intro_mF26EBE044892D8BD8E97C30DEC504375B7FACEB0_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// cam_load_<wait_for_scene>d__1
struct  U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3  : public RuntimeObject
{
public:
	// System.Int32 cam_load_<wait_for_scene>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object cam_load_<wait_for_scene>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// loadCQ_<LoadAsynchronously>d__3
struct  U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053  : public RuntimeObject
{
public:
	// System.Int32 loadCQ_<LoadAsynchronously>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object loadCQ_<LoadAsynchronously>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 loadCQ_<LoadAsynchronously>d__3::sceneIndex
	int32_t ___sceneIndex_2;
	// loadCQ loadCQ_<LoadAsynchronously>d__3::<>4__this
	loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation loadCQ_<LoadAsynchronously>d__3::<operation>5__2
	AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * ___U3CoperationU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_sceneIndex_2() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053, ___sceneIndex_2)); }
	inline int32_t get_sceneIndex_2() const { return ___sceneIndex_2; }
	inline int32_t* get_address_of_sceneIndex_2() { return &___sceneIndex_2; }
	inline void set_sceneIndex_2(int32_t value)
	{
		___sceneIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053, ___U3CU3E4__this_3)); }
	inline loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoperationU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053, ___U3CoperationU3E5__2_4)); }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * get_U3CoperationU3E5__2_4() const { return ___U3CoperationU3E5__2_4; }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D ** get_address_of_U3CoperationU3E5__2_4() { return &___U3CoperationU3E5__2_4; }
	inline void set_U3CoperationU3E5__2_4(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * value)
	{
		___U3CoperationU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoperationU3E5__2_4), (void*)value);
	}
};


// loadingBar_<LoadAsynchronously>d__3
struct  U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971  : public RuntimeObject
{
public:
	// System.Int32 loadingBar_<LoadAsynchronously>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object loadingBar_<LoadAsynchronously>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 loadingBar_<LoadAsynchronously>d__3::sceneIndex
	int32_t ___sceneIndex_2;
	// loadingBar loadingBar_<LoadAsynchronously>d__3::<>4__this
	loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * ___U3CU3E4__this_3;
	// UnityEngine.AsyncOperation loadingBar_<LoadAsynchronously>d__3::<operation>5__2
	AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * ___U3CoperationU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_sceneIndex_2() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971, ___sceneIndex_2)); }
	inline int32_t get_sceneIndex_2() const { return ___sceneIndex_2; }
	inline int32_t* get_address_of_sceneIndex_2() { return &___sceneIndex_2; }
	inline void set_sceneIndex_2(int32_t value)
	{
		___sceneIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971, ___U3CU3E4__this_3)); }
	inline loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline loadingBar_tBEFE160470869292B491407F050DE1816C56EECD ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoperationU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971, ___U3CoperationU3E5__2_4)); }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * get_U3CoperationU3E5__2_4() const { return ___U3CoperationU3E5__2_4; }
	inline AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D ** get_address_of_U3CoperationU3E5__2_4() { return &___U3CoperationU3E5__2_4; }
	inline void set_U3CoperationU3E5__2_4(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * value)
	{
		___U3CoperationU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoperationU3E5__2_4), (void*)value);
	}
};


// menu_in_book_<wait_for_load>d__2
struct  U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703  : public RuntimeObject
{
public:
	// System.Int32 menu_in_book_<wait_for_load>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object menu_in_book_<wait_for_load>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// menu_in_book menu_in_book_<wait_for_load>d__2::<>4__this
	menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703, ___U3CU3E4__this_2)); }
	inline menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// menu_in_cam_<wait_for_load>d__2
struct  U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4  : public RuntimeObject
{
public:
	// System.Int32 menu_in_cam_<wait_for_load>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object menu_in_cam_<wait_for_load>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// menu_in_cam menu_in_cam_<wait_for_load>d__2::<>4__this
	menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4, ___U3CU3E4__this_2)); }
	inline menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// menu_in_music_<wait_for_load>d__2
struct  U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB  : public RuntimeObject
{
public:
	// System.Int32 menu_in_music_<wait_for_load>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object menu_in_music_<wait_for_load>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// menu_in_music menu_in_music_<wait_for_load>d__2::<>4__this
	menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB, ___U3CU3E4__this_2)); }
	inline menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// menu_load_<wait_for_scene>d__1
struct  U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699  : public RuntimeObject
{
public:
	// System.Int32 menu_load_<wait_for_scene>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object menu_load_<wait_for_scene>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// menu_out_cam_<wait_for_scene>d__3
struct  U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE  : public RuntimeObject
{
public:
	// System.Int32 menu_out_cam_<wait_for_scene>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object menu_out_cam_<wait_for_scene>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// menu_out_cam menu_out_cam_<wait_for_scene>d__3::<>4__this
	menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE, ___U3CU3E4__this_2)); }
	inline menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// menu_out_d_<wait_for_scene>d__5
struct  U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759  : public RuntimeObject
{
public:
	// System.Int32 menu_out_d_<wait_for_scene>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object menu_out_d_<wait_for_scene>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// menu_out_d menu_out_d_<wait_for_scene>d__5::<>4__this
	menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759, ___U3CU3E4__this_2)); }
	inline menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// music_load_<wait_for_scene>d__1
struct  U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B  : public RuntimeObject
{
public:
	// System.Int32 music_load_<wait_for_scene>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object music_load_<wait_for_scene>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// open_cv_out_static_cam_<wait_for_scene>d__2
struct  U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D  : public RuntimeObject
{
public:
	// System.Int32 open_cv_out_static_cam_<wait_for_scene>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object open_cv_out_static_cam_<wait_for_scene>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// open_cv_out_static_cam open_cv_out_static_cam_<wait_for_scene>d__2::<>4__this
	open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D, ___U3CU3E4__this_2)); }
	inline open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// opencv_in_<wait_for_load>d__2
struct  U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A  : public RuntimeObject
{
public:
	// System.Int32 opencv_in_<wait_for_load>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object opencv_in_<wait_for_load>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// opencv_in opencv_in_<wait_for_load>d__2::<>4__this
	opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A, ___U3CU3E4__this_2)); }
	inline opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// opencv_out_<wait_for_scene>d__3
struct  U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52  : public RuntimeObject
{
public:
	// System.Int32 opencv_out_<wait_for_scene>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object opencv_out_<wait_for_scene>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// opencv_out opencv_out_<wait_for_scene>d__3::<>4__this
	opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52, ___U3CU3E4__this_2)); }
	inline opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline opencv_out_tF344D77317A419A584CDEC59D69614437764F106 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// splashIntro_<wait_for_intro>d__2
struct  U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED  : public RuntimeObject
{
public:
	// System.Int32 splashIntro_<wait_for_intro>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object splashIntro_<wait_for_intro>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// splashIntro splashIntro_<wait_for_intro>d__2::<>4__this
	splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED, ___U3CU3E4__this_2)); }
	inline splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

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


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};


// UnityEngine.Resolution
struct  Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

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
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

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

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider_Direction
struct  Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E 
{
public:
	// System.Int32 UnityEngine.UI.Slider_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// cam_load
struct  cam_load_tF76D93D06003D14C69F4973D86FAEA5E32936DB4  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// loadCQ
struct  loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject loadCQ::loadingScreen
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___loadingScreen_4;
	// UnityEngine.UI.Slider loadCQ::slider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___slider_5;

public:
	inline static int32_t get_offset_of_loadingScreen_4() { return static_cast<int32_t>(offsetof(loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121, ___loadingScreen_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_loadingScreen_4() const { return ___loadingScreen_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_loadingScreen_4() { return &___loadingScreen_4; }
	inline void set_loadingScreen_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___loadingScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121, ___slider_5)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_slider_5() const { return ___slider_5; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_5), (void*)value);
	}
};


// loadingBar
struct  loadingBar_tBEFE160470869292B491407F050DE1816C56EECD  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject loadingBar::loadingScreen
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___loadingScreen_4;
	// UnityEngine.UI.Slider loadingBar::slider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___slider_5;

public:
	inline static int32_t get_offset_of_loadingScreen_4() { return static_cast<int32_t>(offsetof(loadingBar_tBEFE160470869292B491407F050DE1816C56EECD, ___loadingScreen_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_loadingScreen_4() const { return ___loadingScreen_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_loadingScreen_4() { return &___loadingScreen_4; }
	inline void set_loadingScreen_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___loadingScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadingScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_slider_5() { return static_cast<int32_t>(offsetof(loadingBar_tBEFE160470869292B491407F050DE1816C56EECD, ___slider_5)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_slider_5() const { return ___slider_5; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_slider_5() { return &___slider_5; }
	inline void set_slider_5(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___slider_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_5), (void*)value);
	}
};


// menu_in_book
struct  menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject menu_in_book::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_4;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC, ___canvas_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}
};


// menu_in_cam
struct  menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject menu_in_cam::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_4;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F, ___canvas_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}
};


// menu_in_music
struct  menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject menu_in_music::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_4;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528, ___canvas_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}
};


// menu_load
struct  menu_load_tB61E2C5802B2EE97BD2BECF4E3225B42B6A051CB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// menu_out_book
struct  menu_out_book_tA5AE4DA2BB343B57F222B8C50D90E97CFEED6422  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject menu_out_book::anims
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___anims_4;

public:
	inline static int32_t get_offset_of_anims_4() { return static_cast<int32_t>(offsetof(menu_out_book_tA5AE4DA2BB343B57F222B8C50D90E97CFEED6422, ___anims_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_anims_4() const { return ___anims_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_anims_4() { return &___anims_4; }
	inline void set_anims_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___anims_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anims_4), (void*)value);
	}
};


// menu_out_cam
struct  menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject menu_out_cam::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_4;
	// System.Int32 menu_out_cam::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865, ___canvas_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// menu_out_d
struct  menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject menu_out_d::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_4;
	// UnityEngine.GameObject menu_out_d::cam
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___cam_5;
	// UnityEngine.GameObject menu_out_d::arCamera
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___arCamera_6;
	// System.Int32 menu_out_d::index
	int32_t ___index_7;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF, ___canvas_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_cam_5() { return static_cast<int32_t>(offsetof(menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF, ___cam_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_cam_5() const { return ___cam_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_cam_5() { return &___cam_5; }
	inline void set_cam_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___cam_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_5), (void*)value);
	}

	inline static int32_t get_offset_of_arCamera_6() { return static_cast<int32_t>(offsetof(menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF, ___arCamera_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_arCamera_6() const { return ___arCamera_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_arCamera_6() { return &___arCamera_6; }
	inline void set_arCamera_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___arCamera_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arCamera_6), (void*)value);
	}

	inline static int32_t get_offset_of_index_7() { return static_cast<int32_t>(offsetof(menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF, ___index_7)); }
	inline int32_t get_index_7() const { return ___index_7; }
	inline int32_t* get_address_of_index_7() { return &___index_7; }
	inline void set_index_7(int32_t value)
	{
		___index_7 = value;
	}
};


// menu_out_music
struct  menu_out_music_t657518243B5702F35540D6F9D83DA814ABBB23B7  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject menu_out_music::anims
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___anims_4;

public:
	inline static int32_t get_offset_of_anims_4() { return static_cast<int32_t>(offsetof(menu_out_music_t657518243B5702F35540D6F9D83DA814ABBB23B7, ___anims_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_anims_4() const { return ___anims_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_anims_4() { return &___anims_4; }
	inline void set_anims_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___anims_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anims_4), (void*)value);
	}
};


// music_load
struct  music_load_t7F4798206A330341B2D72101E5AACA04CF7B84A0  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// music_player
struct  music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 music_player::music
	int32_t ___music_4;
	// UnityEngine.AudioSource music_player::audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource_5;
	// UnityEngine.AudioClip[] music_player::clipNames
	AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* ___clipNames_6;
	// UnityEngine.UI.Slider music_player::musicLength
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___musicLength_7;
	// System.Boolean music_player::stop
	bool ___stop_8;
	// UnityEngine.GameObject music_player::anims
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___anims_9;

public:
	inline static int32_t get_offset_of_music_4() { return static_cast<int32_t>(offsetof(music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969, ___music_4)); }
	inline int32_t get_music_4() const { return ___music_4; }
	inline int32_t* get_address_of_music_4() { return &___music_4; }
	inline void set_music_4(int32_t value)
	{
		___music_4 = value;
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969, ___audioSource_5)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}

	inline static int32_t get_offset_of_clipNames_6() { return static_cast<int32_t>(offsetof(music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969, ___clipNames_6)); }
	inline AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* get_clipNames_6() const { return ___clipNames_6; }
	inline AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2** get_address_of_clipNames_6() { return &___clipNames_6; }
	inline void set_clipNames_6(AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* value)
	{
		___clipNames_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipNames_6), (void*)value);
	}

	inline static int32_t get_offset_of_musicLength_7() { return static_cast<int32_t>(offsetof(music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969, ___musicLength_7)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_musicLength_7() const { return ___musicLength_7; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_musicLength_7() { return &___musicLength_7; }
	inline void set_musicLength_7(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___musicLength_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___musicLength_7), (void*)value);
	}

	inline static int32_t get_offset_of_stop_8() { return static_cast<int32_t>(offsetof(music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969, ___stop_8)); }
	inline bool get_stop_8() const { return ___stop_8; }
	inline bool* get_address_of_stop_8() { return &___stop_8; }
	inline void set_stop_8(bool value)
	{
		___stop_8 = value;
	}

	inline static int32_t get_offset_of_anims_9() { return static_cast<int32_t>(offsetof(music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969, ___anims_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_anims_9() const { return ___anims_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_anims_9() { return &___anims_9; }
	inline void set_anims_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___anims_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anims_9), (void*)value);
	}
};


// open_cv_out_static_cam
struct  open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 open_cv_out_static_cam::index
	int32_t ___index_4;

public:
	inline static int32_t get_offset_of_index_4() { return static_cast<int32_t>(offsetof(open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB, ___index_4)); }
	inline int32_t get_index_4() const { return ___index_4; }
	inline int32_t* get_address_of_index_4() { return &___index_4; }
	inline void set_index_4(int32_t value)
	{
		___index_4 = value;
	}
};


// opencv_in
struct  opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject opencv_in::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_4;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E, ___canvas_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}
};


// opencv_out
struct  opencv_out_tF344D77317A419A584CDEC59D69614437764F106  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject opencv_out::canvas
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___canvas_4;
	// System.Int32 opencv_out::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_canvas_4() { return static_cast<int32_t>(offsetof(opencv_out_tF344D77317A419A584CDEC59D69614437764F106, ___canvas_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_canvas_4() const { return ___canvas_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_canvas_4() { return &___canvas_4; }
	inline void set_canvas_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___canvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(opencv_out_tF344D77317A419A584CDEC59D69614437764F106, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// resize_screen
struct  resize_screen_t79A026E0E5D65451A1BEBBCAE2BAE8384AF64591  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single resize_screen::screenHeight
	float ___screenHeight_4;
	// System.Single resize_screen::screenWidth
	float ___screenWidth_5;
	// System.Single resize_screen::aspectRatio
	float ___aspectRatio_6;
	// UnityEngine.Transform resize_screen::panel
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___panel_7;

public:
	inline static int32_t get_offset_of_screenHeight_4() { return static_cast<int32_t>(offsetof(resize_screen_t79A026E0E5D65451A1BEBBCAE2BAE8384AF64591, ___screenHeight_4)); }
	inline float get_screenHeight_4() const { return ___screenHeight_4; }
	inline float* get_address_of_screenHeight_4() { return &___screenHeight_4; }
	inline void set_screenHeight_4(float value)
	{
		___screenHeight_4 = value;
	}

	inline static int32_t get_offset_of_screenWidth_5() { return static_cast<int32_t>(offsetof(resize_screen_t79A026E0E5D65451A1BEBBCAE2BAE8384AF64591, ___screenWidth_5)); }
	inline float get_screenWidth_5() const { return ___screenWidth_5; }
	inline float* get_address_of_screenWidth_5() { return &___screenWidth_5; }
	inline void set_screenWidth_5(float value)
	{
		___screenWidth_5 = value;
	}

	inline static int32_t get_offset_of_aspectRatio_6() { return static_cast<int32_t>(offsetof(resize_screen_t79A026E0E5D65451A1BEBBCAE2BAE8384AF64591, ___aspectRatio_6)); }
	inline float get_aspectRatio_6() const { return ___aspectRatio_6; }
	inline float* get_address_of_aspectRatio_6() { return &___aspectRatio_6; }
	inline void set_aspectRatio_6(float value)
	{
		___aspectRatio_6 = value;
	}

	inline static int32_t get_offset_of_panel_7() { return static_cast<int32_t>(offsetof(resize_screen_t79A026E0E5D65451A1BEBBCAE2BAE8384AF64591, ___panel_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_panel_7() const { return ___panel_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_panel_7() { return &___panel_7; }
	inline void set_panel_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___panel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_7), (void*)value);
	}
};


// splashIntro
struct  splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single splashIntro::waitTime
	float ___waitTime_4;

public:
	inline static int32_t get_offset_of_waitTime_4() { return static_cast<int32_t>(offsetof(splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB, ___waitTime_4)); }
	inline float get_waitTime_4() const { return ___waitTime_4; }
	inline float* get_address_of_waitTime_4() { return &___waitTime_4; }
	inline void set_waitTime_4(float value)
	{
		___waitTime_4 = value;
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_7;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_13;
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
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_7)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_9)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_10)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_13)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_19)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Slider
struct  Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider_Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider_SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillRect_20)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleRect_21)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_OnValueChanged_27)); }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillImage_28)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillTransform_29)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillContainerRect_30)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleTransform_31)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleContainerRect_32)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Offset_33)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * m_Items[1];

public:
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Collections.IEnumerator cam_load::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cam_load_wait_for_scene_m8C01F03C544CC7046245573952572469470C4501 (cam_load_tF76D93D06003D14C69F4973D86FAEA5E32936DB4 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void cam_load/<wait_for_scene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1__ctor_m8105546641D29FD85D7EC82BADDFCCE5D0AB9FC1 (U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator loadCQ::LoadAsynchronously(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* loadCQ_LoadAsynchronously_mD0AD16B8CBCA391211BC144050A9A8B4006F9E47 (loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * __this, int32_t ___sceneIndex0, const RuntimeMethod* method);
// System.Void loadCQ/<LoadAsynchronously>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3__ctor_m02D8B6F22F3A7D4F43961B2B893E2BCD9CA88CEA (U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * SceneManager_LoadSceneAsync_mBB1934F97E71D72F2EF5213F7963C933188EF1D2 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_m27F7D885AF1A989B993199181DE70D7B0F1E3984 (AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m2A08EE3D38FD9FE81F2D619FA66255B6F61DAB54 (AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator loadingBar::LoadAsynchronously(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* loadingBar_LoadAsynchronously_m71FE456B4152245FB6B10EBA5F619CC2892C4E75 (loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * __this, int32_t ___sceneIndex0, const RuntimeMethod* method);
// System.Void loadingBar/<LoadAsynchronously>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3__ctor_m45550AE6E472D5BE9B92073E858D866E992828A7 (U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator menu_in_book::wait_for_load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_in_book_wait_for_load_mF927EACEF16CC26BF7133DD921057BE1A442429F (menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * __this, const RuntimeMethod* method);
// System.Void menu_in_book/<wait_for_load>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2__ctor_m610A4046DAC1B2EB3B8CBCA5D8D5BBBFCF7118AD (U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator menu_in_cam::wait_for_load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_in_cam_wait_for_load_m8DD1F4B6C7CF2195FCF644C8C3451837A5D7D993 (menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * __this, const RuntimeMethod* method);
// System.Void menu_in_cam/<wait_for_load>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2__ctor_m4E9CCEA2FB8968960D59B77C88EA7EFFDABFBD62 (U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator menu_in_music::wait_for_load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_in_music_wait_for_load_m90F8AADF55EF71D8397A5D56217333A4DEA6620C (menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * __this, const RuntimeMethod* method);
// System.Void menu_in_music/<wait_for_load>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2__ctor_m456F8E2B2B2C5EF7E833C16945E0FD23BC7DD5D9 (U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator menu_load::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_load_wait_for_scene_m631D9804B07DA8DE768D5EE89E0F0B34A9602FD4 (menu_load_tB61E2C5802B2EE97BD2BECF4E3225B42B6A051CB * __this, const RuntimeMethod* method);
// System.Void menu_load/<wait_for_scene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1__ctor_mE5DF16273A0452AFD4967A435F1D2ED8B89A7F58 (U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5 (String_t* ___tag0, const RuntimeMethod* method);
// System.Collections.IEnumerator menu_out_cam::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_out_cam_wait_for_scene_m9C1DBB8837619491769C5E99FD7B79D7DD13150A (menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * __this, const RuntimeMethod* method);
// System.Void menu_out_cam/<wait_for_scene>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__3__ctor_m46E202BD29AA7F3297E670AA4FDDBAA457F098E4 (U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator menu_out_d::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_out_d_wait_for_scene_m788E20DC457AD404B721C0FE9A4B017D113C0AE0 (menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * __this, const RuntimeMethod* method);
// System.Void menu_out_d/<wait_for_scene>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__5__ctor_m6EAA5F0177CD8E88D25F2D79C784D1721BBB895A (U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator music_load::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* music_load_wait_for_scene_m4FF0993566EFBCFD55F050A9179226BF04882E5C (music_load_t7F4798206A330341B2D72101E5AACA04CF7B84A0 * __this, const RuntimeMethod* method);
// System.Void music_load/<wait_for_scene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1__ctor_m40D22C5B7998F0266BC39F5FBB84DD79F19983EE (U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317 (AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m3517BF6A1127298F11582535887B6FE5AA7C57D3 (Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void music_player::StartAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_player_StartAudio_mACD0C24B91D95DC313C4C700D06927CBF3BCB240 (music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969 * __this, int32_t ___changeMusic0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Pause_m279B116A62699983F6B5347FD4770358D7794F3C (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator open_cv_out_static_cam::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* open_cv_out_static_cam_wait_for_scene_mA69F2B24F11DCEFA1A178438BE06C4EB95FCF92A (open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * __this, const RuntimeMethod* method);
// System.Void open_cv_out_static_cam/<wait_for_scene>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__2__ctor_m0CA9720C385BFE07D8F8BE5C510F542B3DF72DE2 (U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator opencv_in::wait_for_load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencv_in_wait_for_load_m5930E1B5E704389057C20ABA24399238EEC98BB1 (opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * __this, const RuntimeMethod* method);
// System.Void opencv_in/<wait_for_load>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2__ctor_m9135488DA3EB7A4B8269BB2EFD456F0AFF5F0FB0 (U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator opencv_out::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencv_out_wait_for_scene_m9F86106B9A5F3DC9F3952C3B4A6806DDE1C1ADB6 (opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * __this, const RuntimeMethod* method);
// System.Void opencv_out/<wait_for_scene>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__3__ctor_mAE7E094BFCC6843CCED0E2A1F10F3D70ECEEA6EF (U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  Screen_get_currentResolution_m28049B983AB45AC9321A7A8F5EBA5C0A0A65D22A (const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_height_m5141CDF13E8C1ADEF47AEB5155AD72BD13121CCD (Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_width_m6254A0489C2CCB1574E4D98E45009DDE5212655C (Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Collections.IEnumerator splashIntro::wait_for_intro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* splashIntro_wait_for_intro_mF26EBE044892D8BD8E97C30DEC504375B7FACEB0 (splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * __this, const RuntimeMethod* method);
// System.Void splashIntro/<wait_for_intro>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_introU3Ed__2__ctor_m1B8054220E974E9C390564ADD21A1D01DE25644B (U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void cam_load::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cam_load_Awake_mA7D98E7DCA41DC4D0B6DDD7A22CB6C640AA03994 (cam_load_tF76D93D06003D14C69F4973D86FAEA5E32936DB4 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_scene());
		RuntimeObject* L_0 = cam_load_wait_for_scene_m8C01F03C544CC7046245573952572469470C4501(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator cam_load::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cam_load_wait_for_scene_m8C01F03C544CC7046245573952572469470C4501 (cam_load_tF76D93D06003D14C69F4973D86FAEA5E32936DB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (cam_load_wait_for_scene_m8C01F03C544CC7046245573952572469470C4501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 * L_0 = (U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 *)il2cpp_codegen_object_new(U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3_il2cpp_TypeInfo_var);
		U3Cwait_for_sceneU3Ed__1__ctor_m8105546641D29FD85D7EC82BADDFCCE5D0AB9FC1(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void cam_load::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void cam_load__ctor_mB93E4CB0F1A985E4EB003A0D3283938CA0421344 (cam_load_tF76D93D06003D14C69F4973D86FAEA5E32936DB4 * __this, const RuntimeMethod* method)
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
// System.Void cam_load_<wait_for_scene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1__ctor_m8105546641D29FD85D7EC82BADDFCCE5D0AB9FC1 (U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void cam_load_<wait_for_scene>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1_System_IDisposable_Dispose_mD32343FB20C7071EBEB878F5DEAEAF88206EDDA9 (U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean cam_load_<wait_for_scene>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_sceneU3Ed__1_MoveNext_m3D02C2BD032DEB05857C3A34638A51737E4EEE4B (U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__1_MoveNext_m3D02C2BD032DEB05857C3A34638A51737E4EEE4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(4.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_3 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_3, (4.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(2);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(2, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object cam_load_<wait_for_scene>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF4805138287C0ED31D8BBDFBFEA22AAD6BEF6B6E (U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void cam_load_<wait_for_scene>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m79E419B46A1575592B7780AB0B5B939C21AFB6F3 (U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m79E419B46A1575592B7780AB0B5B939C21AFB6F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m79E419B46A1575592B7780AB0B5B939C21AFB6F3_RuntimeMethod_var);
	}
}
// System.Object cam_load_<wait_for_scene>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_get_Current_m8B27D2FDB41EDEAC4020F7512470E5F511896D1F (U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void loadCQ::OnTrackingFound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadCQ_OnTrackingFound_mB07894E63B6C1A486D504F49A65269D5C8DF29E6 (loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(LoadAsynchronously(4));
		RuntimeObject* L_0 = loadCQ_LoadAsynchronously_mD0AD16B8CBCA391211BC144050A9A8B4006F9E47(__this, 4, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator loadCQ::LoadAsynchronously(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* loadCQ_LoadAsynchronously_mD0AD16B8CBCA391211BC144050A9A8B4006F9E47 (loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * __this, int32_t ___sceneIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (loadCQ_LoadAsynchronously_mD0AD16B8CBCA391211BC144050A9A8B4006F9E47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * L_0 = (U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 *)il2cpp_codegen_object_new(U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053_il2cpp_TypeInfo_var);
		U3CLoadAsynchronouslyU3Ed__3__ctor_m02D8B6F22F3A7D4F43961B2B893E2BCD9CA88CEA(L_0, 0, /*hidden argument*/NULL);
		U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * L_2 = L_1;
		int32_t L_3 = ___sceneIndex0;
		NullCheck(L_2);
		L_2->set_sceneIndex_2(L_3);
		return L_2;
	}
}
// System.Void loadCQ::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadCQ__ctor_m2FD70F7B98CE055E203180B619A5AF447A268051 (loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * __this, const RuntimeMethod* method)
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
// System.Void loadCQ_<LoadAsynchronously>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3__ctor_m02D8B6F22F3A7D4F43961B2B893E2BCD9CA88CEA (U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void loadCQ_<LoadAsynchronously>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3_System_IDisposable_Dispose_m08C14677D035B6C2E22F6A61E0FADBE168101883 (U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean loadCQ_<LoadAsynchronously>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsynchronouslyU3Ed__3_MoveNext_m4C6D739389B90607D7B6DB950B531BC71570A5D7 (U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadAsynchronouslyU3Ed__3_MoveNext_m4C6D739389B90607D7B6DB950B531BC71570A5D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AsyncOperation operation = SceneManager.LoadSceneAsync(sceneIndex);
		int32_t L_4 = __this->get_sceneIndex_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_5 = SceneManager_LoadSceneAsync_mBB1934F97E71D72F2EF5213F7963C933188EF1D2(L_4, /*hidden argument*/NULL);
		__this->set_U3CoperationU3E5__2_4(L_5);
		// loadingScreen.SetActive(true);
		loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = L_6->get_loadingScreen_4();
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		goto IL_0077;
	}

IL_003d:
	{
		// float progress = Mathf.Clamp01(operation.progress / .9f);
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_8 = __this->get_U3CoperationU3E5__2_4();
		NullCheck(L_8);
		float L_9 = AsyncOperation_get_progress_m27F7D885AF1A989B993199181DE70D7B0F1E3984(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_9/(float)(0.9f))), /*hidden argument*/NULL);
		V_2 = L_10;
		// slider.value = progress;
		loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * L_11 = V_1;
		NullCheck(L_11);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_12 = L_11->get_slider_5();
		float L_13 = V_2;
		NullCheck(L_12);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_13);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0070:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0077:
	{
		// while (!operation.isDone)
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_14 = __this->get_U3CoperationU3E5__2_4();
		NullCheck(L_14);
		bool L_15 = AsyncOperation_get_isDone_m2A08EE3D38FD9FE81F2D619FA66255B6F61DAB54(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object loadCQ_<LoadAsynchronously>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAsynchronouslyU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0FDBB7DAA1E2CF43EC926A13E1F269A7F2CF3C18 (U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void loadCQ_<LoadAsynchronously>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_m543844711EF9273F3F1896035EDE0742142DD2E4 (U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_m543844711EF9273F3F1896035EDE0742142DD2E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_m543844711EF9273F3F1896035EDE0742142DD2E4_RuntimeMethod_var);
	}
}
// System.Object loadCQ_<LoadAsynchronously>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_get_Current_m1A001980876281EECE8BDB9441258369F68CF8E4 (U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void loadingBar::LoadLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingBar_LoadLevel_m415F3BCE2542481C61EC603EEBB9047DE714D016 (loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * __this, int32_t ___sceneIndex0, const RuntimeMethod* method)
{
	{
		// StartCoroutine(LoadAsynchronously(sceneIndex));
		int32_t L_0 = ___sceneIndex0;
		RuntimeObject* L_1 = loadingBar_LoadAsynchronously_m71FE456B4152245FB6B10EBA5F619CC2892C4E75(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator loadingBar::LoadAsynchronously(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* loadingBar_LoadAsynchronously_m71FE456B4152245FB6B10EBA5F619CC2892C4E75 (loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * __this, int32_t ___sceneIndex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (loadingBar_LoadAsynchronously_m71FE456B4152245FB6B10EBA5F619CC2892C4E75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * L_0 = (U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 *)il2cpp_codegen_object_new(U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971_il2cpp_TypeInfo_var);
		U3CLoadAsynchronouslyU3Ed__3__ctor_m45550AE6E472D5BE9B92073E858D866E992828A7(L_0, 0, /*hidden argument*/NULL);
		U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * L_2 = L_1;
		int32_t L_3 = ___sceneIndex0;
		NullCheck(L_2);
		L_2->set_sceneIndex_2(L_3);
		return L_2;
	}
}
// System.Void loadingBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void loadingBar__ctor_m2F410279B29DFB7EC9DA9D22C8DBF3E75AD3F5F0 (loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * __this, const RuntimeMethod* method)
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
// System.Void loadingBar_<LoadAsynchronously>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3__ctor_m45550AE6E472D5BE9B92073E858D866E992828A7 (U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void loadingBar_<LoadAsynchronously>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3_System_IDisposable_Dispose_mFFBF9D25DC905B7352C06307D00997DB5CBB23C4 (U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean loadingBar_<LoadAsynchronously>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAsynchronouslyU3Ed__3_MoveNext_m7C905BDEC390878ABB6AF2D197F1004485343BF7 (U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadAsynchronouslyU3Ed__3_MoveNext_m7C905BDEC390878ABB6AF2D197F1004485343BF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0070;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// AsyncOperation operation = SceneManager.LoadSceneAsync(sceneIndex);
		int32_t L_4 = __this->get_sceneIndex_2();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_5 = SceneManager_LoadSceneAsync_mBB1934F97E71D72F2EF5213F7963C933188EF1D2(L_4, /*hidden argument*/NULL);
		__this->set_U3CoperationU3E5__2_4(L_5);
		// loadingScreen.SetActive(true);
		loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * L_6 = V_1;
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = L_6->get_loadingScreen_4();
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		goto IL_0077;
	}

IL_003d:
	{
		// float progress = Mathf.Clamp01(operation.progress / .9f);
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_8 = __this->get_U3CoperationU3E5__2_4();
		NullCheck(L_8);
		float L_9 = AsyncOperation_get_progress_m27F7D885AF1A989B993199181DE70D7B0F1E3984(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp01_m1E5F736941A7E6DC4DBCA88A1E38FE9FBFE0C42B(((float)((float)L_9/(float)(0.9f))), /*hidden argument*/NULL);
		V_2 = L_10;
		// slider.value = progress;
		loadingBar_tBEFE160470869292B491407F050DE1816C56EECD * L_11 = V_1;
		NullCheck(L_11);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_12 = L_11->get_slider_5();
		float L_13 = V_2;
		NullCheck(L_12);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_12, L_13);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0070:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0077:
	{
		// while (!operation.isDone)
		AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * L_14 = __this->get_U3CoperationU3E5__2_4();
		NullCheck(L_14);
		bool L_15 = AsyncOperation_get_isDone_m2A08EE3D38FD9FE81F2D619FA66255B6F61DAB54(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_003d;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object loadingBar_<LoadAsynchronously>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAsynchronouslyU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1F1A9AA8809E46E1C80DD74FD29BC288DC4D1818 (U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void loadingBar_<LoadAsynchronously>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mFFA87AF8D9CFE9CB3CBE3F67446810E8A057BF21 (U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mFFA87AF8D9CFE9CB3CBE3F67446810E8A057BF21_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mFFA87AF8D9CFE9CB3CBE3F67446810E8A057BF21_RuntimeMethod_var);
	}
}
// System.Object loadingBar_<LoadAsynchronously>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_get_Current_m2E660E8AF3E825472F21479F7A3490F6662B4467 (U3CLoadAsynchronouslyU3Ed__3_tED98DA7B749DFB68890A0B65B0E09A26EE7A1971 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void menu_in_book::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_in_book_Awake_mB58657E745359D940F340419854F361B99FF2BE1 (menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_load());
		RuntimeObject* L_0 = menu_in_book_wait_for_load_mF927EACEF16CC26BF7133DD921057BE1A442429F(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator menu_in_book::wait_for_load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_in_book_wait_for_load_mF927EACEF16CC26BF7133DD921057BE1A442429F (menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_in_book_wait_for_load_mF927EACEF16CC26BF7133DD921057BE1A442429F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 * L_0 = (U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 *)il2cpp_codegen_object_new(U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703_il2cpp_TypeInfo_var);
		U3Cwait_for_loadU3Ed__2__ctor_m610A4046DAC1B2EB3B8CBCA5D8D5BBBFCF7118AD(L_0, 0, /*hidden argument*/NULL);
		U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void menu_in_book::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_in_book__ctor_mCB2E3461C4A44DD78FDABDA6A89598D3885690B0 (menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * __this, const RuntimeMethod* method)
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
// System.Void menu_in_book_<wait_for_load>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2__ctor_m610A4046DAC1B2EB3B8CBCA5D8D5BBBFCF7118AD (U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void menu_in_book_<wait_for_load>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2_System_IDisposable_Dispose_m4B84980F16AF07E6F598177CDC6F4DAFF5B13418 (U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean menu_in_book_<wait_for_load>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_loadU3Ed__2_MoveNext_mAA14FA264AFC41A2093912AC4FE2D909A7B004AF (U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_loadU3Ed__2_MoveNext_mAA14FA264AFC41A2093912AC4FE2D909A7B004AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canvas.gameObject.SetActive(true);
		menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = L_5->get_canvas_4();
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		// this.gameObject.SetActive(false);
		menu_in_book_tBA8155B84B98F2DBAAD3787D3364F6B3A5376FDC * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object menu_in_book_<wait_for_load>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_loadU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5282000FAD39FB4674683B1F9A4CFE10F3F802D7 (U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void menu_in_book_<wait_for_load>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m88B1370BE877BE6D67813DC69246CA0AE5D01F07 (U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m88B1370BE877BE6D67813DC69246CA0AE5D01F07_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m88B1370BE877BE6D67813DC69246CA0AE5D01F07_RuntimeMethod_var);
	}
}
// System.Object menu_in_book_<wait_for_load>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_get_Current_mF551CA5032218D3DA779CA06731A1416ED662A2B (U3Cwait_for_loadU3Ed__2_t5798B6FB52C031439118C212AA13C1CF07606703 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void menu_in_cam::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_in_cam_Awake_m26A83F9F898A7F72DCDD1AE222BC18A1D6B90D73 (menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_load());
		RuntimeObject* L_0 = menu_in_cam_wait_for_load_m8DD1F4B6C7CF2195FCF644C8C3451837A5D7D993(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator menu_in_cam::wait_for_load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_in_cam_wait_for_load_m8DD1F4B6C7CF2195FCF644C8C3451837A5D7D993 (menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_in_cam_wait_for_load_m8DD1F4B6C7CF2195FCF644C8C3451837A5D7D993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 * L_0 = (U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 *)il2cpp_codegen_object_new(U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4_il2cpp_TypeInfo_var);
		U3Cwait_for_loadU3Ed__2__ctor_m4E9CCEA2FB8968960D59B77C88EA7EFFDABFBD62(L_0, 0, /*hidden argument*/NULL);
		U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void menu_in_cam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_in_cam__ctor_m7A1BAA0E01F704B62E8BB57C116DF9D79B43C5D9 (menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * __this, const RuntimeMethod* method)
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
// System.Void menu_in_cam_<wait_for_load>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2__ctor_m4E9CCEA2FB8968960D59B77C88EA7EFFDABFBD62 (U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void menu_in_cam_<wait_for_load>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2_System_IDisposable_Dispose_mC25A5A465300652F3E846DEC7CDBBAFFB371EB57 (U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean menu_in_cam_<wait_for_load>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_loadU3Ed__2_MoveNext_m6FA3B9C5379FC8FFF39F4BA13E7DCC6EFE07311D (U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_loadU3Ed__2_MoveNext_m6FA3B9C5379FC8FFF39F4BA13E7DCC6EFE07311D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canvas.gameObject.SetActive(true);
		menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = L_5->get_canvas_4();
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		// this.gameObject.SetActive(false);
		menu_in_cam_t38036408C79637DF0D57D0C3D83F31104B28576F * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object menu_in_cam_<wait_for_load>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_loadU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA40C4DF07CBA3D1BDDFAB17C58CE283E87265046 (U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void menu_in_cam_<wait_for_load>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_mC770269F9DD47600996404860507FA06A1832239 (U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_mC770269F9DD47600996404860507FA06A1832239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_mC770269F9DD47600996404860507FA06A1832239_RuntimeMethod_var);
	}
}
// System.Object menu_in_cam_<wait_for_load>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_get_Current_m4A31D6A44154E3766445B7CD5FE76D72B14A52EF (U3Cwait_for_loadU3Ed__2_tC9A8A67C85E9FFEA3502CB4035A27A861483A9C4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void menu_in_music::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_in_music_Awake_m58B7C3E6608BD27A70EF010F23B2B47E800F2790 (menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_load());
		RuntimeObject* L_0 = menu_in_music_wait_for_load_m90F8AADF55EF71D8397A5D56217333A4DEA6620C(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator menu_in_music::wait_for_load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_in_music_wait_for_load_m90F8AADF55EF71D8397A5D56217333A4DEA6620C (menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_in_music_wait_for_load_m90F8AADF55EF71D8397A5D56217333A4DEA6620C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB * L_0 = (U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB *)il2cpp_codegen_object_new(U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB_il2cpp_TypeInfo_var);
		U3Cwait_for_loadU3Ed__2__ctor_m456F8E2B2B2C5EF7E833C16945E0FD23BC7DD5D9(L_0, 0, /*hidden argument*/NULL);
		U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void menu_in_music::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_in_music__ctor_m9357811156034740389E9A6C20E7081FB8F2B6F6 (menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * __this, const RuntimeMethod* method)
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
// System.Void menu_in_music_<wait_for_load>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2__ctor_m456F8E2B2B2C5EF7E833C16945E0FD23BC7DD5D9 (U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void menu_in_music_<wait_for_load>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2_System_IDisposable_Dispose_mBAD3786250B74B32AD127914B5A07CB3433478D0 (U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean menu_in_music_<wait_for_load>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_loadU3Ed__2_MoveNext_m22CAD5A347507736F1DCBBEC1C5EFA87C1803DD2 (U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_loadU3Ed__2_MoveNext_m22CAD5A347507736F1DCBBEC1C5EFA87C1803DD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canvas.gameObject.SetActive(true);
		menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = L_5->get_canvas_4();
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		// this.gameObject.SetActive(false);
		menu_in_music_t2455DB67CF16ED2766F4B8CBBA3E385B82EBE528 * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object menu_in_music_<wait_for_load>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_loadU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mDE347A9B37401DCBBB88F6B244666C492A614B5D (U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void menu_in_music_<wait_for_load>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m8A4E4CCA47E71C0EDA0FAD53D31B20A282425A59 (U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m8A4E4CCA47E71C0EDA0FAD53D31B20A282425A59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m8A4E4CCA47E71C0EDA0FAD53D31B20A282425A59_RuntimeMethod_var);
	}
}
// System.Object menu_in_music_<wait_for_load>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_get_Current_m756EC9BEEBC25A303D43708FB1432F59AD061240 (U3Cwait_for_loadU3Ed__2_tC0E75E2F661A3DD12CB92459FD8B1056596155BB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void menu_load::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_load_Awake_mAA1D7AC45C087EF3B595708A763816343E3A3DA5 (menu_load_tB61E2C5802B2EE97BD2BECF4E3225B42B6A051CB * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_scene());
		RuntimeObject* L_0 = menu_load_wait_for_scene_m631D9804B07DA8DE768D5EE89E0F0B34A9602FD4(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator menu_load::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_load_wait_for_scene_m631D9804B07DA8DE768D5EE89E0F0B34A9602FD4 (menu_load_tB61E2C5802B2EE97BD2BECF4E3225B42B6A051CB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_load_wait_for_scene_m631D9804B07DA8DE768D5EE89E0F0B34A9602FD4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699 * L_0 = (U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699 *)il2cpp_codegen_object_new(U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699_il2cpp_TypeInfo_var);
		U3Cwait_for_sceneU3Ed__1__ctor_mE5DF16273A0452AFD4967A435F1D2ED8B89A7F58(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void menu_load::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_load__ctor_mABD3A407C850555155F501F2096FD24162A1ABDB (menu_load_tB61E2C5802B2EE97BD2BECF4E3225B42B6A051CB * __this, const RuntimeMethod* method)
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
// System.Void menu_load_<wait_for_scene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1__ctor_mE5DF16273A0452AFD4967A435F1D2ED8B89A7F58 (U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void menu_load_<wait_for_scene>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1_System_IDisposable_Dispose_mD7AFAAB542083F348BFD4FF8873AE3BEC41440EA (U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean menu_load_<wait_for_scene>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_sceneU3Ed__1_MoveNext_m78740A27EB9FEB19C9C27D4C719F83E586A3EBA0 (U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__1_MoveNext_m78740A27EB9FEB19C9C27D4C719F83E586A3EBA0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(4.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_3 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_3, (4.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object menu_load_<wait_for_scene>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE4051A5E7A498C941D85ACD1DD7E4DAAF32E2CEB (U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void menu_load_<wait_for_scene>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m7D0C2F60C38348E7BCDFA54AB5180058214B8065 (U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m7D0C2F60C38348E7BCDFA54AB5180058214B8065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m7D0C2F60C38348E7BCDFA54AB5180058214B8065_RuntimeMethod_var);
	}
}
// System.Object menu_load_<wait_for_scene>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_get_Current_mF5D063565200FBE2C02669BDDE6FD296B593FD4C (U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void menu_out_book::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_out_book_Awake_mD02ACB58C873BECFD0EA30DA2C52880E47D6769E (menu_out_book_tA5AE4DA2BB343B57F222B8C50D90E97CFEED6422 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_out_book_Awake_mD02ACB58C873BECFD0EA30DA2C52880E47D6769E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anims = GameObject.FindWithTag("Pages");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteral600584C2D5CCB97C0C0C424D9F32D6B102FCB040, /*hidden argument*/NULL);
		__this->set_anims_4(L_0);
		// anims.gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_anims_4();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void menu_out_book::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_out_book__ctor_mA9BA0436CCB96EB8C595A85FEDF820F7539130B6 (menu_out_book_tA5AE4DA2BB343B57F222B8C50D90E97CFEED6422 * __this, const RuntimeMethod* method)
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
// System.Void menu_out_cam::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_out_cam_Awake_mF800B20ED21024D0152524A75E2D7817DC028BD0 (menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * __this, const RuntimeMethod* method)
{
	{
		// canvas.gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_canvas_4();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// StartCoroutine(wait_for_scene());
		RuntimeObject* L_2 = menu_out_cam_wait_for_scene_m9C1DBB8837619491769C5E99FD7B79D7DD13150A(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator menu_out_cam::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_out_cam_wait_for_scene_m9C1DBB8837619491769C5E99FD7B79D7DD13150A (menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_out_cam_wait_for_scene_m9C1DBB8837619491769C5E99FD7B79D7DD13150A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE * L_0 = (U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE *)il2cpp_codegen_object_new(U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE_il2cpp_TypeInfo_var);
		U3Cwait_for_sceneU3Ed__3__ctor_m46E202BD29AA7F3297E670AA4FDDBAA457F098E4(L_0, 0, /*hidden argument*/NULL);
		U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void menu_out_cam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_out_cam__ctor_m502E9A0784CDCF6DA852BDB82BDEFEC9789A029D (menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * __this, const RuntimeMethod* method)
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
// System.Void menu_out_cam_<wait_for_scene>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__3__ctor_m46E202BD29AA7F3297E670AA4FDDBAA457F098E4 (U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void menu_out_cam_<wait_for_scene>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__3_System_IDisposable_Dispose_mB1ADCE9A5695499FF9B8DA6F82E2A5C6805F3ED7 (U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean menu_out_cam_<wait_for_scene>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_sceneU3Ed__3_MoveNext_mE4C191841B27A64D12D40AEFD600FE43CFC30958 (U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__3_MoveNext_mE4C191841B27A64D12D40AEFD600FE43CFC30958_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(index);
		menu_out_cam_t2F467B628BA11ED12A37763A26F2616EBE231865 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_index_5();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object menu_out_cam_<wait_for_scene>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0B7BCAF9E01E0ABD720A9710E0CE90EEE34A490D (U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void menu_out_cam_<wait_for_scene>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mA2D0E46DD0026CDA3B762BDE7A8EDD5F85ADCB34 (U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mA2D0E46DD0026CDA3B762BDE7A8EDD5F85ADCB34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mA2D0E46DD0026CDA3B762BDE7A8EDD5F85ADCB34_RuntimeMethod_var);
	}
}
// System.Object menu_out_cam_<wait_for_scene>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_get_Current_mD7196FBAB1D7A64A92B44321CD3D27A9D2D81AD3 (U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void menu_out_d::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_out_d_Awake_mF18A657650ED95EDB1FDC825A849BA2B06B8DAFE (menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * __this, const RuntimeMethod* method)
{
	{
		// canvas.gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_canvas_4();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// arCamera.gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_arCamera_6();
		NullCheck(L_2);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
		// cam.gameObject.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_cam_5();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine(wait_for_scene());
		RuntimeObject* L_6 = menu_out_d_wait_for_scene_m788E20DC457AD404B721C0FE9A4B017D113C0AE0(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator menu_out_d::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* menu_out_d_wait_for_scene_m788E20DC457AD404B721C0FE9A4B017D113C0AE0 (menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_out_d_wait_for_scene_m788E20DC457AD404B721C0FE9A4B017D113C0AE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 * L_0 = (U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 *)il2cpp_codegen_object_new(U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759_il2cpp_TypeInfo_var);
		U3Cwait_for_sceneU3Ed__5__ctor_m6EAA5F0177CD8E88D25F2D79C784D1721BBB895A(L_0, 0, /*hidden argument*/NULL);
		U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void menu_out_d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_out_d__ctor_mD3831D1207E46C7F772D9C4B313E69C9CF34A8DE (menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * __this, const RuntimeMethod* method)
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
// System.Void menu_out_d_<wait_for_scene>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__5__ctor_m6EAA5F0177CD8E88D25F2D79C784D1721BBB895A (U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void menu_out_d_<wait_for_scene>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__5_System_IDisposable_Dispose_mAF176982F155ED91CFA10D1D49E2D7DDAFF6BBEF (U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean menu_out_d_<wait_for_scene>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_sceneU3Ed__5_MoveNext_mAA4B5E06BDAF2BBDA9860A71F036F7D9E4E41ABF (U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__5_MoveNext_mAA4B5E06BDAF2BBDA9860A71F036F7D9E4E41ABF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(index);
		menu_out_d_t3EEAA57F5C10E9380681020C454A47A856062FBF * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_index_7();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object menu_out_d_<wait_for_scene>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA6B675B3D4F405F8F0B614161E38D5735E60CE47 (U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void menu_out_d_<wait_for_scene>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__5_System_Collections_IEnumerator_Reset_m3673A3FC9719E58D40A39B30E0E2F7EF989823BA (U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__5_System_Collections_IEnumerator_Reset_m3673A3FC9719E58D40A39B30E0E2F7EF989823BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_sceneU3Ed__5_System_Collections_IEnumerator_Reset_m3673A3FC9719E58D40A39B30E0E2F7EF989823BA_RuntimeMethod_var);
	}
}
// System.Object menu_out_d_<wait_for_scene>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__5_System_Collections_IEnumerator_get_Current_mD4054CAD455B86BE50E17A050B0E809B2C736102 (U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void menu_out_music::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_out_music_Awake_m78E896CF2C96F9CE7EC47144AE7082ACBEFD4533 (menu_out_music_t657518243B5702F35540D6F9D83DA814ABBB23B7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (menu_out_music_Awake_m78E896CF2C96F9CE7EC47144AE7082ACBEFD4533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anims = GameObject.FindWithTag("Anims");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteralE31AFD02487A015B14F913595372FDB581ADE6BF, /*hidden argument*/NULL);
		__this->set_anims_4(L_0);
		// anims.gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_anims_4();
		NullCheck(L_1);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void menu_out_music::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void menu_out_music__ctor_m159C1B748A239B78DF3229AFB1589AF9D59514B5 (menu_out_music_t657518243B5702F35540D6F9D83DA814ABBB23B7 * __this, const RuntimeMethod* method)
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
// System.Void music_load::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_load_Awake_mDF4E949B76D96AF0E9AB8541196B63F13EB9A879 (music_load_t7F4798206A330341B2D72101E5AACA04CF7B84A0 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_scene());
		RuntimeObject* L_0 = music_load_wait_for_scene_m4FF0993566EFBCFD55F050A9179226BF04882E5C(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator music_load::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* music_load_wait_for_scene_m4FF0993566EFBCFD55F050A9179226BF04882E5C (music_load_t7F4798206A330341B2D72101E5AACA04CF7B84A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (music_load_wait_for_scene_m4FF0993566EFBCFD55F050A9179226BF04882E5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B * L_0 = (U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B *)il2cpp_codegen_object_new(U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B_il2cpp_TypeInfo_var);
		U3Cwait_for_sceneU3Ed__1__ctor_m40D22C5B7998F0266BC39F5FBB84DD79F19983EE(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void music_load::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_load__ctor_m03BB43B68E9AA229D1A7D08F66A0B4270FC6C49A (music_load_t7F4798206A330341B2D72101E5AACA04CF7B84A0 * __this, const RuntimeMethod* method)
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
// System.Void music_load_<wait_for_scene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1__ctor_m40D22C5B7998F0266BC39F5FBB84DD79F19983EE (U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void music_load_<wait_for_scene>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1_System_IDisposable_Dispose_m5680A53C532F0152966DE93DBA17C78576F1D80D (U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean music_load_<wait_for_scene>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_sceneU3Ed__1_MoveNext_m1A22726A9EBEC5A9FF5A28BEEA62F194488A9D10 (U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__1_MoveNext_m1A22726A9EBEC5A9FF5A28BEEA62F194488A9D10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(4.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_3 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_3, (4.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_3);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0030:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(4);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(4, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object music_load_<wait_for_scene>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m054ABC8BE6BB4E6B398CA28FF8BC88E630F2146F (U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void music_load_<wait_for_scene>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_mF0697289E76F3D421B5781A0C02EEA164A0D096E (U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_mF0697289E76F3D421B5781A0C02EEA164A0D096E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_mF0697289E76F3D421B5781A0C02EEA164A0D096E_RuntimeMethod_var);
	}
}
// System.Object music_load_<wait_for_scene>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_get_Current_m1A7CB9B2DB14F92FCF561366121F0CB530E604A4 (U3Cwait_for_sceneU3Ed__1_t17EFF7380C7CBEAB768DAE5C1D0D26ABBADFA13B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void music_player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_player_Start_mAC58DF194DE53D6B7BE9E5022F1E49F60AAE6021 (music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (music_player_Start_mAC58DF194DE53D6B7BE9E5022F1E49F60AAE6021_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anims = GameObject.FindWithTag("Anims");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteralE31AFD02487A015B14F913595372FDB581ADE6BF, /*hidden argument*/NULL);
		__this->set_anims_9(L_0);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_1 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		__this->set_audioSource_5(L_1);
		// audioSource.clip = clipNames[0];
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = __this->get_audioSource_5();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_3 = __this->get_clipNames_6();
		NullCheck(L_3);
		int32_t L_4 = 0;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_2);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_2, L_5, /*hidden argument*/NULL);
		// musicLength.maxValue = audioSource.clip.length;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_6 = __this->get_musicLength_7();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_7 = __this->get_audioSource_5();
		NullCheck(L_7);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_8 = AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317(L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Slider_set_maxValue_m3517BF6A1127298F11582535887B6FE5AA7C57D3(L_6, L_9, /*hidden argument*/NULL);
		// musicLength.value = 0;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_10 = __this->get_musicLength_7();
		NullCheck(L_10);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_10, (0.0f));
		// }
		return;
	}
}
// System.Void music_player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_player_Update_m221842434ECF4540E15B938C797B9255F3D98800 (music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969 * __this, const RuntimeMethod* method)
{
	{
		// if (!stop)
		bool L_0 = __this->get_stop_8();
		if (L_0)
		{
			goto IL_0069;
		}
	}
	{
		// musicLength.value += Time.deltaTime;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_1 = __this->get_musicLength_7();
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_2 = L_1;
		NullCheck(L_2);
		float L_3 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_2);
		float L_4 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_2, ((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// if (musicLength.value >= audioSource.clip.length)
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_5 = __this->get_musicLength_7();
		NullCheck(L_5);
		float L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_7 = __this->get_audioSource_5();
		NullCheck(L_7);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_8 = AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_9 = AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317(L_8, /*hidden argument*/NULL);
		if ((!(((float)L_6) >= ((float)L_9))))
		{
			goto IL_007f;
		}
	}
	{
		// music++;
		int32_t L_10 = __this->get_music_4();
		__this->set_music_4(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		// if (music >= clipNames.Length)
		int32_t L_11 = __this->get_music_4();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_12 = __this->get_clipNames_6();
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))))
		{
			goto IL_0061;
		}
	}
	{
		// music = 0;
		__this->set_music_4(0);
	}

IL_0061:
	{
		// StartAudio();
		music_player_StartAudio_mACD0C24B91D95DC313C4C700D06927CBF3BCB240(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0069:
	{
		// musicLength.value = musicLength.value;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_13 = __this->get_musicLength_7();
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_14 = __this->get_musicLength_7();
		NullCheck(L_14);
		float L_15 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_14);
		NullCheck(L_13);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_13, L_15);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void music_player::StartAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_player_StartAudio_mACD0C24B91D95DC313C4C700D06927CBF3BCB240 (music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969 * __this, int32_t ___changeMusic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (music_player_StartAudio_mACD0C24B91D95DC313C4C700D06927CBF3BCB240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (stop)
		bool L_0 = __this->get_stop_8();
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		// stop = false;
		__this->set_stop_8((bool)0);
		// audioSource.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_1 = __this->get_audioSource_5();
		NullCheck(L_1);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_1, /*hidden argument*/NULL);
		// foreach (Transform child in anims.transform)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = __this->get_anims_9();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_002b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0043;
		}

IL_002d:
		{
			// foreach (Transform child in anims.transform)
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_5);
			// child.gameObject.SetActive(false);
			NullCheck(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_6, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_6, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_7);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
		}

IL_0043:
		{
			// foreach (Transform child in anims.transform)
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_002d;
			}
		}

IL_004b:
		{
			IL2CPP_LEAVE(0x5E, FINALLY_004d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004d;
	}

FINALLY_004d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_1;
			if (!L_11)
			{
				goto IL_005d;
			}
		}

IL_0057:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_12);
		}

IL_005d:
		{
			IL2CPP_END_FINALLY(77)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(77)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5E, IL_005e)
	}

IL_005e:
	{
		// anims.transform.GetChild(music).gameObject.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_anims_9();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_13, /*hidden argument*/NULL);
		int32_t L_15 = __this->get_music_4();
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_17, (bool)1, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void music_player::NextPreviousAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_player_NextPreviousAudio_m2F518AB08746B74DE0F3DF9224D94EC0EBD445DA (music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969 * __this, int32_t ___changeMusic0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (music_player_NextPreviousAudio_m2F518AB08746B74DE0F3DF9224D94EC0EBD445DA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// music += changeMusic;
		int32_t L_0 = __this->get_music_4();
		int32_t L_1 = ___changeMusic0;
		__this->set_music_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (music >= clipNames.Length)
		int32_t L_2 = __this->get_music_4();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_3 = __this->get_clipNames_6();
		NullCheck(L_3);
		if ((((int32_t)L_2) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		// music = 0;
		__this->set_music_4(0);
		goto IL_0040;
	}

IL_0027:
	{
		// else if (music < 0)
		int32_t L_4 = __this->get_music_4();
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		// music = clipNames.Length - 1;
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_5 = __this->get_clipNames_6();
		NullCheck(L_5);
		__this->set_music_4(((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), (int32_t)1)));
	}

IL_0040:
	{
		// audioSource.clip = clipNames[music];
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_6 = __this->get_audioSource_5();
		AudioClipU5BU5D_t03931BD44BC339329210676E452B8ECD3EC171C2* L_7 = __this->get_clipNames_6();
		int32_t L_8 = __this->get_music_4();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_6, L_10, /*hidden argument*/NULL);
		// musicLength.maxValue = audioSource.clip.length;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_11 = __this->get_musicLength_7();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_12 = __this->get_audioSource_5();
		NullCheck(L_12);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_13 = AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		float L_14 = AudioClip_get_length_mFF1E21363B1860453451C4DA1C1459E9B9504317(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		Slider_set_maxValue_m3517BF6A1127298F11582535887B6FE5AA7C57D3(L_11, L_14, /*hidden argument*/NULL);
		// musicLength.value = 0;
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_15 = __this->get_musicLength_7();
		NullCheck(L_15);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_15, (0.0f));
		// audioSource.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_16 = __this->get_audioSource_5();
		NullCheck(L_16);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_16, /*hidden argument*/NULL);
		// foreach (Transform child in anims.transform)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_anims_9();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		RuntimeObject* L_19 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_009f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b7;
		}

IL_00a1:
		{
			// foreach (Transform child in anims.transform)
			RuntimeObject* L_20 = V_0;
			NullCheck(L_20);
			RuntimeObject * L_21 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_20);
			// child.gameObject.SetActive(false);
			NullCheck(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_21, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_21, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_22);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_22, (bool)0, /*hidden argument*/NULL);
		}

IL_00b7:
		{
			// foreach (Transform child in anims.transform)
			RuntimeObject* L_23 = V_0;
			NullCheck(L_23);
			bool L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_23);
			if (L_24)
			{
				goto IL_00a1;
			}
		}

IL_00bf:
		{
			IL2CPP_LEAVE(0xD2, FINALLY_00c1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c1;
	}

FINALLY_00c1:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_25 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_25, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_26 = V_1;
			if (!L_26)
			{
				goto IL_00d1;
			}
		}

IL_00cb:
		{
			RuntimeObject* L_27 = V_1;
			NullCheck(L_27);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_27);
		}

IL_00d1:
		{
			IL2CPP_END_FINALLY(193)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(193)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD2, IL_00d2)
	}

IL_00d2:
	{
		// anims.transform.GetChild(music).gameObject.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_anims_9();
		NullCheck(L_28);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_28, /*hidden argument*/NULL);
		int32_t L_30 = __this->get_music_4();
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_32 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_32, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void music_player::PauseAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_player_PauseAudio_m297AB0BD1481DDB9DAD535E338520794D9594D8A (music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Pause();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_audioSource_5();
		NullCheck(L_0);
		AudioSource_Pause_m279B116A62699983F6B5347FD4770358D7794F3C(L_0, /*hidden argument*/NULL);
		// stop = true;
		__this->set_stop_8((bool)1);
		// }
		return;
	}
}
// System.Void music_player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_player__ctor_m1132567698AA52EC08917872892CC42D62171997 (music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969 * __this, const RuntimeMethod* method)
{
	{
		// private bool stop = true;
		__this->set_stop_8((bool)1);
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
// System.Void open_cv_out_static_cam::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void open_cv_out_static_cam_Awake_m84CBC5D24E5B3D14AD94849C29FD751088C6CC4E (open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_scene());
		RuntimeObject* L_0 = open_cv_out_static_cam_wait_for_scene_mA69F2B24F11DCEFA1A178438BE06C4EB95FCF92A(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator open_cv_out_static_cam::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* open_cv_out_static_cam_wait_for_scene_mA69F2B24F11DCEFA1A178438BE06C4EB95FCF92A (open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (open_cv_out_static_cam_wait_for_scene_mA69F2B24F11DCEFA1A178438BE06C4EB95FCF92A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D * L_0 = (U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D *)il2cpp_codegen_object_new(U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D_il2cpp_TypeInfo_var);
		U3Cwait_for_sceneU3Ed__2__ctor_m0CA9720C385BFE07D8F8BE5C510F542B3DF72DE2(L_0, 0, /*hidden argument*/NULL);
		U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void open_cv_out_static_cam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void open_cv_out_static_cam__ctor_m466700B38D649A0814A9180972EC815A9FF8108E (open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * __this, const RuntimeMethod* method)
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
// System.Void open_cv_out_static_cam_<wait_for_scene>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__2__ctor_m0CA9720C385BFE07D8F8BE5C510F542B3DF72DE2 (U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void open_cv_out_static_cam_<wait_for_scene>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__2_System_IDisposable_Dispose_m5B08C8B1196C06713DCC59CA326E7E8641EF13F4 (U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean open_cv_out_static_cam_<wait_for_scene>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_sceneU3Ed__2_MoveNext_mB115A3FABCBAAF43C28E5035B692B8EA7D24125E (U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__2_MoveNext_mB115A3FABCBAAF43C28E5035B692B8EA7D24125E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(index);
		open_cv_out_static_cam_tC74579DB19F76BB2F685B2AF7E5722A8BE6EAAAB * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_index_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object open_cv_out_static_cam_<wait_for_scene>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBA991F59258C1718B3C5A31440DFA9F0D6B9AC85 (U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void open_cv_out_static_cam_<wait_for_scene>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__2_System_Collections_IEnumerator_Reset_m577B73C6D19469BF72595CC83200A26416C0B592 (U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__2_System_Collections_IEnumerator_Reset_m577B73C6D19469BF72595CC83200A26416C0B592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_sceneU3Ed__2_System_Collections_IEnumerator_Reset_m577B73C6D19469BF72595CC83200A26416C0B592_RuntimeMethod_var);
	}
}
// System.Object open_cv_out_static_cam_<wait_for_scene>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__2_System_Collections_IEnumerator_get_Current_m6AC151D21237CF4A6FD2DACD14D03D0D8BEF473C (U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void opencv_in::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencv_in_Awake_m29FDCE9084F89C55BD6B7783C7578C2688FDD309 (opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_load());
		RuntimeObject* L_0 = opencv_in_wait_for_load_m5930E1B5E704389057C20ABA24399238EEC98BB1(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator opencv_in::wait_for_load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencv_in_wait_for_load_m5930E1B5E704389057C20ABA24399238EEC98BB1 (opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (opencv_in_wait_for_load_m5930E1B5E704389057C20ABA24399238EEC98BB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A * L_0 = (U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A *)il2cpp_codegen_object_new(U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A_il2cpp_TypeInfo_var);
		U3Cwait_for_loadU3Ed__2__ctor_m9135488DA3EB7A4B8269BB2EFD456F0AFF5F0FB0(L_0, 0, /*hidden argument*/NULL);
		U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void opencv_in::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencv_in__ctor_m884E1CB21ED07F31DD418500299E4B9BDE4C90FC (opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * __this, const RuntimeMethod* method)
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
// System.Void opencv_in_<wait_for_load>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2__ctor_m9135488DA3EB7A4B8269BB2EFD456F0AFF5F0FB0 (U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void opencv_in_<wait_for_load>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2_System_IDisposable_Dispose_m8C946A9FE09361A12CCD7E1EB7033558A992C3C4 (U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean opencv_in_<wait_for_load>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_loadU3Ed__2_MoveNext_m2B6A23339C2937E2682389CF5F209866916160F1 (U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_loadU3Ed__2_MoveNext_m2B6A23339C2937E2682389CF5F209866916160F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canvas.gameObject.SetActive(true);
		opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = L_5->get_canvas_4();
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)1, /*hidden argument*/NULL);
		// this.gameObject.SetActive(false);
		opencv_in_tAC77D65E7DB426CE800604D2204049BDBC01BB3E * L_8 = V_1;
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object opencv_in_<wait_for_load>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_loadU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3F8461AEB051F188E82F0B20A94D1FBC30BD7B7C (U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void opencv_in_<wait_for_load>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m22FFA213A3766C494C70191C7C7803AC881511F5 (U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m22FFA213A3766C494C70191C7C7803AC881511F5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m22FFA213A3766C494C70191C7C7803AC881511F5_RuntimeMethod_var);
	}
}
// System.Object opencv_in_<wait_for_load>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_get_Current_mD1781CE37506124C54EB284B42DD3DEE39FF5562 (U3Cwait_for_loadU3Ed__2_tE856873A1AC0390DA450F4798D6D23765833004A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void opencv_out::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencv_out_Awake_m380B39553FC729BD56DB06341E2A3570A103405A (opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * __this, const RuntimeMethod* method)
{
	{
		// canvas.gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_canvas_4();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// StartCoroutine(wait_for_scene());
		RuntimeObject* L_2 = opencv_out_wait_for_scene_m9F86106B9A5F3DC9F3952C3B4A6806DDE1C1ADB6(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator opencv_out::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* opencv_out_wait_for_scene_m9F86106B9A5F3DC9F3952C3B4A6806DDE1C1ADB6 (opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (opencv_out_wait_for_scene_m9F86106B9A5F3DC9F3952C3B4A6806DDE1C1ADB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 * L_0 = (U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 *)il2cpp_codegen_object_new(U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52_il2cpp_TypeInfo_var);
		U3Cwait_for_sceneU3Ed__3__ctor_mAE7E094BFCC6843CCED0E2A1F10F3D70ECEEA6EF(L_0, 0, /*hidden argument*/NULL);
		U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void opencv_out::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void opencv_out__ctor_m74DB53277300A75D3DB58966A7DC167BE42B0DF6 (opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * __this, const RuntimeMethod* method)
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
// System.Void opencv_out_<wait_for_scene>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__3__ctor_mAE7E094BFCC6843CCED0E2A1F10F3D70ECEEA6EF (U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void opencv_out_<wait_for_scene>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__3_System_IDisposable_Dispose_m227B6333E96170011A03DAA28155AC7476A17DD3 (U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean opencv_out_<wait_for_scene>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_sceneU3Ed__3_MoveNext_m9B2A7632A2E3DB28C8C673FCEE6508B1F0D9CADB (U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__3_MoveNext_m9B2A7632A2E3DB28C8C673FCEE6508B1F0D9CADB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2.0f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(index);
		opencv_out_tF344D77317A419A584CDEC59D69614437764F106 * L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_index_5();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_6, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object opencv_out_<wait_for_scene>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4C738DD4F5E68C23F490C111DBA1D039E95BC66D (U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void opencv_out_<wait_for_scene>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mE112F991BFB9F7A500100173D76931D4679C633B (U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mE112F991BFB9F7A500100173D76931D4679C633B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mE112F991BFB9F7A500100173D76931D4679C633B_RuntimeMethod_var);
	}
}
// System.Object opencv_out_<wait_for_scene>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_get_Current_m88B8CED8CFB58394402F3AFFB740086B8BFCFD3C (U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void resize_screen::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void resize_screen_Start_mB4EFC84EBAF99C169E15D8F424974D29E70EAE5B (resize_screen_t79A026E0E5D65451A1BEBBCAE2BAE8384AF64591 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (resize_screen_Start_mB4EFC84EBAF99C169E15D8F424974D29E70EAE5B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// panel = this.transform;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		__this->set_panel_7(L_0);
		// screenHeight = Screen.currentResolution.height;
		Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  L_1 = Screen_get_currentResolution_m28049B983AB45AC9321A7A8F5EBA5C0A0A65D22A(/*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = Resolution_get_height_m5141CDF13E8C1ADEF47AEB5155AD72BD13121CCD((Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 *)(&V_0), /*hidden argument*/NULL);
		__this->set_screenHeight_4((((float)((float)L_2))));
		// screenWidth = Screen.currentResolution.width;
		Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  L_3 = Screen_get_currentResolution_m28049B983AB45AC9321A7A8F5EBA5C0A0A65D22A(/*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = Resolution_get_width_m6254A0489C2CCB1574E4D98E45009DDE5212655C((Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 *)(&V_0), /*hidden argument*/NULL);
		__this->set_screenWidth_5((((float)((float)L_4))));
		// aspectRatio = screenHeight / screenWidth;
		float L_5 = __this->get_screenHeight_4();
		float L_6 = __this->get_screenWidth_5();
		__this->set_aspectRatio_6(((float)((float)L_5/(float)L_6)));
		// if (aspectRatio >= 2.15 && aspectRatio <= 2.18)
		float L_7 = __this->get_aspectRatio_6();
		if ((!(((double)(((double)((double)L_7)))) >= ((double)(2.15)))))
		{
			goto IL_0108;
		}
	}
	{
		float L_8 = __this->get_aspectRatio_6();
		if ((!(((double)(((double)((double)L_8)))) <= ((double)(2.18)))))
		{
			goto IL_0108;
		}
	}
	{
		// panel.localPosition = new Vector3(0.0f, 1.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_10), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_9, L_10, /*hidden argument*/NULL);
		// panel.localScale = new Vector3(1.0f, 1.189502f, 1.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_12), (1.0f), (1.189502f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_11, L_12, /*hidden argument*/NULL);
		// if (panel.name == "Panel_1")
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = __this->get_panel_7();
		NullCheck(L_13);
		String_t* L_14 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_13, /*hidden argument*/NULL);
		bool L_15 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_14, _stringLiteral932E4050F7491C21C10649063299D2199541E4DD, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_025c;
		}
	}
	{
		// panel.localPosition = new Vector3(0.0f, -20.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_17), (0.0f), (-20.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_16, L_17, /*hidden argument*/NULL);
		// panel.localScale = new Vector3(1.0f, 1.189502f, 1.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_19), (1.0f), (1.189502f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_18, L_19, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0108:
	{
		// else if (aspectRatio >= 1.2 && aspectRatio <= 1.5)
		float L_20 = __this->get_aspectRatio_6();
		if ((!(((double)(((double)((double)L_20)))) >= ((double)(1.2)))))
		{
			goto IL_01c9;
		}
	}
	{
		float L_21 = __this->get_aspectRatio_6();
		if ((!(((double)(((double)((double)L_21)))) <= ((double)(1.5)))))
		{
			goto IL_01c9;
		}
	}
	{
		// panel.localPosition = new Vector3(0.0f, 6.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_23), (0.0f), (6.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_22, L_23, /*hidden argument*/NULL);
		// panel.localScale = new Vector3(1.0f, 0.83025f, 1.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_25), (1.0f), (0.83025f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_24, L_25, /*hidden argument*/NULL);
		// if (panel.name == "Panel_1")
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = __this->get_panel_7();
		NullCheck(L_26);
		String_t* L_27 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_26, /*hidden argument*/NULL);
		bool L_28 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_27, _stringLiteral932E4050F7491C21C10649063299D2199541E4DD, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_025c;
		}
	}
	{
		// panel.localPosition = new Vector3(0.0f, -16.618f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_29 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30;
		memset((&L_30), 0, sizeof(L_30));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_30), (0.0f), (-16.618f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_29, L_30, /*hidden argument*/NULL);
		// panel.localScale = new Vector3(1.0f, 0.82f, 1.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_32), (1.0f), (0.82f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_31, L_32, /*hidden argument*/NULL);
		// }
		return;
	}

IL_01c9:
	{
		// panel.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_34), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_33, L_34, /*hidden argument*/NULL);
		// panel.localScale = new Vector3(1.0f, 1.0f, 1.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_36), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_35, L_36, /*hidden argument*/NULL);
		// if (panel.name == "Panel_1")
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = __this->get_panel_7();
		NullCheck(L_37);
		String_t* L_38 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_37, /*hidden argument*/NULL);
		bool L_39 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_38, _stringLiteral932E4050F7491C21C10649063299D2199541E4DD, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_025c;
		}
	}
	{
		// panel.localPosition = new Vector3(0.0f, 0.0f, 0.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_40 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_41), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_40, L_41, /*hidden argument*/NULL);
		// panel.localScale = new Vector3(1.0f, 1.0f, 1.0f);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = __this->get_panel_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_43), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_set_localScale_m7ED1A6E5A87CD1D483515B99D6D3121FB92B0556(L_42, L_43, /*hidden argument*/NULL);
	}

IL_025c:
	{
		// }
		return;
	}
}
// System.Void resize_screen::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void resize_screen__ctor_mD4DFB49C849C0FD3D436381E9AA7692148DE932D (resize_screen_t79A026E0E5D65451A1BEBBCAE2BAE8384AF64591 * __this, const RuntimeMethod* method)
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
// System.Void splashIntro::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splashIntro_Start_m58493B51278C9D4C222D668E7DC3E5CFE6C08649 (splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_intro());
		RuntimeObject* L_0 = splashIntro_wait_for_intro_mF26EBE044892D8BD8E97C30DEC504375B7FACEB0(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator splashIntro::wait_for_intro()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* splashIntro_wait_for_intro_mF26EBE044892D8BD8E97C30DEC504375B7FACEB0 (splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (splashIntro_wait_for_intro_mF26EBE044892D8BD8E97C30DEC504375B7FACEB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED * L_0 = (U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED *)il2cpp_codegen_object_new(U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED_il2cpp_TypeInfo_var);
		U3Cwait_for_introU3Ed__2__ctor_m1B8054220E974E9C390564ADD21A1D01DE25644B(L_0, 0, /*hidden argument*/NULL);
		U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void splashIntro::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void splashIntro__ctor_m060FA9014B5FDC812069FFEBC1A673E82DD84175 (splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * __this, const RuntimeMethod* method)
{
	{
		// private float waitTime = 2.0f;
		__this->set_waitTime_4((2.0f));
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
// System.Void splashIntro_<wait_for_intro>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_introU3Ed__2__ctor_m1B8054220E974E9C390564ADD21A1D01DE25644B (U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void splashIntro_<wait_for_intro>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_introU3Ed__2_System_IDisposable_Dispose_m855C1C5BA78622630AEF499BC7F425CD8E787AD4 (U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean splashIntro_<wait_for_intro>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_introU3Ed__2_MoveNext_m646EAAA1E8D296342D60DB755340945EC309A2E7 (U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_introU3Ed__2_MoveNext_m646EAAA1E8D296342D60DB755340945EC309A2E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(waitTime);
		splashIntro_t5A97F03A9E667EFA429767A0AD597814C472CEAB * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_waitTime_4();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_6 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object splashIntro_<wait_for_intro>d__2::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_introU3Ed__2_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m67D2BEA8FD51162901418E4C7D84AFD831F4D3DF (U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void splashIntro_<wait_for_intro>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_introU3Ed__2_System_Collections_IEnumerator_Reset_m013A86EECD5D9271A5F91F8A725E6EB665C29FC6 (U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_introU3Ed__2_System_Collections_IEnumerator_Reset_m013A86EECD5D9271A5F91F8A725E6EB665C29FC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_introU3Ed__2_System_Collections_IEnumerator_Reset_m013A86EECD5D9271A5F91F8A725E6EB665C29FC6_RuntimeMethod_var);
	}
}
// System.Object splashIntro_<wait_for_intro>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_introU3Ed__2_System_Collections_IEnumerator_get_Current_mED59012FC4F1F76184F8715EAFB6D0886E07E95B (U3Cwait_for_introU3Ed__2_t80FF9101DECA7979859E5755E2DC7B851771F8ED * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
