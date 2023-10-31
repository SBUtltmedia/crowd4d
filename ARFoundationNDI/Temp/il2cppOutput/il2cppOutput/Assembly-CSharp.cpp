#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B;
// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>
struct ARTrackable_2_t0C3A99AF5B35E36F452AD67B5A0F2F26F2F561B2;
// System.Action`1<UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs>
struct Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7;
// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>
struct Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358;
// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>
struct Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301;
// System.Action`1<UnityEngine.XR.ARFoundation.AROcclusionFrameEventArgs>
struct Action_1_t1A44CB29184F135C80F1F1025D2BCCAC14B0A403;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARFace>
struct Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARHumanBody>
struct Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>
struct List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody>
struct List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo>
struct List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Texture2D>
struct List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystem>
struct List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor>
struct List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem>
struct List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor>
struct List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem>
struct List_1_t621666FA9D6DB88D1803D2508DF110FF02508B72;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor>
struct List_1_t9AA280C4698A976F6616D552D829D1609D4A65BC;
// System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>
struct List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1;
// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.XR.ARFoundation.ARFace[]
struct ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931;
// UnityEngine.XR.ARFoundation.ARHumanBody[]
struct ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ARKitStream.HumanBodyPreview/Joint[]
struct JointU5BU5D_t6D20C43210EC71F0FE563E5006A4C0DC37EFA407;
// UnityEngine.XR.ARFoundation.ARFace
struct ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1;
// UnityEngine.XR.ARFoundation.ARFaceManager
struct ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647;
// UnityEngine.XR.ARFoundation.ARHumanBody
struct ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5;
// UnityEngine.XR.ARFoundation.ARHumanBodyManager
struct ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4;
// UnityEngine.XR.ARKit.ARKitFaceSubsystem
struct ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1;
// UnityEngine.XR.ARFoundation.AROcclusionManager
struct AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48;
// UnityEngine.XR.ARFoundation.ARPointCloudParticleVisualizer
struct ARPointCloudParticleVisualizer_tD36EB0704B08FAE9C25319F49973E4062E7B6ADD;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// ARKitStream.BlendShapeInfo
struct BlendShapeInfo_t95745EFAE066221C34967DE45B25581799D2C6DC;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// ARKitStream.FacePreview
struct FacePreview_t61910D140DE3FF78680B93779A94A136BDC30DBD;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// ARKitStream.GoToSceneButton
struct GoToSceneButton_tCBB552C68A7E72DF554B1499E70F440C65258189;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// ARKitStream.HumanBodyPreview
struct HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// ARKitStream.SimplePreview
struct SimplePreview_t5D2B3DC10162B698CA436CC399EF0EA25E8D5B89;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem
struct XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor
struct XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618;
// UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem
struct XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B;
// UnityEngine.XR.ARSubsystems.XROcclusionSubsystem
struct XROcclusionSubsystem_t7546B929F9B5B6EB13B975FE4DB1F4099EE533B8;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider
struct Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7;

IL2CPP_EXTERN_C RuntimeClass* ARKitBlendShapeLocation_t53A407013F6013772CFC72145DCA1C633997F560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3ECA061191B05D1E759C47E37134E38BFF41FB65;
IL2CPP_EXTERN_C String_t* _stringLiteral40DD163FB4F220B68EE8DE672CBCAF78A2333C85;
IL2CPP_EXTERN_C String_t* _stringLiteralD96F25375EDD8F00FDE464F9B7E3404D060F2A0A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralFCCA895293C72F4145905D74A942D89E77B80E63;
IL2CPP_EXTERN_C const RuntimeMethod* ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BlendShapeInfo_OnFaceChanged_m2A9683918AD43B3BE7CA317D0727EA4F2A9A0F4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7FD2A15378BA2D35BC651654FCD60890FB0A6022_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE59337ED8052437CCC8294DD295B6BB95886A813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1CBFC8E721A51169C93C7998DBD7B3B4F3FAF1B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFAFA2D30BBC8AFC6D531ED62F6561D8036294496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9E110BB9F9D8A295C4F6A149F5D9CB88D4510CA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBAE175A3926A60FC45CAF8A60954B792F97C04C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FacePreview_OnFaceChanged_m063D9F61448F35996958879A38ECA477EC8D2A4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GoToSceneButton_OnButtonClick_m79A3443BA58C5BBA55CC806DC3397D05B806213C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HumanBodyPreview_OnHumanBodiesChanged_m298B28B2091FC047E938968DF6619F61C5974466_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB85AA8C9F85DD1EC929ADDD6574E6C5F66953619_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD9A6E72FD24C42837DFA7DC72F081BE7427ADDA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_GetEnumerator_mD331FA4263BAD04C90434769548F51C77F51E60A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>
struct List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21, ____items_1)); }
	inline ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* get__items_1() const { return ____items_1; }
	inline ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody>
struct List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64, ____items_1)); }
	inline ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* get__items_1() const { return ____items_1; }
	inline ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};


// System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>
struct List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JointU5BU5D_t6D20C43210EC71F0FE563E5006A4C0DC37EFA407* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B, ____items_1)); }
	inline JointU5BU5D_t6D20C43210EC71F0FE563E5006A4C0DC37EFA407* get__items_1() const { return ____items_1; }
	inline JointU5BU5D_t6D20C43210EC71F0FE563E5006A4C0DC37EFA407** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JointU5BU5D_t6D20C43210EC71F0FE563E5006A4C0DC37EFA407* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
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
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
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


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * ___U3CproviderBaseU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CrunningU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CrunningU3Ek__BackingField_0)); }
	inline bool get_U3CrunningU3Ek__BackingField_0() const { return ___U3CrunningU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CrunningU3Ek__BackingField_0() { return &___U3CrunningU3Ek__BackingField_0; }
	inline void set_U3CrunningU3Ek__BackingField_0(bool value)
	{
		___U3CrunningU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CproviderBaseU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E, ___U3CproviderBaseU3Ek__BackingField_1)); }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * get_U3CproviderBaseU3Ek__BackingField_1() const { return ___U3CproviderBaseU3Ek__BackingField_1; }
	inline SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 ** get_address_of_U3CproviderBaseU3Ek__BackingField_1() { return &___U3CproviderBaseU3Ek__BackingField_1; }
	inline void set_U3CproviderBaseU3Ek__BackingField_1(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9 * value)
	{
		___U3CproviderBaseU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderBaseU3Ek__BackingField_1), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>
struct Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29, ___list_0)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_list_0() const { return ___list_0; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29, ___current_3)); }
	inline ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * get_current_3() const { return ___current_3; }
	inline ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B  : public SubsystemWithProvider_t1C1868CF8676F5596C1AD20A7CE69BDF7C7DE73E
{
public:
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 * ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * ___U3CproviderU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B, ___U3CsubsystemDescriptorU3Ek__BackingField_2)); }
	inline XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 * get_U3CsubsystemDescriptorU3Ek__BackingField_2() const { return ___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 ** get_address_of_U3CsubsystemDescriptorU3Ek__BackingField_2() { return &___U3CsubsystemDescriptorU3Ek__BackingField_2; }
	inline void set_U3CsubsystemDescriptorU3Ek__BackingField_2(XRFaceSubsystemDescriptor_t129999D2BF40B1016A8C70A0FDE9763C21DCD618 * value)
	{
		___U3CsubsystemDescriptorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemDescriptorU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CproviderU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B, ___U3CproviderU3Ek__BackingField_3)); }
	inline Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * get_U3CproviderU3Ek__BackingField_3() const { return ___U3CproviderU3Ek__BackingField_3; }
	inline Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 ** get_address_of_U3CproviderU3Ek__BackingField_3() { return &___U3CproviderU3Ek__BackingField_3; }
	inline void set_U3CproviderU3Ek__BackingField_3(Provider_t0133E0DB4F1A68EB3D4814F63B14456832E3EAE7 * value)
	{
		___U3CproviderU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CproviderU3Ek__BackingField_3), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs
struct ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace> UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs::<added>k__BackingField
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace> UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs::<updated>k__BackingField
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace> UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs::<removed>k__BackingField
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs
struct ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12_marshaled_pinvoke
{
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs
struct ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12_marshaled_com
{
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___U3CremovedU3Ek__BackingField_2;
};

// UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs
struct ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::<added>k__BackingField
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::<updated>k__BackingField
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::<removed>k__BackingField
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CremovedU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CaddedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729, ___U3CaddedU3Ek__BackingField_0)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_U3CaddedU3Ek__BackingField_0() const { return ___U3CaddedU3Ek__BackingField_0; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_U3CaddedU3Ek__BackingField_0() { return &___U3CaddedU3Ek__BackingField_0; }
	inline void set_U3CaddedU3Ek__BackingField_0(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___U3CaddedU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CaddedU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CupdatedU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729, ___U3CupdatedU3Ek__BackingField_1)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_U3CupdatedU3Ek__BackingField_1() const { return ___U3CupdatedU3Ek__BackingField_1; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_U3CupdatedU3Ek__BackingField_1() { return &___U3CupdatedU3Ek__BackingField_1; }
	inline void set_U3CupdatedU3Ek__BackingField_1(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___U3CupdatedU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CupdatedU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CremovedU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729, ___U3CremovedU3Ek__BackingField_2)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_U3CremovedU3Ek__BackingField_2() const { return ___U3CremovedU3Ek__BackingField_2; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_U3CremovedU3Ek__BackingField_2() { return &___U3CremovedU3Ek__BackingField_2; }
	inline void set_U3CremovedU3Ek__BackingField_2(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___U3CremovedU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CremovedU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs
struct ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729_marshaled_pinvoke
{
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs
struct ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729_marshaled_com
{
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CaddedU3Ek__BackingField_0;
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CupdatedU3Ek__BackingField_1;
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___U3CremovedU3Ek__BackingField_2;
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Matrix4x4
struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B 
{
public:
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;

public:
	inline static int32_t get_offset_of_m_SubId1_2() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId1_2)); }
	inline uint64_t get_m_SubId1_2() const { return ___m_SubId1_2; }
	inline uint64_t* get_address_of_m_SubId1_2() { return &___m_SubId1_2; }
	inline void set_m_SubId1_2(uint64_t value)
	{
		___m_SubId1_2 = value;
	}

	inline static int32_t get_offset_of_m_SubId2_3() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B, ___m_SubId2_3)); }
	inline uint64_t get_m_SubId2_3() const { return ___m_SubId2_3; }
	inline uint64_t* get_address_of_m_SubId2_3() { return &___m_SubId2_3; }
	inline void set_m_SubId2_3(uint64_t value)
	{
		___m_SubId2_3 = value;
	}
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct TrackingSubsystem_4_tFC4495C6B04D616F71158509026269F004F79333  : public SubsystemWithProvider_3_t2E74C29CB9922972A66085C9DAD6E1542BCCE25B
{
public:

public:
};


// UnityEngine.XR.ARKit.ARKitBlendShapeLocation
struct ARKitBlendShapeLocation_t53A407013F6013772CFC72145DCA1C633997F560 
{
public:
	// System.Int32 UnityEngine.XR.ARKit.ARKitBlendShapeLocation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARKitBlendShapeLocation_t53A407013F6013772CFC72145DCA1C633997F560, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.XR.ARSubsystems.EnvironmentDepthMode
struct EnvironmentDepthMode_t3510F9A630A7170A2481D60487384089E64D84C7 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.EnvironmentDepthMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EnvironmentDepthMode_t3510F9A630A7170A2481D60487384089E64D84C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode
struct HumanSegmentationDepthMode_tFF8EE69372C0D9890D3F0566DC0D2781CE584028 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HumanSegmentationDepthMode_tFF8EE69372C0D9890D3F0566DC0D2781CE584028, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode
struct HumanSegmentationStencilMode_tB151C7AE42CB87D7EB7A0A12C759BD0BA03AC9DB 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HumanSegmentationStencilMode_tB151C7AE42CB87D7EB7A0A12C759BD0BA03AC9DB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_tF5060E18B71D524860ECBF7B9B56193B1907E5CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode
struct OcclusionPreferenceMode_tB85530C1AF1BD2CD83770B19A90C6D3F781EADC1 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OcclusionPreferenceMode_tB85530C1AF1BD2CD83770B19A90C6D3F781EADC1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Pose
struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A, ___rotation_1)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_1 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Rendering.TextureDimension
struct TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC 
{
public:
	// System.Int32 UnityEngine.Rendering.TextureDimension::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureDimension_tADCCB7C1D30E4D1182651BA9094B4DE61B63EACC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TextureFormat
struct TextureFormat_tBED5388A0445FE978F97B41D247275B036407932 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_tBED5388A0445FE978F97B41D247275B036407932, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_tB6996ED0D52D2A17DFACC90800705B81D370FC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// ARKitStream.HumanBodyPreview/Joint
struct Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99 
{
public:
	// UnityEngine.Vector3 ARKitStream.HumanBodyPreview/Joint::start
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start_0;
	// UnityEngine.Vector3 ARKitStream.HumanBodyPreview/Joint::end
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99, ___start_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_start_0() const { return ___start_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_end_1() { return static_cast<int32_t>(offsetof(Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99, ___end_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_end_1() const { return ___end_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_end_1() { return &___end_1; }
	inline void set_end_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___end_1 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<ARKitStream.HumanBodyPreview/Joint>
struct Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0, ___list_0)); }
	inline List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * get_list_0() const { return ___list_0; }
	inline List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0, ___current_3)); }
	inline Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  get_current_3() const { return ___current_3; }
	inline Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  value)
	{
		___current_3 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>
struct NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient
struct ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F 
{
public:
	// UnityEngine.XR.ARKit.ARKitBlendShapeLocation UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient::m_BlendShapeLocation
	int32_t ___m_BlendShapeLocation_0;
	// System.Single UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient::m_Coefficient
	float ___m_Coefficient_1;

public:
	inline static int32_t get_offset_of_m_BlendShapeLocation_0() { return static_cast<int32_t>(offsetof(ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F, ___m_BlendShapeLocation_0)); }
	inline int32_t get_m_BlendShapeLocation_0() const { return ___m_BlendShapeLocation_0; }
	inline int32_t* get_address_of_m_BlendShapeLocation_0() { return &___m_BlendShapeLocation_0; }
	inline void set_m_BlendShapeLocation_0(int32_t value)
	{
		___m_BlendShapeLocation_0 = value;
	}

	inline static int32_t get_offset_of_m_Coefficient_1() { return static_cast<int32_t>(offsetof(ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F, ___m_Coefficient_1)); }
	inline float get_m_Coefficient_1() const { return ___m_Coefficient_1; }
	inline float* get_address_of_m_Coefficient_1() { return &___m_Coefficient_1; }
	inline void set_m_Coefficient_1(float value)
	{
		___m_Coefficient_1 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFace
struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRFace::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRFace::m_TrackingState
	int32_t ___m_TrackingState_2;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRFace::m_NativePtr
	intptr_t ___m_NativePtr_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_LeftEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LeftEyePose_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRFace::m_RightEyePose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_RightEyePose_5;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRFace::m_FixationPoint
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_FixationPoint_6;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_2() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_TrackingState_2)); }
	inline int32_t get_m_TrackingState_2() const { return ___m_TrackingState_2; }
	inline int32_t* get_address_of_m_TrackingState_2() { return &___m_TrackingState_2; }
	inline void set_m_TrackingState_2(int32_t value)
	{
		___m_TrackingState_2 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_3() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_NativePtr_3)); }
	inline intptr_t get_m_NativePtr_3() const { return ___m_NativePtr_3; }
	inline intptr_t* get_address_of_m_NativePtr_3() { return &___m_NativePtr_3; }
	inline void set_m_NativePtr_3(intptr_t value)
	{
		___m_NativePtr_3 = value;
	}

	inline static int32_t get_offset_of_m_LeftEyePose_4() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_LeftEyePose_4)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LeftEyePose_4() const { return ___m_LeftEyePose_4; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LeftEyePose_4() { return &___m_LeftEyePose_4; }
	inline void set_m_LeftEyePose_4(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LeftEyePose_4 = value;
	}

	inline static int32_t get_offset_of_m_RightEyePose_5() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_RightEyePose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_RightEyePose_5() const { return ___m_RightEyePose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_RightEyePose_5() { return &___m_RightEyePose_5; }
	inline void set_m_RightEyePose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_RightEyePose_5 = value;
	}

	inline static int32_t get_offset_of_m_FixationPoint_6() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599, ___m_FixationPoint_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_FixationPoint_6() const { return ___m_FixationPoint_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_FixationPoint_6() { return &___m_FixationPoint_6; }
	inline void set_m_FixationPoint_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_FixationPoint_6 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFaceSubsystem
struct XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD  : public TrackingSubsystem_4_tFC4495C6B04D616F71158509026269F004F79333
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRHumanBody
struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B 
{
public:
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackableId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___m_TrackableId_0;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBody::m_Pose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_Pose_1;
	// System.Single UnityEngine.XR.ARSubsystems.XRHumanBody::m_EstimatedHeightScaleFactor
	float ___m_EstimatedHeightScaleFactor_2;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRHumanBody::m_TrackingState
	int32_t ___m_TrackingState_3;
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRHumanBody::m_NativePtr
	intptr_t ___m_NativePtr_4;

public:
	inline static int32_t get_offset_of_m_TrackableId_0() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackableId_0)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_m_TrackableId_0() const { return ___m_TrackableId_0; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_m_TrackableId_0() { return &___m_TrackableId_0; }
	inline void set_m_TrackableId_0(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___m_TrackableId_0 = value;
	}

	inline static int32_t get_offset_of_m_Pose_1() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_Pose_1)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_Pose_1() const { return ___m_Pose_1; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_Pose_1() { return &___m_Pose_1; }
	inline void set_m_Pose_1(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_Pose_1 = value;
	}

	inline static int32_t get_offset_of_m_EstimatedHeightScaleFactor_2() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_EstimatedHeightScaleFactor_2)); }
	inline float get_m_EstimatedHeightScaleFactor_2() const { return ___m_EstimatedHeightScaleFactor_2; }
	inline float* get_address_of_m_EstimatedHeightScaleFactor_2() { return &___m_EstimatedHeightScaleFactor_2; }
	inline void set_m_EstimatedHeightScaleFactor_2(float value)
	{
		___m_EstimatedHeightScaleFactor_2 = value;
	}

	inline static int32_t get_offset_of_m_TrackingState_3() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_TrackingState_3)); }
	inline int32_t get_m_TrackingState_3() const { return ___m_TrackingState_3; }
	inline int32_t* get_address_of_m_TrackingState_3() { return &___m_TrackingState_3; }
	inline void set_m_TrackingState_3(int32_t value)
	{
		___m_TrackingState_3 = value;
	}

	inline static int32_t get_offset_of_m_NativePtr_4() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B, ___m_NativePtr_4)); }
	inline intptr_t get_m_NativePtr_4() const { return ___m_NativePtr_4; }
	inline intptr_t* get_address_of_m_NativePtr_4() { return &___m_NativePtr_4; }
	inline void set_m_NativePtr_4(intptr_t value)
	{
		___m_NativePtr_4 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint
struct XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Index
	int32_t ___m_Index_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_ParentIndex
	int32_t ___m_ParentIndex_1;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LocalScale_2;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_LocalPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_LocalPose_3;
	// UnityEngine.Vector3 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AnchorScale_4;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_AnchorPose
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___m_AnchorPose_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::m_Tracked
	int32_t ___m_Tracked_6;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_ParentIndex_1() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_ParentIndex_1)); }
	inline int32_t get_m_ParentIndex_1() const { return ___m_ParentIndex_1; }
	inline int32_t* get_address_of_m_ParentIndex_1() { return &___m_ParentIndex_1; }
	inline void set_m_ParentIndex_1(int32_t value)
	{
		___m_ParentIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_LocalScale_2() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalScale_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LocalScale_2() const { return ___m_LocalScale_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LocalScale_2() { return &___m_LocalScale_2; }
	inline void set_m_LocalScale_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LocalScale_2 = value;
	}

	inline static int32_t get_offset_of_m_LocalPose_3() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_LocalPose_3)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_LocalPose_3() const { return ___m_LocalPose_3; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_LocalPose_3() { return &___m_LocalPose_3; }
	inline void set_m_LocalPose_3(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_LocalPose_3 = value;
	}

	inline static int32_t get_offset_of_m_AnchorScale_4() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorScale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AnchorScale_4() const { return ___m_AnchorScale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AnchorScale_4() { return &___m_AnchorScale_4; }
	inline void set_m_AnchorScale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AnchorScale_4 = value;
	}

	inline static int32_t get_offset_of_m_AnchorPose_5() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_AnchorPose_5)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_m_AnchorPose_5() const { return ___m_AnchorPose_5; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_m_AnchorPose_5() { return &___m_AnchorPose_5; }
	inline void set_m_AnchorPose_5(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___m_AnchorPose_5 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_6() { return static_cast<int32_t>(offsetof(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4, ___m_Tracked_6)); }
	inline int32_t get_m_Tracked_6() const { return ___m_Tracked_6; }
	inline int32_t* get_address_of_m_Tracked_6() { return &___m_Tracked_6; }
	inline void set_m_Tracked_6(int32_t value)
	{
		___m_Tracked_6 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor
struct XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 
{
public:
	// System.IntPtr UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_NativeTexture
	intptr_t ___m_NativeTexture_0;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Width
	int32_t ___m_Width_1;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Height
	int32_t ___m_Height_2;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_MipmapCount
	int32_t ___m_MipmapCount_3;
	// UnityEngine.TextureFormat UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Format
	int32_t ___m_Format_4;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_PropertyNameId
	int32_t ___m_PropertyNameId_5;
	// System.Int32 UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Depth
	int32_t ___m_Depth_6;
	// UnityEngine.Rendering.TextureDimension UnityEngine.XR.ARSubsystems.XRTextureDescriptor::m_Dimension
	int32_t ___m_Dimension_7;

public:
	inline static int32_t get_offset_of_m_NativeTexture_0() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_NativeTexture_0)); }
	inline intptr_t get_m_NativeTexture_0() const { return ___m_NativeTexture_0; }
	inline intptr_t* get_address_of_m_NativeTexture_0() { return &___m_NativeTexture_0; }
	inline void set_m_NativeTexture_0(intptr_t value)
	{
		___m_NativeTexture_0 = value;
	}

	inline static int32_t get_offset_of_m_Width_1() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Width_1)); }
	inline int32_t get_m_Width_1() const { return ___m_Width_1; }
	inline int32_t* get_address_of_m_Width_1() { return &___m_Width_1; }
	inline void set_m_Width_1(int32_t value)
	{
		___m_Width_1 = value;
	}

	inline static int32_t get_offset_of_m_Height_2() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Height_2)); }
	inline int32_t get_m_Height_2() const { return ___m_Height_2; }
	inline int32_t* get_address_of_m_Height_2() { return &___m_Height_2; }
	inline void set_m_Height_2(int32_t value)
	{
		___m_Height_2 = value;
	}

	inline static int32_t get_offset_of_m_MipmapCount_3() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_MipmapCount_3)); }
	inline int32_t get_m_MipmapCount_3() const { return ___m_MipmapCount_3; }
	inline int32_t* get_address_of_m_MipmapCount_3() { return &___m_MipmapCount_3; }
	inline void set_m_MipmapCount_3(int32_t value)
	{
		___m_MipmapCount_3 = value;
	}

	inline static int32_t get_offset_of_m_Format_4() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Format_4)); }
	inline int32_t get_m_Format_4() const { return ___m_Format_4; }
	inline int32_t* get_address_of_m_Format_4() { return &___m_Format_4; }
	inline void set_m_Format_4(int32_t value)
	{
		___m_Format_4 = value;
	}

	inline static int32_t get_offset_of_m_PropertyNameId_5() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_PropertyNameId_5)); }
	inline int32_t get_m_PropertyNameId_5() const { return ___m_PropertyNameId_5; }
	inline int32_t* get_address_of_m_PropertyNameId_5() { return &___m_PropertyNameId_5; }
	inline void set_m_PropertyNameId_5(int32_t value)
	{
		___m_PropertyNameId_5 = value;
	}

	inline static int32_t get_offset_of_m_Depth_6() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Depth_6)); }
	inline int32_t get_m_Depth_6() const { return ___m_Depth_6; }
	inline int32_t* get_address_of_m_Depth_6() { return &___m_Depth_6; }
	inline void set_m_Depth_6(int32_t value)
	{
		___m_Depth_6 = value;
	}

	inline static int32_t get_offset_of_m_Dimension_7() { return static_cast<int32_t>(offsetof(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57, ___m_Dimension_7)); }
	inline int32_t get_m_Dimension_7() const { return ___m_Dimension_7; }
	inline int32_t* get_address_of_m_Dimension_7() { return &___m_Dimension_7; }
	inline void set_m_Dimension_7(int32_t value)
	{
		___m_Dimension_7 = value;
	}
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>
struct Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>
struct Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301  : public MulticastDelegate_t
{
public:

public:
};


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>
struct Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A 
{
public:
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A, ___m_Array_0)); }
	inline NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  get_m_Array_0() const { return ___m_Array_0; }
	inline NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C * get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  value)
	{
		___m_Array_0 = value;
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}
};


// UnityEngine.XR.ARKit.ARKitFaceSubsystem
struct ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1  : public XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 
{
public:
	// UnityEngine.XR.ARSubsystems.XRTextureDescriptor UnityEngine.XR.ARFoundation.ARTextureInfo::m_Descriptor
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	// UnityEngine.Texture UnityEngine.XR.ARFoundation.ARTextureInfo::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;

public:
	inline static int32_t get_offset_of_m_Descriptor_1() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Descriptor_1)); }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  get_m_Descriptor_1() const { return ___m_Descriptor_1; }
	inline XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57 * get_address_of_m_Descriptor_1() { return &___m_Descriptor_1; }
	inline void set_m_Descriptor_1(XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  value)
	{
		___m_Descriptor_1 = value;
	}

	inline static int32_t get_offset_of_m_Texture_2() { return static_cast<int32_t>(offsetof(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355, ___m_Texture_2)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_2() const { return ___m_Texture_2; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_2() { return &___m_Texture_2; }
	inline void set_m_Texture_2(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_pinvoke
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARTextureInfo
struct ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355_marshaled_com
{
	XRTextureDescriptor_t9CA857DCCC1208B74376787BE4F3008A01B29A57  ___m_Descriptor_1;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_2;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  ___m_UVs_3;

public:
	inline static int32_t get_offset_of_m_Vertices_0() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Vertices_0)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Vertices_0() const { return ___m_Vertices_0; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Vertices_0() { return &___m_Vertices_0; }
	inline void set_m_Vertices_0(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Vertices_0 = value;
	}

	inline static int32_t get_offset_of_m_Normals_1() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Normals_1)); }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  get_m_Normals_1() const { return ___m_Normals_1; }
	inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 * get_address_of_m_Normals_1() { return &___m_Normals_1; }
	inline void set_m_Normals_1(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  value)
	{
		___m_Normals_1 = value;
	}

	inline static int32_t get_offset_of_m_Indices_2() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_Indices_2)); }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  get_m_Indices_2() const { return ___m_Indices_2; }
	inline NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99 * get_address_of_m_Indices_2() { return &___m_Indices_2; }
	inline void set_m_Indices_2(NativeArray_1_tD60079F06B473C85CF6C2BB4F2D203F38191AE99  value)
	{
		___m_Indices_2 = value;
	}

	inline static int32_t get_offset_of_m_UVs_3() { return static_cast<int32_t>(offsetof(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0, ___m_UVs_3)); }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  get_m_UVs_3() const { return ___m_UVs_3; }
	inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * get_address_of_m_UVs_3() { return &___m_UVs_3; }
	inline void set_m_UVs_3(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  value)
	{
		___m_UVs_3 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>
struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	RuntimeObject * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline RuntimeObject * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline RuntimeObject ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(RuntimeObject * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>
struct SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider>
struct SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XRHumanBodySubsystem_t71FBF94503DCE781657FA4F362464EA389CD9F2B * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>
struct SubsystemLifecycleManager_3_t49E8B92C416A7F3333143F6C5FC5293713978225  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XROcclusionSubsystem_t7546B929F9B5B6EB13B975FE4DB1F4099EE533B8 * ___U3CsubsystemU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CsubsystemU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t49E8B92C416A7F3333143F6C5FC5293713978225, ___U3CsubsystemU3Ek__BackingField_4)); }
	inline XROcclusionSubsystem_t7546B929F9B5B6EB13B975FE4DB1F4099EE533B8 * get_U3CsubsystemU3Ek__BackingField_4() const { return ___U3CsubsystemU3Ek__BackingField_4; }
	inline XROcclusionSubsystem_t7546B929F9B5B6EB13B975FE4DB1F4099EE533B8 ** get_address_of_U3CsubsystemU3Ek__BackingField_4() { return &___U3CsubsystemU3Ek__BackingField_4; }
	inline void set_U3CsubsystemU3Ek__BackingField_4(XROcclusionSubsystem_t7546B929F9B5B6EB13B975FE4DB1F4099EE533B8 * value)
	{
		___U3CsubsystemU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsubsystemU3Ek__BackingField_4), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ARKitStream.BlendShapeInfo
struct BlendShapeInfo_t95745EFAE066221C34967DE45B25581799D2C6DC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARFaceManager ARKitStream.BlendShapeInfo::faceManager
	ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * ___faceManager_4;
	// UnityEngine.UI.Text ARKitStream.BlendShapeInfo::label
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___label_5;
	// System.Text.StringBuilder ARKitStream.BlendShapeInfo::sb
	StringBuilder_t * ___sb_6;

public:
	inline static int32_t get_offset_of_faceManager_4() { return static_cast<int32_t>(offsetof(BlendShapeInfo_t95745EFAE066221C34967DE45B25581799D2C6DC, ___faceManager_4)); }
	inline ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * get_faceManager_4() const { return ___faceManager_4; }
	inline ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 ** get_address_of_faceManager_4() { return &___faceManager_4; }
	inline void set_faceManager_4(ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * value)
	{
		___faceManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faceManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_label_5() { return static_cast<int32_t>(offsetof(BlendShapeInfo_t95745EFAE066221C34967DE45B25581799D2C6DC, ___label_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_label_5() const { return ___label_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_label_5() { return &___label_5; }
	inline void set_label_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___label_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_5), (void*)value);
	}

	inline static int32_t get_offset_of_sb_6() { return static_cast<int32_t>(offsetof(BlendShapeInfo_t95745EFAE066221C34967DE45B25581799D2C6DC, ___sb_6)); }
	inline StringBuilder_t * get_sb_6() const { return ___sb_6; }
	inline StringBuilder_t ** get_address_of_sb_6() { return &___sb_6; }
	inline void set_sb_6(StringBuilder_t * value)
	{
		___sb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sb_6), (void*)value);
	}
};


// ARKitStream.FacePreview
struct FacePreview_t61910D140DE3FF78680B93779A94A136BDC30DBD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARFaceManager ARKitStream.FacePreview::faceManager
	ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * ___faceManager_4;

public:
	inline static int32_t get_offset_of_faceManager_4() { return static_cast<int32_t>(offsetof(FacePreview_t61910D140DE3FF78680B93779A94A136BDC30DBD, ___faceManager_4)); }
	inline ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * get_faceManager_4() const { return ___faceManager_4; }
	inline ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 ** get_address_of_faceManager_4() { return &___faceManager_4; }
	inline void set_faceManager_4(ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * value)
	{
		___faceManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___faceManager_4), (void*)value);
	}
};


// ARKitStream.GoToSceneButton
struct GoToSceneButton_tCBB552C68A7E72DF554B1499E70F440C65258189  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String ARKitStream.GoToSceneButton::sceneName
	String_t* ___sceneName_4;
	// UnityEngine.SceneManagement.LoadSceneMode ARKitStream.GoToSceneButton::mode
	int32_t ___mode_5;

public:
	inline static int32_t get_offset_of_sceneName_4() { return static_cast<int32_t>(offsetof(GoToSceneButton_tCBB552C68A7E72DF554B1499E70F440C65258189, ___sceneName_4)); }
	inline String_t* get_sceneName_4() const { return ___sceneName_4; }
	inline String_t** get_address_of_sceneName_4() { return &___sceneName_4; }
	inline void set_sceneName_4(String_t* value)
	{
		___sceneName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_4), (void*)value);
	}

	inline static int32_t get_offset_of_mode_5() { return static_cast<int32_t>(offsetof(GoToSceneButton_tCBB552C68A7E72DF554B1499E70F440C65258189, ___mode_5)); }
	inline int32_t get_mode_5() const { return ___mode_5; }
	inline int32_t* get_address_of_mode_5() { return &___mode_5; }
	inline void set_mode_5(int32_t value)
	{
		___mode_5 = value;
	}
};


// ARKitStream.HumanBodyPreview
struct HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARHumanBodyManager ARKitStream.HumanBodyPreview::humanBodyManager
	ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * ___humanBodyManager_4;
	// UnityEngine.Mesh ARKitStream.HumanBodyPreview::skeletonMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___skeletonMesh_5;
	// UnityEngine.Material ARKitStream.HumanBodyPreview::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_6;
	// System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint> ARKitStream.HumanBodyPreview::joints
	List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * ___joints_7;

public:
	inline static int32_t get_offset_of_humanBodyManager_4() { return static_cast<int32_t>(offsetof(HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3, ___humanBodyManager_4)); }
	inline ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * get_humanBodyManager_4() const { return ___humanBodyManager_4; }
	inline ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 ** get_address_of_humanBodyManager_4() { return &___humanBodyManager_4; }
	inline void set_humanBodyManager_4(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * value)
	{
		___humanBodyManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___humanBodyManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_skeletonMesh_5() { return static_cast<int32_t>(offsetof(HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3, ___skeletonMesh_5)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_skeletonMesh_5() const { return ___skeletonMesh_5; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_skeletonMesh_5() { return &___skeletonMesh_5; }
	inline void set_skeletonMesh_5(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___skeletonMesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeletonMesh_5), (void*)value);
	}

	inline static int32_t get_offset_of_material_6() { return static_cast<int32_t>(offsetof(HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3, ___material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_6() const { return ___material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_6() { return &___material_6; }
	inline void set_material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_6), (void*)value);
	}

	inline static int32_t get_offset_of_joints_7() { return static_cast<int32_t>(offsetof(HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3, ___joints_7)); }
	inline List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * get_joints_7() const { return ___joints_7; }
	inline List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B ** get_address_of_joints_7() { return &___joints_7; }
	inline void set_joints_7(List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * value)
	{
		___joints_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joints_7), (void*)value);
	}
};


// ARKitStream.SimplePreview
struct SimplePreview_t5D2B3DC10162B698CA436CC399EF0EA25E8D5B89  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.XR.ARFoundation.ARPointCloudParticleVisualizer ARKitStream.SimplePreview::pointCloud
	ARPointCloudParticleVisualizer_tD36EB0704B08FAE9C25319F49973E4062E7B6ADD * ___pointCloud_4;
	// UnityEngine.XR.ARFoundation.AROcclusionManager ARKitStream.SimplePreview::occlusionManager
	AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * ___occlusionManager_5;
	// UnityEngine.Material ARKitStream.SimplePreview::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_6;

public:
	inline static int32_t get_offset_of_pointCloud_4() { return static_cast<int32_t>(offsetof(SimplePreview_t5D2B3DC10162B698CA436CC399EF0EA25E8D5B89, ___pointCloud_4)); }
	inline ARPointCloudParticleVisualizer_tD36EB0704B08FAE9C25319F49973E4062E7B6ADD * get_pointCloud_4() const { return ___pointCloud_4; }
	inline ARPointCloudParticleVisualizer_tD36EB0704B08FAE9C25319F49973E4062E7B6ADD ** get_address_of_pointCloud_4() { return &___pointCloud_4; }
	inline void set_pointCloud_4(ARPointCloudParticleVisualizer_tD36EB0704B08FAE9C25319F49973E4062E7B6ADD * value)
	{
		___pointCloud_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pointCloud_4), (void*)value);
	}

	inline static int32_t get_offset_of_occlusionManager_5() { return static_cast<int32_t>(offsetof(SimplePreview_t5D2B3DC10162B698CA436CC399EF0EA25E8D5B89, ___occlusionManager_5)); }
	inline AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * get_occlusionManager_5() const { return ___occlusionManager_5; }
	inline AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 ** get_address_of_occlusionManager_5() { return &___occlusionManager_5; }
	inline void set_occlusionManager_5(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * value)
	{
		___occlusionManager_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___occlusionManager_5), (void*)value);
	}

	inline static int32_t get_offset_of_material_6() { return static_cast<int32_t>(offsetof(SimplePreview_t5D2B3DC10162B698CA436CC399EF0EA25E8D5B89, ___material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_6() const { return ___material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_6() { return &___material_6; }
	inline void set_material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_6), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909  : public SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909, ___m_Trackables_9)); }
	inline Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909, ___m_PendingAdds_10)); }
	inline Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_tF07FB2CCA54ADAB1549E54E2E9614059B7B21F74 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider,UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>
struct ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950  : public SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA
{
public:
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * ___m_PendingAdds_10;

public:
	inline static int32_t get_offset_of_U3CsessionOriginU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950, ___U3CsessionOriginU3Ek__BackingField_8)); }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * get_U3CsessionOriginU3Ek__BackingField_8() const { return ___U3CsessionOriginU3Ek__BackingField_8; }
	inline ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 ** get_address_of_U3CsessionOriginU3Ek__BackingField_8() { return &___U3CsessionOriginU3Ek__BackingField_8; }
	inline void set_U3CsessionOriginU3Ek__BackingField_8(ARSessionOrigin_tA15648434106370D592D12C00B93054EC6CE6AE1 * value)
	{
		___U3CsessionOriginU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsessionOriginU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Trackables_9() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950, ___m_Trackables_9)); }
	inline Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * get_m_Trackables_9() const { return ___m_Trackables_9; }
	inline Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 ** get_address_of_m_Trackables_9() { return &___m_Trackables_9; }
	inline void set_m_Trackables_9(Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * value)
	{
		___m_Trackables_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Trackables_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_PendingAdds_10() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950, ___m_PendingAdds_10)); }
	inline Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * get_m_PendingAdds_10() const { return ___m_PendingAdds_10; }
	inline Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 ** get_address_of_m_PendingAdds_10() { return &___m_PendingAdds_10; }
	inline void set_m_PendingAdds_10(Dictionary_2_t875E70525C711130925F3854722CF17DC974E6D7 * value)
	{
		___m_PendingAdds_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PendingAdds_10), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>
struct ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>
struct ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0  : public ARTrackable_tE630E6237048700E730F3E3C2799F6CA07029DB3
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___U3CsessionRelativeDataU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_DestroyOnRemoval_4() { return static_cast<int32_t>(offsetof(ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0, ___m_DestroyOnRemoval_4)); }
	inline bool get_m_DestroyOnRemoval_4() const { return ___m_DestroyOnRemoval_4; }
	inline bool* get_address_of_m_DestroyOnRemoval_4() { return &___m_DestroyOnRemoval_4; }
	inline void set_m_DestroyOnRemoval_4(bool value)
	{
		___m_DestroyOnRemoval_4 = value;
	}

	inline static int32_t get_offset_of_U3CpendingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0, ___U3CpendingU3Ek__BackingField_5)); }
	inline bool get_U3CpendingU3Ek__BackingField_5() const { return ___U3CpendingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CpendingU3Ek__BackingField_5() { return &___U3CpendingU3Ek__BackingField_5; }
	inline void set_U3CpendingU3Ek__BackingField_5(bool value)
	{
		___U3CpendingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0, ___U3CsessionRelativeDataU3Ek__BackingField_6)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_U3CsessionRelativeDataU3Ek__BackingField_6() const { return ___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_U3CsessionRelativeDataU3Ek__BackingField_6() { return &___U3CsessionRelativeDataU3Ek__BackingField_6; }
	inline void set_U3CsessionRelativeDataU3Ek__BackingField_6(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___U3CsessionRelativeDataU3Ek__BackingField_6 = value;
	}
};


// UnityEngine.XR.ARFoundation.AROcclusionManager
struct AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48  : public SubsystemLifecycleManager_3_t49E8B92C416A7F3333143F6C5FC5293713978225
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARTextureInfo> UnityEngine.XR.ARFoundation.AROcclusionManager::m_TextureInfos
	List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * ___m_TextureInfos_7;
	// System.Collections.Generic.List`1<UnityEngine.Texture2D> UnityEngine.XR.ARFoundation.AROcclusionManager::m_Textures
	List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * ___m_Textures_8;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.XR.ARFoundation.AROcclusionManager::m_TexturePropertyIds
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_TexturePropertyIds_9;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanStencilTextureInfo
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  ___m_HumanStencilTextureInfo_10;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanDepthTextureInfo
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  ___m_HumanDepthTextureInfo_11;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthTextureInfo
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  ___m_EnvironmentDepthTextureInfo_12;
	// UnityEngine.XR.ARFoundation.ARTextureInfo UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthConfidenceTextureInfo
	ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  ___m_EnvironmentDepthConfidenceTextureInfo_13;
	// System.Action`1<UnityEngine.XR.ARFoundation.AROcclusionFrameEventArgs> UnityEngine.XR.ARFoundation.AROcclusionManager::frameReceived
	Action_1_t1A44CB29184F135C80F1F1025D2BCCAC14B0A403 * ___frameReceived_14;
	// UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanSegmentationStencilMode
	int32_t ___m_HumanSegmentationStencilMode_15;
	// UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_HumanSegmentationDepthMode
	int32_t ___m_HumanSegmentationDepthMode_16;
	// UnityEngine.XR.ARSubsystems.EnvironmentDepthMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthMode
	int32_t ___m_EnvironmentDepthMode_17;
	// System.Boolean UnityEngine.XR.ARFoundation.AROcclusionManager::m_EnvironmentDepthTemporalSmoothing
	bool ___m_EnvironmentDepthTemporalSmoothing_18;
	// UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode UnityEngine.XR.ARFoundation.AROcclusionManager::m_OcclusionPreferenceMode
	int32_t ___m_OcclusionPreferenceMode_19;

public:
	inline static int32_t get_offset_of_m_TextureInfos_7() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_TextureInfos_7)); }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * get_m_TextureInfos_7() const { return ___m_TextureInfos_7; }
	inline List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A ** get_address_of_m_TextureInfos_7() { return &___m_TextureInfos_7; }
	inline void set_m_TextureInfos_7(List_1_t737CDD0B911D91DA30FC544763F10FFC47C3C74A * value)
	{
		___m_TextureInfos_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextureInfos_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Textures_8() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_Textures_8)); }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * get_m_Textures_8() const { return ___m_Textures_8; }
	inline List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 ** get_address_of_m_Textures_8() { return &___m_Textures_8; }
	inline void set_m_Textures_8(List_1_t67CA4414F3746D817D6D1A1D16FD9E7C85CED2D7 * value)
	{
		___m_Textures_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Textures_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_TexturePropertyIds_9() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_TexturePropertyIds_9)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_TexturePropertyIds_9() const { return ___m_TexturePropertyIds_9; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_TexturePropertyIds_9() { return &___m_TexturePropertyIds_9; }
	inline void set_m_TexturePropertyIds_9(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_TexturePropertyIds_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TexturePropertyIds_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_HumanStencilTextureInfo_10() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_HumanStencilTextureInfo_10)); }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  get_m_HumanStencilTextureInfo_10() const { return ___m_HumanStencilTextureInfo_10; }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * get_address_of_m_HumanStencilTextureInfo_10() { return &___m_HumanStencilTextureInfo_10; }
	inline void set_m_HumanStencilTextureInfo_10(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		___m_HumanStencilTextureInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HumanStencilTextureInfo_10))->___m_Texture_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HumanDepthTextureInfo_11() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_HumanDepthTextureInfo_11)); }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  get_m_HumanDepthTextureInfo_11() const { return ___m_HumanDepthTextureInfo_11; }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * get_address_of_m_HumanDepthTextureInfo_11() { return &___m_HumanDepthTextureInfo_11; }
	inline void set_m_HumanDepthTextureInfo_11(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		___m_HumanDepthTextureInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HumanDepthTextureInfo_11))->___m_Texture_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_EnvironmentDepthTextureInfo_12() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_EnvironmentDepthTextureInfo_12)); }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  get_m_EnvironmentDepthTextureInfo_12() const { return ___m_EnvironmentDepthTextureInfo_12; }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * get_address_of_m_EnvironmentDepthTextureInfo_12() { return &___m_EnvironmentDepthTextureInfo_12; }
	inline void set_m_EnvironmentDepthTextureInfo_12(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		___m_EnvironmentDepthTextureInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EnvironmentDepthTextureInfo_12))->___m_Texture_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_EnvironmentDepthConfidenceTextureInfo_13() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_EnvironmentDepthConfidenceTextureInfo_13)); }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  get_m_EnvironmentDepthConfidenceTextureInfo_13() const { return ___m_EnvironmentDepthConfidenceTextureInfo_13; }
	inline ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355 * get_address_of_m_EnvironmentDepthConfidenceTextureInfo_13() { return &___m_EnvironmentDepthConfidenceTextureInfo_13; }
	inline void set_m_EnvironmentDepthConfidenceTextureInfo_13(ARTextureInfo_t081B3396E755CC95C37B7BA68075F5DBEF36B355  value)
	{
		___m_EnvironmentDepthConfidenceTextureInfo_13 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EnvironmentDepthConfidenceTextureInfo_13))->___m_Texture_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_frameReceived_14() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___frameReceived_14)); }
	inline Action_1_t1A44CB29184F135C80F1F1025D2BCCAC14B0A403 * get_frameReceived_14() const { return ___frameReceived_14; }
	inline Action_1_t1A44CB29184F135C80F1F1025D2BCCAC14B0A403 ** get_address_of_frameReceived_14() { return &___frameReceived_14; }
	inline void set_frameReceived_14(Action_1_t1A44CB29184F135C80F1F1025D2BCCAC14B0A403 * value)
	{
		___frameReceived_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReceived_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_HumanSegmentationStencilMode_15() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_HumanSegmentationStencilMode_15)); }
	inline int32_t get_m_HumanSegmentationStencilMode_15() const { return ___m_HumanSegmentationStencilMode_15; }
	inline int32_t* get_address_of_m_HumanSegmentationStencilMode_15() { return &___m_HumanSegmentationStencilMode_15; }
	inline void set_m_HumanSegmentationStencilMode_15(int32_t value)
	{
		___m_HumanSegmentationStencilMode_15 = value;
	}

	inline static int32_t get_offset_of_m_HumanSegmentationDepthMode_16() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_HumanSegmentationDepthMode_16)); }
	inline int32_t get_m_HumanSegmentationDepthMode_16() const { return ___m_HumanSegmentationDepthMode_16; }
	inline int32_t* get_address_of_m_HumanSegmentationDepthMode_16() { return &___m_HumanSegmentationDepthMode_16; }
	inline void set_m_HumanSegmentationDepthMode_16(int32_t value)
	{
		___m_HumanSegmentationDepthMode_16 = value;
	}

	inline static int32_t get_offset_of_m_EnvironmentDepthMode_17() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_EnvironmentDepthMode_17)); }
	inline int32_t get_m_EnvironmentDepthMode_17() const { return ___m_EnvironmentDepthMode_17; }
	inline int32_t* get_address_of_m_EnvironmentDepthMode_17() { return &___m_EnvironmentDepthMode_17; }
	inline void set_m_EnvironmentDepthMode_17(int32_t value)
	{
		___m_EnvironmentDepthMode_17 = value;
	}

	inline static int32_t get_offset_of_m_EnvironmentDepthTemporalSmoothing_18() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_EnvironmentDepthTemporalSmoothing_18)); }
	inline bool get_m_EnvironmentDepthTemporalSmoothing_18() const { return ___m_EnvironmentDepthTemporalSmoothing_18; }
	inline bool* get_address_of_m_EnvironmentDepthTemporalSmoothing_18() { return &___m_EnvironmentDepthTemporalSmoothing_18; }
	inline void set_m_EnvironmentDepthTemporalSmoothing_18(bool value)
	{
		___m_EnvironmentDepthTemporalSmoothing_18 = value;
	}

	inline static int32_t get_offset_of_m_OcclusionPreferenceMode_19() { return static_cast<int32_t>(offsetof(AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48, ___m_OcclusionPreferenceMode_19)); }
	inline int32_t get_m_OcclusionPreferenceMode_19() const { return ___m_OcclusionPreferenceMode_19; }
	inline int32_t* get_address_of_m_OcclusionPreferenceMode_19() { return &___m_OcclusionPreferenceMode_19; }
	inline void set_m_OcclusionPreferenceMode_19(int32_t value)
	{
		___m_OcclusionPreferenceMode_19 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTargetCache_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTargetCache_11)); }
	inline bool get_m_RaycastTargetCache_11() const { return ___m_RaycastTargetCache_11; }
	inline bool* get_address_of_m_RaycastTargetCache_11() { return &___m_RaycastTargetCache_11; }
	inline void set_m_RaycastTargetCache_11(bool value)
	{
		___m_RaycastTargetCache_11 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_12() const { return ___m_RaycastPadding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_12() { return &___m_RaycastPadding_12; }
	inline void set_m_RaycastPadding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_12 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_13)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_13() const { return ___m_RectTransform_13; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_13() { return &___m_RectTransform_13; }
	inline void set_m_RectTransform_13(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_14)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_14() const { return ___m_CanvasRenderer_14; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_14() { return &___m_CanvasRenderer_14; }
	inline void set_m_CanvasRenderer_14(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_15)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_15() const { return ___m_Canvas_15; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_15() { return &___m_Canvas_15; }
	inline void set_m_Canvas_15(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_16)); }
	inline bool get_m_VertsDirty_16() const { return ___m_VertsDirty_16; }
	inline bool* get_address_of_m_VertsDirty_16() { return &___m_VertsDirty_16; }
	inline void set_m_VertsDirty_16(bool value)
	{
		___m_VertsDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_17)); }
	inline bool get_m_MaterialDirty_17() const { return ___m_MaterialDirty_17; }
	inline bool* get_address_of_m_MaterialDirty_17() { return &___m_MaterialDirty_17; }
	inline void set_m_MaterialDirty_17(bool value)
	{
		___m_MaterialDirty_17 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_18() const { return ___m_OnDirtyLayoutCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_18() { return &___m_OnDirtyLayoutCallback_18; }
	inline void set_m_OnDirtyLayoutCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_19() const { return ___m_OnDirtyVertsCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_19() { return &___m_OnDirtyVertsCallback_19; }
	inline void set_m_OnDirtyVertsCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_20)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_20() const { return ___m_OnDirtyMaterialCallback_20; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_20() { return &___m_OnDirtyMaterialCallback_20; }
	inline void set_m_OnDirtyMaterialCallback_20(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_23() const { return ___m_CachedMesh_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_23() { return &___m_CachedMesh_23; }
	inline void set_m_CachedMesh_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_24)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_24() const { return ___m_CachedUvs_24; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_24() { return &___m_CachedUvs_24; }
	inline void set_m_CachedUvs_24(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_25)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_25() const { return ___m_ColorTweenRunner_25; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_25() { return &___m_ColorTweenRunner_25; }
	inline void set_m_ColorTweenRunner_25(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_26() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_26; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_26(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_26 = value;
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
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

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARFace
struct ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1  : public ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B
{
public:
	// System.Action`1<UnityEngine.XR.ARFoundation.ARFaceUpdatedEventArgs> UnityEngine.XR.ARFoundation.ARFace::updated
	Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7 * ___updated_7;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<leftEye>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CleftEyeU3Ek__BackingField_8;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<rightEye>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CrightEyeU3Ek__BackingField_9;
	// UnityEngine.Transform UnityEngine.XR.ARFoundation.ARFace::<fixationPoint>k__BackingField
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___U3CfixationPointU3Ek__BackingField_10;
	// UnityEngine.XR.ARSubsystems.XRFaceMesh UnityEngine.XR.ARFoundation.ARFace::m_FaceMesh
	XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0  ___m_FaceMesh_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARFace::m_Updated
	bool ___m_Updated_12;

public:
	inline static int32_t get_offset_of_updated_7() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___updated_7)); }
	inline Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7 * get_updated_7() const { return ___updated_7; }
	inline Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7 ** get_address_of_updated_7() { return &___updated_7; }
	inline void set_updated_7(Action_1_tE4B11DC242A81D29CAB72548F670C1D43FACE7D7 * value)
	{
		___updated_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updated_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftEyeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___U3CleftEyeU3Ek__BackingField_8)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CleftEyeU3Ek__BackingField_8() const { return ___U3CleftEyeU3Ek__BackingField_8; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CleftEyeU3Ek__BackingField_8() { return &___U3CleftEyeU3Ek__BackingField_8; }
	inline void set_U3CleftEyeU3Ek__BackingField_8(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CleftEyeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CleftEyeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrightEyeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___U3CrightEyeU3Ek__BackingField_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CrightEyeU3Ek__BackingField_9() const { return ___U3CrightEyeU3Ek__BackingField_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CrightEyeU3Ek__BackingField_9() { return &___U3CrightEyeU3Ek__BackingField_9; }
	inline void set_U3CrightEyeU3Ek__BackingField_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CrightEyeU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrightEyeU3Ek__BackingField_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfixationPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___U3CfixationPointU3Ek__BackingField_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_U3CfixationPointU3Ek__BackingField_10() const { return ___U3CfixationPointU3Ek__BackingField_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_U3CfixationPointU3Ek__BackingField_10() { return &___U3CfixationPointU3Ek__BackingField_10; }
	inline void set_U3CfixationPointU3Ek__BackingField_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___U3CfixationPointU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfixationPointU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_FaceMesh_11() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___m_FaceMesh_11)); }
	inline XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0  get_m_FaceMesh_11() const { return ___m_FaceMesh_11; }
	inline XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0 * get_address_of_m_FaceMesh_11() { return &___m_FaceMesh_11; }
	inline void set_m_FaceMesh_11(XRFaceMesh_t2ADC7E6069DCCCFB439A4A60DB9189338C9E1AD0  value)
	{
		___m_FaceMesh_11 = value;
	}

	inline static int32_t get_offset_of_m_Updated_12() { return static_cast<int32_t>(offsetof(ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1, ___m_Updated_12)); }
	inline bool get_m_Updated_12() const { return ___m_Updated_12; }
	inline bool* get_address_of_m_Updated_12() { return &___m_Updated_12; }
	inline void set_m_Updated_12(bool value)
	{
		___m_Updated_12 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARFaceManager
struct ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647  : public ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909
{
public:
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARFaceManager::m_FacePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FacePrefab_14;
	// System.Int32 UnityEngine.XR.ARFoundation.ARFaceManager::m_MaximumFaceCount
	int32_t ___m_MaximumFaceCount_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs> UnityEngine.XR.ARFoundation.ARFaceManager::facesChanged
	Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * ___facesChanged_16;

public:
	inline static int32_t get_offset_of_m_FacePrefab_14() { return static_cast<int32_t>(offsetof(ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647, ___m_FacePrefab_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FacePrefab_14() const { return ___m_FacePrefab_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FacePrefab_14() { return &___m_FacePrefab_14; }
	inline void set_m_FacePrefab_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FacePrefab_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FacePrefab_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaximumFaceCount_15() { return static_cast<int32_t>(offsetof(ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647, ___m_MaximumFaceCount_15)); }
	inline int32_t get_m_MaximumFaceCount_15() const { return ___m_MaximumFaceCount_15; }
	inline int32_t* get_address_of_m_MaximumFaceCount_15() { return &___m_MaximumFaceCount_15; }
	inline void set_m_MaximumFaceCount_15(int32_t value)
	{
		___m_MaximumFaceCount_15 = value;
	}

	inline static int32_t get_offset_of_facesChanged_16() { return static_cast<int32_t>(offsetof(ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647, ___facesChanged_16)); }
	inline Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * get_facesChanged_16() const { return ___facesChanged_16; }
	inline Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 ** get_address_of_facesChanged_16() { return &___facesChanged_16; }
	inline void set_facesChanged_16(Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * value)
	{
		___facesChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___facesChanged_16), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARHumanBody
struct ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5  : public ARTrackable_2_t482FF6DE9326FFF166148DA7425768F6FA9EB9B0
{
public:
	// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint> UnityEngine.XR.ARFoundation.ARHumanBody::m_Joints
	NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  ___m_Joints_7;

public:
	inline static int32_t get_offset_of_m_Joints_7() { return static_cast<int32_t>(offsetof(ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5, ___m_Joints_7)); }
	inline NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  get_m_Joints_7() const { return ___m_Joints_7; }
	inline NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C * get_address_of_m_Joints_7() { return &___m_Joints_7; }
	inline void set_m_Joints_7(NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  value)
	{
		___m_Joints_7 = value;
	}
};


// UnityEngine.XR.ARFoundation.ARHumanBodyManager
struct ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4  : public ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950
{
public:
	// System.Boolean UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_Pose2D
	bool ___m_Pose2D_14;
	// System.Boolean UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_Pose3D
	bool ___m_Pose3D_15;
	// System.Boolean UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_Pose3DScaleEstimation
	bool ___m_Pose3DScaleEstimation_16;
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARHumanBodyManager::m_HumanBodyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_HumanBodyPrefab_17;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs> UnityEngine.XR.ARFoundation.ARHumanBodyManager::humanBodiesChanged
	Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * ___humanBodiesChanged_18;

public:
	inline static int32_t get_offset_of_m_Pose2D_14() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___m_Pose2D_14)); }
	inline bool get_m_Pose2D_14() const { return ___m_Pose2D_14; }
	inline bool* get_address_of_m_Pose2D_14() { return &___m_Pose2D_14; }
	inline void set_m_Pose2D_14(bool value)
	{
		___m_Pose2D_14 = value;
	}

	inline static int32_t get_offset_of_m_Pose3D_15() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___m_Pose3D_15)); }
	inline bool get_m_Pose3D_15() const { return ___m_Pose3D_15; }
	inline bool* get_address_of_m_Pose3D_15() { return &___m_Pose3D_15; }
	inline void set_m_Pose3D_15(bool value)
	{
		___m_Pose3D_15 = value;
	}

	inline static int32_t get_offset_of_m_Pose3DScaleEstimation_16() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___m_Pose3DScaleEstimation_16)); }
	inline bool get_m_Pose3DScaleEstimation_16() const { return ___m_Pose3DScaleEstimation_16; }
	inline bool* get_address_of_m_Pose3DScaleEstimation_16() { return &___m_Pose3DScaleEstimation_16; }
	inline void set_m_Pose3DScaleEstimation_16(bool value)
	{
		___m_Pose3DScaleEstimation_16 = value;
	}

	inline static int32_t get_offset_of_m_HumanBodyPrefab_17() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___m_HumanBodyPrefab_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_HumanBodyPrefab_17() const { return ___m_HumanBodyPrefab_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_HumanBodyPrefab_17() { return &___m_HumanBodyPrefab_17; }
	inline void set_m_HumanBodyPrefab_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_HumanBodyPrefab_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HumanBodyPrefab_17), (void*)value);
	}

	inline static int32_t get_offset_of_humanBodiesChanged_18() { return static_cast<int32_t>(offsetof(ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4, ___humanBodiesChanged_18)); }
	inline Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * get_humanBodiesChanged_18() const { return ___humanBodiesChanged_18; }
	inline Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 ** get_address_of_humanBodiesChanged_18() { return &___humanBodiesChanged_18; }
	inline void set_humanBodiesChanged_18(Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * value)
	{
		___humanBodiesChanged_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___humanBodiesChanged_18), (void*)value);
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_36;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_27)); }
	inline bool get_m_ShouldRecalculateStencil_27() const { return ___m_ShouldRecalculateStencil_27; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_27() { return &___m_ShouldRecalculateStencil_27; }
	inline void set_m_ShouldRecalculateStencil_27(bool value)
	{
		___m_ShouldRecalculateStencil_27 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_28)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_28() const { return ___m_MaskMaterial_28; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_28() { return &___m_MaskMaterial_28; }
	inline void set_m_MaskMaterial_28(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_29)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_29() const { return ___m_ParentMask_29; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_29() { return &___m_ParentMask_29; }
	inline void set_m_ParentMask_29(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_30)); }
	inline bool get_m_Maskable_30() const { return ___m_Maskable_30; }
	inline bool* get_address_of_m_Maskable_30() { return &___m_Maskable_30; }
	inline void set_m_Maskable_30(bool value)
	{
		___m_Maskable_30 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_31)); }
	inline bool get_m_IsMaskingGraphic_31() const { return ___m_IsMaskingGraphic_31; }
	inline bool* get_address_of_m_IsMaskingGraphic_31() { return &___m_IsMaskingGraphic_31; }
	inline void set_m_IsMaskingGraphic_31(bool value)
	{
		___m_IsMaskingGraphic_31 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_32)); }
	inline bool get_m_IncludeForMasking_32() const { return ___m_IncludeForMasking_32; }
	inline bool* get_address_of_m_IncludeForMasking_32() { return &___m_IncludeForMasking_32; }
	inline void set_m_IncludeForMasking_32(bool value)
	{
		___m_IncludeForMasking_32 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_33)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_33() const { return ___m_OnCullStateChanged_33; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_33() { return &___m_OnCullStateChanged_33; }
	inline void set_m_OnCullStateChanged_33(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_33), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_34)); }
	inline bool get_m_ShouldRecalculate_34() const { return ___m_ShouldRecalculate_34; }
	inline bool* get_address_of_m_ShouldRecalculate_34() { return &___m_ShouldRecalculate_34; }
	inline void set_m_ShouldRecalculate_34(bool value)
	{
		___m_ShouldRecalculate_34 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_35)); }
	inline int32_t get_m_StencilValue_35() const { return ___m_StencilValue_35; }
	inline int32_t* get_address_of_m_StencilValue_35() { return &___m_StencilValue_35; }
	inline void set_m_StencilValue_35(int32_t value)
	{
		___m_StencilValue_35 = value;
	}

	inline static int32_t get_offset_of_m_Corners_36() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_36)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_36() const { return ___m_Corners_36; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_36() { return &___m_Corners_36; }
	inline void set_m_Corners_36(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_36), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_43;

public:
	inline static int32_t get_offset_of_m_FontData_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_37)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_37() const { return ___m_FontData_37; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_37() { return &___m_FontData_37; }
	inline void set_m_FontData_37(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_38)); }
	inline String_t* get_m_Text_38() const { return ___m_Text_38; }
	inline String_t** get_address_of_m_Text_38() { return &___m_Text_38; }
	inline void set_m_Text_38(String_t* value)
	{
		___m_Text_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_39() const { return ___m_TextCache_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_39() { return &___m_TextCache_39; }
	inline void set_m_TextCache_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_40)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_40() const { return ___m_TextCacheForLayout_40; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_40() { return &___m_TextCacheForLayout_40; }
	inline void set_m_TextCacheForLayout_40(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_42)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_42() const { return ___m_DisableFontTextureRebuiltCallback_42; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_42() { return &___m_DisableFontTextureRebuiltCallback_42; }
	inline void set_m_DisableFontTextureRebuiltCallback_42(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_42 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_43() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_43)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_43() const { return ___m_TempVerts_43; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_43() { return &___m_TempVerts_43; }
	inline void set_m_TempVerts_43(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_43), (void*)value);
	}
};


// <Module>


// <Module>


// System.Object


// System.Object


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>

struct List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21_StaticFields, ____emptyArray_5)); }
	inline ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARFaceU5BU5D_tA59877859026F1FB50DE28D944E0B0637FFF4931* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody>

struct List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64_StaticFields, ____emptyArray_5)); }
	inline ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ARHumanBodyU5BU5D_t10A32F710B0093CF19C6913E7A365C61F6FEC0D0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody>


// System.Collections.Generic.List`1<System.Object>

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>


// System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>

struct List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JointU5BU5D_t6D20C43210EC71F0FE563E5006A4C0DC37EFA407* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B_StaticFields, ____emptyArray_5)); }
	inline JointU5BU5D_t6D20C43210EC71F0FE563E5006A4C0DC37EFA407* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JointU5BU5D_t6D20C43210EC71F0FE563E5006A4C0DC37EFA407** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JointU5BU5D_t6D20C43210EC71F0FE563E5006A4C0DC37EFA407* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>

struct Il2CppArrayBounds;

// System.Array

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo


// System.Reflection.MemberInfo


// System.String

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


// System.String


// System.Text.StringBuilder


// System.Text.StringBuilder


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider


// UnityEngine.Events.UnityEventBase


// UnityEngine.Events.UnityEventBase


// System.ValueType


// System.ValueType


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// System.Collections.Generic.List`1/Enumerator<System.Object>


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>


// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>


// UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs


// UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs


// UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs


// UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs


// System.Boolean

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Boolean


// UnityEngine.Color


// UnityEngine.Color


// System.Enum

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};


// System.Enum


// System.Int32


// System.Int32


// System.IntPtr

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


// System.IntPtr


// UnityEngine.Matrix4x4

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Matrix4x4


// UnityEngine.Quaternion

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Quaternion


// System.Single


// System.Single


// UnityEngine.UI.SpriteState


// UnityEngine.UI.SpriteState


// UnityEngine.XR.ARSubsystems.TrackableId

struct TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___s_InvalidId_1;

public:
	inline static int32_t get_offset_of_s_TrackableIdRegex_0() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_TrackableIdRegex_0)); }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * get_s_TrackableIdRegex_0() const { return ___s_TrackableIdRegex_0; }
	inline Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F ** get_address_of_s_TrackableIdRegex_0() { return &___s_TrackableIdRegex_0; }
	inline void set_s_TrackableIdRegex_0(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * value)
	{
		___s_TrackableIdRegex_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackableIdRegex_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_InvalidId_1() { return static_cast<int32_t>(offsetof(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B_StaticFields, ___s_InvalidId_1)); }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  get_s_InvalidId_1() const { return ___s_InvalidId_1; }
	inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B * get_address_of_s_InvalidId_1() { return &___s_InvalidId_1; }
	inline void set_s_InvalidId_1(TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  value)
	{
		___s_InvalidId_1 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackableId


// UnityEngine.Events.UnityEvent


// UnityEngine.Events.UnityEvent


// UnityEngine.Vector3

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector3


// UnityEngine.Vector4

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.Vector4


// System.Void


// System.Void


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>


// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>


// UnityEngine.XR.ARKit.ARKitBlendShapeLocation


// UnityEngine.XR.ARKit.ARKitBlendShapeLocation


// Unity.Collections.Allocator


// Unity.Collections.Allocator


// System.Reflection.BindingFlags


// System.Reflection.BindingFlags


// UnityEngine.UI.ColorBlock

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.UI.ColorBlock


// System.Delegate


// System.Delegate


// UnityEngine.XR.ARSubsystems.EnvironmentDepthMode


// UnityEngine.XR.ARSubsystems.EnvironmentDepthMode


// UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode


// UnityEngine.XR.ARSubsystems.HumanSegmentationDepthMode


// UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode


// UnityEngine.XR.ARSubsystems.HumanSegmentationStencilMode


// UnityEngine.SceneManagement.LoadSceneMode


// UnityEngine.SceneManagement.LoadSceneMode


// UnityEngine.Object

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};


// UnityEngine.Object


// UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode


// UnityEngine.XR.ARSubsystems.OcclusionPreferenceMode


// UnityEngine.Pose

struct Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A_StaticFields, ___k_Identity_2)); }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Pose


// System.RuntimeTypeHandle


// System.RuntimeTypeHandle


// UnityEngine.Rendering.TextureDimension


// UnityEngine.Rendering.TextureDimension


// UnityEngine.TextureFormat


// UnityEngine.TextureFormat


// UnityEngine.XR.ARSubsystems.TrackingState


// UnityEngine.XR.ARSubsystems.TrackingState


// UnityEngine.UI.Button/ButtonClickedEvent


// UnityEngine.UI.Button/ButtonClickedEvent


// ARKitStream.HumanBodyPreview/Joint


// ARKitStream.HumanBodyPreview/Joint


// UnityEngine.UI.Navigation/Mode


// UnityEngine.UI.Navigation/Mode


// UnityEngine.UI.Selectable/Transition


// UnityEngine.UI.Selectable/Transition


// System.Collections.Generic.List`1/Enumerator<ARKitStream.HumanBodyPreview/Joint>


// System.Collections.Generic.List`1/Enumerator<ARKitStream.HumanBodyPreview/Joint>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient>


// Unity.Collections.NativeArray`1<System.Int32>


// Unity.Collections.NativeArray`1<System.Int32>


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>


// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>


// UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient


// UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient


// UnityEngine.Component


// UnityEngine.Component


// UnityEngine.GameObject


// UnityEngine.GameObject


// UnityEngine.Material


// UnityEngine.Material


// UnityEngine.Mesh


// UnityEngine.Mesh


// System.MulticastDelegate


// System.MulticastDelegate


// UnityEngine.UI.Navigation


// UnityEngine.UI.Navigation


// UnityEngine.Texture

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Texture


// System.Type

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Type


// UnityEngine.XR.ARSubsystems.XRFace

struct XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRFace UnityEngine.XR.ARSubsystems.XRFace::s_Default
	XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  ___s_Default_7;

public:
	inline static int32_t get_offset_of_s_Default_7() { return static_cast<int32_t>(offsetof(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599_StaticFields, ___s_Default_7)); }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  get_s_Default_7() const { return ___s_Default_7; }
	inline XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599 * get_address_of_s_Default_7() { return &___s_Default_7; }
	inline void set_s_Default_7(XRFace_tA970995ECE26D43D1CBB9058ABEC72B76D2DA599  value)
	{
		___s_Default_7 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRFace


// UnityEngine.XR.ARSubsystems.XRFaceSubsystem


// UnityEngine.XR.ARSubsystems.XRFaceSubsystem


// UnityEngine.XR.ARSubsystems.XRHumanBody

struct XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields
{
public:
	// UnityEngine.XR.ARSubsystems.XRHumanBody UnityEngine.XR.ARSubsystems.XRHumanBody::s_Default
	XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  ___s_Default_5;

public:
	inline static int32_t get_offset_of_s_Default_5() { return static_cast<int32_t>(offsetof(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B_StaticFields, ___s_Default_5)); }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  get_s_Default_5() const { return ___s_Default_5; }
	inline XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B * get_address_of_s_Default_5() { return &___s_Default_5; }
	inline void set_s_Default_5(XRHumanBody_t1AA9DC3BEBCF86A64BE2B83452AC5704AD08C13B  value)
	{
		___s_Default_5 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRHumanBody


// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint


// UnityEngine.XR.ARSubsystems.XRHumanBodyJoint


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor


// UnityEngine.XR.ARSubsystems.XRTextureDescriptor


// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>


// System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>


// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>


// System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>


// Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>


// UnityEngine.XR.ARKit.ARKitFaceSubsystem


// UnityEngine.XR.ARKit.ARKitFaceSubsystem


// UnityEngine.XR.ARFoundation.ARTextureInfo


// UnityEngine.XR.ARFoundation.ARTextureInfo


// UnityEngine.Behaviour


// UnityEngine.Behaviour


// UnityEngine.Texture2D


// UnityEngine.Texture2D


// UnityEngine.Transform


// UnityEngine.Transform


// UnityEngine.Events.UnityAction


// UnityEngine.Events.UnityAction


// UnityEngine.XR.ARSubsystems.XRFaceMesh


// UnityEngine.XR.ARSubsystems.XRFaceMesh


// UnityEngine.MonoBehaviour


// UnityEngine.MonoBehaviour


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>

struct SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>

struct SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tA1D273638689FBC5ED4F3CAF82F64C158000481E * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t36FA58641B294DA0D36ACCCC6F25BAEAD794CD22 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider>

struct SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4 * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4 * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4 ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_tB23F14817387B6E0CF6BC3F698BE74D4321CBBD4 * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_tFD8C4FEF1CAD89AF6B0223AF63BA0FFF0F7939AA_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_tF313C639A10A550C756E883EFADA75B9D6D2D936 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider>


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>

struct SubsystemLifecycleManager_3_t49E8B92C416A7F3333143F6C5FC5293713978225_StaticFields
{
public:
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_t9AA280C4698A976F6616D552D829D1609D4A65BC * ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t621666FA9D6DB88D1803D2508DF110FF02508B72 * ___s_SubsystemInstances_6;

public:
	inline static int32_t get_offset_of_s_SubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t49E8B92C416A7F3333143F6C5FC5293713978225_StaticFields, ___s_SubsystemDescriptors_5)); }
	inline List_1_t9AA280C4698A976F6616D552D829D1609D4A65BC * get_s_SubsystemDescriptors_5() const { return ___s_SubsystemDescriptors_5; }
	inline List_1_t9AA280C4698A976F6616D552D829D1609D4A65BC ** get_address_of_s_SubsystemDescriptors_5() { return &___s_SubsystemDescriptors_5; }
	inline void set_s_SubsystemDescriptors_5(List_1_t9AA280C4698A976F6616D552D829D1609D4A65BC * value)
	{
		___s_SubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_SubsystemInstances_6() { return static_cast<int32_t>(offsetof(SubsystemLifecycleManager_3_t49E8B92C416A7F3333143F6C5FC5293713978225_StaticFields, ___s_SubsystemInstances_6)); }
	inline List_1_t621666FA9D6DB88D1803D2508DF110FF02508B72 * get_s_SubsystemInstances_6() const { return ___s_SubsystemInstances_6; }
	inline List_1_t621666FA9D6DB88D1803D2508DF110FF02508B72 ** get_address_of_s_SubsystemInstances_6() { return &___s_SubsystemInstances_6; }
	inline void set_s_SubsystemInstances_6(List_1_t621666FA9D6DB88D1803D2508DF110FF02508B72 * value)
	{
		___s_SubsystemInstances_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SubsystemInstances_6), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XROcclusionSubsystem,UnityEngine.XR.ARSubsystems.XROcclusionSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XROcclusionSubsystem/Provider>


// UnityEngine.XR.ARFoundation.ARTrackable


// UnityEngine.XR.ARFoundation.ARTrackable


// ARKitStream.BlendShapeInfo


// ARKitStream.BlendShapeInfo


// ARKitStream.FacePreview


// ARKitStream.FacePreview


// ARKitStream.GoToSceneButton


// ARKitStream.GoToSceneButton


// ARKitStream.HumanBodyPreview


// ARKitStream.HumanBodyPreview


// ARKitStream.SimplePreview


// ARKitStream.SimplePreview


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.EventSystems.UIBehaviour


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>

struct ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields, ___s_Added_11)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields, ___s_Updated_12)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tA11D83781E6860F7F8F040BF2AEC32E98C703909_StaticFields, ___s_Removed_13)); }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider,UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider,UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>

struct ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields
{
public:
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950 * ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ___s_Removed_13;

public:
	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields, ___U3CinstanceU3Ek__BackingField_7)); }
	inline ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950 * get_U3CinstanceU3Ek__BackingField_7() const { return ___U3CinstanceU3Ek__BackingField_7; }
	inline ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950 ** get_address_of_U3CinstanceU3Ek__BackingField_7() { return &___U3CinstanceU3Ek__BackingField_7; }
	inline void set_U3CinstanceU3Ek__BackingField_7(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950 * value)
	{
		___U3CinstanceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CinstanceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_Added_11() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields, ___s_Added_11)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_s_Added_11() const { return ___s_Added_11; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_s_Added_11() { return &___s_Added_11; }
	inline void set_s_Added_11(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___s_Added_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Added_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_Updated_12() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields, ___s_Updated_12)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_s_Updated_12() const { return ___s_Updated_12; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_s_Updated_12() { return &___s_Updated_12; }
	inline void set_s_Updated_12(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___s_Updated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Updated_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_Removed_13() { return static_cast<int32_t>(offsetof(ARTrackableManager_5_tBF03E2FD1615218DA910F13396AC5FBC8895A950_StaticFields, ___s_Removed_13)); }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * get_s_Removed_13() const { return ___s_Removed_13; }
	inline List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 ** get_address_of_s_Removed_13() { return &___s_Removed_13; }
	inline void set_s_Removed_13(List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * value)
	{
		___s_Removed_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Removed_13), (void*)value);
	}
};


// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRHumanBodySubsystem/Provider,UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>


// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRHumanBody,UnityEngine.XR.ARFoundation.ARHumanBody>


// UnityEngine.XR.ARFoundation.AROcclusionManager


// UnityEngine.XR.ARFoundation.AROcclusionManager


// UnityEngine.UI.Graphic

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_22;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_21)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_21() const { return ___s_Mesh_21; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_21() { return &___s_Mesh_21; }
	inline void set_s_Mesh_21(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_22)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_22() const { return ___s_VertexHelper_22; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_22() { return &___s_VertexHelper_22; }
	inline void set_s_VertexHelper_22(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_22), (void*)value);
	}
};


// UnityEngine.UI.Graphic


// UnityEngine.UI.Selectable

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Selectable


// UnityEngine.XR.ARFoundation.ARFace


// UnityEngine.XR.ARFoundation.ARFace


// UnityEngine.XR.ARFoundation.ARFaceManager


// UnityEngine.XR.ARFoundation.ARFaceManager


// UnityEngine.XR.ARFoundation.ARHumanBody


// UnityEngine.XR.ARFoundation.ARHumanBody


// UnityEngine.XR.ARFoundation.ARHumanBodyManager


// UnityEngine.XR.ARFoundation.ARHumanBodyManager


// UnityEngine.UI.Button


// UnityEngine.UI.Button


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.MaskableGraphic


// UnityEngine.UI.Text

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_41;

public:
	inline static int32_t get_offset_of_s_DefaultText_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_41)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_41() const { return ___s_DefaultText_41; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_41() { return &___s_DefaultText_41; }
	inline void set_s_DefaultText_41(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_41), (void*)value);
	}
};


// UnityEngine.UI.Text

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_gshared (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,System.Object>::get_trackableId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARTrackable_2_get_trackableId_m4865C727B15ECEB346A703276462DA6167AD9274_gshared (ARTrackable_2_t0C3A99AF5B35E36F452AD67B5A0F2F26F2F561B2 * __this, const RuntimeMethod* method);
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<System.Object,System.Object,System.Object>::get_subsystem()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED_gshared (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_gshared (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06_gshared (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0  List_1_GetEnumerator_mD9A6E72FD24C42837DFA7DC72F081BE7427ADDA5_gshared (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<ARKitStream.HumanBodyPreview/Joint>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  Enumerator_get_Current_m9E110BB9F9D8A295C4F6A149F5D9CB88D4510CA5_gshared_inline (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<ARKitStream.HumanBodyPreview/Joint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1CBFC8E721A51169C93C7998DBD7B3B4F3FAF1B6_gshared (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<ARKitStream.HumanBodyPreview/Joint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m7FD2A15378BA2D35BC651654FCD60890FB0A6022_gshared (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A  NativeArray_1_GetEnumerator_mD331FA4263BAD04C90434769548F51C77F51E60A_gshared (NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C * __this, const RuntimeMethod* method);
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  Enumerator_get_Current_mBAE175A3926A60FC45CAF8A60954B792F97C04C7_gshared (Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mB85AA8C9F85DD1EC929ADDD6574E6C5F66953619_gshared (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * __this, Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  ___item0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mFAFA2D30BBC8AFC6D531ED62F6561D8036294496_gshared (Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mE59337ED8052437CCC8294DD295B6BB95886A813_gshared (Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A * __this, const RuntimeMethod* method);

// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184 (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARFaceManager::add_facesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceManager_add_facesChanged_mC0F1ECFEC0FD0955005367336E675FFA890CAC80 (ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * __this, Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.ARFoundation.ARFaceManager::remove_facesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARFaceManager_remove_facesChanged_mB2902EA16C0B264EC7F86D2436F5648824DD23E1 (ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * __this, Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace> UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ARFacesChangedEventArgs_get_updated_m9AFD1F7B0958F6754D86B18A1840B26863A2047A_inline (ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>::get_Count()
inline int32_t List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_inline (List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARFace>::get_Item(System.Int32)
inline ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_inline (List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * (*) (List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.XRFace,UnityEngine.XR.ARFoundation.ARFace>::get_trackableId()
inline TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B (ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B * __this, const RuntimeMethod* method)
{
	return ((  TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  (*) (ARTrackable_2_t928DBA17064C56CC4815ABE9EE35A64034C4998B *, const RuntimeMethod*))ARTrackable_2_get_trackableId_m4865C727B15ECEB346A703276462DA6167AD9274_gshared)(__this, method);
}
// !0 UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRFaceSubsystem,UnityEngine.XR.ARSubsystems.XRFaceSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRFaceSubsystem/Provider>::get_subsystem()
inline XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_inline (SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D * __this, const RuntimeMethod* method)
{
	return ((  XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * (*) (SubsystemLifecycleManager_3_t31868EF81C3959769807272A0587016EC6C3B61D *, const RuntimeMethod*))SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline)(__this, method);
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient> ARKitStream.BlendShapeInfo::GetCoefficients(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.XRFaceSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  BlendShapeInfo_GetCoefficients_mB3A3F6055DFBDAB93E624735065BFA99071A70D9 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___id0, XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * ___subsystem1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.XR.ARKit.ARKitBlendShapeLocation UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient::get_blendShapeLocation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline (ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient::get_coefficient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline (ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m5D3A8746416033F84CC51CFA86BC7A497D6E8A31 (StringBuilder_t * __this, float ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2 (StringBuilder_t * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient> UnityEngine.XR.ARKit.ARKitFaceSubsystem::GetBlendShapeCoefficients(UnityEngine.XR.ARSubsystems.TrackableId,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  ARKitFaceSubsystem_GetBlendShapeCoefficients_mE983A3A34A04F8C6340EF79A06138BEA025F9721 (ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 * __this, TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___faceId0, int32_t ___allocator1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m42B17BE94C5CB3B501907BA7D3460031DB4AA60A (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>::.ctor()
inline void List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B *, const RuntimeMethod*))List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5 (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARHumanBodyManager::add_humanBodiesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHumanBodyManager_add_humanBodiesChanged_m5E861DCF1B0CE714D0A76302F92A8FF864D6A39B (ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * __this, Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>::Clear()
inline void List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06 (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B *, const RuntimeMethod*))List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06_gshared)(__this, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARHumanBodyManager::remove_humanBodiesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARHumanBodyManager_remove_humanBodiesChanged_mB1CFD6EAB3111E5FF3351CE7B9B934D70F7979A9 (ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * __this, Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>::GetEnumerator()
inline Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0  List_1_GetEnumerator_mD9A6E72FD24C42837DFA7DC72F081BE7427ADDA5 (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0  (*) (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B *, const RuntimeMethod*))List_1_GetEnumerator_mD9A6E72FD24C42837DFA7DC72F081BE7427ADDA5_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<ARKitStream.HumanBodyPreview/Joint>::get_Current()
inline Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  Enumerator_get_Current_m9E110BB9F9D8A295C4F6A149F5D9CB88D4510CA5_inline (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 * __this, const RuntimeMethod* method)
{
	return ((  Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  (*) (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 *, const RuntimeMethod*))Enumerator_get_Current_m9E110BB9F9D8A295C4F6A149F5D9CB88D4510CA5_gshared_inline)(__this, method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_m20A82566C3C575B972323926B2ABD7073EED005B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawLine_mEB70541C8BCA042768DC7A2AE37FC5D238547115 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m57B6FBE5D29E0EA56C7537456F8E30F182134B39 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::TRS(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_TRS_m5ABDD540D55BC20D1FD3804DDF005A867FC3D220 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Graphics::DrawMesh(UnityEngine.Mesh,UnityEngine.Matrix4x4,UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphics_DrawMesh_m8FBAA4C6BABB85303A6E565E59C04940AC140C48 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___matrix1, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material2, int32_t ___layer3, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<ARKitStream.HumanBodyPreview/Joint>::MoveNext()
inline bool Enumerator_MoveNext_m1CBFC8E721A51169C93C7998DBD7B3B4F3FAF1B6 (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 *, const RuntimeMethod*))Enumerator_MoveNext_m1CBFC8E721A51169C93C7998DBD7B3B4F3FAF1B6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ARKitStream.HumanBodyPreview/Joint>::Dispose()
inline void Enumerator_Dispose_m7FD2A15378BA2D35BC651654FCD60890FB0A6022 (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 *, const RuntimeMethod*))Enumerator_Dispose_m7FD2A15378BA2D35BC651654FCD60890FB0A6022_gshared)(__this, method);
}
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody> UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs::get_updated()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ARHumanBodiesChangedEventArgs_get_updated_mC866F2A6E79A64291950D3DC79A4FEB320A0064B_inline (ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARHumanBody>::GetEnumerator()
inline Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82 (List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  (*) (List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>::get_Current()
inline ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_inline (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 * __this, const RuntimeMethod* method)
{
	return ((  ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * (*) (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void ARKitStream.HumanBodyPreview::AddHumanBody(UnityEngine.XR.ARFoundation.ARHumanBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyPreview_AddHumanBody_m8951BF1E8728851376D3F3A3B4833F028942DFBA (HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3 * __this, ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * ___humanBody0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>::MoveNext()
inline bool Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907 (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.ARFoundation.ARHumanBody>::Dispose()
inline void Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint> UnityEngine.XR.ARFoundation.ARHumanBody::get_joints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  ARHumanBody_get_joints_m3258FB1C8BB0B82F3F2E92DE025201E931A8C443_inline (ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1/Enumerator<!0> Unity.Collections.NativeArray`1<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::GetEnumerator()
inline Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A  NativeArray_1_GetEnumerator_mD331FA4263BAD04C90434769548F51C77F51E60A (NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A  (*) (NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C *, const RuntimeMethod*))NativeArray_1_GetEnumerator_mD331FA4263BAD04C90434769548F51C77F51E60A_gshared)(__this, method);
}
// !0 Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::get_Current()
inline XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  Enumerator_get_Current_mBAE175A3926A60FC45CAF8A60954B792F97C04C7 (Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A * __this, const RuntimeMethod* method)
{
	return ((  XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  (*) (Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A *, const RuntimeMethod*))Enumerator_get_Current_mBAE175A3926A60FC45CAF8A60954B792F97C04C7_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::get_tracked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRHumanBodyJoint_get_tracked_mFE794D3F10CC9FE8B3BBA7EA3DAA2EAD43265030 (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::get_parentIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHumanBodyJoint_get_parentIndex_m17839B752753E95DC01E686410E7D8DC9F68B1D4_inline (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * __this, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.XR.ARSubsystems.XRHumanBodyJoint::get_anchorPose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRHumanBodyJoint_get_anchorPose_m072806A40FAD289A09B3F76FF4695D545540897A_inline (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void ARKitStream.HumanBodyPreview/Joint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint__ctor_mCAD4BEA998511BFEA5CE8F4B16E6C805AFAE743B (Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<ARKitStream.HumanBodyPreview/Joint>::Add(!0)
inline void List_1_Add_mB85AA8C9F85DD1EC929ADDD6574E6C5F66953619 (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * __this, Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B *, Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99 , const RuntimeMethod*))List_1_Add_mB85AA8C9F85DD1EC929ADDD6574E6C5F66953619_gshared)(__this, ___item0, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::MoveNext()
inline bool Enumerator_MoveNext_mFAFA2D30BBC8AFC6D531ED62F6561D8036294496 (Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A *, const RuntimeMethod*))Enumerator_MoveNext_mFAFA2D30BBC8AFC6D531ED62F6561D8036294496_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<UnityEngine.XR.ARSubsystems.XRHumanBodyJoint>::Dispose()
inline void Enumerator_Dispose_mE59337ED8052437CCC8294DD295B6BB95886A813 (Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A *, const RuntimeMethod*))Enumerator_Dispose_mE59337ED8052437CCC8294DD295B6BB95886A813_gshared)(__this, method);
}
// UnityEngine.Texture2D UnityEngine.XR.ARFoundation.AROcclusionManager::get_humanStencilTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * AROcclusionManager_get_humanStencilTexture_m808C75F8FA95C4385C112A2478DDD65951956E71 (AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.XR.ARFoundation.AROcclusionManager::get_humanDepthTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * AROcclusionManager_get_humanDepthTexture_mE0457C7A9C8DE2A36CE82E9BFFFA68AF24088EA5 (AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070 (const RuntimeMethod* method);
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
// System.Void ARKitStream.BlendShapeInfo::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendShapeInfo_OnEnable_m85F3E2B1D7D5807D675E475696527CE6A28C9333 (BlendShapeInfo_t95745EFAE066221C34967DE45B25581799D2C6DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlendShapeInfo_OnFaceChanged_m2A9683918AD43B3BE7CA317D0727EA4F2A9A0F4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sb = new StringBuilder();
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_sb_6(L_0);
		// faceManager.facesChanged += OnFaceChanged;
		ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * L_1 = __this->get_faceManager_4();
		Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * L_2 = (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 *)il2cpp_codegen_object_new(Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184(L_2, __this, (intptr_t)((intptr_t)BlendShapeInfo_OnFaceChanged_m2A9683918AD43B3BE7CA317D0727EA4F2A9A0F4E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		NullCheck(L_1);
		ARFaceManager_add_facesChanged_mC0F1ECFEC0FD0955005367336E675FFA890CAC80(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.BlendShapeInfo::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendShapeInfo_OnDisable_m3AFEEE1551A28118E9FCAB4C9645F43F39A6C01C (BlendShapeInfo_t95745EFAE066221C34967DE45B25581799D2C6DC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BlendShapeInfo_OnFaceChanged_m2A9683918AD43B3BE7CA317D0727EA4F2A9A0F4E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sb.Clear();
		StringBuilder_t * L_0 = __this->get_sb_6();
		NullCheck(L_0);
		StringBuilder_t * L_1;
		L_1 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_0, /*hidden argument*/NULL);
		// faceManager.facesChanged -= OnFaceChanged;
		ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * L_2 = __this->get_faceManager_4();
		Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * L_3 = (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 *)il2cpp_codegen_object_new(Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184(L_3, __this, (intptr_t)((intptr_t)BlendShapeInfo_OnFaceChanged_m2A9683918AD43B3BE7CA317D0727EA4F2A9A0F4E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		NullCheck(L_2);
		ARFaceManager_remove_facesChanged_mB2902EA16C0B264EC7F86D2436F5648824DD23E1(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.BlendShapeInfo::OnFaceChanged(UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendShapeInfo_OnFaceChanged_m2A9683918AD43B3BE7CA317D0727EA4F2A9A0F4E (BlendShapeInfo_t95745EFAE066221C34967DE45B25581799D2C6DC * __this, ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12  ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitBlendShapeLocation_t53A407013F6013772CFC72145DCA1C633997F560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD96F25375EDD8F00FDE464F9B7E3404D060F2A0A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCCA895293C72F4145905D74A942D89E77B80E63);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		// if (args.updated.Count == 0)
		List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * L_0;
		L_0 = ARFacesChangedEventArgs_get_updated_m9AFD1F7B0958F6754D86B18A1840B26863A2047A_inline((ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 *)(&___args0), /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_inline(L_0, /*hidden argument*/List_1_get_Count_m4AA172711F066BD5E2ED05BBB39FB5D4AC16C45A_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// var face = args.updated[0];
		List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * L_2;
		L_2 = ARFacesChangedEventArgs_get_updated_m9AFD1F7B0958F6754D86B18A1840B26863A2047A_inline((ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 *)(&___args0), /*hidden argument*/NULL);
		NullCheck(L_2);
		ARFace_t7EC7B3979551DCD92E4C51D35BD9664F44CE86E1 * L_3;
		L_3 = List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_inline(L_2, 0, /*hidden argument*/List_1_get_Item_m72E8B0027D5D6FA0B8DA9D0927216D7BFEA7A871_RuntimeMethod_var);
		// var coeffients = GetCoefficients(face.trackableId, faceManager.subsystem);
		NullCheck(L_3);
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_4;
		L_4 = ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B(L_3, /*hidden argument*/ARTrackable_2_get_trackableId_m91A28A9D2EAD610E602DFCBC83DAFD34E0FEB10B_RuntimeMethod_var);
		ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * L_5 = __this->get_faceManager_4();
		NullCheck(L_5);
		XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * L_6;
		L_6 = SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_inline(L_5, /*hidden argument*/SubsystemLifecycleManager_3_get_subsystem_m4391B33B0DF93408538702190F99FFBA89343CC6_RuntimeMethod_var);
		NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  L_7;
		L_7 = BlendShapeInfo_GetCoefficients_mB3A3F6055DFBDAB93E624735065BFA99071A70D9(L_4, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// sb.Clear();
		StringBuilder_t * L_8 = __this->get_sb_6();
		NullCheck(L_8);
		StringBuilder_t * L_9;
		L_9 = StringBuilder_Clear_m3D1F9F2F9EBA938807B7667DC2021D882B9B8FA1(L_8, /*hidden argument*/NULL);
		// sb.AppendLine("Coefficients");
		StringBuilder_t * L_10 = __this->get_sb_6();
		NullCheck(L_10);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_AppendLine_m4FBF9761747825683B04B18842DF906473EEF7C8(L_10, _stringLiteralD96F25375EDD8F00FDE464F9B7E3404D060F2A0A, /*hidden argument*/NULL);
		// for (int i = 0; i < coeffients.Length; i++)
		V_1 = 0;
		goto IL_00b1;
	}

IL_0053:
	{
		// var c = coeffients[i];
		int32_t L_12 = V_1;
		ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F  L_13;
		L_13 = IL2CPP_NATIVEARRAY_GET_ITEM(ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F , ((NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 *)(&V_0))->___m_Buffer_0, L_12);
		V_2 = L_13;
		// sb.Append(c.blendShapeLocation.ToString());
		StringBuilder_t * L_14 = __this->get_sb_6();
		int32_t L_15;
		L_15 = ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
		V_3 = L_15;
		RuntimeObject * L_16 = Box(ARKitBlendShapeLocation_t53A407013F6013772CFC72145DCA1C633997F560_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		V_3 = *(int32_t*)UnBox(L_16);
		NullCheck(L_14);
		StringBuilder_t * L_18;
		L_18 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, L_17, /*hidden argument*/NULL);
		// sb.Append(" :\t");
		StringBuilder_t * L_19 = __this->get_sb_6();
		NullCheck(L_19);
		StringBuilder_t * L_20;
		L_20 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_19, _stringLiteralFCCA895293C72F4145905D74A942D89E77B80E63, /*hidden argument*/NULL);
		// sb.Append(c.coefficient);
		StringBuilder_t * L_21 = __this->get_sb_6();
		float L_22;
		L_22 = ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline((ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F *)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_21);
		StringBuilder_t * L_23;
		L_23 = StringBuilder_Append_m5D3A8746416033F84CC51CFA86BC7A497D6E8A31(L_21, L_22, /*hidden argument*/NULL);
		// sb.AppendLine();
		StringBuilder_t * L_24 = __this->get_sb_6();
		NullCheck(L_24);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_AppendLine_mB5790BC98389118626505708AE683AE9257B91B2(L_24, /*hidden argument*/NULL);
		// for (int i = 0; i < coeffients.Length; i++)
		int32_t L_26 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_00b1:
	{
		// for (int i = 0; i < coeffients.Length; i++)
		int32_t L_27 = V_1;
		int32_t L_28;
		L_28 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 *)(&V_0))->___m_Length_1);
		if ((((int32_t)L_27) < ((int32_t)L_28)))
		{
			goto IL_0053;
		}
	}
	{
		// label.text = sb.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = __this->get_label_5();
		StringBuilder_t * L_30 = __this->get_sb_6();
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_30);
		NullCheck(L_29);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, L_31);
		// }
		return;
	}
}
// Unity.Collections.NativeArray`1<UnityEngine.XR.ARKit.ARKitBlendShapeCoefficient> ARKitStream.BlendShapeInfo::GetCoefficients(UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARSubsystems.XRFaceSubsystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  BlendShapeInfo_GetCoefficients_mB3A3F6055DFBDAB93E624735065BFA99071A70D9 (TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  ___id0, XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * ___subsystem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (subsystem is ARKitFaceSubsystem)
		XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * L_0 = ___subsystem1;
		if (!((ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 *)IsInstClass((RuntimeObject*)L_0, ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		// return ((ARKitFaceSubsystem)subsystem).GetBlendShapeCoefficients(id, Allocator.Temp);
		XRFaceSubsystem_tBC42015E8BB4ED0A5428E01DBB7BE769A6B140FD * L_1 = ___subsystem1;
		TrackableId_t17A59B04292038BB1B77BEACD41221D2700BE90B  L_2 = ___id0;
		NullCheck(((ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 *)CastclassClass((RuntimeObject*)L_1, ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1_il2cpp_TypeInfo_var)));
		NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  L_3;
		L_3 = ARKitFaceSubsystem_GetBlendShapeCoefficients_mE983A3A34A04F8C6340EF79A06138BEA025F9721(((ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1 *)CastclassClass((RuntimeObject*)L_1, ARKitFaceSubsystem_t369BE5809CFFB915E7D7C380EA989BD9E2B7FEB1_il2cpp_TypeInfo_var)), L_2, 2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0016:
	{
		// return default(NativeArray<ARKitBlendShapeCoefficient>);
		il2cpp_codegen_initobj((&V_0), sizeof(NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419 ));
		NativeArray_1_t789EF72B9F35EFEE803ED394D2CAEA69F554E419  L_4 = V_0;
		return L_4;
	}
}
// System.Void ARKitStream.BlendShapeInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlendShapeInfo__ctor_m9CDDF21CA9BDC23321F5C550B7BF6E41818C5A36 (BlendShapeInfo_t95745EFAE066221C34967DE45B25581799D2C6DC * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARKitStream.FacePreview::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacePreview_OnEnable_m1256A50D3D56B8F76B4BE2D87AB39F0FA8AAE0F5 (FacePreview_t61910D140DE3FF78680B93779A94A136BDC30DBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacePreview_OnFaceChanged_m063D9F61448F35996958879A38ECA477EC8D2A4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// faceManager.facesChanged += OnFaceChanged;
		ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * L_0 = __this->get_faceManager_4();
		Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * L_1 = (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 *)il2cpp_codegen_object_new(Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184(L_1, __this, (intptr_t)((intptr_t)FacePreview_OnFaceChanged_m063D9F61448F35996958879A38ECA477EC8D2A4F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		NullCheck(L_0);
		ARFaceManager_add_facesChanged_mC0F1ECFEC0FD0955005367336E675FFA890CAC80(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.FacePreview::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacePreview_OnDisable_m8FEC86974EAAF561F154F49340A63BD92DEC46A4 (FacePreview_t61910D140DE3FF78680B93779A94A136BDC30DBD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FacePreview_OnFaceChanged_m063D9F61448F35996958879A38ECA477EC8D2A4F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// faceManager.facesChanged -= OnFaceChanged;
		ARFaceManager_t587CD3EE57FE343549CEF05B14CA6258A9E11647 * L_0 = __this->get_faceManager_4();
		Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 * L_1 = (Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358 *)il2cpp_codegen_object_new(Action_1_t751B1FAC322BE3B28E8F31CAF84A77CDD1A42358_il2cpp_TypeInfo_var);
		Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184(L_1, __this, (intptr_t)((intptr_t)FacePreview_OnFaceChanged_m063D9F61448F35996958879A38ECA477EC8D2A4F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2648571D370830A0174CFB56D9EF92202BBDB184_RuntimeMethod_var);
		NullCheck(L_0);
		ARFaceManager_remove_facesChanged_mB2902EA16C0B264EC7F86D2436F5648824DD23E1(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.FacePreview::OnFaceChanged(UnityEngine.XR.ARFoundation.ARFacesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacePreview_OnFaceChanged_m063D9F61448F35996958879A38ECA477EC8D2A4F (FacePreview_t61910D140DE3FF78680B93779A94A136BDC30DBD * __this, ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12  ___args0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ARKitStream.FacePreview::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FacePreview__ctor_mFF7D5ACB583C7562E4F6A3989C099B9F2CCAB463 (FacePreview_t61910D140DE3FF78680B93779A94A136BDC30DBD * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARKitStream.GoToSceneButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoToSceneButton_OnEnable_mE43E04BF5DF5E97DBA41184A15449AD668434246 (GoToSceneButton_tCBB552C68A7E72DF554B1499E70F440C65258189 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoToSceneButton_OnButtonClick_m79A3443BA58C5BBA55CC806DC3397D05B806213C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var button = GetComponent<Button>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0;
		L_0 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		// button.onClick.AddListener(OnButtonClick);
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)GoToSceneButton_OnButtonClick_m79A3443BA58C5BBA55CC806DC3397D05B806213C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.GoToSceneButton::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoToSceneButton_OnDisable_mA483E0ADB7FA2EAD977F66D1711E21AC5394CEFD (GoToSceneButton_tCBB552C68A7E72DF554B1499E70F440C65258189 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GoToSceneButton_OnButtonClick_m79A3443BA58C5BBA55CC806DC3397D05B806213C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var button = GetComponent<Button>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0;
		L_0 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		// button.onClick.RemoveListener(OnButtonClick);
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)GoToSceneButton_OnButtonClick_m79A3443BA58C5BBA55CC806DC3397D05B806213C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.GoToSceneButton::OnButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoToSceneButton_OnButtonClick_m79A3443BA58C5BBA55CC806DC3397D05B806213C (GoToSceneButton_tCBB552C68A7E72DF554B1499E70F440C65258189 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName, mode);
		String_t* L_0 = __this->get_sceneName_4();
		int32_t L_1 = __this->get_mode_5();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m42B17BE94C5CB3B501907BA7D3460031DB4AA60A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.GoToSceneButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GoToSceneButton__ctor_m8D249CE034E78AAC9DDB335CE68EE6CCA8192145 (GoToSceneButton_tCBB552C68A7E72DF554B1499E70F440C65258189 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string sceneName = "";
		__this->set_sceneName_4(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARKitStream.HumanBodyPreview::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyPreview_Start_mF39A6FA0226EDD68DC2481DB637AE05CE98FCF36 (HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ARKitStream.HumanBodyPreview::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyPreview_OnEnable_m3215D659884FBC46BAC9DA5F29CE0B064AEE0CF0 (HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBodyPreview_OnHumanBodiesChanged_m298B28B2091FC047E938968DF6619F61C5974466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joints = new List<Joint>();
		List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * L_0 = (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B *)il2cpp_codegen_object_new(List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B_il2cpp_TypeInfo_var);
		List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED(L_0, /*hidden argument*/List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED_RuntimeMethod_var);
		__this->set_joints_7(L_0);
		// humanBodyManager.humanBodiesChanged += OnHumanBodiesChanged;
		ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * L_1 = __this->get_humanBodyManager_4();
		Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * L_2 = (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 *)il2cpp_codegen_object_new(Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var);
		Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5(L_2, __this, (intptr_t)((intptr_t)HumanBodyPreview_OnHumanBodiesChanged_m298B28B2091FC047E938968DF6619F61C5974466_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var);
		NullCheck(L_1);
		ARHumanBodyManager_add_humanBodiesChanged_m5E861DCF1B0CE714D0A76302F92A8FF864D6A39B(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.HumanBodyPreview::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyPreview_OnDisable_m1088B6AFD4B55E1865AA177EB0FA624FCE75DC1A (HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanBodyPreview_OnHumanBodiesChanged_m298B28B2091FC047E938968DF6619F61C5974466_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// joints.Clear();
		List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * L_0 = __this->get_joints_7();
		NullCheck(L_0);
		List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06(L_0, /*hidden argument*/List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06_RuntimeMethod_var);
		// humanBodyManager.humanBodiesChanged -= OnHumanBodiesChanged;
		ARHumanBodyManager_t901B9F11785ED05D74F4FAC50D14259488D800B4 * L_1 = __this->get_humanBodyManager_4();
		Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 * L_2 = (Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301 *)il2cpp_codegen_object_new(Action_1_t6F3641BB0F5489AC32B6649DD5BA9D07DD0C5301_il2cpp_TypeInfo_var);
		Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5(L_2, __this, (intptr_t)((intptr_t)HumanBodyPreview_OnHumanBodiesChanged_m298B28B2091FC047E938968DF6619F61C5974466_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m29DED49AF95994B55DBD78F6E52AA52DC12E05D5_RuntimeMethod_var);
		NullCheck(L_1);
		ARHumanBodyManager_remove_humanBodiesChanged_mB1CFD6EAB3111E5FF3351CE7B9B934D70F7979A9(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.HumanBodyPreview::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyPreview_Update_mF58AF8A47AC00E70867234814B77EE925A22EBBD (HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7FD2A15378BA2D35BC651654FCD60890FB0A6022_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1CBFC8E721A51169C93C7998DBD7B3B4F3FAF1B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9E110BB9F9D8A295C4F6A149F5D9CB88D4510CA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD9A6E72FD24C42837DFA7DC72F081BE7427ADDA5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var joint in joints)
		List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * L_0 = __this->get_joints_7();
		NullCheck(L_0);
		Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0  L_1;
		L_1 = List_1_GetEnumerator_mD9A6E72FD24C42837DFA7DC72F081BE7427ADDA5(L_0, /*hidden argument*/List_1_GetEnumerator_mD9A6E72FD24C42837DFA7DC72F081BE7427ADDA5_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009d;
		}

IL_0011:
		{
			// foreach (var joint in joints)
			Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_2;
			L_2 = Enumerator_get_Current_m9E110BB9F9D8A295C4F6A149F5D9CB88D4510CA5_inline((Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m9E110BB9F9D8A295C4F6A149F5D9CB88D4510CA5_RuntimeMethod_var);
			V_1 = L_2;
			// float length = Vector3.Distance(joint.start, joint.end);
			Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_3 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = L_3.get_start_0();
			Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_5 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = L_5.get_end_1();
			float L_7;
			L_7 = Vector3_Distance_m20A82566C3C575B972323926B2ABD7073EED005B(L_4, L_6, /*hidden argument*/NULL);
			V_2 = L_7;
			// if (length < float.Epsilon)
			float L_8 = V_2;
			if ((((float)L_8) < ((float)(1.40129846E-45f))))
			{
				goto IL_009d;
			}
		}

IL_0033:
		{
			// Debug.DrawLine(joint.start, joint.end, Color.green);
			Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_9 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9.get_start_0();
			Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_11 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = L_11.get_end_1();
			Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
			L_13 = Color_get_green_m787119A4B2078DAB30985625CA7B3B0FF6099FF5(/*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_DrawLine_mEB70541C8BCA042768DC7A2AE37FC5D238547115(L_10, L_12, L_13, /*hidden argument*/NULL);
			// var m = Matrix4x4.TRS(joint.start,
			//                       Quaternion.LookRotation(joint.end - joint.start, Vector3.up),
			//                       new Vector3(1, 1, length));
			Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_14 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = L_14.get_start_0();
			Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_16 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = L_16.get_end_1();
			Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_18 = V_1;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = L_18.get_start_0();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
			L_20 = Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline(L_17, L_19, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
			L_21 = Vector3_get_up_mD84FDFCD32FC48C865A89FD4251232E2A9D7015A(/*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_22;
			L_22 = Quaternion_LookRotation_m57B6FBE5D29E0EA56C7537456F8E30F182134B39(L_20, L_21, /*hidden argument*/NULL);
			float L_23 = V_2;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
			memset((&L_24), 0, sizeof(L_24));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_24), (1.0f), (1.0f), L_23, /*hidden argument*/NULL);
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_25;
			L_25 = Matrix4x4_TRS_m5ABDD540D55BC20D1FD3804DDF005A867FC3D220(L_15, L_22, L_24, /*hidden argument*/NULL);
			V_3 = L_25;
			// Graphics.DrawMesh(skeletonMesh, m, material, gameObject.layer);
			Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_26 = __this->get_skeletonMesh_5();
			Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_27 = V_3;
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = __this->get_material_6();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
			L_29 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
			NullCheck(L_29);
			int32_t L_30;
			L_30 = GameObject_get_layer_m9D4C23A2FD105AF9964445BF18A77E8A49012F9F(L_29, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Graphics_t97FAEBE964F3F622D4865E7EC62717FE94D1F56D_il2cpp_TypeInfo_var);
			Graphics_DrawMesh_m8FBAA4C6BABB85303A6E565E59C04940AC140C48(L_26, L_27, L_28, L_30, /*hidden argument*/NULL);
		}

IL_009d:
		{
			// foreach (var joint in joints)
			bool L_31;
			L_31 = Enumerator_MoveNext_m1CBFC8E721A51169C93C7998DBD7B3B4F3FAF1B6((Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m1CBFC8E721A51169C93C7998DBD7B3B4F3FAF1B6_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_0011;
			}
		}

IL_00a9:
		{
			IL2CPP_LEAVE(0xB9, FINALLY_00ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ab;
	}

FINALLY_00ab:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m7FD2A15378BA2D35BC651654FCD60890FB0A6022((Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m7FD2A15378BA2D35BC651654FCD60890FB0A6022_RuntimeMethod_var);
		IL2CPP_END_FINALLY(171)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Void ARKitStream.HumanBodyPreview::OnHumanBodiesChanged(UnityEngine.XR.ARFoundation.ARHumanBodiesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyPreview_OnHumanBodiesChanged_m298B28B2091FC047E938968DF6619F61C5974466 (HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3 * __this, ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729  ___eventArgs0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// this.joints.Clear();
		List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * L_0 = __this->get_joints_7();
		NullCheck(L_0);
		List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06(L_0, /*hidden argument*/List_1_Clear_m7BD274495533CAE07BBFB7F79199E48C5189AE06_RuntimeMethod_var);
		// foreach (var humanBody in eventArgs.updated)
		List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * L_1;
		L_1 = ARHumanBodiesChangedEventArgs_get_updated_mC866F2A6E79A64291950D3DC79A4FEB320A0064B_inline((ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 *)(&___eventArgs0), /*hidden argument*/NULL);
		NullCheck(L_1);
		Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29  L_2;
		L_2 = List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82(L_1, /*hidden argument*/List_1_GetEnumerator_m54655BA773DBD1A5BFAF33F22390461DD5222E82_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_001a:
		{
			// foreach (var humanBody in eventArgs.updated)
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_3;
			L_3 = Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_inline((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m097CEA7A6AB1D5800994E7E6A7D71599C8F1E694_RuntimeMethod_var);
			V_1 = L_3;
			// AddHumanBody(humanBody);
			ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_4 = V_1;
			HumanBodyPreview_AddHumanBody_m8951BF1E8728851376D3F3A3B4833F028942DFBA(__this, L_4, /*hidden argument*/NULL);
		}

IL_0029:
		{
			// foreach (var humanBody in eventArgs.updated)
			bool L_5;
			L_5 = Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mB37A4977FC667CD454E27CB5C54AD408BDCFC907_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_001a;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x42, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C((Enumerator_tD4EC69EA64503815479081028D89ABDC9B688E29 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mBB619088F9B19CF7EF4B85EC1F094C24ADA5FC6C_RuntimeMethod_var);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void ARKitStream.HumanBodyPreview::AddHumanBody(UnityEngine.XR.ARFoundation.ARHumanBody)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyPreview_AddHumanBody_m8951BF1E8728851376D3F3A3B4833F028942DFBA (HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3 * __this, ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * ___humanBody0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE59337ED8052437CCC8294DD295B6BB95886A813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFAFA2D30BBC8AFC6D531ED62F6561D8036294496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBAE175A3926A60FC45CAF8A60954B792F97C04C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB85AA8C9F85DD1EC929ADDD6574E6C5F66953619_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_GetEnumerator_mD331FA4263BAD04C90434769548F51C77F51E60A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Transform root = humanBody.transform;
		ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_0 = ___humanBody0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var joints = humanBody.joints;
		ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * L_2 = ___humanBody0;
		NullCheck(L_2);
		NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  L_3;
		L_3 = ARHumanBody_get_joints_m3258FB1C8BB0B82F3F2E92DE025201E931A8C443_inline(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// foreach (var joint in joints)
		Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A  L_4;
		L_4 = NativeArray_1_GetEnumerator_mD331FA4263BAD04C90434769548F51C77F51E60A((NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C *)(&V_1), /*hidden argument*/NativeArray_1_GetEnumerator_mD331FA4263BAD04C90434769548F51C77F51E60A_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007f;
		}

IL_0018:
		{
			// foreach (var joint in joints)
			XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  L_5;
			L_5 = Enumerator_get_Current_mBAE175A3926A60FC45CAF8A60954B792F97C04C7((Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A *)(&V_2), /*hidden argument*/Enumerator_get_Current_mBAE175A3926A60FC45CAF8A60954B792F97C04C7_RuntimeMethod_var);
			V_3 = L_5;
			// if (!joint.tracked || joint.parentIndex < 0)
			bool L_6;
			L_6 = XRHumanBodyJoint_get_tracked_mFE794D3F10CC9FE8B3BBA7EA3DAA2EAD43265030((XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)(&V_3), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_007f;
			}
		}

IL_0029:
		{
			int32_t L_7;
			L_7 = XRHumanBodyJoint_get_parentIndex_m17839B752753E95DC01E686410E7D8DC9F68B1D4_inline((XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)(&V_3), /*hidden argument*/NULL);
			if ((((int32_t)L_7) < ((int32_t)0)))
			{
				goto IL_007f;
			}
		}

IL_0033:
		{
			// Vector3 start = root.TransformPoint(joint.anchorPose.position);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = V_0;
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_9;
			L_9 = XRHumanBodyJoint_get_anchorPose_m072806A40FAD289A09B3F76FF4695D545540897A_inline((XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)(&V_3), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = L_9.get_position_0();
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
			L_11 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_8, L_10, /*hidden argument*/NULL);
			V_4 = L_11;
			// Vector3 end = root.TransformPoint(joints[joint.parentIndex].anchorPose.position);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = V_0;
			int32_t L_13;
			L_13 = XRHumanBodyJoint_get_parentIndex_m17839B752753E95DC01E686410E7D8DC9F68B1D4_inline((XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)(&V_3), /*hidden argument*/NULL);
			XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4  L_14;
			L_14 = IL2CPP_NATIVEARRAY_GET_ITEM(XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 , ((NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C *)(&V_1))->___m_Buffer_0, L_13);
			V_6 = L_14;
			Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_15;
			L_15 = XRHumanBodyJoint_get_anchorPose_m072806A40FAD289A09B3F76FF4695D545540897A_inline((XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 *)(&V_6), /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15.get_position_0();
			NullCheck(L_12);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
			L_17 = Transform_TransformPoint_m68AF95765A9279192E601208A9C5170027A5F0D2(L_12, L_16, /*hidden argument*/NULL);
			V_5 = L_17;
			// this.joints.Add(new Joint(start, end));
			List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * L_18 = __this->get_joints_7();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = V_4;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_5;
			Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_21;
			memset((&L_21), 0, sizeof(L_21));
			Joint__ctor_mCAD4BEA998511BFEA5CE8F4B16E6C805AFAE743B((&L_21), L_19, L_20, /*hidden argument*/NULL);
			NullCheck(L_18);
			List_1_Add_mB85AA8C9F85DD1EC929ADDD6574E6C5F66953619(L_18, L_21, /*hidden argument*/List_1_Add_mB85AA8C9F85DD1EC929ADDD6574E6C5F66953619_RuntimeMethod_var);
		}

IL_007f:
		{
			// foreach (var joint in joints)
			bool L_22;
			L_22 = Enumerator_MoveNext_mFAFA2D30BBC8AFC6D531ED62F6561D8036294496((Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mFAFA2D30BBC8AFC6D531ED62F6561D8036294496_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_0018;
			}
		}

IL_0088:
		{
			IL2CPP_LEAVE(0x98, FINALLY_008a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008a;
	}

FINALLY_008a:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mE59337ED8052437CCC8294DD295B6BB95886A813((Enumerator_t15F975F27F76CA3548123F9EDDFD6E1799DA3A0A *)(&V_2), /*hidden argument*/Enumerator_Dispose_mE59337ED8052437CCC8294DD295B6BB95886A813_RuntimeMethod_var);
		IL2CPP_END_FINALLY(138)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(138)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x98, IL_0098)
	}

IL_0098:
	{
		// }
		return;
	}
}
// System.Void ARKitStream.HumanBodyPreview::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanBodyPreview__ctor_mECFB8888327F8D12FF49FE89B828C4EFE3757990 (HumanBodyPreview_t27636150C6A85C11E9A5E51BF70A82222412F7F3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// List<Joint> joints = new List<Joint>();
		List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B * L_0 = (List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B *)il2cpp_codegen_object_new(List_1_t370E79C17451BE4F2BAB930A917C7BD77FD48A1B_il2cpp_TypeInfo_var);
		List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED(L_0, /*hidden argument*/List_1__ctor_m921DED2E47A483C98F8A5995B5370CC612A95AED_RuntimeMethod_var);
		__this->set_joints_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARKitStream.SimplePreview::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimplePreview_Update_m4FBA69E45AF056E2D2101459848CBE3FD5D5062F (SimplePreview_t5D2B3DC10162B698CA436CC399EF0EA25E8D5B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3ECA061191B05D1E759C47E37134E38BFF41FB65);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40DD163FB4F220B68EE8DE672CBCAF78A2333C85);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_1 = NULL;
	{
		// var stencil = occlusionManager.humanStencilTexture;
		AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * L_0 = __this->get_occlusionManager_5();
		NullCheck(L_0);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = AROcclusionManager_get_humanStencilTexture_m808C75F8FA95C4385C112A2478DDD65951956E71(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var depth = occlusionManager.humanDepthTexture;
		AROcclusionManager_t0DA10EFF8FB8272628E35BE67EE46088901C3F48 * L_2 = __this->get_occlusionManager_5();
		NullCheck(L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3;
		L_3 = AROcclusionManager_get_humanDepthTexture_mE0457C7A9C8DE2A36CE82E9BFFFA68AF24088EA5(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// Debug.Log(depth.GetType());
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_4 = V_1;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mF2A2ACB1738BA264EF07744AAF260BC5DDD2A11A(L_5, /*hidden argument*/NULL);
		// material.SetTexture("_textureStencil", stencil);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = __this->get_material_6();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = V_0;
		NullCheck(L_6);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_6, _stringLiteral3ECA061191B05D1E759C47E37134E38BFF41FB65, L_7, /*hidden argument*/NULL);
		// material.SetTexture("_textureDepth", depth);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8 = __this->get_material_6();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_9 = V_1;
		NullCheck(L_8);
		Material_SetTexture_m04A1CD55201841F85E475992931A210229C782CF(L_8, _stringLiteral40DD163FB4F220B68EE8DE672CBCAF78A2333C85, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ARKitStream.SimplePreview::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimplePreview__ctor_mFD084BBF8BB28F5D54DE3FBD047D138182C51B83 (SimplePreview_t5D2B3DC10162B698CA436CC399EF0EA25E8D5B89 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ARKitStream.HumanBodyPreview/Joint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joint__ctor_mCAD4BEA998511BFEA5CE8F4B16E6C805AFAE743B (Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, const RuntimeMethod* method)
{
	{
		// this.start = start;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___start0;
		__this->set_start_0(L_0);
		// this.end = end;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___end1;
		__this->set_end_1(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Joint__ctor_mCAD4BEA998511BFEA5CE8F4B16E6C805AFAE743B_AdjustorThunk (RuntimeObject * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___end1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99 * _thisAdjusted = reinterpret_cast<Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99 *>(__this + _offset);
	Joint__ctor_mCAD4BEA998511BFEA5CE8F4B16E6C805AFAE743B(_thisAdjusted, ___start0, ___end1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * ARFacesChangedEventArgs_get_updated_m9AFD1F7B0958F6754D86B18A1840B26863A2047A_inline (ARFacesChangedEventArgs_t89074BF90E245926F958D87247377FC764637A12 * __this, const RuntimeMethod* method)
{
	{
		// public List<ARFace> updated { get; private set; }
		List_1_t7981E5CB7CEFE6DC59F88165EEE60A2FCA0B2E21 * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ARKitBlendShapeCoefficient_get_blendShapeLocation_m14A5487CA35FF18CD8EDA49BD9E70900B444B512_inline (ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F * __this, const RuntimeMethod* method)
{
	{
		// public ARKitBlendShapeLocation blendShapeLocation => m_BlendShapeLocation;
		int32_t L_0 = __this->get_m_BlendShapeLocation_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ARKitBlendShapeCoefficient_get_coefficient_m314BED878AE51026667924FF236DCF8E6FF8B759_inline (ARKitBlendShapeCoefficient_t6B17AD958119715154498F9EB6A29ECF98BA0E9F * __this, const RuntimeMethod* method)
{
	{
		// public float coefficient => m_Coefficient;
		float L_0 = __this->get_m_Coefficient_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_mF24598FCCA1D06E65CA6DAFF4F0F6E1667336722_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * ARHumanBodiesChangedEventArgs_get_updated_mC866F2A6E79A64291950D3DC79A4FEB320A0064B_inline (ARHumanBodiesChangedEventArgs_t03BC9E10B0F7EA109F54F589571A7FCE26B18729 * __this, const RuntimeMethod* method)
{
	{
		// public List<ARHumanBody> updated { get; private set; }
		List_1_t0CB5626D7B42C5C0BA5B62055343527A406CAA64 * L_0 = __this->get_U3CupdatedU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  ARHumanBody_get_joints_m3258FB1C8BB0B82F3F2E92DE025201E931A8C443_inline (ARHumanBody_tD50BBE7B486B76556A46BE9C799EE268D4ABB3B5 * __this, const RuntimeMethod* method)
{
	{
		// public NativeArray<XRHumanBodyJoint> joints => m_Joints;
		NativeArray_1_t733A71EE29E0C7D2F944E30A1729F085DEB1138C  L_0 = __this->get_m_Joints_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XRHumanBodyJoint_get_parentIndex_m17839B752753E95DC01E686410E7D8DC9F68B1D4_inline (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * __this, const RuntimeMethod* method)
{
	{
		// public int parentIndex => m_ParentIndex;
		int32_t L_0 = __this->get_m_ParentIndex_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  XRHumanBodyJoint_get_anchorPose_m072806A40FAD289A09B3F76FF4695D545540897A_inline (XRHumanBodyJoint_t80D5022A816E4F24C92A9EABD645794FC0B5E2E4 * __this, const RuntimeMethod* method)
{
	{
		// public Pose anchorPose => m_AnchorPose;
		Pose_t9F30358E65733E60A1DC8682FDB7104F40C9434A  L_0 = __this->get_m_AnchorPose_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBCBF2D9FD1B5F0D8D8595B15B7460889D60C8070(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * SubsystemLifecycleManager_3_get_subsystem_m50CDB488C754452B0104C6EC4DAC7D0A85A43F61_gshared_inline (SubsystemLifecycleManager_3_t2AD5C0CEF1579C328B065CC2710E931A5F71AEF1 * __this, const RuntimeMethod* method)
{
	{
		// public TSubsystem subsystem { get; private set; }
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_U3CsubsystemU3Ek__BackingField_4();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  Enumerator_get_Current_m9E110BB9F9D8A295C4F6A149F5D9CB88D4510CA5_gshared_inline (Enumerator_t71FDE001E6B7D7ECDA5FD1CF7B9EA5213ED5DAA0 * __this, const RuntimeMethod* method)
{
	{
		Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99  L_0 = (Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99 )__this->get_current_3();
		return (Joint_tBC082C013FD586EC76BDD9D46410843FE40CEA99 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
