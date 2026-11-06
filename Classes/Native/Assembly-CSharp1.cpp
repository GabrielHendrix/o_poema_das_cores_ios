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

// Lean.Touch.LeanFinger
struct LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD;
// Lean.Touch.LeanFinger[]
struct LeanFingerU5BU5D_tB3419F97094477E171C21248E0B679D368C8DA57;
// Lean.Touch.LeanSelectable
struct LeanSelectable_t2376D6100D5CC4EEC7F3BB4A3B0D57810CBDA1D9;
// Lean.Touch.LeanTwistRotate
struct LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C;
// Lean.Touch.LeanTwistRotateAxis
struct LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115;
// Lean.Touch.movePerson
struct movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E;
// StaticCamManager
struct StaticCamManager_t827D8CBFDF954FAF0FC474CD97284A3929454BC8;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.Action`1<Vuforia.VuforiaUnity/InitError>
struct Action_1_t998FA6BF20F5FA561589835D396749D5113B03CD;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<Lean.Touch.LeanFinger>
struct List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E;
// System.Collections.Generic.List`1<Lean.Touch.LeanSnapshot>
struct List_1_t6A0CEEA00D532975F81F5FD612BBA2033E2CD75A;
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
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t431F4FBD9C59AE097FE33C4354CC6251B01B527D;
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
// Vuforia.VuforiaRuntime
struct VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D;
// book_load
struct book_load_t7F81F1FA3FBBAD1D7EAC36B8D2AEBAF99624573D;
// book_load/<wait_for_scene>d__1
struct U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC;
// book_player
struct book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3;
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

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
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
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__1_tB47466C52A2FA5E2CB79B9E53FEC5F12D57F2699_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__2_t640106A7A3160FFD0E305847A365415B2BA4908D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__3_t1E7E1D9C1793A1CE1F7986F16B3A1CBD613B9A52_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__3_t3CC5B94298FDD9476526D3B2F18C7B91C68424EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3Cwait_for_sceneU3Ed__5_t95C60B34AA3BC01E7893C59A6E1DB29F45936759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral600584C2D5CCB97C0C0C424D9F32D6B102FCB040;
IL2CPP_EXTERN_C String_t* _stringLiteral65DDEDE7B4AE131938B31202684B8E588C84D134;
IL2CPP_EXTERN_C String_t* _stringLiteral6EE4B252A6ACEEE69F0A07A1916364454F28FBC7;
IL2CPP_EXTERN_C String_t* _stringLiteral932E4050F7491C21C10649063299D2199541E4DD;
IL2CPP_EXTERN_C String_t* _stringLiteralE31AFD02487A015B14F913595372FDB581ADE6BF;
IL2CPP_EXTERN_C String_t* _stringLiteralE61423F9EB2B4FB8860EE3574BF74EE765C66FCF;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_m543844711EF9273F3F1896035EDE0742142DD2E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAsynchronouslyU3Ed__3_System_Collections_IEnumerator_Reset_mFFA87AF8D9CFE9CB3CBE3F67446810E8A057BF21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_introU3Ed__2_System_Collections_IEnumerator_Reset_m013A86EECD5D9271A5F91F8A725E6EB665C29FC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m22FFA213A3766C494C70191C7C7803AC881511F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m88B1370BE877BE6D67813DC69246CA0AE5D01F07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_m8A4E4CCA47E71C0EDA0FAD53D31B20A282425A59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_loadU3Ed__2_System_Collections_IEnumerator_Reset_mC770269F9DD47600996404860507FA06A1832239_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m0AC8760176028F93DEAC88E6584B6059B8B78E3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m79E419B46A1575592B7780AB0B5B939C21AFB6F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m7D0C2F60C38348E7BCDFA54AB5180058214B8065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_mF0697289E76F3D421B5781A0C02EEA164A0D096E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__2_System_Collections_IEnumerator_Reset_m577B73C6D19469BF72595CC83200A26416C0B592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mA2D0E46DD0026CDA3B762BDE7A8EDD5F85ADCB34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__3_System_Collections_IEnumerator_Reset_mE112F991BFB9F7A500100173D76931D4679C633B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3Cwait_for_sceneU3Ed__5_System_Collections_IEnumerator_Reset_m3673A3FC9719E58D40A39B30E0E2F7EF989823BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t LeanTwistRotateAxis__ctor_mC9BA151F8B07A74E047619A04A331E70207C2114_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LeanTwistRotate_RotateUI_m3D797A3168BD5A43CCC9DE44A3FE86399655FF1F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LeanTwistRotate_Rotate_mE67FE07872236D0B06C12EB916239357DF327AD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LeanTwistRotate_TranslateUI_m827527C35B8EF5B6259067F074E1BC60D823D35E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LeanTwistRotate_Translate_m5B6B5B12820F2A57BE6AE7D8048ADC37A515AA78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LeanTwistRotate_Update_m87229E2E52D6F54E95C2A90E84AD875F06F7F7F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LeanTwistRotate__ctor_mD4DAA886E5926C787ABA438D8EE9F50CE2ADB292_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StaticCamManager_Start_m8BC01425D42C70C9E0785374BD25BF30F2C21377_MetadataUsageId;
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
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__1_MoveNext_mF75467BEAB676B659059553A066BFC76B8F1C536_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m0AC8760176028F93DEAC88E6584B6059B8B78E3A_MetadataUsageId;
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
IL2CPP_EXTERN_C const uint32_t book_load_wait_for_scene_mF1039EB8D16263B9965BC667C5D7FC0F3F277C53_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t book_player_NextPreviousPage_mFD56B9E6E4127AEA64C957762407A30CCDB3A966_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t book_player_StartAudio_mDDC4E4DE3C3322951161DAE3AAD2A5F6BD2AF161_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t book_player_Start_mBA4B82E4C4B486BE7A090FEB3150FF49B85AF23C_MetadataUsageId;
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
IL2CPP_EXTERN_C const uint32_t movePerson_TranslateUI_m7B432C6DEE4DFBE20539E2E0D66365FE1E581FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t movePerson_Translate_m37AE3F73719EF91DB8F118841A5ED14F8E1D561E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t movePerson_Update_mD7C80075B90865371461C1AF3CD1B771B760E5A4_MetadataUsageId;
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


// System.Collections.Generic.List`1<Lean.Touch.LeanFinger>
struct  List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LeanFingerU5BU5D_tB3419F97094477E171C21248E0B679D368C8DA57* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E, ____items_1)); }
	inline LeanFingerU5BU5D_tB3419F97094477E171C21248E0B679D368C8DA57* get__items_1() const { return ____items_1; }
	inline LeanFingerU5BU5D_tB3419F97094477E171C21248E0B679D368C8DA57** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LeanFingerU5BU5D_tB3419F97094477E171C21248E0B679D368C8DA57* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LeanFingerU5BU5D_tB3419F97094477E171C21248E0B679D368C8DA57* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E_StaticFields, ____emptyArray_5)); }
	inline LeanFingerU5BU5D_tB3419F97094477E171C21248E0B679D368C8DA57* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LeanFingerU5BU5D_tB3419F97094477E171C21248E0B679D368C8DA57** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LeanFingerU5BU5D_tB3419F97094477E171C21248E0B679D368C8DA57* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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

// book_load_<wait_for_scene>d__1
struct  U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC  : public RuntimeObject
{
public:
	// System.Int32 book_load_<wait_for_scene>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object book_load_<wait_for_scene>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
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


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
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

// Lean.Touch.LeanFinger
struct  LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD  : public RuntimeObject
{
public:
	// System.Int32 Lean.Touch.LeanFinger::Index
	int32_t ___Index_0;
	// System.Single Lean.Touch.LeanFinger::Age
	float ___Age_1;
	// System.Boolean Lean.Touch.LeanFinger::Set
	bool ___Set_2;
	// System.Boolean Lean.Touch.LeanFinger::LastSet
	bool ___LastSet_3;
	// System.Boolean Lean.Touch.LeanFinger::Tap
	bool ___Tap_4;
	// System.Int32 Lean.Touch.LeanFinger::TapCount
	int32_t ___TapCount_5;
	// System.Boolean Lean.Touch.LeanFinger::Swipe
	bool ___Swipe_6;
	// System.Boolean Lean.Touch.LeanFinger::Old
	bool ___Old_7;
	// System.Boolean Lean.Touch.LeanFinger::Expired
	bool ___Expired_8;
	// System.Single Lean.Touch.LeanFinger::LastPressure
	float ___LastPressure_9;
	// System.Single Lean.Touch.LeanFinger::Pressure
	float ___Pressure_10;
	// UnityEngine.Vector2 Lean.Touch.LeanFinger::StartScreenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___StartScreenPosition_11;
	// UnityEngine.Vector2 Lean.Touch.LeanFinger::LastScreenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___LastScreenPosition_12;
	// UnityEngine.Vector2 Lean.Touch.LeanFinger::ScreenPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___ScreenPosition_13;
	// System.Boolean Lean.Touch.LeanFinger::StartedOverGui
	bool ___StartedOverGui_14;
	// System.Collections.Generic.List`1<Lean.Touch.LeanSnapshot> Lean.Touch.LeanFinger::Snapshots
	List_1_t6A0CEEA00D532975F81F5FD612BBA2033E2CD75A * ___Snapshots_15;

public:
	inline static int32_t get_offset_of_Index_0() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___Index_0)); }
	inline int32_t get_Index_0() const { return ___Index_0; }
	inline int32_t* get_address_of_Index_0() { return &___Index_0; }
	inline void set_Index_0(int32_t value)
	{
		___Index_0 = value;
	}

	inline static int32_t get_offset_of_Age_1() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___Age_1)); }
	inline float get_Age_1() const { return ___Age_1; }
	inline float* get_address_of_Age_1() { return &___Age_1; }
	inline void set_Age_1(float value)
	{
		___Age_1 = value;
	}

	inline static int32_t get_offset_of_Set_2() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___Set_2)); }
	inline bool get_Set_2() const { return ___Set_2; }
	inline bool* get_address_of_Set_2() { return &___Set_2; }
	inline void set_Set_2(bool value)
	{
		___Set_2 = value;
	}

	inline static int32_t get_offset_of_LastSet_3() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___LastSet_3)); }
	inline bool get_LastSet_3() const { return ___LastSet_3; }
	inline bool* get_address_of_LastSet_3() { return &___LastSet_3; }
	inline void set_LastSet_3(bool value)
	{
		___LastSet_3 = value;
	}

	inline static int32_t get_offset_of_Tap_4() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___Tap_4)); }
	inline bool get_Tap_4() const { return ___Tap_4; }
	inline bool* get_address_of_Tap_4() { return &___Tap_4; }
	inline void set_Tap_4(bool value)
	{
		___Tap_4 = value;
	}

	inline static int32_t get_offset_of_TapCount_5() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___TapCount_5)); }
	inline int32_t get_TapCount_5() const { return ___TapCount_5; }
	inline int32_t* get_address_of_TapCount_5() { return &___TapCount_5; }
	inline void set_TapCount_5(int32_t value)
	{
		___TapCount_5 = value;
	}

	inline static int32_t get_offset_of_Swipe_6() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___Swipe_6)); }
	inline bool get_Swipe_6() const { return ___Swipe_6; }
	inline bool* get_address_of_Swipe_6() { return &___Swipe_6; }
	inline void set_Swipe_6(bool value)
	{
		___Swipe_6 = value;
	}

	inline static int32_t get_offset_of_Old_7() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___Old_7)); }
	inline bool get_Old_7() const { return ___Old_7; }
	inline bool* get_address_of_Old_7() { return &___Old_7; }
	inline void set_Old_7(bool value)
	{
		___Old_7 = value;
	}

	inline static int32_t get_offset_of_Expired_8() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___Expired_8)); }
	inline bool get_Expired_8() const { return ___Expired_8; }
	inline bool* get_address_of_Expired_8() { return &___Expired_8; }
	inline void set_Expired_8(bool value)
	{
		___Expired_8 = value;
	}

	inline static int32_t get_offset_of_LastPressure_9() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___LastPressure_9)); }
	inline float get_LastPressure_9() const { return ___LastPressure_9; }
	inline float* get_address_of_LastPressure_9() { return &___LastPressure_9; }
	inline void set_LastPressure_9(float value)
	{
		___LastPressure_9 = value;
	}

	inline static int32_t get_offset_of_Pressure_10() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___Pressure_10)); }
	inline float get_Pressure_10() const { return ___Pressure_10; }
	inline float* get_address_of_Pressure_10() { return &___Pressure_10; }
	inline void set_Pressure_10(float value)
	{
		___Pressure_10 = value;
	}

	inline static int32_t get_offset_of_StartScreenPosition_11() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___StartScreenPosition_11)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_StartScreenPosition_11() const { return ___StartScreenPosition_11; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_StartScreenPosition_11() { return &___StartScreenPosition_11; }
	inline void set_StartScreenPosition_11(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___StartScreenPosition_11 = value;
	}

	inline static int32_t get_offset_of_LastScreenPosition_12() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___LastScreenPosition_12)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_LastScreenPosition_12() const { return ___LastScreenPosition_12; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_LastScreenPosition_12() { return &___LastScreenPosition_12; }
	inline void set_LastScreenPosition_12(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___LastScreenPosition_12 = value;
	}

	inline static int32_t get_offset_of_ScreenPosition_13() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___ScreenPosition_13)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_ScreenPosition_13() const { return ___ScreenPosition_13; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_ScreenPosition_13() { return &___ScreenPosition_13; }
	inline void set_ScreenPosition_13(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___ScreenPosition_13 = value;
	}

	inline static int32_t get_offset_of_StartedOverGui_14() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___StartedOverGui_14)); }
	inline bool get_StartedOverGui_14() const { return ___StartedOverGui_14; }
	inline bool* get_address_of_StartedOverGui_14() { return &___StartedOverGui_14; }
	inline void set_StartedOverGui_14(bool value)
	{
		___StartedOverGui_14 = value;
	}

	inline static int32_t get_offset_of_Snapshots_15() { return static_cast<int32_t>(offsetof(LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD, ___Snapshots_15)); }
	inline List_1_t6A0CEEA00D532975F81F5FD612BBA2033E2CD75A * get_Snapshots_15() const { return ___Snapshots_15; }
	inline List_1_t6A0CEEA00D532975F81F5FD612BBA2033E2CD75A ** get_address_of_Snapshots_15() { return &___Snapshots_15; }
	inline void set_Snapshots_15(List_1_t6A0CEEA00D532975F81F5FD612BBA2033E2CD75A * value)
	{
		___Snapshots_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Snapshots_15), (void*)value);
	}
};


// Lean.Touch.LeanFingerFilter_FilterType
struct  FilterType_t9062A7D9E6F23106A23AC3DE84972735EC56044F 
{
public:
	// System.Int32 Lean.Touch.LeanFingerFilter_FilterType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterType_t9062A7D9E6F23106A23AC3DE84972735EC56044F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.Space
struct  Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Vuforia.VuforiaRuntime_InitState
struct  InitState_t0072A2BD2C69378E4575A8148A3DB0974451CD70 
{
public:
	// System.Int32 Vuforia.VuforiaRuntime_InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t0072A2BD2C69378E4575A8148A3DB0974451CD70, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Vuforia.VuforiaUnity_InitError
struct  InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431 
{
public:
	// System.Int32 Vuforia.VuforiaUnity_InitError::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitError_t486F7D53F5B0B7943D4E22BE2D32F4913D4A0431, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Lean.Touch.LeanFingerFilter
struct  LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 
{
public:
	// Lean.Touch.LeanFingerFilter_FilterType Lean.Touch.LeanFingerFilter::Filter
	int32_t ___Filter_0;
	// System.Boolean Lean.Touch.LeanFingerFilter::IgnoreStartedOverGui
	bool ___IgnoreStartedOverGui_1;
	// System.Int32 Lean.Touch.LeanFingerFilter::RequiredFingerCount
	int32_t ___RequiredFingerCount_2;
	// System.Int32 Lean.Touch.LeanFingerFilter::RequiredMouseButtons
	int32_t ___RequiredMouseButtons_3;
	// Lean.Touch.LeanSelectable Lean.Touch.LeanFingerFilter::RequiredSelectable
	LeanSelectable_t2376D6100D5CC4EEC7F3BB4A3B0D57810CBDA1D9 * ___RequiredSelectable_4;
	// System.Collections.Generic.List`1<Lean.Touch.LeanFinger> Lean.Touch.LeanFingerFilter::fingers
	List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * ___fingers_5;

public:
	inline static int32_t get_offset_of_Filter_0() { return static_cast<int32_t>(offsetof(LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4, ___Filter_0)); }
	inline int32_t get_Filter_0() const { return ___Filter_0; }
	inline int32_t* get_address_of_Filter_0() { return &___Filter_0; }
	inline void set_Filter_0(int32_t value)
	{
		___Filter_0 = value;
	}

	inline static int32_t get_offset_of_IgnoreStartedOverGui_1() { return static_cast<int32_t>(offsetof(LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4, ___IgnoreStartedOverGui_1)); }
	inline bool get_IgnoreStartedOverGui_1() const { return ___IgnoreStartedOverGui_1; }
	inline bool* get_address_of_IgnoreStartedOverGui_1() { return &___IgnoreStartedOverGui_1; }
	inline void set_IgnoreStartedOverGui_1(bool value)
	{
		___IgnoreStartedOverGui_1 = value;
	}

	inline static int32_t get_offset_of_RequiredFingerCount_2() { return static_cast<int32_t>(offsetof(LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4, ___RequiredFingerCount_2)); }
	inline int32_t get_RequiredFingerCount_2() const { return ___RequiredFingerCount_2; }
	inline int32_t* get_address_of_RequiredFingerCount_2() { return &___RequiredFingerCount_2; }
	inline void set_RequiredFingerCount_2(int32_t value)
	{
		___RequiredFingerCount_2 = value;
	}

	inline static int32_t get_offset_of_RequiredMouseButtons_3() { return static_cast<int32_t>(offsetof(LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4, ___RequiredMouseButtons_3)); }
	inline int32_t get_RequiredMouseButtons_3() const { return ___RequiredMouseButtons_3; }
	inline int32_t* get_address_of_RequiredMouseButtons_3() { return &___RequiredMouseButtons_3; }
	inline void set_RequiredMouseButtons_3(int32_t value)
	{
		___RequiredMouseButtons_3 = value;
	}

	inline static int32_t get_offset_of_RequiredSelectable_4() { return static_cast<int32_t>(offsetof(LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4, ___RequiredSelectable_4)); }
	inline LeanSelectable_t2376D6100D5CC4EEC7F3BB4A3B0D57810CBDA1D9 * get_RequiredSelectable_4() const { return ___RequiredSelectable_4; }
	inline LeanSelectable_t2376D6100D5CC4EEC7F3BB4A3B0D57810CBDA1D9 ** get_address_of_RequiredSelectable_4() { return &___RequiredSelectable_4; }
	inline void set_RequiredSelectable_4(LeanSelectable_t2376D6100D5CC4EEC7F3BB4A3B0D57810CBDA1D9 * value)
	{
		___RequiredSelectable_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RequiredSelectable_4), (void*)value);
	}

	inline static int32_t get_offset_of_fingers_5() { return static_cast<int32_t>(offsetof(LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4, ___fingers_5)); }
	inline List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * get_fingers_5() const { return ___fingers_5; }
	inline List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E ** get_address_of_fingers_5() { return &___fingers_5; }
	inline void set_fingers_5(List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * value)
	{
		___fingers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingers_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Lean.Touch.LeanFingerFilter
struct LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4_marshaled_pinvoke
{
	int32_t ___Filter_0;
	int32_t ___IgnoreStartedOverGui_1;
	int32_t ___RequiredFingerCount_2;
	int32_t ___RequiredMouseButtons_3;
	LeanSelectable_t2376D6100D5CC4EEC7F3BB4A3B0D57810CBDA1D9 * ___RequiredSelectable_4;
	List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * ___fingers_5;
};
// Native definition for COM marshalling of Lean.Touch.LeanFingerFilter
struct LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4_marshaled_com
{
	int32_t ___Filter_0;
	int32_t ___IgnoreStartedOverGui_1;
	int32_t ___RequiredFingerCount_2;
	int32_t ___RequiredMouseButtons_3;
	LeanSelectable_t2376D6100D5CC4EEC7F3BB4A3B0D57810CBDA1D9 * ___RequiredSelectable_4;
	List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * ___fingers_5;
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

// Vuforia.VuforiaRuntime
struct  VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D  : public RuntimeObject
{
public:
	// System.Action`1<Vuforia.VuforiaUnity_InitError> Vuforia.VuforiaRuntime::mOnVuforiaInitError
	Action_1_t998FA6BF20F5FA561589835D396749D5113B03CD * ___mOnVuforiaInitError_1;
	// System.Boolean Vuforia.VuforiaRuntime::mFailedToInitialize
	bool ___mFailedToInitialize_2;
	// Vuforia.VuforiaUnity_InitError Vuforia.VuforiaRuntime::mInitError
	int32_t ___mInitError_3;
	// Vuforia.VuforiaRuntime_InitState Vuforia.VuforiaRuntime::mInitState
	int32_t ___mInitState_4;
	// System.Int32 Vuforia.VuforiaRuntime::mTimesPermissionCheckFailed
	int32_t ___mTimesPermissionCheckFailed_5;
	// System.Boolean Vuforia.VuforiaRuntime::mAppIsQuitting
	bool ___mAppIsQuitting_8;

public:
	inline static int32_t get_offset_of_mOnVuforiaInitError_1() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mOnVuforiaInitError_1)); }
	inline Action_1_t998FA6BF20F5FA561589835D396749D5113B03CD * get_mOnVuforiaInitError_1() const { return ___mOnVuforiaInitError_1; }
	inline Action_1_t998FA6BF20F5FA561589835D396749D5113B03CD ** get_address_of_mOnVuforiaInitError_1() { return &___mOnVuforiaInitError_1; }
	inline void set_mOnVuforiaInitError_1(Action_1_t998FA6BF20F5FA561589835D396749D5113B03CD * value)
	{
		___mOnVuforiaInitError_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mOnVuforiaInitError_1), (void*)value);
	}

	inline static int32_t get_offset_of_mFailedToInitialize_2() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mFailedToInitialize_2)); }
	inline bool get_mFailedToInitialize_2() const { return ___mFailedToInitialize_2; }
	inline bool* get_address_of_mFailedToInitialize_2() { return &___mFailedToInitialize_2; }
	inline void set_mFailedToInitialize_2(bool value)
	{
		___mFailedToInitialize_2 = value;
	}

	inline static int32_t get_offset_of_mInitError_3() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mInitError_3)); }
	inline int32_t get_mInitError_3() const { return ___mInitError_3; }
	inline int32_t* get_address_of_mInitError_3() { return &___mInitError_3; }
	inline void set_mInitError_3(int32_t value)
	{
		___mInitError_3 = value;
	}

	inline static int32_t get_offset_of_mInitState_4() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mInitState_4)); }
	inline int32_t get_mInitState_4() const { return ___mInitState_4; }
	inline int32_t* get_address_of_mInitState_4() { return &___mInitState_4; }
	inline void set_mInitState_4(int32_t value)
	{
		___mInitState_4 = value;
	}

	inline static int32_t get_offset_of_mTimesPermissionCheckFailed_5() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mTimesPermissionCheckFailed_5)); }
	inline int32_t get_mTimesPermissionCheckFailed_5() const { return ___mTimesPermissionCheckFailed_5; }
	inline int32_t* get_address_of_mTimesPermissionCheckFailed_5() { return &___mTimesPermissionCheckFailed_5; }
	inline void set_mTimesPermissionCheckFailed_5(int32_t value)
	{
		___mTimesPermissionCheckFailed_5 = value;
	}

	inline static int32_t get_offset_of_mAppIsQuitting_8() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D, ___mAppIsQuitting_8)); }
	inline bool get_mAppIsQuitting_8() const { return ___mAppIsQuitting_8; }
	inline bool* get_address_of_mAppIsQuitting_8() { return &___mAppIsQuitting_8; }
	inline void set_mAppIsQuitting_8(bool value)
	{
		___mAppIsQuitting_8 = value;
	}
};

struct VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_StaticFields
{
public:
	// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::mInstance
	VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * ___mInstance_6;
	// System.Object Vuforia.VuforiaRuntime::mPadlock
	RuntimeObject * ___mPadlock_7;

public:
	inline static int32_t get_offset_of_mInstance_6() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_StaticFields, ___mInstance_6)); }
	inline VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * get_mInstance_6() const { return ___mInstance_6; }
	inline VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D ** get_address_of_mInstance_6() { return &___mInstance_6; }
	inline void set_mInstance_6(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * value)
	{
		___mInstance_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mInstance_6), (void*)value);
	}

	inline static int32_t get_offset_of_mPadlock_7() { return static_cast<int32_t>(offsetof(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_StaticFields, ___mPadlock_7)); }
	inline RuntimeObject * get_mPadlock_7() const { return ___mPadlock_7; }
	inline RuntimeObject ** get_address_of_mPadlock_7() { return &___mPadlock_7; }
	inline void set_mPadlock_7(RuntimeObject * value)
	{
		___mPadlock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mPadlock_7), (void*)value);
	}
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
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_4), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Lean.Touch.LeanTwistRotate
struct  LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Lean.Touch.LeanFingerFilter Lean.Touch.LeanTwistRotate::Use
	LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  ___Use_4;
	// UnityEngine.Camera Lean.Touch.LeanTwistRotate::Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___Camera_5;
	// System.Boolean Lean.Touch.LeanTwistRotate::Relative
	bool ___Relative_6;
	// System.Single Lean.Touch.LeanTwistRotate::Dampening
	float ___Dampening_7;
	// UnityEngine.Vector3 Lean.Touch.LeanTwistRotate::remainingTranslation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___remainingTranslation_8;
	// UnityEngine.Quaternion Lean.Touch.LeanTwistRotate::remainingRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___remainingRotation_9;

public:
	inline static int32_t get_offset_of_Use_4() { return static_cast<int32_t>(offsetof(LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C, ___Use_4)); }
	inline LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  get_Use_4() const { return ___Use_4; }
	inline LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * get_address_of_Use_4() { return &___Use_4; }
	inline void set_Use_4(LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  value)
	{
		___Use_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Use_4))->___RequiredSelectable_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Use_4))->___fingers_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Camera_5() { return static_cast<int32_t>(offsetof(LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C, ___Camera_5)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_Camera_5() const { return ___Camera_5; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_Camera_5() { return &___Camera_5; }
	inline void set_Camera_5(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___Camera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Camera_5), (void*)value);
	}

	inline static int32_t get_offset_of_Relative_6() { return static_cast<int32_t>(offsetof(LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C, ___Relative_6)); }
	inline bool get_Relative_6() const { return ___Relative_6; }
	inline bool* get_address_of_Relative_6() { return &___Relative_6; }
	inline void set_Relative_6(bool value)
	{
		___Relative_6 = value;
	}

	inline static int32_t get_offset_of_Dampening_7() { return static_cast<int32_t>(offsetof(LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C, ___Dampening_7)); }
	inline float get_Dampening_7() const { return ___Dampening_7; }
	inline float* get_address_of_Dampening_7() { return &___Dampening_7; }
	inline void set_Dampening_7(float value)
	{
		___Dampening_7 = value;
	}

	inline static int32_t get_offset_of_remainingTranslation_8() { return static_cast<int32_t>(offsetof(LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C, ___remainingTranslation_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_remainingTranslation_8() const { return ___remainingTranslation_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_remainingTranslation_8() { return &___remainingTranslation_8; }
	inline void set_remainingTranslation_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___remainingTranslation_8 = value;
	}

	inline static int32_t get_offset_of_remainingRotation_9() { return static_cast<int32_t>(offsetof(LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C, ___remainingRotation_9)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_remainingRotation_9() const { return ___remainingRotation_9; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_remainingRotation_9() { return &___remainingRotation_9; }
	inline void set_remainingRotation_9(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___remainingRotation_9 = value;
	}
};


// Lean.Touch.LeanTwistRotateAxis
struct  LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Lean.Touch.LeanFingerFilter Lean.Touch.LeanTwistRotateAxis::Use
	LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  ___Use_4;
	// UnityEngine.Vector3 Lean.Touch.LeanTwistRotateAxis::Axis
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___Axis_5;
	// UnityEngine.Space Lean.Touch.LeanTwistRotateAxis::Space
	int32_t ___Space_6;

public:
	inline static int32_t get_offset_of_Use_4() { return static_cast<int32_t>(offsetof(LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115, ___Use_4)); }
	inline LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  get_Use_4() const { return ___Use_4; }
	inline LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * get_address_of_Use_4() { return &___Use_4; }
	inline void set_Use_4(LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  value)
	{
		___Use_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Use_4))->___RequiredSelectable_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Use_4))->___fingers_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Axis_5() { return static_cast<int32_t>(offsetof(LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115, ___Axis_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_Axis_5() const { return ___Axis_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_Axis_5() { return &___Axis_5; }
	inline void set_Axis_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___Axis_5 = value;
	}

	inline static int32_t get_offset_of_Space_6() { return static_cast<int32_t>(offsetof(LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115, ___Space_6)); }
	inline int32_t get_Space_6() const { return ___Space_6; }
	inline int32_t* get_address_of_Space_6() { return &___Space_6; }
	inline void set_Space_6(int32_t value)
	{
		___Space_6 = value;
	}
};


// Lean.Touch.movePerson
struct  movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Lean.Touch.LeanFingerFilter Lean.Touch.movePerson::Use
	LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  ___Use_4;
	// UnityEngine.Camera Lean.Touch.movePerson::Camera
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___Camera_5;
	// System.Single Lean.Touch.movePerson::Dampening
	float ___Dampening_6;
	// UnityEngine.Vector3 Lean.Touch.movePerson::remainingTranslation
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___remainingTranslation_7;

public:
	inline static int32_t get_offset_of_Use_4() { return static_cast<int32_t>(offsetof(movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E, ___Use_4)); }
	inline LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  get_Use_4() const { return ___Use_4; }
	inline LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * get_address_of_Use_4() { return &___Use_4; }
	inline void set_Use_4(LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  value)
	{
		___Use_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Use_4))->___RequiredSelectable_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___Use_4))->___fingers_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_Camera_5() { return static_cast<int32_t>(offsetof(movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E, ___Camera_5)); }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * get_Camera_5() const { return ___Camera_5; }
	inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 ** get_address_of_Camera_5() { return &___Camera_5; }
	inline void set_Camera_5(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * value)
	{
		___Camera_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Camera_5), (void*)value);
	}

	inline static int32_t get_offset_of_Dampening_6() { return static_cast<int32_t>(offsetof(movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E, ___Dampening_6)); }
	inline float get_Dampening_6() const { return ___Dampening_6; }
	inline float* get_address_of_Dampening_6() { return &___Dampening_6; }
	inline void set_Dampening_6(float value)
	{
		___Dampening_6 = value;
	}

	inline static int32_t get_offset_of_remainingTranslation_7() { return static_cast<int32_t>(offsetof(movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E, ___remainingTranslation_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_remainingTranslation_7() const { return ___remainingTranslation_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_remainingTranslation_7() { return &___remainingTranslation_7; }
	inline void set_remainingTranslation_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___remainingTranslation_7 = value;
	}
};


// StaticCamManager
struct  StaticCamManager_t827D8CBFDF954FAF0FC474CD97284A3929454BC8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
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


// book_load
struct  book_load_t7F81F1FA3FBBAD1D7EAC36B8D2AEBAF99624573D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// book_player
struct  book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 book_player::page
	int32_t ___page_4;
	// System.Boolean book_player::stop
	bool ___stop_5;
	// UnityEngine.GameObject book_player::pages
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___pages_6;

public:
	inline static int32_t get_offset_of_page_4() { return static_cast<int32_t>(offsetof(book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3, ___page_4)); }
	inline int32_t get_page_4() const { return ___page_4; }
	inline int32_t* get_address_of_page_4() { return &___page_4; }
	inline void set_page_4(int32_t value)
	{
		___page_4 = value;
	}

	inline static int32_t get_offset_of_stop_5() { return static_cast<int32_t>(offsetof(book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3, ___stop_5)); }
	inline bool get_stop_5() const { return ___stop_5; }
	inline bool* get_address_of_stop_5() { return &___stop_5; }
	inline void set_stop_5(bool value)
	{
		___stop_5 = value;
	}

	inline static int32_t get_offset_of_pages_6() { return static_cast<int32_t>(offsetof(book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3, ___pages_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_pages_6() const { return ___pages_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_pages_6() { return &___pages_6; }
	inline void set_pages_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___pages_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pages_6), (void*)value);
	}
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


// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mAF22A00FA85F51B7F2099BFC8BF569187B04F6F9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);

// System.Void Lean.Touch.LeanFingerFilter::AddFinger(Lean.Touch.LeanFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFingerFilter_AddFinger_mDAA24B9AB2AAD4A3D09CA4CFB87FDB8BBFE61C2E (LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * __this, LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * ___finger0, const RuntimeMethod* method);
// System.Void Lean.Touch.LeanFingerFilter::RemoveFinger(Lean.Touch.LeanFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFingerFilter_RemoveFinger_mE9A39E454DF695AB2194D7760D7E08BEF701FA3A (LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * __this, LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * ___finger0, const RuntimeMethod* method);
// System.Void Lean.Touch.LeanFingerFilter::RemoveAllFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFingerFilter_RemoveAllFingers_m3E307B2F4F9B52807848AB527F7A07467981AF71 (LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void Lean.Touch.LeanFingerFilter::UpdateRequiredSelectable(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFingerFilter_UpdateRequiredSelectable_m6913438E62549CC46824F8117A7AF8A95F768D17 (LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<Lean.Touch.LeanFinger> Lean.Touch.LeanFingerFilter::GetFingers(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * LeanFingerFilter_GetFingers_mEACC54A63E255BAF838AD7C40804282A03FEBB90 (LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * __this, bool ___ignoreUpFingers0, const RuntimeMethod* method);
// System.Single Lean.Touch.LeanGesture::GetTwistDegrees(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanGesture_GetTwistDegrees_mEF59A73DC08474FFD965A451DF1CC11E64549EEA (List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * ___fingers0, const RuntimeMethod* method);
// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetScreenCenter(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  LeanGesture_GetScreenCenter_mBEC4DE64D37ED43EB82B6E85F52A96148A42F080 (List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * ___fingers0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Single Lean.Touch.LeanTouch::GetDampenFactor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LeanTouch_GetDampenFactor_mCEE40A0D99DD2A50B886C7F7898A962F64B63BF9 (float ___dampening0, float ___deltaTime1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___a0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mAF22A00FA85F51B7F2099BFC8BF569187B04F6F9_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409 (Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  RectTransformUtility_WorldToScreenPoint_m114DFD961456722DED0FFB2F8DCB46A04C2CCA20 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___worldPoint1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m821FF925C5B70477F153B4C053AE9E36A04A774F (RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___rect0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenPoint1, Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___cam2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___worldPoint3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Camera Lean.Touch.LeanTouch::GetCamera(UnityEngine.Camera,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * LeanTouch_GetCamera_mC9C5B0EC3E9D5C79724BE049DA38D90B329CF389 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * ___currentCamera0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameObject1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m97139CB2EE76D5CD8308C1AD0499A5F163FC7F51 (RuntimeObject * ___message0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___context1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_InverseTransformDirection_m6F0513F2EC19C204F2077E3C68DD1D45317CB5F2 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// System.Void Lean.Touch.LeanFingerFilter::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanFingerFilter__ctor_m38024A7C3D287F43994F1F1C84C3E52C7093B2EB (LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * __this, bool ___newIgnoreStartedOverGui0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mF23DA7E98F655E8A0D633A2757D7F88B2EFA945C (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis0, float ___angle1, int32_t ___relativeTo2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55 (const RuntimeMethod* method);
// UnityEngine.Vector2 Lean.Touch.LeanGesture::GetScreenDelta(System.Collections.Generic.List`1<Lean.Touch.LeanFinger>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  LeanGesture_GetScreenDelta_mDEF2602190CCE528E2B82D389003D776E903FB50 (List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * ___fingers0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___lhs0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rhs1, const RuntimeMethod* method);
// System.Void Lean.Touch.movePerson::TranslateUI(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson_TranslateUI_m7B432C6DEE4DFBE20539E2E0D66365FE1E581FD2 (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenDelta0, const RuntimeMethod* method);
// System.Void Lean.Touch.movePerson::Translate(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson_Translate_m37AE3F73719EF91DB8F118841A5ED14F8E1D561E (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenDelta0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// Vuforia.VuforiaRuntime Vuforia.VuforiaRuntime::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * VuforiaRuntime_get_Instance_m09A801C6052F96463B0F330EE3F2453DFB329607 (const RuntimeMethod* method);
// System.Void Vuforia.VuforiaRuntime::InitVuforia()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VuforiaRuntime_InitVuforia_mB168917FABEAC7C1C43FB3AEF9E231883A875B5E (VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator book_load::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* book_load_wait_for_scene_mF1039EB8D16263B9965BC667C5D7FC0F3F277C53 (book_load_t7F81F1FA3FBBAD1D7EAC36B8D2AEBAF99624573D * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void book_load/<wait_for_scene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1__ctor_m09FF6B5E878A19C3795ACDD8712F35C5D68FF930 (U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5 (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.IEnumerator cam_load::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* cam_load_wait_for_scene_m8C01F03C544CC7046245573952572469470C4501 (cam_load_tF76D93D06003D14C69F4973D86FAEA5E32936DB4 * __this, const RuntimeMethod* method);
// System.Void cam_load/<wait_for_scene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1__ctor_m8105546641D29FD85D7EC82BADDFCCE5D0AB9FC1 (U3Cwait_for_sceneU3Ed__1_t119546EB74632D7C9D5C27AD2A55A33C12C8C7E3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator loadCQ::LoadAsynchronously(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* loadCQ_LoadAsynchronously_mD0AD16B8CBCA391211BC144050A9A8B4006F9E47 (loadCQ_tA36FFE6F58D73D0B0710A8155DFD7686D1403121 * __this, int32_t ___sceneIndex0, const RuntimeMethod* method);
// System.Void loadCQ/<LoadAsynchronously>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAsynchronouslyU3Ed__3__ctor_m02D8B6F22F3A7D4F43961B2B893E2BCD9CA88CEA (U3CLoadAsynchronouslyU3Ed__3_t955821ACE45EDBDC4B94FFF5860C583B0BB05053 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D * SceneManager_LoadSceneAsync_mBB1934F97E71D72F2EF5213F7963C933188EF1D2 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
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
// System.Void music_player::StartAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void music_player_StartAudio_mACD0C24B91D95DC313C4C700D06927CBF3BCB240 (music_player_t3D7AF7EF3D2CC97DF56AAB0F7A38AE928021E969 * __this, int32_t ___changeMusic0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
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
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90  Screen_get_currentResolution_m28049B983AB45AC9321A7A8F5EBA5C0A0A65D22A (const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_height_m5141CDF13E8C1ADEF47AEB5155AD72BD13121CCD (Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Resolution::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Resolution_get_width_m6254A0489C2CCB1574E4D98E45009DDE5212655C (Resolution_t350D132B8526B5211E0BF8B22782F20D55994A90 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
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
// System.Void Lean.Touch.LeanTwistRotate::AddFinger(Lean.Touch.LeanFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate_AddFinger_mDE4FD2A631DD2EFD3DA74F17B763DE52B949E3F0 (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * ___finger0, const RuntimeMethod* method)
{
	{
		// Use.AddFinger(finger);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * L_1 = ___finger0;
		LeanFingerFilter_AddFinger_mDAA24B9AB2AAD4A3D09CA4CFB87FDB8BBFE61C2E((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotate::RemoveFinger(Lean.Touch.LeanFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate_RemoveFinger_mD1BBC9D8B15374B8D0E022034249B66DEB3CC24A (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * ___finger0, const RuntimeMethod* method)
{
	{
		// Use.RemoveFinger(finger);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * L_1 = ___finger0;
		LeanFingerFilter_RemoveFinger_mE9A39E454DF695AB2194D7760D7E08BEF701FA3A((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotate::RemoveAllFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate_RemoveAllFingers_m1CB1304724DBBE074EF43B1DB411728B5797AFED (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, const RuntimeMethod* method)
{
	{
		// Use.RemoveAllFingers();
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		LeanFingerFilter_RemoveAllFingers_m3E307B2F4F9B52807848AB527F7A07467981AF71((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotate::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate_Awake_mCD820242999E16247139DB803421E70DEF5A48AA (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, const RuntimeMethod* method)
{
	{
		// Use.UpdateRequiredSelectable(gameObject);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		LeanFingerFilter_UpdateRequiredSelectable_m6913438E62549CC46824F8117A7AF8A95F768D17((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate_Update_m87229E2E52D6F54E95C2A90E84AD875F06F7F7F6 (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeanTwistRotate_Update_m87229E2E52D6F54E95C2A90E84AD875F06F7F7F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		// var oldPosition = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var oldRotation = transform.localRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// var fingers = Use.GetFingers();
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_4 = __this->get_address_of_Use_4();
		List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * L_5 = LeanFingerFilter_GetFingers_mEACC54A63E255BAF838AD7C40804282A03FEBB90((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_4, (bool)0, /*hidden argument*/NULL);
		V_2 = L_5;
		// var twistDegrees = LeanGesture.GetTwistDegrees(fingers);
		List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * L_6 = V_2;
		float L_7 = LeanGesture_GetTwistDegrees_mEF59A73DC08474FFD965A451DF1CC11E64549EEA(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// if (twistDegrees != 0.0f)
		float L_8 = V_3;
		if ((((float)L_8) == ((float)(0.0f))))
		{
			goto IL_0092;
		}
	}
	{
		// if (Relative == true)
		bool L_9 = __this->get_Relative_6();
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		// var twistScreenCenter = LeanGesture.GetScreenCenter(fingers);
		List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * L_10 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = LeanGesture_GetScreenCenter_mBEC4DE64D37ED43EB82B6E85F52A96148A42F080(L_10, /*hidden argument*/NULL);
		V_7 = L_11;
		// if (transform is RectTransform)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		if (!((RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 *)IsInstSealed((RuntimeObject*)L_12, RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_il2cpp_TypeInfo_var)))
		{
			goto IL_0063;
		}
	}
	{
		// TranslateUI(twistDegrees, twistScreenCenter);
		float L_13 = V_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = V_7;
		VirtActionInvoker2< float, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(6 /* System.Void Lean.Touch.LeanTwistRotate::TranslateUI(System.Single,UnityEngine.Vector2) */, __this, L_13, L_14);
		// RotateUI(twistDegrees);
		float L_15 = V_3;
		VirtActionInvoker1< float >::Invoke(8 /* System.Void Lean.Touch.LeanTwistRotate::RotateUI(System.Single) */, __this, L_15);
		// }
		goto IL_0092;
	}

IL_0063:
	{
		// Translate(twistDegrees, twistScreenCenter);
		float L_16 = V_3;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_7;
		VirtActionInvoker2< float, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  >::Invoke(7 /* System.Void Lean.Touch.LeanTwistRotate::Translate(System.Single,UnityEngine.Vector2) */, __this, L_16, L_17);
		// Rotate(twistDegrees);
		float L_18 = V_3;
		VirtActionInvoker1< float >::Invoke(9 /* System.Void Lean.Touch.LeanTwistRotate::Rotate(System.Single) */, __this, L_18);
		// }
		goto IL_0092;
	}

IL_0075:
	{
		// if (transform is RectTransform)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		if (!((RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 *)IsInstSealed((RuntimeObject*)L_19, RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_il2cpp_TypeInfo_var)))
		{
			goto IL_008b;
		}
	}
	{
		// RotateUI(twistDegrees);
		float L_20 = V_3;
		VirtActionInvoker1< float >::Invoke(8 /* System.Void Lean.Touch.LeanTwistRotate::RotateUI(System.Single) */, __this, L_20);
		// }
		goto IL_0092;
	}

IL_008b:
	{
		// Rotate(twistDegrees);
		float L_21 = V_3;
		VirtActionInvoker1< float >::Invoke(9 /* System.Void Lean.Touch.LeanTwistRotate::Rotate(System.Single) */, __this, L_21);
	}

IL_0092:
	{
		// remainingTranslation += transform.localPosition - oldPosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = __this->get_remainingTranslation_8();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_24, L_25, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_22, L_26, /*hidden argument*/NULL);
		__this->set_remainingTranslation_8(L_27);
		// remainingRotation    *= Quaternion.Inverse(oldRotation) * transform.localRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = __this->get_remainingRotation_9();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_30 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_29, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_32 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_31, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_33 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_30, L_32, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_34 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_28, L_33, /*hidden argument*/NULL);
		__this->set_remainingRotation_9(L_34);
		// var factor = LeanTouch.GetDampenFactor(Dampening, Time.deltaTime);
		float L_35 = __this->get_Dampening_7();
		float L_36 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		float L_37 = LeanTouch_GetDampenFactor_mCEE40A0D99DD2A50B886C7F7898A962F64B63BF9(L_35, L_36, /*hidden argument*/NULL);
		V_4 = L_37;
		// var newRemainingTranslation = Vector3.Lerp(remainingTranslation, Vector3.zero, factor);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = __this->get_remainingTranslation_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_40 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_38, L_39, L_40, /*hidden argument*/NULL);
		V_5 = L_41;
		// var newRemainingRotation    = Quaternion.Slerp(remainingRotation, Quaternion.identity, factor);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_42 = __this->get_remainingRotation_9();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_43 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		float L_44 = V_4;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_45 = Quaternion_Slerp_m56DE173C3520C83DF3F1C6EDFA82FF88A2C9E756(L_42, L_43, L_44, /*hidden argument*/NULL);
		V_6 = L_45;
		// transform.localPosition = oldPosition + remainingTranslation - newRemainingTranslation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_46 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = __this->get_remainingTranslation_8();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_47, L_48, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_46, L_51, /*hidden argument*/NULL);
		// transform.localRotation = oldRotation * Quaternion.Inverse(newRemainingRotation) * remainingRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_52 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_53 = V_1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_54 = V_6;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_55 = Quaternion_Inverse_mC3A78571A826F05CE179637E675BD25F8B203E0C(L_54, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_56 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_53, L_55, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_57 = __this->get_remainingRotation_9();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_58 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_56, L_57, /*hidden argument*/NULL);
		NullCheck(L_52);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_52, L_58, /*hidden argument*/NULL);
		// remainingTranslation = newRemainingTranslation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = V_5;
		__this->set_remainingTranslation_8(L_59);
		// remainingRotation    = newRemainingRotation;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_60 = V_6;
		__this->set_remainingRotation_9(L_60);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotate::TranslateUI(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate_TranslateUI_m827527C35B8EF5B6259067F074E1BC60D823D35E (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, float ___twistDegrees0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___twistScreenCenter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeanTwistRotate_TranslateUI_m827527C35B8EF5B6259067F074E1BC60D823D35E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * V_4 = NULL;
	{
		// var camera = Camera;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_Camera_5();
		V_0 = L_0;
		// if (camera == null)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		// var canvas = transform.GetComponentInParent<Canvas>();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_4 = Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B(L_3, /*hidden argument*/Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var);
		V_4 = L_4;
		// if (canvas != null && canvas.renderMode != RenderMode.ScreenSpaceOverlay)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_5 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_7 = V_4;
		NullCheck(L_7);
		int32_t L_8 = Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		// camera = canvas.worldCamera;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_9 = V_4;
		NullCheck(L_9);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_10 = Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0038:
	{
		// var screenPoint = RectTransformUtility.WorldToScreenPoint(camera, transform.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = RectTransformUtility_WorldToScreenPoint_m114DFD961456722DED0FFB2F8DCB46A04C2CCA20(L_11, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// var twistRotation = Quaternion.Euler(0.0f, 0.0f, twistDegrees);
		float L_15 = ___twistDegrees0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), L_15, /*hidden argument*/NULL);
		// var screenDelta   = twistRotation * (screenPoint - twistScreenCenter);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = ___twistScreenCenter1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_17, L_18, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_16, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// screenPoint.x = twistScreenCenter.x + screenDelta.x;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_22 = ___twistScreenCenter1;
		float L_23 = L_22.get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_2;
		float L_25 = L_24.get_x_2();
		(&V_1)->set_x_0(((float)il2cpp_codegen_add((float)L_23, (float)L_25)));
		// screenPoint.y = twistScreenCenter.y + screenDelta.y;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = ___twistScreenCenter1;
		float L_27 = L_26.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = V_2;
		float L_29 = L_28.get_y_3();
		(&V_1)->set_y_1(((float)il2cpp_codegen_add((float)L_27, (float)L_29)));
		// var worldPoint = default(Vector3);
		il2cpp_codegen_initobj((&V_3), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		// if (RectTransformUtility.ScreenPointToWorldPointInRectangle(transform.parent as RectTransform, screenPoint, camera, out worldPoint) == true)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_31 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_30, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32 = V_1;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_33 = V_0;
		bool L_34 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m821FF925C5B70477F153B4C053AE9E36A04A774F(((RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 *)IsInstSealed((RuntimeObject*)L_31, RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_il2cpp_TypeInfo_var)), L_32, L_33, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_3), /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00c3;
		}
	}
	{
		// transform.position = worldPoint;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_35 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_3;
		NullCheck(L_35);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_35, L_36, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotate::Translate(System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate_Translate_m5B6B5B12820F2A57BE6AE7D8048ADC37A515AA78 (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, float ___twistDegrees0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___twistScreenCenter1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeanTwistRotate_Translate_m5B6B5B12820F2A57BE6AE7D8048ADC37A515AA78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var camera = LeanTouch.GetCamera(Camera, gameObject);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_Camera_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = LeanTouch_GetCamera_mC9C5B0EC3E9D5C79724BE049DA38D90B329CF389(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (camera != null)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_008f;
		}
	}
	{
		// var screenPoint = camera.WorldToScreenPoint(transform.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// var twistRotation = Quaternion.Euler(0.0f, 0.0f, twistDegrees);
		float L_9 = ___twistDegrees0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), L_9, /*hidden argument*/NULL);
		// var screenDelta   = twistRotation * ((Vector2)screenPoint - twistScreenCenter);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_11, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = ___twistScreenCenter1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = Vector2_op_Subtraction_m2B347E4311EDBBBF27573E34899D2492E6B063C0(L_12, L_13, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_14, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_10, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// screenPoint.x = twistScreenCenter.x + screenDelta.x;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = ___twistScreenCenter1;
		float L_18 = L_17.get_x_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_2;
		float L_20 = L_19.get_x_2();
		(&V_1)->set_x_2(((float)il2cpp_codegen_add((float)L_18, (float)L_20)));
		// screenPoint.y = twistScreenCenter.y + screenDelta.y;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = ___twistScreenCenter1;
		float L_22 = L_21.get_y_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_2;
		float L_24 = L_23.get_y_3();
		(&V_1)->set_y_3(((float)il2cpp_codegen_add((float)L_22, (float)L_24)));
		// transform.position = camera.ScreenToWorldPoint(screenPoint);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_26 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_1;
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5(L_26, L_27, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_25, L_28, /*hidden argument*/NULL);
		// }
		return;
	}

IL_008f:
	{
		// Debug.LogError("Failed to find camera. Either tag your cameras MainCamera, or set one in this component.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m97139CB2EE76D5CD8308C1AD0499A5F163FC7F51(_stringLiteralE61423F9EB2B4FB8860EE3574BF74EE765C66FCF, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotate::RotateUI(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate_RotateUI_m3D797A3168BD5A43CCC9DE44A3FE86399655FF1F (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, float ___twistDegrees0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeanTwistRotate_RotateUI_m3D797A3168BD5A43CCC9DE44A3FE86399655FF1F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.rotation *= Quaternion.Euler(0.0f, 0.0f, twistDegrees);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = L_0;
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		float L_3 = ___twistDegrees0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), (0.0f), L_3, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_1, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotate::Rotate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate_Rotate_mE67FE07872236D0B06C12EB916239357DF327AD3 (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, float ___twistDegrees0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeanTwistRotate_Rotate_mE67FE07872236D0B06C12EB916239357DF327AD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var camera = LeanTouch.GetCamera(Camera, gameObject);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_Camera_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = LeanTouch_GetCamera_mC9C5B0EC3E9D5C79724BE049DA38D90B329CF389(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (camera != null)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		// var axis = transform.InverseTransformDirection(camera.transform.forward);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_6 = V_0;
		NullCheck(L_6);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_InverseTransformDirection_m6F0513F2EC19C204F2077E3C68DD1D45317CB5F2(L_5, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// transform.rotation *= Quaternion.AngleAxis(twistDegrees, axis);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = L_10;
		NullCheck(L_11);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_11, /*hidden argument*/NULL);
		float L_13 = ___twistDegrees0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_13, L_14, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_16 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_12, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_11, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0050:
	{
		// Debug.LogError("Failed to find camera. Either tag your cameras MainCamera, or set one in this component.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m97139CB2EE76D5CD8308C1AD0499A5F163FC7F51(_stringLiteralE61423F9EB2B4FB8860EE3574BF74EE765C66FCF, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotate__ctor_mD4DAA886E5926C787ABA438D8EE9F50CE2ADB292 (LeanTwistRotate_t52B0ED5667D156F034503F6C6967DAEA9A2A912C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeanTwistRotate__ctor_mD4DAA886E5926C787ABA438D8EE9F50CE2ADB292_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LeanFingerFilter Use = new LeanFingerFilter(true);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  L_0;
		memset((&L_0), 0, sizeof(L_0));
		LeanFingerFilter__ctor_m38024A7C3D287F43994F1F1C84C3E52C7093B2EB((&L_0), (bool)1, /*hidden argument*/NULL);
		__this->set_Use_4(L_0);
		// public float Dampening = -1.0f;
		__this->set_Dampening_7((-1.0f));
		// private Quaternion remainingRotation = Quaternion.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		__this->set_remainingRotation_9(L_1);
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
// System.Void Lean.Touch.LeanTwistRotateAxis::AddFinger(Lean.Touch.LeanFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotateAxis_AddFinger_mC604F107DA4D5263ECE01D19B9E98EBC26D17239 (LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115 * __this, LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * ___finger0, const RuntimeMethod* method)
{
	{
		// Use.AddFinger(finger);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * L_1 = ___finger0;
		LeanFingerFilter_AddFinger_mDAA24B9AB2AAD4A3D09CA4CFB87FDB8BBFE61C2E((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotateAxis::RemoveFinger(Lean.Touch.LeanFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotateAxis_RemoveFinger_m457308812431CC5A0E6D7FBBF6281666303CAEBB (LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115 * __this, LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * ___finger0, const RuntimeMethod* method)
{
	{
		// Use.RemoveFinger(finger);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * L_1 = ___finger0;
		LeanFingerFilter_RemoveFinger_mE9A39E454DF695AB2194D7760D7E08BEF701FA3A((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotateAxis::RemoveAllFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotateAxis_RemoveAllFingers_m8FC10155B79E93415E8C1BEF6F889DEA5B824987 (LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115 * __this, const RuntimeMethod* method)
{
	{
		// Use.RemoveAllFingers();
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		LeanFingerFilter_RemoveAllFingers_m3E307B2F4F9B52807848AB527F7A07467981AF71((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotateAxis::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotateAxis_Awake_m2B028220577588F895DA50A39564D1A2EDC13A45 (LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115 * __this, const RuntimeMethod* method)
{
	{
		// Use.UpdateRequiredSelectable(gameObject);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		LeanFingerFilter_UpdateRequiredSelectable_m6913438E62549CC46824F8117A7AF8A95F768D17((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotateAxis::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotateAxis_Update_mE33BC6B626CD531D44BE32396265EE7F18F8E384 (LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		// var fingers = Use.GetFingers();
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * L_1 = LeanFingerFilter_GetFingers_mEACC54A63E255BAF838AD7C40804282A03FEBB90((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, (bool)0, /*hidden argument*/NULL);
		// var twistDegrees = LeanGesture.GetTwistDegrees(fingers);
		float L_2 = LeanGesture_GetTwistDegrees_mEF59A73DC08474FFD965A451DF1CC11E64549EEA(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// transform.Rotate(Axis, twistDegrees, Space);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = __this->get_Axis_5();
		float L_5 = V_0;
		int32_t L_6 = __this->get_Space_6();
		NullCheck(L_3);
		Transform_Rotate_mF23DA7E98F655E8A0D633A2757D7F88B2EFA945C(L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.LeanTwistRotateAxis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LeanTwistRotateAxis__ctor_mC9BA151F8B07A74E047619A04A331E70207C2114 (LeanTwistRotateAxis_t1451FC9127672F1C12E2ED08D6279F49FFABA115 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LeanTwistRotateAxis__ctor_mC9BA151F8B07A74E047619A04A331E70207C2114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public LeanFingerFilter Use = new LeanFingerFilter(true);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  L_0;
		memset((&L_0), 0, sizeof(L_0));
		LeanFingerFilter__ctor_m38024A7C3D287F43994F1F1C84C3E52C7093B2EB((&L_0), (bool)1, /*hidden argument*/NULL);
		__this->set_Use_4(L_0);
		// public Vector3 Axis = Vector3.down;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_down_m3F76A48E5B7C82B35EE047375538AFD91A305F55(/*hidden argument*/NULL);
		__this->set_Axis_5(L_1);
		// public Space Space = Space.Self;
		__this->set_Space_6(1);
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
// System.Void Lean.Touch.movePerson::AddFinger(Lean.Touch.LeanFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson_AddFinger_m10031BB99FC6D5BF8F254A537CE1808AA5EB13A0 (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * ___finger0, const RuntimeMethod* method)
{
	{
		// Use.AddFinger(finger);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * L_1 = ___finger0;
		LeanFingerFilter_AddFinger_mDAA24B9AB2AAD4A3D09CA4CFB87FDB8BBFE61C2E((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.movePerson::RemoveFinger(Lean.Touch.LeanFinger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson_RemoveFinger_mF8ACA197E7D172A95D02A3439B69367D9A51C037 (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * ___finger0, const RuntimeMethod* method)
{
	{
		// Use.RemoveFinger(finger);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		LeanFinger_t14B8CB80FF55DDB97259D004E0F1149542C099BD * L_1 = ___finger0;
		LeanFingerFilter_RemoveFinger_mE9A39E454DF695AB2194D7760D7E08BEF701FA3A((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.movePerson::RemoveAllFingers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson_RemoveAllFingers_m3DE85950644697340D34DE9FAB2AF2E0891DFB34 (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, const RuntimeMethod* method)
{
	{
		// Use.RemoveAllFingers();
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		LeanFingerFilter_RemoveAllFingers_m3E307B2F4F9B52807848AB527F7A07467981AF71((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.movePerson::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson_Awake_m341E91EDED33E70FA88E08EFDD3F3FA4EFB53BA6 (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, const RuntimeMethod* method)
{
	{
		// Use.UpdateRequiredSelectable(gameObject);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_0 = __this->get_address_of_Use_4();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		LeanFingerFilter_UpdateRequiredSelectable_m6913438E62549CC46824F8117A7AF8A95F768D17((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.movePerson::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson_Update_mD7C80075B90865371461C1AF3CD1B771B760E5A4 (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movePerson_Update_mD7C80075B90865371461C1AF3CD1B771B760E5A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// var oldPosition = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var oldPositionX = oldPosition.x;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = V_0;
		float L_3 = L_2.get_x_2();
		V_1 = L_3;
		// var oldPositionY = oldPosition.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		float L_5 = L_4.get_y_3();
		V_2 = L_5;
		// var oldPositionZ = oldPosition.z;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = V_0;
		float L_7 = L_6.get_z_4();
		V_3 = L_7;
		// var fingers = Use.GetFingers();
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 * L_8 = __this->get_address_of_Use_4();
		List_1_tDA85F67BB9390A7D9940CB6D1B08D2CE04BCE37E * L_9 = LeanFingerFilter_GetFingers_mEACC54A63E255BAF838AD7C40804282A03FEBB90((LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4 *)L_8, (bool)0, /*hidden argument*/NULL);
		// var screenDelta = LeanGesture.GetScreenDelta(fingers);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = LeanGesture_GetScreenDelta_mDEF2602190CCE528E2B82D389003D776E903FB50(L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// if (screenDelta != Vector2.zero)
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_get_zero_mFE0C3213BB698130D6C5247AB4B887A59074D0A8(/*hidden argument*/NULL);
		bool L_13 = Vector2_op_Inequality_mC16161C640C89D98A00800924F83FF09FD7C100E(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0061;
		}
	}
	{
		// if (transform is RectTransform)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		if (!((RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 *)IsInstSealed((RuntimeObject*)L_14, RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_il2cpp_TypeInfo_var)))
		{
			goto IL_0059;
		}
	}
	{
		// TranslateUI(screenDelta);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_4;
		movePerson_TranslateUI_m7B432C6DEE4DFBE20539E2E0D66365FE1E581FD2(__this, L_15, /*hidden argument*/NULL);
		// }
		goto IL_0061;
	}

IL_0059:
	{
		// Translate(screenDelta);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_4;
		movePerson_Translate_m37AE3F73719EF91DB8F118841A5ED14F8E1D561E(__this, L_16, /*hidden argument*/NULL);
	}

IL_0061:
	{
		// remainingTranslation = transform.localPosition - oldPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_18, L_19, /*hidden argument*/NULL);
		__this->set_remainingTranslation_7(L_20);
		// remainingTranslation.x = transform.localPosition.x - oldPositionX;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_21 = __this->get_address_of_remainingTranslation_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_x_2();
		float L_25 = V_1;
		L_21->set_x_2(((float)il2cpp_codegen_subtract((float)L_24, (float)L_25)));
		// remainingTranslation.y = transform.localPosition.x/0.33f - oldPositionY;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_26 = __this->get_address_of_remainingTranslation_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_27 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_27, /*hidden argument*/NULL);
		float L_29 = L_28.get_x_2();
		float L_30 = V_2;
		L_26->set_y_3(((float)il2cpp_codegen_subtract((float)((float)((float)L_29/(float)(0.33f))), (float)L_30)));
		// remainingTranslation.z = -transform.localPosition.x - oldPositionZ;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_31 = __this->get_address_of_remainingTranslation_7();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_x_2();
		float L_35 = V_3;
		L_31->set_z_4(((float)il2cpp_codegen_subtract((float)((-L_34)), (float)L_35)));
		// var factor = LeanTouch.GetDampenFactor(Dampening, Time.deltaTime);
		float L_36 = __this->get_Dampening_6();
		float L_37 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		float L_38 = LeanTouch_GetDampenFactor_mCEE40A0D99DD2A50B886C7F7898A962F64B63BF9(L_36, L_37, /*hidden argument*/NULL);
		V_5 = L_38;
		// var newRemainingTranslation = Vector3.Lerp(remainingTranslation, Vector3.zero, factor);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = __this->get_remainingTranslation_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_41 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_42 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_39, L_40, L_41, /*hidden argument*/NULL);
		V_6 = L_42;
		// Debug.Log ("Old pose: " + oldPosition.x);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = V_0;
		float L_44 = L_43.get_x_2();
		float L_45 = L_44;
		RuntimeObject * L_46 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47 = String_Concat_mBB19C73816BDD1C3519F248E1ADC8E11A6FDB495(_stringLiteral6EE4B252A6ACEEE69F0A07A1916364454F28FBC7, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_47, /*hidden argument*/NULL);
		// if (transform.localPosition.x < 0 && oldPosition.x == 0.0)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_48 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_49 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_48, /*hidden argument*/NULL);
		float L_50 = L_49.get_x_2();
		if ((!(((float)L_50) < ((float)(0.0f)))))
		{
			goto IL_01cd;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = V_0;
		float L_52 = L_51.get_x_2();
		if ((!(((double)(((double)((double)L_52)))) == ((double)(0.0)))))
		{
			goto IL_01cd;
		}
	}
	{
		// remainingTranslation = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_53, /*hidden argument*/NULL);
		__this->set_remainingTranslation_7(L_54);
		// remainingTranslation.x = -0.05f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_55 = __this->get_address_of_remainingTranslation_7();
		L_55->set_x_2((-0.05f));
		// remainingTranslation.y = -0.15f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_56 = __this->get_address_of_remainingTranslation_7();
		L_56->set_y_3((-0.15f));
		// remainingTranslation.z = 0.05f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_57 = __this->get_address_of_remainingTranslation_7();
		L_57->set_z_4((0.05f));
		// factor = LeanTouch.GetDampenFactor(Dampening, Time.deltaTime);
		float L_58 = __this->get_Dampening_6();
		float L_59 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		float L_60 = LeanTouch_GetDampenFactor_mCEE40A0D99DD2A50B886C7F7898A962F64B63BF9(L_58, L_59, /*hidden argument*/NULL);
		V_5 = L_60;
		// newRemainingTranslation = Vector3.Lerp(remainingTranslation, Vector3.zero, factor);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_61 = __this->get_remainingTranslation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_62 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_63 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_64 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_61, L_62, L_63, /*hidden argument*/NULL);
		V_6 = L_64;
		// transform.localPosition = remainingTranslation - newRemainingTranslation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_65 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_66 = __this->get_remainingTranslation_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_67 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_68 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_66, L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_65, L_68, /*hidden argument*/NULL);
		// remainingTranslation = newRemainingTranslation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_69 = V_6;
		__this->set_remainingTranslation_7(L_69);
		// }
		return;
	}

IL_01cd:
	{
		// else if (transform.localPosition.x > 0 && oldPosition.x == 0.0)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_70 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_70, /*hidden argument*/NULL);
		float L_72 = L_71.get_x_2();
		if ((!(((float)L_72) > ((float)(0.0f)))))
		{
			goto IL_0284;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_73 = V_0;
		float L_74 = L_73.get_x_2();
		if ((!(((double)(((double)((double)L_74)))) == ((double)(0.0)))))
		{
			goto IL_0284;
		}
	}
	{
		// remainingTranslation = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_75 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_76 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_75, /*hidden argument*/NULL);
		__this->set_remainingTranslation_7(L_76);
		// remainingTranslation.x = 0.05f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_77 = __this->get_address_of_remainingTranslation_7();
		L_77->set_x_2((0.05f));
		// remainingTranslation.y = 0.15f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_78 = __this->get_address_of_remainingTranslation_7();
		L_78->set_y_3((0.15f));
		// remainingTranslation.z = -0.05f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_79 = __this->get_address_of_remainingTranslation_7();
		L_79->set_z_4((-0.05f));
		// factor = LeanTouch.GetDampenFactor(Dampening, Time.deltaTime);
		float L_80 = __this->get_Dampening_6();
		float L_81 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		float L_82 = LeanTouch_GetDampenFactor_mCEE40A0D99DD2A50B886C7F7898A962F64B63BF9(L_80, L_81, /*hidden argument*/NULL);
		V_5 = L_82;
		// newRemainingTranslation = Vector3.Lerp(remainingTranslation, Vector3.zero, factor);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_83 = __this->get_remainingTranslation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_85 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_86 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_83, L_84, L_85, /*hidden argument*/NULL);
		V_6 = L_86;
		// transform.localPosition = remainingTranslation - newRemainingTranslation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_87 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = __this->get_remainingTranslation_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_89 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_90 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_88, L_89, /*hidden argument*/NULL);
		NullCheck(L_87);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_87, L_90, /*hidden argument*/NULL);
		// remainingTranslation = newRemainingTranslation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = V_6;
		__this->set_remainingTranslation_7(L_91);
		// }
		return;
	}

IL_0284:
	{
		// else if (transform.localPosition.x > 0 && oldPosition.x == 0.05)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_92 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_92);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_93 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_92, /*hidden argument*/NULL);
		float L_94 = L_93.get_x_2();
		if ((!(((float)L_94) > ((float)(0.0f)))))
		{
			goto IL_033b;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_95 = V_0;
		float L_96 = L_95.get_x_2();
		if ((!(((double)(((double)((double)L_96)))) == ((double)(0.05)))))
		{
			goto IL_033b;
		}
	}
	{
		// remainingTranslation = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_97 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_97);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_97, /*hidden argument*/NULL);
		__this->set_remainingTranslation_7(L_98);
		// remainingTranslation.x = 0.05f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_99 = __this->get_address_of_remainingTranslation_7();
		L_99->set_x_2((0.05f));
		// remainingTranslation.y = 0.15f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_100 = __this->get_address_of_remainingTranslation_7();
		L_100->set_y_3((0.15f));
		// remainingTranslation.z = -0.05f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_101 = __this->get_address_of_remainingTranslation_7();
		L_101->set_z_4((-0.05f));
		// factor = LeanTouch.GetDampenFactor(Dampening, Time.deltaTime);
		float L_102 = __this->get_Dampening_6();
		float L_103 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		float L_104 = LeanTouch_GetDampenFactor_mCEE40A0D99DD2A50B886C7F7898A962F64B63BF9(L_102, L_103, /*hidden argument*/NULL);
		V_5 = L_104;
		// newRemainingTranslation = Vector3.Lerp(remainingTranslation, Vector3.zero, factor);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_105 = __this->get_remainingTranslation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_106 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_107 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_108 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_105, L_106, L_107, /*hidden argument*/NULL);
		V_6 = L_108;
		// transform.localPosition = remainingTranslation - newRemainingTranslation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_109 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_110 = __this->get_remainingTranslation_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_111 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_112 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_110, L_111, /*hidden argument*/NULL);
		NullCheck(L_109);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_109, L_112, /*hidden argument*/NULL);
		// remainingTranslation = newRemainingTranslation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_113 = V_6;
		__this->set_remainingTranslation_7(L_113);
		// }
		return;
	}

IL_033b:
	{
		// else if (transform.localPosition.x < 0 && oldPosition.x == 0.05)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_114 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_114);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_115 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_114, /*hidden argument*/NULL);
		float L_116 = L_115.get_x_2();
		if ((!(((float)L_116) < ((float)(0.0f)))))
		{
			goto IL_03f2;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_117 = V_0;
		float L_118 = L_117.get_x_2();
		if ((!(((double)(((double)((double)L_118)))) == ((double)(0.05)))))
		{
			goto IL_03f2;
		}
	}
	{
		// remainingTranslation = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_119 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_119);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_120 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_119, /*hidden argument*/NULL);
		__this->set_remainingTranslation_7(L_120);
		// remainingTranslation.x = 0.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_121 = __this->get_address_of_remainingTranslation_7();
		L_121->set_x_2((0.0f));
		// remainingTranslation.y = 0.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_122 = __this->get_address_of_remainingTranslation_7();
		L_122->set_y_3((0.0f));
		// remainingTranslation.z = 0.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_123 = __this->get_address_of_remainingTranslation_7();
		L_123->set_z_4((0.0f));
		// factor = LeanTouch.GetDampenFactor(Dampening, Time.deltaTime);
		float L_124 = __this->get_Dampening_6();
		float L_125 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		float L_126 = LeanTouch_GetDampenFactor_mCEE40A0D99DD2A50B886C7F7898A962F64B63BF9(L_124, L_125, /*hidden argument*/NULL);
		V_5 = L_126;
		// newRemainingTranslation = Vector3.Lerp(remainingTranslation, Vector3.zero, factor);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_127 = __this->get_remainingTranslation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_128 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_129 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_130 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_127, L_128, L_129, /*hidden argument*/NULL);
		V_6 = L_130;
		// transform.localPosition = remainingTranslation - newRemainingTranslation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_131 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_132 = __this->get_remainingTranslation_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_133 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_134 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_132, L_133, /*hidden argument*/NULL);
		NullCheck(L_131);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_131, L_134, /*hidden argument*/NULL);
		// remainingTranslation = newRemainingTranslation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_135 = V_6;
		__this->set_remainingTranslation_7(L_135);
		// }
		return;
	}

IL_03f2:
	{
		// else if (transform.localPosition.x < 0 && oldPosition.x == -0.05)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_136 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_136);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_137 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_136, /*hidden argument*/NULL);
		float L_138 = L_137.get_x_2();
		if ((!(((float)L_138) < ((float)(0.0f)))))
		{
			goto IL_04a9;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_139 = V_0;
		float L_140 = L_139.get_x_2();
		if ((!(((double)(((double)((double)L_140)))) == ((double)(-0.05)))))
		{
			goto IL_04a9;
		}
	}
	{
		// remainingTranslation = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_141 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_141);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_142 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_141, /*hidden argument*/NULL);
		__this->set_remainingTranslation_7(L_142);
		// remainingTranslation.x = -0.05f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_143 = __this->get_address_of_remainingTranslation_7();
		L_143->set_x_2((-0.05f));
		// remainingTranslation.y = -0.15f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_144 = __this->get_address_of_remainingTranslation_7();
		L_144->set_y_3((-0.15f));
		// remainingTranslation.z = 0.05f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_145 = __this->get_address_of_remainingTranslation_7();
		L_145->set_z_4((0.05f));
		// factor = LeanTouch.GetDampenFactor(Dampening, Time.deltaTime);
		float L_146 = __this->get_Dampening_6();
		float L_147 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		float L_148 = LeanTouch_GetDampenFactor_mCEE40A0D99DD2A50B886C7F7898A962F64B63BF9(L_146, L_147, /*hidden argument*/NULL);
		V_5 = L_148;
		// newRemainingTranslation = Vector3.Lerp(remainingTranslation, Vector3.zero, factor);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_149 = __this->get_remainingTranslation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_150 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_151 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_152 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_149, L_150, L_151, /*hidden argument*/NULL);
		V_6 = L_152;
		// transform.localPosition = remainingTranslation - newRemainingTranslation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_153 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_154 = __this->get_remainingTranslation_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_155 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_156 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_154, L_155, /*hidden argument*/NULL);
		NullCheck(L_153);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_153, L_156, /*hidden argument*/NULL);
		// remainingTranslation = newRemainingTranslation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_157 = V_6;
		__this->set_remainingTranslation_7(L_157);
		// }
		return;
	}

IL_04a9:
	{
		// else if (transform.localPosition.x > 0 && oldPosition.x == -0.05)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_158 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_158);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_159 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_158, /*hidden argument*/NULL);
		float L_160 = L_159.get_x_2();
		if ((!(((float)L_160) > ((float)(0.0f)))))
		{
			goto IL_055f;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_161 = V_0;
		float L_162 = L_161.get_x_2();
		if ((!(((double)(((double)((double)L_162)))) == ((double)(-0.05)))))
		{
			goto IL_055f;
		}
	}
	{
		// remainingTranslation = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_163 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_163);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_164 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_163, /*hidden argument*/NULL);
		__this->set_remainingTranslation_7(L_164);
		// remainingTranslation.x = 0.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_165 = __this->get_address_of_remainingTranslation_7();
		L_165->set_x_2((0.0f));
		// remainingTranslation.y = 0.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_166 = __this->get_address_of_remainingTranslation_7();
		L_166->set_y_3((0.0f));
		// remainingTranslation.z = 0.0f;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_167 = __this->get_address_of_remainingTranslation_7();
		L_167->set_z_4((0.0f));
		// factor = LeanTouch.GetDampenFactor(Dampening, Time.deltaTime);
		float L_168 = __this->get_Dampening_6();
		float L_169 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		float L_170 = LeanTouch_GetDampenFactor_mCEE40A0D99DD2A50B886C7F7898A962F64B63BF9(L_168, L_169, /*hidden argument*/NULL);
		V_5 = L_170;
		// newRemainingTranslation = Vector3.Lerp(remainingTranslation, Vector3.zero, factor);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_171 = __this->get_remainingTranslation_7();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_172 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		float L_173 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_174 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_171, L_172, L_173, /*hidden argument*/NULL);
		V_6 = L_174;
		// transform.localPosition = remainingTranslation - newRemainingTranslation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_175 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_176 = __this->get_remainingTranslation_7();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_177 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_178 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_176, L_177, /*hidden argument*/NULL);
		NullCheck(L_175);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_175, L_178, /*hidden argument*/NULL);
		// remainingTranslation = newRemainingTranslation;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_179 = V_6;
		__this->set_remainingTranslation_7(L_179);
	}

IL_055f:
	{
		// }
		return;
	}
}
// System.Void Lean.Touch.movePerson::TranslateUI(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson_TranslateUI_m7B432C6DEE4DFBE20539E2E0D66365FE1E581FD2 (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenDelta0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movePerson_TranslateUI_m7B432C6DEE4DFBE20539E2E0D66365FE1E581FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * V_3 = NULL;
	{
		// var camera = Camera;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_Camera_5();
		V_0 = L_0;
		// if (camera == null)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// var canvas = transform.GetComponentInParent<Canvas>();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_4 = Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B(L_3, /*hidden argument*/Component_GetComponentInParent_TisCanvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591_mD91B8112B5688783ACAEA46BB2C82C6EC4C4B33B_RuntimeMethod_var);
		V_3 = L_4;
		// if (canvas != null && canvas.renderMode != RenderMode.ScreenSpaceOverlay)
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_5 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_7 = V_3;
		NullCheck(L_7);
		int32_t L_8 = Canvas_get_renderMode_mAF68701B143F01C7D19B6C7D3033E3B34ECB2FC8(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// camera = canvas.worldCamera;
		Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * L_9 = V_3;
		NullCheck(L_9);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_10 = Canvas_get_worldCamera_m36F1A8DBFC4AB34278125DA017CACDC873F53409(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
	}

IL_0034:
	{
		// var screenPoint = RectTransformUtility.WorldToScreenPoint(camera, transform.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_11 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RectTransformUtility_t9B90669A72B05A33DD88BEBB817BC9CDBB614BBA_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_14 = RectTransformUtility_WorldToScreenPoint_m114DFD961456722DED0FFB2F8DCB46A04C2CCA20(L_11, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// screenPoint += screenDelta;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_15 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = ___screenDelta0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_17 = Vector2_op_Addition_m81A4D928B8E399DA3A4E3ACD8937EDFDCB014682(L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		// var worldPoint = default(Vector3);
		il2cpp_codegen_initobj((&V_2), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		// if (RectTransformUtility.ScreenPointToWorldPointInRectangle(transform.parent as RectTransform, screenPoint, camera, out worldPoint) == true)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_18, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20 = V_1;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_21 = V_0;
		bool L_22 = RectTransformUtility_ScreenPointToWorldPointInRectangle_m821FF925C5B70477F153B4C053AE9E36A04A774F(((RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 *)IsInstSealed((RuntimeObject*)L_19, RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20_il2cpp_TypeInfo_var)), L_20, L_21, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_007d;
		}
	}
	{
		// transform.position = worldPoint;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = V_2;
		NullCheck(L_23);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_23, L_24, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Lean.Touch.movePerson::Translate(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson_Translate_m37AE3F73719EF91DB8F118841A5ED14F8E1D561E (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___screenDelta0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (movePerson_Translate_m37AE3F73719EF91DB8F118841A5ED14F8E1D561E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// var camera = LeanTouch.GetCamera(Camera, gameObject);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = __this->get_Camera_5();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LeanTouch_t04E4C85F6ED9E388AD8D7FA10A67E9C74701F15F_il2cpp_TypeInfo_var);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_2 = LeanTouch_GetCamera_mC9C5B0EC3E9D5C79724BE049DA38D90B329CF389(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (camera != null)
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004d;
		}
	}
	{
		// var screenPoint = camera.WorldToScreenPoint(transform.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_5 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_5, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		// screenPoint += (Vector3)screenDelta;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_1;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = ___screenDelta0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		// transform.position = camera.ScreenToWorldPoint(screenPoint);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_14 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_1;
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Camera_ScreenToWorldPoint_m179BB999DC97A251D0892B39C98F3FACDF0617C5(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_13, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004d:
	{
		// Debug.LogError("Failed to find camera. Either tag your camera as MainCamera, or set one in this component.", this);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m97139CB2EE76D5CD8308C1AD0499A5F163FC7F51(_stringLiteral65DDEDE7B4AE131938B31202684B8E588C84D134, __this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Lean.Touch.movePerson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void movePerson__ctor_mA6D3459BDB1E5BC9750A40D9C93B76EB81B385B6 (movePerson_t00C577299BC4CF2351D4FD33779614CE9FC0CA0E * __this, const RuntimeMethod* method)
{
	{
		// public LeanFingerFilter Use = new LeanFingerFilter(true);
		LeanFingerFilter_tBF5C243D01EB7E9BF8F36AF4315494D5B427DCB4  L_0;
		memset((&L_0), 0, sizeof(L_0));
		LeanFingerFilter__ctor_m38024A7C3D287F43994F1F1C84C3E52C7093B2EB((&L_0), (bool)1, /*hidden argument*/NULL);
		__this->set_Use_4(L_0);
		// public float Dampening = -1.0f;
		__this->set_Dampening_6((-1.0f));
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
// System.Void StaticCamManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCamManager_Start_m8BC01425D42C70C9E0785374BD25BF30F2C21377 (StaticCamManager_t827D8CBFDF954FAF0FC474CD97284A3929454BC8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StaticCamManager_Start_m8BC01425D42C70C9E0785374BD25BF30F2C21377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VuforiaRuntime.Instance.InitVuforia();
		IL2CPP_RUNTIME_CLASS_INIT(VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D_il2cpp_TypeInfo_var);
		VuforiaRuntime_t12D46DC6B127017866AA832739B2B22B0612DC1D * L_0 = VuforiaRuntime_get_Instance_m09A801C6052F96463B0F330EE3F2453DFB329607(/*hidden argument*/NULL);
		NullCheck(L_0);
		VuforiaRuntime_InitVuforia_mB168917FABEAC7C1C43FB3AEF9E231883A875B5E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StaticCamManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticCamManager__ctor_m8D68C5547F32C7362A54E17B2C16D94CC24EB1C1 (StaticCamManager_t827D8CBFDF954FAF0FC474CD97284A3929454BC8 * __this, const RuntimeMethod* method)
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
// System.Void book_load::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void book_load_Awake_mD8F1C37D2A6CF9261DC939FEFF16678ADF1107B3 (book_load_t7F81F1FA3FBBAD1D7EAC36B8D2AEBAF99624573D * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(wait_for_scene());
		RuntimeObject* L_0 = book_load_wait_for_scene_mF1039EB8D16263B9965BC667C5D7FC0F3F277C53(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator book_load::wait_for_scene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* book_load_wait_for_scene_mF1039EB8D16263B9965BC667C5D7FC0F3F277C53 (book_load_t7F81F1FA3FBBAD1D7EAC36B8D2AEBAF99624573D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (book_load_wait_for_scene_mF1039EB8D16263B9965BC667C5D7FC0F3F277C53_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC * L_0 = (U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC *)il2cpp_codegen_object_new(U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC_il2cpp_TypeInfo_var);
		U3Cwait_for_sceneU3Ed__1__ctor_m09FF6B5E878A19C3795ACDD8712F35C5D68FF930(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void book_load::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void book_load__ctor_mBEF52F5E7E7140C0A7D9AAAA45126A06A6EBAC67 (book_load_t7F81F1FA3FBBAD1D7EAC36B8D2AEBAF99624573D * __this, const RuntimeMethod* method)
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
// System.Void book_load_<wait_for_scene>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1__ctor_m09FF6B5E878A19C3795ACDD8712F35C5D68FF930 (U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void book_load_<wait_for_scene>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1_System_IDisposable_Dispose_m8BEF4308057B455547912B14124CDCD06671EDA5 (U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean book_load_<wait_for_scene>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3Cwait_for_sceneU3Ed__1_MoveNext_mF75467BEAB676B659059553A066BFC76B8F1C536 (U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__1_MoveNext_mF75467BEAB676B659059553A066BFC76B8F1C536_MetadataUsageId);
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
		// SceneManager.LoadScene(3);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_t68A7070D2AD3860C3EE327C94F38270E49AFB489_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(3, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object book_load_<wait_for_scene>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m396A9A5B9A796365B9D689EE7DDBA57F756ADE08 (U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void book_load_<wait_for_scene>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m0AC8760176028F93DEAC88E6584B6059B8B78E3A (U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m0AC8760176028F93DEAC88E6584B6059B8B78E3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_Reset_m0AC8760176028F93DEAC88E6584B6059B8B78E3A_RuntimeMethod_var);
	}
}
// System.Object book_load_<wait_for_scene>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3Cwait_for_sceneU3Ed__1_System_Collections_IEnumerator_get_Current_mFC3AD9AC227FEB7980553409FA37A80A98F8A360 (U3Cwait_for_sceneU3Ed__1_t5C4AA0721C09CD8ECAE0DC621F7270D5E8D64DDC * __this, const RuntimeMethod* method)
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
// System.Void book_player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void book_player_Start_mBA4B82E4C4B486BE7A090FEB3150FF49B85AF23C (book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (book_player_Start_mBA4B82E4C4B486BE7A090FEB3150FF49B85AF23C_MetadataUsageId);
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
		// pages = GameObject.FindWithTag("Pages");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_FindWithTag_mF188C0A7A5DAC355AB020E2964B155F355237CB5(_stringLiteral600584C2D5CCB97C0C0C424D9F32D6B102FCB040, /*hidden argument*/NULL);
		__this->set_pages_6(L_0);
		// foreach (Transform child in pages.transform)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_pages_6();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0023:
		{
			// foreach (Transform child in pages.transform)
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_4);
			// child.gameObject.SetActive(false);
			NullCheck(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_5, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_5, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_6);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)0, /*hidden argument*/NULL);
		}

IL_0039:
		{
			// foreach (Transform child in pages.transform)
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0023;
			}
		}

IL_0041:
		{
			IL2CPP_LEAVE(0x54, FINALLY_0043);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0043;
	}

FINALLY_0043:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_1;
			if (!L_10)
			{
				goto IL_0053;
			}
		}

IL_004d:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(67)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(67)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x54, IL_0054)
	}

IL_0054:
	{
		// pages.transform.GetChild(page).gameObject.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_pages_6();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_page_4();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_16, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void book_player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void book_player_Update_mCE205AD377CB3EFA80ACDFC9E8366D3EED445E70 (book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void book_player::StartAudio(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void book_player_StartAudio_mDDC4E4DE3C3322951161DAE3AAD2A5F6BD2AF161 (book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3 * __this, int32_t ___change0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (book_player_StartAudio_mDDC4E4DE3C3322951161DAE3AAD2A5F6BD2AF161_MetadataUsageId);
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
		bool L_0 = __this->get_stop_5();
		if (!L_0)
		{
			goto IL_0074;
		}
	}
	{
		// stop = false;
		__this->set_stop_5((bool)0);
		// foreach (Transform child in pages.transform)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_pages_6();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_0022:
		{
			// foreach (Transform child in pages.transform)
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_4);
			// child.gameObject.SetActive(false);
			NullCheck(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_5, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_5, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_6);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)0, /*hidden argument*/NULL);
		}

IL_0038:
		{
			// foreach (Transform child in pages.transform)
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			bool L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0022;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_9 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_10 = V_1;
			if (!L_10)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			RuntimeObject* L_11 = V_1;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_11);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// pages.transform.GetChild(page).gameObject.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_pages_6();
		NullCheck(L_12);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_12, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_page_4();
		NullCheck(L_13);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_16, (bool)1, /*hidden argument*/NULL);
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void book_player::NextPreviousPage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void book_player_NextPreviousPage_mFD56B9E6E4127AEA64C957762407A30CCDB3A966 (book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3 * __this, int32_t ___change0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (book_player_NextPreviousPage_mFD56B9E6E4127AEA64C957762407A30CCDB3A966_MetadataUsageId);
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
		// page += change;
		int32_t L_0 = __this->get_page_4();
		int32_t L_1 = ___change0;
		__this->set_page_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// if (page >= 50)
		int32_t L_2 = __this->get_page_4();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)50))))
		{
			goto IL_0021;
		}
	}
	{
		// page = 0;
		__this->set_page_4(0);
		goto IL_0032;
	}

IL_0021:
	{
		// else if (page < 0)
		int32_t L_3 = __this->get_page_4();
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// page = 50 - 1;
		__this->set_page_4(((int32_t)49));
	}

IL_0032:
	{
		// foreach (Transform child in pages.transform)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = __this->get_pages_6();
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = Transform_GetEnumerator_mE98B6C5F644AE362EC1D58C10506327D6A5878FC(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005b;
		}

IL_0045:
		{
			// foreach (Transform child in pages.transform)
			RuntimeObject* L_7 = V_0;
			NullCheck(L_7);
			RuntimeObject * L_8 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_7);
			// child.gameObject.SetActive(false);
			NullCheck(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_8, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)));
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(((Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *)CastclassClass((RuntimeObject*)L_8, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_9);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		}

IL_005b:
		{
			// foreach (Transform child in pages.transform)
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			bool L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0045;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x76, FINALLY_0065);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0065;
	}

FINALLY_0065:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_1;
			if (!L_13)
			{
				goto IL_0075;
			}
		}

IL_006f:
		{
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_14);
		}

IL_0075:
		{
			IL2CPP_END_FINALLY(101)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(101)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x76, IL_0076)
	}

IL_0076:
	{
		// pages.transform.GetChild(page).gameObject.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = __this->get_pages_6();
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_15, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_page_4();
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Transform_GetChild_mC86B9B61E4EC086A571B09EA7A33FFBF50DF52D3(L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_19, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void book_player::PauseAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void book_player_PauseAudio_m5F70717271E30F63261B473F1165C1146BFE2503 (book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3 * __this, const RuntimeMethod* method)
{
	{
		// stop = true;
		__this->set_stop_5((bool)1);
		// }
		return;
	}
}
// System.Void book_player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void book_player__ctor_m8015FF7F017D60D923508BE22CB68151C9EB2BC6 (book_player_tB2ECAB70B6CD846B6339F63DEA9527D79ABD38C3 * __this, const RuntimeMethod* method)
{
	{
		// private bool stop = true;
		__this->set_stop_5((bool)1);
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
