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

// BoardManager
struct BoardManager_t1918054749;
// BoardManager/Count
struct Count_t2164209956;
// Enemy
struct Enemy_t1765729589;
// Enemy[]
struct EnemyU5BU5D_t2006687320;
// GameManager
struct GameManager_t1536523654;
// GameManager/<MoveEnemies>c__Iterator0
struct U3CMoveEnemiesU3Ec__Iterator0_t1756774843;
// Loader
struct Loader_t243995532;
// MovingObject
struct MovingObject_t1059405609;
// MovingObject/<SmoothMovement>c__Iterator0
struct U3CSmoothMovementU3Ec__Iterator0_t2533550195;
// Player
struct Player_t3266647312;
// Readme
struct Readme_t240784718;
// Readme/Section
struct Section_t3705589568;
// Readme/Section[]
struct SectionU5BU5D_t1447152577;
// SoundManager
struct SoundManager_t2102329059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<Enemy>
struct List_1_t3237804331;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct List_1_t857997111;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t1260619206;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t427135887;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// TutorialInfo
struct TutorialInfo_t3629245769;
// UnityEngine.Animator
struct Animator_t434523843;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// UnityEngine.AudioListener
struct AudioListener_t2734094699;
// UnityEngine.AudioListenerExtension
struct AudioListenerExtension_t3242956547;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Behaviour
struct Behaviour_t1437897464;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_t3581341831;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Collider2D
struct Collider2D_t2806799626;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t939494601;
// UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522;
// UnityEngine.Sprite
struct Sprite_t280657092;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t2532145056;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.Selectable
struct Selectable_t3250028441;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.UI.Toggle
struct Toggle_t2735377061;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1873685584;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t123837990;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// Wall
struct Wall_t2206666577;

extern RuntimeClass* AudioClipU5BU5D_t143221404_il2cpp_TypeInfo_var;
extern RuntimeClass* Count_t2164209956_il2cpp_TypeInfo_var;
extern RuntimeClass* GameManager_t1536523654_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3237804331_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t899420910_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Physics2D_t1528932956_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* SoundManager_t2102329059_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TutorialInfo_t3629245769_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CMoveEnemiesU3Ec__Iterator0_t1756774843_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CSmoothMovementU3Ec__Iterator0_t2533550195_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1108043616;
extern String_t* _stringLiteral1237693985;
extern String_t* _stringLiteral1828639942;
extern String_t* _stringLiteral2261822918;
extern String_t* _stringLiteral2376712629;
extern String_t* _stringLiteral2663840776;
extern String_t* _stringLiteral2683480893;
extern String_t* _stringLiteral2749844707;
extern String_t* _stringLiteral2881472559;
extern String_t* _stringLiteral2964773526;
extern String_t* _stringLiteral2984908384;
extern String_t* _stringLiteral3136113192;
extern String_t* _stringLiteral3452614531;
extern String_t* _stringLiteral3452614533;
extern String_t* _stringLiteral3564307913;
extern String_t* _stringLiteral3996524808;
extern String_t* _stringLiteral65781805;
extern String_t* _stringLiteral762081554;
extern String_t* _stringLiteral778109049;
extern String_t* _stringLiteral984116472;
extern const RuntimeMethod* Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoardManager_t1918054749_m2055188458_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1524640104_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m3099710085_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3097985365_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Clear_m3223488525_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m1985601461_RuntimeMethod_var;
extern const RuntimeMethod* List_1_RemoveAt_m2293281476_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1084649037_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1536473967_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1829428969_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m576380744_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m1011483163_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m200663048_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2343809838_RuntimeMethod_var;
extern const RuntimeMethod* MovingObject_AttemptMove_TisEnemy_t1765729589_m2025003302_RuntimeMethod_var;
extern const RuntimeMethod* MovingObject_AttemptMove_TisPlayer_t3266647312_m3614727677_RuntimeMethod_var;
extern const RuntimeMethod* MovingObject_AttemptMove_TisWall_t2206666577_m1949303063_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameManager_t1536523654_m3088355940_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const RuntimeMethod* U3CMoveEnemiesU3Ec__Iterator0_Reset_m3640555388_RuntimeMethod_var;
extern const RuntimeMethod* U3CSmoothMovementU3Ec__Iterator0_Reset_m1022227904_RuntimeMethod_var;
extern const uint32_t BoardManager_BoardSetup_m4142678938_MetadataUsageId;
extern const uint32_t BoardManager_InitialiseList_m2058516594_MetadataUsageId;
extern const uint32_t BoardManager_LayoutObject_m3905658523_MetadataUsageId;
extern const uint32_t BoardManager_RandomPosition_m3015571429_MetadataUsageId;
extern const uint32_t BoardManager_SetupScene_m3361451887_MetadataUsageId;
extern const uint32_t BoardManager__ctor_m264717062_MetadataUsageId;
extern const uint32_t Enemy_CheckIfDead_m2657785876_MetadataUsageId;
extern const uint32_t Enemy_MoveEnemy_m2528933447_MetadataUsageId;
extern const uint32_t Enemy_Start_m3612231678_MetadataUsageId;
extern const uint32_t GameManager_AddEnemyToList_m69037753_MetadataUsageId;
extern const uint32_t GameManager_Awake_m2466247815_MetadataUsageId;
extern const uint32_t GameManager_GameOver_m2317540222_MetadataUsageId;
extern const uint32_t GameManager_InitGame_m3135065078_MetadataUsageId;
extern const uint32_t GameManager_MoveEnemies_m2997376252_MetadataUsageId;
extern const uint32_t Loader_Awake_m115609444_MetadataUsageId;
extern const uint32_t MovingObject_Move_m344826299_MetadataUsageId;
extern const uint32_t MovingObject_SmoothMovement_m4091427040_MetadataUsageId;
extern const uint32_t MovingObject_Start_m1751232218_MetadataUsageId;
extern const uint32_t Player_CheckIfGameOver_m3408464579_MetadataUsageId;
extern const uint32_t Player_LoseFood_m445858792_MetadataUsageId;
extern const uint32_t Player_OnDisable_m1728043007_MetadataUsageId;
extern const uint32_t Player_OnTriggerEnter2D_m1893340054_MetadataUsageId;
extern const uint32_t Player_Start_m250748966_MetadataUsageId;
extern const uint32_t Player_Update_m2111558832_MetadataUsageId;
extern const uint32_t SoundManager_Awake_m2554457172_MetadataUsageId;
extern const uint32_t TutorialInfo_Awake_m435255452_MetadataUsageId;
extern const uint32_t TutorialInfo_ToggleShowAtLaunch_m3759128467_MetadataUsageId;
extern const uint32_t TutorialInfo__cctor_m579740354_MetadataUsageId;
extern const uint32_t U3CMoveEnemiesU3Ec__Iterator0_MoveNext_m4133326528_MetadataUsageId;
extern const uint32_t U3CMoveEnemiesU3Ec__Iterator0_Reset_m3640555388_MetadataUsageId;
extern const uint32_t U3CSmoothMovementU3Ec__Iterator0_MoveNext_m1888986924_MetadataUsageId;
extern const uint32_t U3CSmoothMovementU3Ec__Iterator0_Reset_m1022227904_MetadataUsageId;
extern const uint32_t Wall_DamageWall_m2651420924_MetadataUsageId;
extern const uint32_t Wall_Start_m1066291526_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct AudioClipU5BU5D_t143221404;
struct GameObjectU5BU5D_t3328599146;


#ifndef U3CMODULEU3E_T692745542_H
#define U3CMODULEU3E_T692745542_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745542 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745542_H
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
#ifndef COUNT_T2164209956_H
#define COUNT_T2164209956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardManager/Count
struct  Count_t2164209956  : public RuntimeObject
{
public:
	// System.Int32 BoardManager/Count::minimum
	int32_t ___minimum_0;
	// System.Int32 BoardManager/Count::maximum
	int32_t ___maximum_1;

public:
	inline static int32_t get_offset_of_minimum_0() { return static_cast<int32_t>(offsetof(Count_t2164209956, ___minimum_0)); }
	inline int32_t get_minimum_0() const { return ___minimum_0; }
	inline int32_t* get_address_of_minimum_0() { return &___minimum_0; }
	inline void set_minimum_0(int32_t value)
	{
		___minimum_0 = value;
	}

	inline static int32_t get_offset_of_maximum_1() { return static_cast<int32_t>(offsetof(Count_t2164209956, ___maximum_1)); }
	inline int32_t get_maximum_1() const { return ___maximum_1; }
	inline int32_t* get_address_of_maximum_1() { return &___maximum_1; }
	inline void set_maximum_1(int32_t value)
	{
		___maximum_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNT_T2164209956_H
#ifndef U3CMOVEENEMIESU3EC__ITERATOR0_T1756774843_H
#define U3CMOVEENEMIESU3EC__ITERATOR0_T1756774843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager/<MoveEnemies>c__Iterator0
struct  U3CMoveEnemiesU3Ec__Iterator0_t1756774843  : public RuntimeObject
{
public:
	// System.Int32 GameManager/<MoveEnemies>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// GameManager GameManager/<MoveEnemies>c__Iterator0::$this
	GameManager_t1536523654 * ___U24this_1;
	// System.Object GameManager/<MoveEnemies>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean GameManager/<MoveEnemies>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 GameManager/<MoveEnemies>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ec__Iterator0_t1756774843, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ec__Iterator0_t1756774843, ___U24this_1)); }
	inline GameManager_t1536523654 * get_U24this_1() const { return ___U24this_1; }
	inline GameManager_t1536523654 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GameManager_t1536523654 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ec__Iterator0_t1756774843, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ec__Iterator0_t1756774843, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CMoveEnemiesU3Ec__Iterator0_t1756774843, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMOVEENEMIESU3EC__ITERATOR0_T1756774843_H
#ifndef SECTION_T3705589568_H
#define SECTION_T3705589568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme/Section
struct  Section_t3705589568  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t3705589568, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((&___heading_0), value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t3705589568, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((&___text_1), value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t3705589568, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((&___linkText_2), value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t3705589568, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((&___url_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECTION_T3705589568_H
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
#ifndef LIST_1_T3237804331_H
#define LIST_1_T3237804331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Enemy>
struct  List_1_t3237804331  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t2006687320* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3237804331, ____items_1)); }
	inline EnemyU5BU5D_t2006687320* get__items_1() const { return ____items_1; }
	inline EnemyU5BU5D_t2006687320** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EnemyU5BU5D_t2006687320* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3237804331, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3237804331, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3237804331_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EnemyU5BU5D_t2006687320* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3237804331_StaticFields, ___EmptyArray_4)); }
	inline EnemyU5BU5D_t2006687320* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EnemyU5BU5D_t2006687320** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EnemyU5BU5D_t2006687320* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3237804331_H
#ifndef LIST_1_T857997111_H
#define LIST_1_T857997111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.AudioClip>
struct  List_1_t857997111  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AudioClipU5BU5D_t143221404* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t857997111, ____items_1)); }
	inline AudioClipU5BU5D_t143221404* get__items_1() const { return ____items_1; }
	inline AudioClipU5BU5D_t143221404** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AudioClipU5BU5D_t143221404* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t857997111, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t857997111, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t857997111_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	AudioClipU5BU5D_t143221404* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t857997111_StaticFields, ___EmptyArray_4)); }
	inline AudioClipU5BU5D_t143221404* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline AudioClipU5BU5D_t143221404** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(AudioClipU5BU5D_t143221404* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T857997111_H
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
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
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
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
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_2)); }
	inline uint32_t get_m_value_2() const { return ___m_value_2; }
	inline uint32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
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
#endif // COLOR_T2555686324_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SPRITESTATE_T1362986479_H
#define SPRITESTATE_T1362986479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1362986479 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t280657092 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t280657092 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_HighlightedSprite_0)); }
	inline Sprite_t280657092 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t280657092 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t280657092 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_HighlightedSprite_0), value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_PressedSprite_1)); }
	inline Sprite_t280657092 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t280657092 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t280657092 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PressedSprite_1), value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1362986479, ___m_DisabledSprite_2)); }
	inline Sprite_t280657092 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t280657092 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t280657092 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_DisabledSprite_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_pinvoke
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1362986479_marshaled_com
{
	Sprite_t280657092 * ___m_HighlightedSprite_0;
	Sprite_t280657092 * ___m_PressedSprite_1;
	Sprite_t280657092 * ___m_DisabledSprite_2;
};
#endif // SPRITESTATE_T1362986479_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef U3CSMOOTHMOVEMENTU3EC__ITERATOR0_T2533550195_H
#define U3CSMOOTHMOVEMENTU3EC__ITERATOR0_T2533550195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingObject/<SmoothMovement>c__Iterator0
struct  U3CSmoothMovementU3Ec__Iterator0_t2533550195  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 MovingObject/<SmoothMovement>c__Iterator0::end
	Vector3_t3722313464  ___end_0;
	// System.Single MovingObject/<SmoothMovement>c__Iterator0::<sqrRemainingDistance>__0
	float ___U3CsqrRemainingDistanceU3E__0_1;
	// UnityEngine.Vector3 MovingObject/<SmoothMovement>c__Iterator0::<newPosition>__1
	Vector3_t3722313464  ___U3CnewPositionU3E__1_2;
	// MovingObject MovingObject/<SmoothMovement>c__Iterator0::$this
	MovingObject_t1059405609 * ___U24this_3;
	// System.Object MovingObject/<SmoothMovement>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean MovingObject/<SmoothMovement>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 MovingObject/<SmoothMovement>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_end_0() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t2533550195, ___end_0)); }
	inline Vector3_t3722313464  get_end_0() const { return ___end_0; }
	inline Vector3_t3722313464 * get_address_of_end_0() { return &___end_0; }
	inline void set_end_0(Vector3_t3722313464  value)
	{
		___end_0 = value;
	}

	inline static int32_t get_offset_of_U3CsqrRemainingDistanceU3E__0_1() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t2533550195, ___U3CsqrRemainingDistanceU3E__0_1)); }
	inline float get_U3CsqrRemainingDistanceU3E__0_1() const { return ___U3CsqrRemainingDistanceU3E__0_1; }
	inline float* get_address_of_U3CsqrRemainingDistanceU3E__0_1() { return &___U3CsqrRemainingDistanceU3E__0_1; }
	inline void set_U3CsqrRemainingDistanceU3E__0_1(float value)
	{
		___U3CsqrRemainingDistanceU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CnewPositionU3E__1_2() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t2533550195, ___U3CnewPositionU3E__1_2)); }
	inline Vector3_t3722313464  get_U3CnewPositionU3E__1_2() const { return ___U3CnewPositionU3E__1_2; }
	inline Vector3_t3722313464 * get_address_of_U3CnewPositionU3E__1_2() { return &___U3CnewPositionU3E__1_2; }
	inline void set_U3CnewPositionU3E__1_2(Vector3_t3722313464  value)
	{
		___U3CnewPositionU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t2533550195, ___U24this_3)); }
	inline MovingObject_t1059405609 * get_U24this_3() const { return ___U24this_3; }
	inline MovingObject_t1059405609 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(MovingObject_t1059405609 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t2533550195, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t2533550195, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CSmoothMovementU3Ec__Iterator0_t2533550195, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSMOOTHMOVEMENTU3EC__ITERATOR0_T2533550195_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef RAYCASTHIT2D_T2279581989_H
#define RAYCASTHIT2D_T2279581989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t2279581989 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t2156229523  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t2156229523  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t2156229523  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Centroid_0)); }
	inline Vector2_t2156229523  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_t2156229523 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_t2156229523  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Point_1)); }
	inline Vector2_t2156229523  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_t2156229523 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_t2156229523  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Normal_2)); }
	inline Vector2_t2156229523  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_t2156229523 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_t2156229523  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t2279581989, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAYCASTHIT2D_T2279581989_H
#ifndef COLORBLOCK_T2139031574_H
#define COLORBLOCK_T2139031574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t2139031574 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t2555686324  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t2555686324  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t2555686324  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t2555686324  ___m_DisabledColor_3;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_4;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_5;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_NormalColor_0)); }
	inline Color_t2555686324  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t2555686324 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t2555686324  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_HighlightedColor_1)); }
	inline Color_t2555686324  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t2555686324 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t2555686324  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_PressedColor_2)); }
	inline Color_t2555686324  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t2555686324 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t2555686324  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_DisabledColor_3)); }
	inline Color_t2555686324  get_m_DisabledColor_3() const { return ___m_DisabledColor_3; }
	inline Color_t2555686324 * get_address_of_m_DisabledColor_3() { return &___m_DisabledColor_3; }
	inline void set_m_DisabledColor_3(Color_t2555686324  value)
	{
		___m_DisabledColor_3 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_4() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_ColorMultiplier_4)); }
	inline float get_m_ColorMultiplier_4() const { return ___m_ColorMultiplier_4; }
	inline float* get_address_of_m_ColorMultiplier_4() { return &___m_ColorMultiplier_4; }
	inline void set_m_ColorMultiplier_4(float value)
	{
		___m_ColorMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_5() { return static_cast<int32_t>(offsetof(ColorBlock_t2139031574, ___m_FadeDuration_5)); }
	inline float get_m_FadeDuration_5() const { return ___m_FadeDuration_5; }
	inline float* get_address_of_m_FadeDuration_5() { return &___m_FadeDuration_5; }
	inline void set_m_FadeDuration_5(float value)
	{
		___m_FadeDuration_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORBLOCK_T2139031574_H
#ifndef MODE_T1066900953_H
#define MODE_T1066900953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation/Mode
struct  Mode_t1066900953 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t1066900953, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODE_T1066900953_H
#ifndef SELECTIONSTATE_T2656606514_H
#define SELECTIONSTATE_T2656606514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/SelectionState
struct  SelectionState_t2656606514 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/SelectionState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SelectionState_t2656606514, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONSTATE_T2656606514_H
#ifndef TRANSITION_T1769908631_H
#define TRANSITION_T1769908631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable/Transition
struct  Transition_t1769908631 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Transition_t1769908631, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSITION_T1769908631_H
#ifndef TOGGLETRANSITION_T3587297765_H
#define TOGGLETRANSITION_T3587297765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle/ToggleTransition
struct  ToggleTransition_t3587297765 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ToggleTransition_t3587297765, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLETRANSITION_T3587297765_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_4), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef NAVIGATION_T3049316579_H
#define NAVIGATION_T3049316579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Navigation
struct  Navigation_t3049316579 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3250028441 * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnUp_1)); }
	inline Selectable_t3250028441 * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_t3250028441 * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnUp_1), value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnDown_2)); }
	inline Selectable_t3250028441 * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_t3250028441 * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnDown_2), value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnLeft_3)); }
	inline Selectable_t3250028441 * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_t3250028441 * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnLeft_3), value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t3049316579, ___m_SelectOnRight_4)); }
	inline Selectable_t3250028441 * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_t3250028441 ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_t3250028441 * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_SelectOnRight_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t3049316579_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_t3250028441 * ___m_SelectOnUp_1;
	Selectable_t3250028441 * ___m_SelectOnDown_2;
	Selectable_t3250028441 * ___m_SelectOnLeft_3;
	Selectable_t3250028441 * ___m_SelectOnRight_4;
};
#endif // NAVIGATION_T3049316579_H
#ifndef README_T240784718_H
#define README_T240784718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme
struct  Readme_t240784718  : public ScriptableObject_t2528358522
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t3840446185 * ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t1447152577* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(Readme_t240784718, ___icon_4)); }
	inline Texture2D_t3840446185 * get_icon_4() const { return ___icon_4; }
	inline Texture2D_t3840446185 ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_t3840446185 * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((&___icon_4), value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Readme_t240784718, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((&___title_5), value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Readme_t240784718, ___sections_6)); }
	inline SectionU5BU5D_t1447152577* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t1447152577** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t1447152577* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((&___sections_6), value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(Readme_t240784718, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // README_T240784718_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef RIGIDBODY2D_T939494601_H
#define RIGIDBODY2D_T939494601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody2D
struct  Rigidbody2D_t939494601  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY2D_T939494601_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef ANIMATOR_T434523843_H
#define ANIMATOR_T434523843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Animator
struct  Animator_t434523843  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANIMATOR_T434523843_H
#ifndef AUDIOBEHAVIOUR_T2879336574_H
#define AUDIOBEHAVIOUR_T2879336574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioBehaviour
struct  AudioBehaviour_t2879336574  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOBEHAVIOUR_T2879336574_H
#ifndef COLLIDER2D_T2806799626_H
#define COLLIDER2D_T2806799626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider2D
struct  Collider2D_t2806799626  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER2D_T2806799626_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef BOARDMANAGER_T1918054749_H
#define BOARDMANAGER_T1918054749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardManager
struct  BoardManager_t1918054749  : public MonoBehaviour_t3962482529
{
public:
	// System.Int32 BoardManager::columns
	int32_t ___columns_4;
	// System.Int32 BoardManager::rows
	int32_t ___rows_5;
	// BoardManager/Count BoardManager::wallCount
	Count_t2164209956 * ___wallCount_6;
	// BoardManager/Count BoardManager::foodCount
	Count_t2164209956 * ___foodCount_7;
	// UnityEngine.GameObject BoardManager::exit
	GameObject_t1113636619 * ___exit_8;
	// UnityEngine.GameObject[] BoardManager::floorTiles
	GameObjectU5BU5D_t3328599146* ___floorTiles_9;
	// UnityEngine.GameObject[] BoardManager::wallTiles
	GameObjectU5BU5D_t3328599146* ___wallTiles_10;
	// UnityEngine.GameObject[] BoardManager::foodTiles
	GameObjectU5BU5D_t3328599146* ___foodTiles_11;
	// UnityEngine.GameObject[] BoardManager::enemyTiles
	GameObjectU5BU5D_t3328599146* ___enemyTiles_12;
	// UnityEngine.GameObject[] BoardManager::outerWallTiles
	GameObjectU5BU5D_t3328599146* ___outerWallTiles_13;
	// UnityEngine.Transform BoardManager::boardHolder
	Transform_t3600365921 * ___boardHolder_14;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> BoardManager::gridPositions
	List_1_t899420910 * ___gridPositions_15;

public:
	inline static int32_t get_offset_of_columns_4() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___columns_4)); }
	inline int32_t get_columns_4() const { return ___columns_4; }
	inline int32_t* get_address_of_columns_4() { return &___columns_4; }
	inline void set_columns_4(int32_t value)
	{
		___columns_4 = value;
	}

	inline static int32_t get_offset_of_rows_5() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___rows_5)); }
	inline int32_t get_rows_5() const { return ___rows_5; }
	inline int32_t* get_address_of_rows_5() { return &___rows_5; }
	inline void set_rows_5(int32_t value)
	{
		___rows_5 = value;
	}

	inline static int32_t get_offset_of_wallCount_6() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___wallCount_6)); }
	inline Count_t2164209956 * get_wallCount_6() const { return ___wallCount_6; }
	inline Count_t2164209956 ** get_address_of_wallCount_6() { return &___wallCount_6; }
	inline void set_wallCount_6(Count_t2164209956 * value)
	{
		___wallCount_6 = value;
		Il2CppCodeGenWriteBarrier((&___wallCount_6), value);
	}

	inline static int32_t get_offset_of_foodCount_7() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___foodCount_7)); }
	inline Count_t2164209956 * get_foodCount_7() const { return ___foodCount_7; }
	inline Count_t2164209956 ** get_address_of_foodCount_7() { return &___foodCount_7; }
	inline void set_foodCount_7(Count_t2164209956 * value)
	{
		___foodCount_7 = value;
		Il2CppCodeGenWriteBarrier((&___foodCount_7), value);
	}

	inline static int32_t get_offset_of_exit_8() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___exit_8)); }
	inline GameObject_t1113636619 * get_exit_8() const { return ___exit_8; }
	inline GameObject_t1113636619 ** get_address_of_exit_8() { return &___exit_8; }
	inline void set_exit_8(GameObject_t1113636619 * value)
	{
		___exit_8 = value;
		Il2CppCodeGenWriteBarrier((&___exit_8), value);
	}

	inline static int32_t get_offset_of_floorTiles_9() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___floorTiles_9)); }
	inline GameObjectU5BU5D_t3328599146* get_floorTiles_9() const { return ___floorTiles_9; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_floorTiles_9() { return &___floorTiles_9; }
	inline void set_floorTiles_9(GameObjectU5BU5D_t3328599146* value)
	{
		___floorTiles_9 = value;
		Il2CppCodeGenWriteBarrier((&___floorTiles_9), value);
	}

	inline static int32_t get_offset_of_wallTiles_10() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___wallTiles_10)); }
	inline GameObjectU5BU5D_t3328599146* get_wallTiles_10() const { return ___wallTiles_10; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_wallTiles_10() { return &___wallTiles_10; }
	inline void set_wallTiles_10(GameObjectU5BU5D_t3328599146* value)
	{
		___wallTiles_10 = value;
		Il2CppCodeGenWriteBarrier((&___wallTiles_10), value);
	}

	inline static int32_t get_offset_of_foodTiles_11() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___foodTiles_11)); }
	inline GameObjectU5BU5D_t3328599146* get_foodTiles_11() const { return ___foodTiles_11; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_foodTiles_11() { return &___foodTiles_11; }
	inline void set_foodTiles_11(GameObjectU5BU5D_t3328599146* value)
	{
		___foodTiles_11 = value;
		Il2CppCodeGenWriteBarrier((&___foodTiles_11), value);
	}

	inline static int32_t get_offset_of_enemyTiles_12() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___enemyTiles_12)); }
	inline GameObjectU5BU5D_t3328599146* get_enemyTiles_12() const { return ___enemyTiles_12; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_enemyTiles_12() { return &___enemyTiles_12; }
	inline void set_enemyTiles_12(GameObjectU5BU5D_t3328599146* value)
	{
		___enemyTiles_12 = value;
		Il2CppCodeGenWriteBarrier((&___enemyTiles_12), value);
	}

	inline static int32_t get_offset_of_outerWallTiles_13() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___outerWallTiles_13)); }
	inline GameObjectU5BU5D_t3328599146* get_outerWallTiles_13() const { return ___outerWallTiles_13; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_outerWallTiles_13() { return &___outerWallTiles_13; }
	inline void set_outerWallTiles_13(GameObjectU5BU5D_t3328599146* value)
	{
		___outerWallTiles_13 = value;
		Il2CppCodeGenWriteBarrier((&___outerWallTiles_13), value);
	}

	inline static int32_t get_offset_of_boardHolder_14() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___boardHolder_14)); }
	inline Transform_t3600365921 * get_boardHolder_14() const { return ___boardHolder_14; }
	inline Transform_t3600365921 ** get_address_of_boardHolder_14() { return &___boardHolder_14; }
	inline void set_boardHolder_14(Transform_t3600365921 * value)
	{
		___boardHolder_14 = value;
		Il2CppCodeGenWriteBarrier((&___boardHolder_14), value);
	}

	inline static int32_t get_offset_of_gridPositions_15() { return static_cast<int32_t>(offsetof(BoardManager_t1918054749, ___gridPositions_15)); }
	inline List_1_t899420910 * get_gridPositions_15() const { return ___gridPositions_15; }
	inline List_1_t899420910 ** get_address_of_gridPositions_15() { return &___gridPositions_15; }
	inline void set_gridPositions_15(List_1_t899420910 * value)
	{
		___gridPositions_15 = value;
		Il2CppCodeGenWriteBarrier((&___gridPositions_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOARDMANAGER_T1918054749_H
#ifndef GAMEMANAGER_T1536523654_H
#define GAMEMANAGER_T1536523654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t1536523654  : public MonoBehaviour_t3962482529
{
public:
	// System.Single GameManager::levelStartDelay
	float ___levelStartDelay_4;
	// System.Single GameManager::turnDelay
	float ___turnDelay_5;
	// BoardManager GameManager::boardScript
	BoardManager_t1918054749 * ___boardScript_6;
	// System.Int32 GameManager::playerFoodPoint
	int32_t ___playerFoodPoint_8;
	// System.Boolean GameManager::playerTurn
	bool ___playerTurn_9;
	// UnityEngine.UI.Text GameManager::levelText
	Text_t1901882714 * ___levelText_10;
	// UnityEngine.GameObject GameManager::levelImage
	GameObject_t1113636619 * ___levelImage_11;
	// System.Int32 GameManager::level
	int32_t ___level_12;
	// System.Collections.Generic.List`1<Enemy> GameManager::enemies
	List_1_t3237804331 * ___enemies_13;
	// System.Boolean GameManager::enemiesMoving
	bool ___enemiesMoving_14;
	// System.Boolean GameManager::doingSetup
	bool ___doingSetup_15;

public:
	inline static int32_t get_offset_of_levelStartDelay_4() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___levelStartDelay_4)); }
	inline float get_levelStartDelay_4() const { return ___levelStartDelay_4; }
	inline float* get_address_of_levelStartDelay_4() { return &___levelStartDelay_4; }
	inline void set_levelStartDelay_4(float value)
	{
		___levelStartDelay_4 = value;
	}

	inline static int32_t get_offset_of_turnDelay_5() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___turnDelay_5)); }
	inline float get_turnDelay_5() const { return ___turnDelay_5; }
	inline float* get_address_of_turnDelay_5() { return &___turnDelay_5; }
	inline void set_turnDelay_5(float value)
	{
		___turnDelay_5 = value;
	}

	inline static int32_t get_offset_of_boardScript_6() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___boardScript_6)); }
	inline BoardManager_t1918054749 * get_boardScript_6() const { return ___boardScript_6; }
	inline BoardManager_t1918054749 ** get_address_of_boardScript_6() { return &___boardScript_6; }
	inline void set_boardScript_6(BoardManager_t1918054749 * value)
	{
		___boardScript_6 = value;
		Il2CppCodeGenWriteBarrier((&___boardScript_6), value);
	}

	inline static int32_t get_offset_of_playerFoodPoint_8() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___playerFoodPoint_8)); }
	inline int32_t get_playerFoodPoint_8() const { return ___playerFoodPoint_8; }
	inline int32_t* get_address_of_playerFoodPoint_8() { return &___playerFoodPoint_8; }
	inline void set_playerFoodPoint_8(int32_t value)
	{
		___playerFoodPoint_8 = value;
	}

	inline static int32_t get_offset_of_playerTurn_9() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___playerTurn_9)); }
	inline bool get_playerTurn_9() const { return ___playerTurn_9; }
	inline bool* get_address_of_playerTurn_9() { return &___playerTurn_9; }
	inline void set_playerTurn_9(bool value)
	{
		___playerTurn_9 = value;
	}

	inline static int32_t get_offset_of_levelText_10() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___levelText_10)); }
	inline Text_t1901882714 * get_levelText_10() const { return ___levelText_10; }
	inline Text_t1901882714 ** get_address_of_levelText_10() { return &___levelText_10; }
	inline void set_levelText_10(Text_t1901882714 * value)
	{
		___levelText_10 = value;
		Il2CppCodeGenWriteBarrier((&___levelText_10), value);
	}

	inline static int32_t get_offset_of_levelImage_11() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___levelImage_11)); }
	inline GameObject_t1113636619 * get_levelImage_11() const { return ___levelImage_11; }
	inline GameObject_t1113636619 ** get_address_of_levelImage_11() { return &___levelImage_11; }
	inline void set_levelImage_11(GameObject_t1113636619 * value)
	{
		___levelImage_11 = value;
		Il2CppCodeGenWriteBarrier((&___levelImage_11), value);
	}

	inline static int32_t get_offset_of_level_12() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___level_12)); }
	inline int32_t get_level_12() const { return ___level_12; }
	inline int32_t* get_address_of_level_12() { return &___level_12; }
	inline void set_level_12(int32_t value)
	{
		___level_12 = value;
	}

	inline static int32_t get_offset_of_enemies_13() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___enemies_13)); }
	inline List_1_t3237804331 * get_enemies_13() const { return ___enemies_13; }
	inline List_1_t3237804331 ** get_address_of_enemies_13() { return &___enemies_13; }
	inline void set_enemies_13(List_1_t3237804331 * value)
	{
		___enemies_13 = value;
		Il2CppCodeGenWriteBarrier((&___enemies_13), value);
	}

	inline static int32_t get_offset_of_enemiesMoving_14() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___enemiesMoving_14)); }
	inline bool get_enemiesMoving_14() const { return ___enemiesMoving_14; }
	inline bool* get_address_of_enemiesMoving_14() { return &___enemiesMoving_14; }
	inline void set_enemiesMoving_14(bool value)
	{
		___enemiesMoving_14 = value;
	}

	inline static int32_t get_offset_of_doingSetup_15() { return static_cast<int32_t>(offsetof(GameManager_t1536523654, ___doingSetup_15)); }
	inline bool get_doingSetup_15() const { return ___doingSetup_15; }
	inline bool* get_address_of_doingSetup_15() { return &___doingSetup_15; }
	inline void set_doingSetup_15(bool value)
	{
		___doingSetup_15 = value;
	}
};

struct GameManager_t1536523654_StaticFields
{
public:
	// GameManager GameManager::instace
	GameManager_t1536523654 * ___instace_7;

public:
	inline static int32_t get_offset_of_instace_7() { return static_cast<int32_t>(offsetof(GameManager_t1536523654_StaticFields, ___instace_7)); }
	inline GameManager_t1536523654 * get_instace_7() const { return ___instace_7; }
	inline GameManager_t1536523654 ** get_address_of_instace_7() { return &___instace_7; }
	inline void set_instace_7(GameManager_t1536523654 * value)
	{
		___instace_7 = value;
		Il2CppCodeGenWriteBarrier((&___instace_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEMANAGER_T1536523654_H
#ifndef LOADER_T243995532_H
#define LOADER_T243995532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loader
struct  Loader_t243995532  : public MonoBehaviour_t3962482529
{
public:
	// GameManager Loader::gameManager
	GameManager_t1536523654 * ___gameManager_4;

public:
	inline static int32_t get_offset_of_gameManager_4() { return static_cast<int32_t>(offsetof(Loader_t243995532, ___gameManager_4)); }
	inline GameManager_t1536523654 * get_gameManager_4() const { return ___gameManager_4; }
	inline GameManager_t1536523654 ** get_address_of_gameManager_4() { return &___gameManager_4; }
	inline void set_gameManager_4(GameManager_t1536523654 * value)
	{
		___gameManager_4 = value;
		Il2CppCodeGenWriteBarrier((&___gameManager_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADER_T243995532_H
#ifndef MOVINGOBJECT_T1059405609_H
#define MOVINGOBJECT_T1059405609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovingObject
struct  MovingObject_t1059405609  : public MonoBehaviour_t3962482529
{
public:
	// System.Single MovingObject::moveTime
	float ___moveTime_4;
	// UnityEngine.LayerMask MovingObject::blockingLayer
	LayerMask_t3493934918  ___blockingLayer_5;
	// UnityEngine.BoxCollider2D MovingObject::boxCollider
	BoxCollider2D_t3581341831 * ___boxCollider_6;
	// UnityEngine.Rigidbody2D MovingObject::rb2D
	Rigidbody2D_t939494601 * ___rb2D_7;
	// System.Single MovingObject::inverseMoveTime
	float ___inverseMoveTime_8;

public:
	inline static int32_t get_offset_of_moveTime_4() { return static_cast<int32_t>(offsetof(MovingObject_t1059405609, ___moveTime_4)); }
	inline float get_moveTime_4() const { return ___moveTime_4; }
	inline float* get_address_of_moveTime_4() { return &___moveTime_4; }
	inline void set_moveTime_4(float value)
	{
		___moveTime_4 = value;
	}

	inline static int32_t get_offset_of_blockingLayer_5() { return static_cast<int32_t>(offsetof(MovingObject_t1059405609, ___blockingLayer_5)); }
	inline LayerMask_t3493934918  get_blockingLayer_5() const { return ___blockingLayer_5; }
	inline LayerMask_t3493934918 * get_address_of_blockingLayer_5() { return &___blockingLayer_5; }
	inline void set_blockingLayer_5(LayerMask_t3493934918  value)
	{
		___blockingLayer_5 = value;
	}

	inline static int32_t get_offset_of_boxCollider_6() { return static_cast<int32_t>(offsetof(MovingObject_t1059405609, ___boxCollider_6)); }
	inline BoxCollider2D_t3581341831 * get_boxCollider_6() const { return ___boxCollider_6; }
	inline BoxCollider2D_t3581341831 ** get_address_of_boxCollider_6() { return &___boxCollider_6; }
	inline void set_boxCollider_6(BoxCollider2D_t3581341831 * value)
	{
		___boxCollider_6 = value;
		Il2CppCodeGenWriteBarrier((&___boxCollider_6), value);
	}

	inline static int32_t get_offset_of_rb2D_7() { return static_cast<int32_t>(offsetof(MovingObject_t1059405609, ___rb2D_7)); }
	inline Rigidbody2D_t939494601 * get_rb2D_7() const { return ___rb2D_7; }
	inline Rigidbody2D_t939494601 ** get_address_of_rb2D_7() { return &___rb2D_7; }
	inline void set_rb2D_7(Rigidbody2D_t939494601 * value)
	{
		___rb2D_7 = value;
		Il2CppCodeGenWriteBarrier((&___rb2D_7), value);
	}

	inline static int32_t get_offset_of_inverseMoveTime_8() { return static_cast<int32_t>(offsetof(MovingObject_t1059405609, ___inverseMoveTime_8)); }
	inline float get_inverseMoveTime_8() const { return ___inverseMoveTime_8; }
	inline float* get_address_of_inverseMoveTime_8() { return &___inverseMoveTime_8; }
	inline void set_inverseMoveTime_8(float value)
	{
		___inverseMoveTime_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVINGOBJECT_T1059405609_H
#ifndef SOUNDMANAGER_T2102329059_H
#define SOUNDMANAGER_T2102329059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoundManager
struct  SoundManager_t2102329059  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource SoundManager::sfxSource
	AudioSource_t3935305588 * ___sfxSource_4;
	// UnityEngine.AudioSource SoundManager::musicSource
	AudioSource_t3935305588 * ___musicSource_5;
	// System.Single SoundManager::lowPitchRange
	float ___lowPitchRange_7;
	// System.Single SoundManager::highPitchRange
	float ___highPitchRange_8;

public:
	inline static int32_t get_offset_of_sfxSource_4() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___sfxSource_4)); }
	inline AudioSource_t3935305588 * get_sfxSource_4() const { return ___sfxSource_4; }
	inline AudioSource_t3935305588 ** get_address_of_sfxSource_4() { return &___sfxSource_4; }
	inline void set_sfxSource_4(AudioSource_t3935305588 * value)
	{
		___sfxSource_4 = value;
		Il2CppCodeGenWriteBarrier((&___sfxSource_4), value);
	}

	inline static int32_t get_offset_of_musicSource_5() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___musicSource_5)); }
	inline AudioSource_t3935305588 * get_musicSource_5() const { return ___musicSource_5; }
	inline AudioSource_t3935305588 ** get_address_of_musicSource_5() { return &___musicSource_5; }
	inline void set_musicSource_5(AudioSource_t3935305588 * value)
	{
		___musicSource_5 = value;
		Il2CppCodeGenWriteBarrier((&___musicSource_5), value);
	}

	inline static int32_t get_offset_of_lowPitchRange_7() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___lowPitchRange_7)); }
	inline float get_lowPitchRange_7() const { return ___lowPitchRange_7; }
	inline float* get_address_of_lowPitchRange_7() { return &___lowPitchRange_7; }
	inline void set_lowPitchRange_7(float value)
	{
		___lowPitchRange_7 = value;
	}

	inline static int32_t get_offset_of_highPitchRange_8() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059, ___highPitchRange_8)); }
	inline float get_highPitchRange_8() const { return ___highPitchRange_8; }
	inline float* get_address_of_highPitchRange_8() { return &___highPitchRange_8; }
	inline void set_highPitchRange_8(float value)
	{
		___highPitchRange_8 = value;
	}
};

struct SoundManager_t2102329059_StaticFields
{
public:
	// SoundManager SoundManager::instance
	SoundManager_t2102329059 * ___instance_6;

public:
	inline static int32_t get_offset_of_instance_6() { return static_cast<int32_t>(offsetof(SoundManager_t2102329059_StaticFields, ___instance_6)); }
	inline SoundManager_t2102329059 * get_instance_6() const { return ___instance_6; }
	inline SoundManager_t2102329059 ** get_address_of_instance_6() { return &___instance_6; }
	inline void set_instance_6(SoundManager_t2102329059 * value)
	{
		___instance_6 = value;
		Il2CppCodeGenWriteBarrier((&___instance_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOUNDMANAGER_T2102329059_H
#ifndef TUTORIALINFO_T3629245769_H
#define TUTORIALINFO_T3629245769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TutorialInfo
struct  TutorialInfo_t3629245769  : public MonoBehaviour_t3962482529
{
public:
	// System.Boolean TutorialInfo::showAtStart
	bool ___showAtStart_4;
	// System.String TutorialInfo::url
	String_t* ___url_5;
	// UnityEngine.GameObject TutorialInfo::overlay
	GameObject_t1113636619 * ___overlay_6;
	// UnityEngine.AudioListener TutorialInfo::mainListener
	AudioListener_t2734094699 * ___mainListener_7;
	// UnityEngine.UI.Toggle TutorialInfo::showAtStartToggle
	Toggle_t2735377061 * ___showAtStartToggle_8;

public:
	inline static int32_t get_offset_of_showAtStart_4() { return static_cast<int32_t>(offsetof(TutorialInfo_t3629245769, ___showAtStart_4)); }
	inline bool get_showAtStart_4() const { return ___showAtStart_4; }
	inline bool* get_address_of_showAtStart_4() { return &___showAtStart_4; }
	inline void set_showAtStart_4(bool value)
	{
		___showAtStart_4 = value;
	}

	inline static int32_t get_offset_of_url_5() { return static_cast<int32_t>(offsetof(TutorialInfo_t3629245769, ___url_5)); }
	inline String_t* get_url_5() const { return ___url_5; }
	inline String_t** get_address_of_url_5() { return &___url_5; }
	inline void set_url_5(String_t* value)
	{
		___url_5 = value;
		Il2CppCodeGenWriteBarrier((&___url_5), value);
	}

	inline static int32_t get_offset_of_overlay_6() { return static_cast<int32_t>(offsetof(TutorialInfo_t3629245769, ___overlay_6)); }
	inline GameObject_t1113636619 * get_overlay_6() const { return ___overlay_6; }
	inline GameObject_t1113636619 ** get_address_of_overlay_6() { return &___overlay_6; }
	inline void set_overlay_6(GameObject_t1113636619 * value)
	{
		___overlay_6 = value;
		Il2CppCodeGenWriteBarrier((&___overlay_6), value);
	}

	inline static int32_t get_offset_of_mainListener_7() { return static_cast<int32_t>(offsetof(TutorialInfo_t3629245769, ___mainListener_7)); }
	inline AudioListener_t2734094699 * get_mainListener_7() const { return ___mainListener_7; }
	inline AudioListener_t2734094699 ** get_address_of_mainListener_7() { return &___mainListener_7; }
	inline void set_mainListener_7(AudioListener_t2734094699 * value)
	{
		___mainListener_7 = value;
		Il2CppCodeGenWriteBarrier((&___mainListener_7), value);
	}

	inline static int32_t get_offset_of_showAtStartToggle_8() { return static_cast<int32_t>(offsetof(TutorialInfo_t3629245769, ___showAtStartToggle_8)); }
	inline Toggle_t2735377061 * get_showAtStartToggle_8() const { return ___showAtStartToggle_8; }
	inline Toggle_t2735377061 ** get_address_of_showAtStartToggle_8() { return &___showAtStartToggle_8; }
	inline void set_showAtStartToggle_8(Toggle_t2735377061 * value)
	{
		___showAtStartToggle_8 = value;
		Il2CppCodeGenWriteBarrier((&___showAtStartToggle_8), value);
	}
};

struct TutorialInfo_t3629245769_StaticFields
{
public:
	// System.String TutorialInfo::showAtStartPrefsKey
	String_t* ___showAtStartPrefsKey_9;
	// System.Boolean TutorialInfo::alreadyShownThisSession
	bool ___alreadyShownThisSession_10;

public:
	inline static int32_t get_offset_of_showAtStartPrefsKey_9() { return static_cast<int32_t>(offsetof(TutorialInfo_t3629245769_StaticFields, ___showAtStartPrefsKey_9)); }
	inline String_t* get_showAtStartPrefsKey_9() const { return ___showAtStartPrefsKey_9; }
	inline String_t** get_address_of_showAtStartPrefsKey_9() { return &___showAtStartPrefsKey_9; }
	inline void set_showAtStartPrefsKey_9(String_t* value)
	{
		___showAtStartPrefsKey_9 = value;
		Il2CppCodeGenWriteBarrier((&___showAtStartPrefsKey_9), value);
	}

	inline static int32_t get_offset_of_alreadyShownThisSession_10() { return static_cast<int32_t>(offsetof(TutorialInfo_t3629245769_StaticFields, ___alreadyShownThisSession_10)); }
	inline bool get_alreadyShownThisSession_10() const { return ___alreadyShownThisSession_10; }
	inline bool* get_address_of_alreadyShownThisSession_10() { return &___alreadyShownThisSession_10; }
	inline void set_alreadyShownThisSession_10(bool value)
	{
		___alreadyShownThisSession_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TUTORIALINFO_T3629245769_H
#ifndef AUDIOLISTENER_T2734094699_H
#define AUDIOLISTENER_T2734094699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioListener
struct  AudioListener_t2734094699  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioListenerExtension UnityEngine.AudioListener::spatializerExtension
	AudioListenerExtension_t3242956547 * ___spatializerExtension_4;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioListener_t2734094699, ___spatializerExtension_4)); }
	inline AudioListenerExtension_t3242956547 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioListenerExtension_t3242956547 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioListenerExtension_t3242956547 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOLISTENER_T2734094699_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public AudioBehaviour_t2879336574
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_4;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_5;

public:
	inline static int32_t get_offset_of_spatializerExtension_4() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_4)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_4() const { return ___spatializerExtension_4; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_4() { return &___spatializerExtension_4; }
	inline void set_spatializerExtension_4(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_4 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_4), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_5() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_5)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_5() const { return ___ambisonicExtension_5; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_5() { return &___ambisonicExtension_5; }
	inline void set_ambisonicExtension_5(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_5 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef BOXCOLLIDER2D_T3581341831_H
#define BOXCOLLIDER2D_T3581341831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.BoxCollider2D
struct  BoxCollider2D_t3581341831  : public Collider2D_t2806799626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOXCOLLIDER2D_T3581341831_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef WALL_T2206666577_H
#define WALL_T2206666577_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wall
struct  Wall_t2206666577  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Sprite Wall::dmgSprite
	Sprite_t280657092 * ___dmgSprite_4;
	// System.Int32 Wall::hp
	int32_t ___hp_5;
	// UnityEngine.AudioClip Wall::chop1
	AudioClip_t3680889665 * ___chop1_6;
	// UnityEngine.AudioClip Wall::chop2
	AudioClip_t3680889665 * ___chop2_7;
	// UnityEngine.SpriteRenderer Wall::spriteRenderer
	SpriteRenderer_t3235626157 * ___spriteRenderer_8;

public:
	inline static int32_t get_offset_of_dmgSprite_4() { return static_cast<int32_t>(offsetof(Wall_t2206666577, ___dmgSprite_4)); }
	inline Sprite_t280657092 * get_dmgSprite_4() const { return ___dmgSprite_4; }
	inline Sprite_t280657092 ** get_address_of_dmgSprite_4() { return &___dmgSprite_4; }
	inline void set_dmgSprite_4(Sprite_t280657092 * value)
	{
		___dmgSprite_4 = value;
		Il2CppCodeGenWriteBarrier((&___dmgSprite_4), value);
	}

	inline static int32_t get_offset_of_hp_5() { return static_cast<int32_t>(offsetof(Wall_t2206666577, ___hp_5)); }
	inline int32_t get_hp_5() const { return ___hp_5; }
	inline int32_t* get_address_of_hp_5() { return &___hp_5; }
	inline void set_hp_5(int32_t value)
	{
		___hp_5 = value;
	}

	inline static int32_t get_offset_of_chop1_6() { return static_cast<int32_t>(offsetof(Wall_t2206666577, ___chop1_6)); }
	inline AudioClip_t3680889665 * get_chop1_6() const { return ___chop1_6; }
	inline AudioClip_t3680889665 ** get_address_of_chop1_6() { return &___chop1_6; }
	inline void set_chop1_6(AudioClip_t3680889665 * value)
	{
		___chop1_6 = value;
		Il2CppCodeGenWriteBarrier((&___chop1_6), value);
	}

	inline static int32_t get_offset_of_chop2_7() { return static_cast<int32_t>(offsetof(Wall_t2206666577, ___chop2_7)); }
	inline AudioClip_t3680889665 * get_chop2_7() const { return ___chop2_7; }
	inline AudioClip_t3680889665 ** get_address_of_chop2_7() { return &___chop2_7; }
	inline void set_chop2_7(AudioClip_t3680889665 * value)
	{
		___chop2_7 = value;
		Il2CppCodeGenWriteBarrier((&___chop2_7), value);
	}

	inline static int32_t get_offset_of_spriteRenderer_8() { return static_cast<int32_t>(offsetof(Wall_t2206666577, ___spriteRenderer_8)); }
	inline SpriteRenderer_t3235626157 * get_spriteRenderer_8() const { return ___spriteRenderer_8; }
	inline SpriteRenderer_t3235626157 ** get_address_of_spriteRenderer_8() { return &___spriteRenderer_8; }
	inline void set_spriteRenderer_8(SpriteRenderer_t3235626157 * value)
	{
		___spriteRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((&___spriteRenderer_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WALL_T2206666577_H
#ifndef ENEMY_T1765729589_H
#define ENEMY_T1765729589_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Enemy
struct  Enemy_t1765729589  : public MovingObject_t1059405609
{
public:
	// System.Int32 Enemy::playerDamage
	int32_t ___playerDamage_9;
	// UnityEngine.Animator Enemy::animator
	Animator_t434523843 * ___animator_10;
	// UnityEngine.Transform Enemy::target
	Transform_t3600365921 * ___target_11;
	// System.Boolean Enemy::skipMove
	bool ___skipMove_12;
	// UnityEngine.AudioClip Enemy::enemyAttack1
	AudioClip_t3680889665 * ___enemyAttack1_13;
	// UnityEngine.AudioClip Enemy::enemyAttack2
	AudioClip_t3680889665 * ___enemyAttack2_14;
	// System.Int32 Enemy::wallDamage
	int32_t ___wallDamage_15;
	// System.Int32 Enemy::HP
	int32_t ___HP_16;

public:
	inline static int32_t get_offset_of_playerDamage_9() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___playerDamage_9)); }
	inline int32_t get_playerDamage_9() const { return ___playerDamage_9; }
	inline int32_t* get_address_of_playerDamage_9() { return &___playerDamage_9; }
	inline void set_playerDamage_9(int32_t value)
	{
		___playerDamage_9 = value;
	}

	inline static int32_t get_offset_of_animator_10() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___animator_10)); }
	inline Animator_t434523843 * get_animator_10() const { return ___animator_10; }
	inline Animator_t434523843 ** get_address_of_animator_10() { return &___animator_10; }
	inline void set_animator_10(Animator_t434523843 * value)
	{
		___animator_10 = value;
		Il2CppCodeGenWriteBarrier((&___animator_10), value);
	}

	inline static int32_t get_offset_of_target_11() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___target_11)); }
	inline Transform_t3600365921 * get_target_11() const { return ___target_11; }
	inline Transform_t3600365921 ** get_address_of_target_11() { return &___target_11; }
	inline void set_target_11(Transform_t3600365921 * value)
	{
		___target_11 = value;
		Il2CppCodeGenWriteBarrier((&___target_11), value);
	}

	inline static int32_t get_offset_of_skipMove_12() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___skipMove_12)); }
	inline bool get_skipMove_12() const { return ___skipMove_12; }
	inline bool* get_address_of_skipMove_12() { return &___skipMove_12; }
	inline void set_skipMove_12(bool value)
	{
		___skipMove_12 = value;
	}

	inline static int32_t get_offset_of_enemyAttack1_13() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___enemyAttack1_13)); }
	inline AudioClip_t3680889665 * get_enemyAttack1_13() const { return ___enemyAttack1_13; }
	inline AudioClip_t3680889665 ** get_address_of_enemyAttack1_13() { return &___enemyAttack1_13; }
	inline void set_enemyAttack1_13(AudioClip_t3680889665 * value)
	{
		___enemyAttack1_13 = value;
		Il2CppCodeGenWriteBarrier((&___enemyAttack1_13), value);
	}

	inline static int32_t get_offset_of_enemyAttack2_14() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___enemyAttack2_14)); }
	inline AudioClip_t3680889665 * get_enemyAttack2_14() const { return ___enemyAttack2_14; }
	inline AudioClip_t3680889665 ** get_address_of_enemyAttack2_14() { return &___enemyAttack2_14; }
	inline void set_enemyAttack2_14(AudioClip_t3680889665 * value)
	{
		___enemyAttack2_14 = value;
		Il2CppCodeGenWriteBarrier((&___enemyAttack2_14), value);
	}

	inline static int32_t get_offset_of_wallDamage_15() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___wallDamage_15)); }
	inline int32_t get_wallDamage_15() const { return ___wallDamage_15; }
	inline int32_t* get_address_of_wallDamage_15() { return &___wallDamage_15; }
	inline void set_wallDamage_15(int32_t value)
	{
		___wallDamage_15 = value;
	}

	inline static int32_t get_offset_of_HP_16() { return static_cast<int32_t>(offsetof(Enemy_t1765729589, ___HP_16)); }
	inline int32_t get_HP_16() const { return ___HP_16; }
	inline int32_t* get_address_of_HP_16() { return &___HP_16; }
	inline void set_HP_16(int32_t value)
	{
		___HP_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENEMY_T1765729589_H
#ifndef PLAYER_T3266647312_H
#define PLAYER_T3266647312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t3266647312  : public MovingObject_t1059405609
{
public:
	// System.Int32 Player::wallDamage
	int32_t ___wallDamage_9;
	// System.Int32 Player::enemyDamage
	int32_t ___enemyDamage_10;
	// System.Int32 Player::pointPerFood
	int32_t ___pointPerFood_11;
	// System.Int32 Player::pointPerSoda
	int32_t ___pointPerSoda_12;
	// System.Single Player::restartLevelDelay
	float ___restartLevelDelay_13;
	// UnityEngine.UI.Text Player::foodText
	Text_t1901882714 * ___foodText_14;
	// System.Collections.Generic.List`1<UnityEngine.AudioClip> Player::sounds
	List_1_t857997111 * ___sounds_15;
	// UnityEngine.Animator Player::animator
	Animator_t434523843 * ___animator_16;
	// System.Int32 Player::food
	int32_t ___food_17;

public:
	inline static int32_t get_offset_of_wallDamage_9() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___wallDamage_9)); }
	inline int32_t get_wallDamage_9() const { return ___wallDamage_9; }
	inline int32_t* get_address_of_wallDamage_9() { return &___wallDamage_9; }
	inline void set_wallDamage_9(int32_t value)
	{
		___wallDamage_9 = value;
	}

	inline static int32_t get_offset_of_enemyDamage_10() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___enemyDamage_10)); }
	inline int32_t get_enemyDamage_10() const { return ___enemyDamage_10; }
	inline int32_t* get_address_of_enemyDamage_10() { return &___enemyDamage_10; }
	inline void set_enemyDamage_10(int32_t value)
	{
		___enemyDamage_10 = value;
	}

	inline static int32_t get_offset_of_pointPerFood_11() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___pointPerFood_11)); }
	inline int32_t get_pointPerFood_11() const { return ___pointPerFood_11; }
	inline int32_t* get_address_of_pointPerFood_11() { return &___pointPerFood_11; }
	inline void set_pointPerFood_11(int32_t value)
	{
		___pointPerFood_11 = value;
	}

	inline static int32_t get_offset_of_pointPerSoda_12() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___pointPerSoda_12)); }
	inline int32_t get_pointPerSoda_12() const { return ___pointPerSoda_12; }
	inline int32_t* get_address_of_pointPerSoda_12() { return &___pointPerSoda_12; }
	inline void set_pointPerSoda_12(int32_t value)
	{
		___pointPerSoda_12 = value;
	}

	inline static int32_t get_offset_of_restartLevelDelay_13() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___restartLevelDelay_13)); }
	inline float get_restartLevelDelay_13() const { return ___restartLevelDelay_13; }
	inline float* get_address_of_restartLevelDelay_13() { return &___restartLevelDelay_13; }
	inline void set_restartLevelDelay_13(float value)
	{
		___restartLevelDelay_13 = value;
	}

	inline static int32_t get_offset_of_foodText_14() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___foodText_14)); }
	inline Text_t1901882714 * get_foodText_14() const { return ___foodText_14; }
	inline Text_t1901882714 ** get_address_of_foodText_14() { return &___foodText_14; }
	inline void set_foodText_14(Text_t1901882714 * value)
	{
		___foodText_14 = value;
		Il2CppCodeGenWriteBarrier((&___foodText_14), value);
	}

	inline static int32_t get_offset_of_sounds_15() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___sounds_15)); }
	inline List_1_t857997111 * get_sounds_15() const { return ___sounds_15; }
	inline List_1_t857997111 ** get_address_of_sounds_15() { return &___sounds_15; }
	inline void set_sounds_15(List_1_t857997111 * value)
	{
		___sounds_15 = value;
		Il2CppCodeGenWriteBarrier((&___sounds_15), value);
	}

	inline static int32_t get_offset_of_animator_16() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___animator_16)); }
	inline Animator_t434523843 * get_animator_16() const { return ___animator_16; }
	inline Animator_t434523843 ** get_address_of_animator_16() { return &___animator_16; }
	inline void set_animator_16(Animator_t434523843 * value)
	{
		___animator_16 = value;
		Il2CppCodeGenWriteBarrier((&___animator_16), value);
	}

	inline static int32_t get_offset_of_food_17() { return static_cast<int32_t>(offsetof(Player_t3266647312, ___food_17)); }
	inline int32_t get_food_17() const { return ___food_17; }
	inline int32_t* get_address_of_food_17() { return &___food_17; }
	inline void set_food_17(int32_t value)
	{
		___food_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYER_T3266647312_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_8;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_9;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_t2598313366 * ___m_CanvasRenderer_10;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_11;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_12;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_14;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_16;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_19;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_6)); }
	inline Material_t340375123 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t340375123 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t340375123 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_6), value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_7)); }
	inline Color_t2555686324  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t2555686324 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t2555686324  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_8)); }
	inline bool get_m_RaycastTarget_8() const { return ___m_RaycastTarget_8; }
	inline bool* get_address_of_m_RaycastTarget_8() { return &___m_RaycastTarget_8; }
	inline void set_m_RaycastTarget_8(bool value)
	{
		___m_RaycastTarget_8 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_9)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_9() const { return ___m_RectTransform_9; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_9() { return &___m_RectTransform_9; }
	inline void set_m_RectTransform_9(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_9), value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRenderer_10)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRenderer_10() const { return ___m_CanvasRenderer_10; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRenderer_10() { return &___m_CanvasRenderer_10; }
	inline void set_m_CanvasRenderer_10(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRenderer_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRenderer_10), value);
	}

	inline static int32_t get_offset_of_m_Canvas_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_11)); }
	inline Canvas_t3310196443 * get_m_Canvas_11() const { return ___m_Canvas_11; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_11() { return &___m_Canvas_11; }
	inline void set_m_Canvas_11(Canvas_t3310196443 * value)
	{
		___m_Canvas_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_11), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_12)); }
	inline bool get_m_VertsDirty_12() const { return ___m_VertsDirty_12; }
	inline bool* get_address_of_m_VertsDirty_12() { return &___m_VertsDirty_12; }
	inline void set_m_VertsDirty_12(bool value)
	{
		___m_VertsDirty_12 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_13)); }
	inline bool get_m_MaterialDirty_13() const { return ___m_MaterialDirty_13; }
	inline bool* get_address_of_m_MaterialDirty_13() { return &___m_MaterialDirty_13; }
	inline void set_m_MaterialDirty_13(bool value)
	{
		___m_MaterialDirty_13 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_14() const { return ___m_OnDirtyLayoutCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_14() { return &___m_OnDirtyLayoutCallback_14; }
	inline void set_m_OnDirtyLayoutCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_14), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_15)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_15() const { return ___m_OnDirtyVertsCallback_15; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_15() { return &___m_OnDirtyVertsCallback_15; }
	inline void set_m_OnDirtyVertsCallback_15(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_15), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_16)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_16() const { return ___m_OnDirtyMaterialCallback_16; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_16() { return &___m_OnDirtyMaterialCallback_16; }
	inline void set_m_OnDirtyMaterialCallback_16(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_16), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_19() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_19)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_19() const { return ___m_ColorTweenRunner_19; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_19() { return &___m_ColorTweenRunner_19; }
	inline void set_m_ColorTweenRunner_19(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_19), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_20() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_20; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_20(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_20 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_17;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_18;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t340375123 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t340375123 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_4), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_5), value);
	}

	inline static int32_t get_offset_of_s_Mesh_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_17)); }
	inline Mesh_t3648964284 * get_s_Mesh_17() const { return ___s_Mesh_17; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_17() { return &___s_Mesh_17; }
	inline void set_s_Mesh_17(Mesh_t3648964284 * value)
	{
		___s_Mesh_17 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_17), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_18)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_18() const { return ___s_VertexHelper_18; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_18() { return &___s_VertexHelper_18; }
	inline void set_s_VertexHelper_18(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_18 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SELECTABLE_T3250028441_H
#define SELECTABLE_T3250028441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Selectable
struct  Selectable_t3250028441  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t3049316579  ___m_Navigation_5;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_6;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t2139031574  ___m_Colors_7;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t1362986479  ___m_SpriteState_8;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t2532145056 * ___m_AnimationTriggers_9;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_10;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t1660335611 * ___m_TargetGraphic_11;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_12;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t1260619206 * ___m_CanvasGroupCache_17;

public:
	inline static int32_t get_offset_of_m_Navigation_5() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Navigation_5)); }
	inline Navigation_t3049316579  get_m_Navigation_5() const { return ___m_Navigation_5; }
	inline Navigation_t3049316579 * get_address_of_m_Navigation_5() { return &___m_Navigation_5; }
	inline void set_m_Navigation_5(Navigation_t3049316579  value)
	{
		___m_Navigation_5 = value;
	}

	inline static int32_t get_offset_of_m_Transition_6() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Transition_6)); }
	inline int32_t get_m_Transition_6() const { return ___m_Transition_6; }
	inline int32_t* get_address_of_m_Transition_6() { return &___m_Transition_6; }
	inline void set_m_Transition_6(int32_t value)
	{
		___m_Transition_6 = value;
	}

	inline static int32_t get_offset_of_m_Colors_7() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Colors_7)); }
	inline ColorBlock_t2139031574  get_m_Colors_7() const { return ___m_Colors_7; }
	inline ColorBlock_t2139031574 * get_address_of_m_Colors_7() { return &___m_Colors_7; }
	inline void set_m_Colors_7(ColorBlock_t2139031574  value)
	{
		___m_Colors_7 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_8() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_SpriteState_8)); }
	inline SpriteState_t1362986479  get_m_SpriteState_8() const { return ___m_SpriteState_8; }
	inline SpriteState_t1362986479 * get_address_of_m_SpriteState_8() { return &___m_SpriteState_8; }
	inline void set_m_SpriteState_8(SpriteState_t1362986479  value)
	{
		___m_SpriteState_8 = value;
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_9() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_AnimationTriggers_9)); }
	inline AnimationTriggers_t2532145056 * get_m_AnimationTriggers_9() const { return ___m_AnimationTriggers_9; }
	inline AnimationTriggers_t2532145056 ** get_address_of_m_AnimationTriggers_9() { return &___m_AnimationTriggers_9; }
	inline void set_m_AnimationTriggers_9(AnimationTriggers_t2532145056 * value)
	{
		___m_AnimationTriggers_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_AnimationTriggers_9), value);
	}

	inline static int32_t get_offset_of_m_Interactable_10() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_Interactable_10)); }
	inline bool get_m_Interactable_10() const { return ___m_Interactable_10; }
	inline bool* get_address_of_m_Interactable_10() { return &___m_Interactable_10; }
	inline void set_m_Interactable_10(bool value)
	{
		___m_Interactable_10 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_11() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_TargetGraphic_11)); }
	inline Graphic_t1660335611 * get_m_TargetGraphic_11() const { return ___m_TargetGraphic_11; }
	inline Graphic_t1660335611 ** get_address_of_m_TargetGraphic_11() { return &___m_TargetGraphic_11; }
	inline void set_m_TargetGraphic_11(Graphic_t1660335611 * value)
	{
		___m_TargetGraphic_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_TargetGraphic_11), value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_12() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_GroupsAllowInteraction_12)); }
	inline bool get_m_GroupsAllowInteraction_12() const { return ___m_GroupsAllowInteraction_12; }
	inline bool* get_address_of_m_GroupsAllowInteraction_12() { return &___m_GroupsAllowInteraction_12; }
	inline void set_m_GroupsAllowInteraction_12(bool value)
	{
		___m_GroupsAllowInteraction_12 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelectionState_13() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CurrentSelectionState_13)); }
	inline int32_t get_m_CurrentSelectionState_13() const { return ___m_CurrentSelectionState_13; }
	inline int32_t* get_address_of_m_CurrentSelectionState_13() { return &___m_CurrentSelectionState_13; }
	inline void set_m_CurrentSelectionState_13(int32_t value)
	{
		___m_CurrentSelectionState_13 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerInsideU3Ek__BackingField_14)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_14() const { return ___U3CisPointerInsideU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_14() { return &___U3CisPointerInsideU3Ek__BackingField_14; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_14(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3CisPointerDownU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_15() const { return ___U3CisPointerDownU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_15() { return &___U3CisPointerDownU3Ek__BackingField_15; }
	inline void set_U3CisPointerDownU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___U3ChasSelectionU3Ek__BackingField_16)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_16() const { return ___U3ChasSelectionU3Ek__BackingField_16; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_16() { return &___U3ChasSelectionU3Ek__BackingField_16; }
	inline void set_U3ChasSelectionU3Ek__BackingField_16(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_17() { return static_cast<int32_t>(offsetof(Selectable_t3250028441, ___m_CanvasGroupCache_17)); }
	inline List_1_t1260619206 * get_m_CanvasGroupCache_17() const { return ___m_CanvasGroupCache_17; }
	inline List_1_t1260619206 ** get_address_of_m_CanvasGroupCache_17() { return &___m_CanvasGroupCache_17; }
	inline void set_m_CanvasGroupCache_17(List_1_t1260619206 * value)
	{
		___m_CanvasGroupCache_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasGroupCache_17), value);
	}
};

struct Selectable_t3250028441_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t427135887 * ___s_List_4;

public:
	inline static int32_t get_offset_of_s_List_4() { return static_cast<int32_t>(offsetof(Selectable_t3250028441_StaticFields, ___s_List_4)); }
	inline List_1_t427135887 * get_s_List_4() const { return ___s_List_4; }
	inline List_1_t427135887 ** get_address_of_s_List_4() { return &___s_List_4; }
	inline void set_s_List_4(List_1_t427135887 * value)
	{
		___s_List_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_List_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTABLE_T3250028441_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_21;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_22;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_23;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_25;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_26;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_27;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_28;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_29;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_21)); }
	inline bool get_m_ShouldRecalculateStencil_21() const { return ___m_ShouldRecalculateStencil_21; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_21() { return &___m_ShouldRecalculateStencil_21; }
	inline void set_m_ShouldRecalculateStencil_21(bool value)
	{
		___m_ShouldRecalculateStencil_21 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_22)); }
	inline Material_t340375123 * get_m_MaskMaterial_22() const { return ___m_MaskMaterial_22; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_22() { return &___m_MaskMaterial_22; }
	inline void set_m_MaskMaterial_22(Material_t340375123 * value)
	{
		___m_MaskMaterial_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_22), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_23)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_23() const { return ___m_ParentMask_23; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_23() { return &___m_ParentMask_23; }
	inline void set_m_ParentMask_23(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_23), value);
	}

	inline static int32_t get_offset_of_m_Maskable_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_24)); }
	inline bool get_m_Maskable_24() const { return ___m_Maskable_24; }
	inline bool* get_address_of_m_Maskable_24() { return &___m_Maskable_24; }
	inline void set_m_Maskable_24(bool value)
	{
		___m_Maskable_24 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_25)); }
	inline bool get_m_IncludeForMasking_25() const { return ___m_IncludeForMasking_25; }
	inline bool* get_address_of_m_IncludeForMasking_25() { return &___m_IncludeForMasking_25; }
	inline void set_m_IncludeForMasking_25(bool value)
	{
		___m_IncludeForMasking_25 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_26)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_26() const { return ___m_OnCullStateChanged_26; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_26() { return &___m_OnCullStateChanged_26; }
	inline void set_m_OnCullStateChanged_26(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_26), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_27)); }
	inline bool get_m_ShouldRecalculate_27() const { return ___m_ShouldRecalculate_27; }
	inline bool* get_address_of_m_ShouldRecalculate_27() { return &___m_ShouldRecalculate_27; }
	inline void set_m_ShouldRecalculate_27(bool value)
	{
		___m_ShouldRecalculate_27 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_28)); }
	inline int32_t get_m_StencilValue_28() const { return ___m_StencilValue_28; }
	inline int32_t* get_address_of_m_StencilValue_28() { return &___m_StencilValue_28; }
	inline void set_m_StencilValue_28(int32_t value)
	{
		___m_StencilValue_28 = value;
	}

	inline static int32_t get_offset_of_m_Corners_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_29)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_29() const { return ___m_Corners_29; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_29() { return &___m_Corners_29; }
	inline void set_m_Corners_29(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_29), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef TOGGLE_T2735377061_H
#define TOGGLE_T2735377061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t2735377061  : public Selectable_t3250028441
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t1660335611 * ___graphic_19;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t123837990 * ___m_Group_20;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1873685584 * ___onValueChanged_21;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_22;

public:
	inline static int32_t get_offset_of_toggleTransition_18() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___toggleTransition_18)); }
	inline int32_t get_toggleTransition_18() const { return ___toggleTransition_18; }
	inline int32_t* get_address_of_toggleTransition_18() { return &___toggleTransition_18; }
	inline void set_toggleTransition_18(int32_t value)
	{
		___toggleTransition_18 = value;
	}

	inline static int32_t get_offset_of_graphic_19() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___graphic_19)); }
	inline Graphic_t1660335611 * get_graphic_19() const { return ___graphic_19; }
	inline Graphic_t1660335611 ** get_address_of_graphic_19() { return &___graphic_19; }
	inline void set_graphic_19(Graphic_t1660335611 * value)
	{
		___graphic_19 = value;
		Il2CppCodeGenWriteBarrier((&___graphic_19), value);
	}

	inline static int32_t get_offset_of_m_Group_20() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_Group_20)); }
	inline ToggleGroup_t123837990 * get_m_Group_20() const { return ___m_Group_20; }
	inline ToggleGroup_t123837990 ** get_address_of_m_Group_20() { return &___m_Group_20; }
	inline void set_m_Group_20(ToggleGroup_t123837990 * value)
	{
		___m_Group_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_Group_20), value);
	}

	inline static int32_t get_offset_of_onValueChanged_21() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___onValueChanged_21)); }
	inline ToggleEvent_t1873685584 * get_onValueChanged_21() const { return ___onValueChanged_21; }
	inline ToggleEvent_t1873685584 ** get_address_of_onValueChanged_21() { return &___onValueChanged_21; }
	inline void set_onValueChanged_21(ToggleEvent_t1873685584 * value)
	{
		___onValueChanged_21 = value;
		Il2CppCodeGenWriteBarrier((&___onValueChanged_21), value);
	}

	inline static int32_t get_offset_of_m_IsOn_22() { return static_cast<int32_t>(offsetof(Toggle_t2735377061, ___m_IsOn_22)); }
	inline bool get_m_IsOn_22() const { return ___m_IsOn_22; }
	inline bool* get_address_of_m_IsOn_22() { return &___m_IsOn_22; }
	inline void set_m_IsOn_22(bool value)
	{
		___m_IsOn_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOGGLE_T2735377061_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_30;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_31;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_32;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_33;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_35;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_36;

public:
	inline static int32_t get_offset_of_m_FontData_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_30)); }
	inline FontData_t746620069 * get_m_FontData_30() const { return ___m_FontData_30; }
	inline FontData_t746620069 ** get_address_of_m_FontData_30() { return &___m_FontData_30; }
	inline void set_m_FontData_30(FontData_t746620069 * value)
	{
		___m_FontData_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_30), value);
	}

	inline static int32_t get_offset_of_m_Text_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_31)); }
	inline String_t* get_m_Text_31() const { return ___m_Text_31; }
	inline String_t** get_address_of_m_Text_31() { return &___m_Text_31; }
	inline void set_m_Text_31(String_t* value)
	{
		___m_Text_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_31), value);
	}

	inline static int32_t get_offset_of_m_TextCache_32() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_32)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_32() const { return ___m_TextCache_32; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_32() { return &___m_TextCache_32; }
	inline void set_m_TextCache_32(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_32 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_32), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_33)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_33() const { return ___m_TextCacheForLayout_33; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_33() { return &___m_TextCacheForLayout_33; }
	inline void set_m_TextCacheForLayout_33(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_33), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_35() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_35)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_35() const { return ___m_DisableFontTextureRebuiltCallback_35; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_35() { return &___m_DisableFontTextureRebuiltCallback_35; }
	inline void set_m_DisableFontTextureRebuiltCallback_35(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_35 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_36() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_36)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_36() const { return ___m_TempVerts_36; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_36() { return &___m_TempVerts_36; }
	inline void set_m_TempVerts_36(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_36 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_36), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_34;

public:
	inline static int32_t get_offset_of_s_DefaultText_34() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_34)); }
	inline Material_t340375123 * get_s_DefaultText_34() const { return ___s_DefaultText_34; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_34() { return &___s_DefaultText_34; }
	inline void set_s_DefaultText_34(Material_t340375123 * value)
	{
		___s_DefaultText_34 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_34), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t3680889665 * m_Items[1];

public:
	inline AudioClip_t3680889665 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AudioClip_t3680889665 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m1536473967_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3097985365_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m1524640104_gshared (List_1_t899420910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m576380744_gshared (List_1_t899420910 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  List_1_get_Item_m200663048_gshared (List_1_t899420910 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m1985601461_gshared (List_1_t899420910 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
extern "C" IL2CPP_METHOD_ATTR void List_1_Clear_m3697625829_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void List_1_RemoveAt_m2730968292_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);

// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Count__ctor_m4228117428 (Count_t2164209956 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::.ctor()
inline void List_1__ctor_m1536473967 (List_1_t899420910 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t899420910 *, const RuntimeMethod*))List_1__ctor_m1536473967_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m3097985365 (List_1_t899420910 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t899420910 *, const RuntimeMethod*))List_1_Clear_m3097985365_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
inline void List_1_Add_m1524640104 (List_1_t899420910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t899420910 *, Vector3_t3722313464 , const RuntimeMethod*))List_1_Add_m1524640104_gshared)(__this, p0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C" IL2CPP_METHOD_ATTR Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t1113636619 * Object_Instantiate_TisGameObject_t1113636619_m3006960551 (RuntimeObject * __this /* static, unused */, GameObject_t1113636619 * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method)
{
	return ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m381167889 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Count()
inline int32_t List_1_get_Count_m576380744 (List_1_t899420910 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t899420910 *, const RuntimeMethod*))List_1_get_Count_m576380744_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
inline Vector3_t3722313464  List_1_get_Item_m200663048 (List_1_t899420910 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Vector3_t3722313464  (*) (List_1_t899420910 *, int32_t, const RuntimeMethod*))List_1_get_Item_m200663048_gshared)(__this, p0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m1985601461 (List_1_t899420910 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t899420910 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m1985601461_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  BoardManager_RandomPosition_m3015571429 (BoardManager_t1918054749 * __this, const RuntimeMethod* method);
// System.Void BoardManager::BoardSetup()
extern "C" IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m4142678938 (BoardManager_t1918054749 * __this, const RuntimeMethod* method);
// System.Void BoardManager::InitialiseList()
extern "C" IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m2058516594 (BoardManager_t1918054749 * __this, const RuntimeMethod* method);
// System.Void BoardManager::LayoutObject(UnityEngine.GameObject[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BoardManager_LayoutObject_m3905658523 (BoardManager_t1918054749 * __this, GameObjectU5BU5D_t3328599146* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Log(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Mathf_Log_m2177375338 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void MovingObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MovingObject__ctor_m4192820200 (MovingObject_t1059405609 * __this, const RuntimeMethod* method);
// System.Void GameManager::AddEnemyToList(Enemy)
extern "C" IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_m69037753 (GameManager_t1536523654 * __this, Enemy_t1765729589 * ___script0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t434523843 * Component_GetComponent_TisAnimator_t434523843_m2351447238 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t434523843 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_FindGameObjectWithTag_m2129039296 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void MovingObject::Start()
extern "C" IL2CPP_METHOD_ATTR void MovingObject_Start_m1751232218 (MovingObject_t1059405609 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void Enemy::CheckIfDead()
extern "C" IL2CPP_METHOD_ATTR void Enemy_CheckIfDead_m2657785876 (Enemy_t1765729589 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::.ctor()
inline void List_1__ctor_m1084649037 (List_1_t3237804331 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3237804331 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<BoardManager>()
inline BoardManager_t1918054749 * Component_GetComponent_TisBoardManager_t1918054749_m2055188458 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  BoardManager_t1918054749 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void GameManager::InitGame()
extern "C" IL2CPP_METHOD_ATTR void GameManager_InitGame_m3135065078 (GameManager_t1536523654 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m20417929 (Behaviour_t1437897464 * __this, bool p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t1901882714 * GameObject_GetComponent_TisText_t1901882714_m2114913816 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  Text_t1901882714 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4227543964 (MonoBehaviour_t3962482529 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::Clear()
inline void List_1_Clear_m3223488525 (List_1_t3237804331 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3237804331 *, const RuntimeMethod*))List_1_Clear_m3697625829_gshared)(__this, method);
}
// System.Void BoardManager::SetupScene(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m3361451887 (BoardManager_t1918054749 * __this, int32_t ___level0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::MoveEnemies()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m2997376252 (GameManager_t1536523654 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C" IL2CPP_METHOD_ATTR Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::Add(!0)
inline void List_1_Add_m3099710085 (List_1_t3237804331 * __this, Enemy_t1765729589 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3237804331 *, Enemy_t1765729589 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void GameManager/<MoveEnemies>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ec__Iterator0__ctor_m1101148808 (U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Enemy>::get_Count()
inline int32_t List_1_get_Count_m1829428969 (List_1_t3237804331 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3237804331 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<Enemy>::get_Item(System.Int32)
inline Enemy_t1765729589 * List_1_get_Item_m2343809838 (List_1_t3237804331 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Enemy_t1765729589 * (*) (List_1_t3237804331 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void Enemy::MoveEnemy()
extern "C" IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m2528933447 (Enemy_t1765729589 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Enemy>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m2293281476 (List_1_t3237804331 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3237804331 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m2730968292_gshared)(__this, p0, method);
}
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<GameManager>(!!0)
inline GameManager_t1536523654 * Object_Instantiate_TisGameManager_t1536523654_m3088355940 (RuntimeObject * __this /* static, unused */, GameManager_t1536523654 * p0, const RuntimeMethod* method)
{
	return ((  GameManager_t1536523654 * (*) (RuntimeObject * /* static, unused */, GameManager_t1536523654 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_t3581341831 * Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_t3581341831 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_t939494601 * Component_GetComponent_TisRigidbody2D_t939494601_m1531613439 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_t939494601 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Vector2_op_Addition_m800700293 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
extern "C" IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m3296792737 (RuntimeObject * __this /* static, unused */, LayerMask_t3493934918  p0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RaycastHit2D_t2279581989  Physics2D_Linecast_m2347689996 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, int32_t p2, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * RaycastHit2D_get_transform_m2048267409 (RaycastHit2D_t2279581989 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m4091427040 (MovingObject_t1059405609 * __this, Vector3_t3722313464  ___end0, const RuntimeMethod* method);
// System.Void MovingObject/<SmoothMovement>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ec__Iterator0__ctor_m137902820 (U3CSmoothMovementU3Ec__Iterator0_t2533550195 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
extern "C" IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m1474274574 (Vector3_t3722313464 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  Rigidbody2D_get_position_m2575647076 (Rigidbody2D_t939494601 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
extern "C" IL2CPP_METHOD_ATTR float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  Vector3_MoveTowards_m2786395547 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m1934912072 (Rigidbody2D_t939494601 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
extern "C" IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m2316819917 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
extern "C" IL2CPP_METHOD_ATTR String_t* Component_get_tag_m2716693327 (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.AudioClip>::get_Item(System.Int32)
inline AudioClip_t3680889665 * List_1_get_Item_m1011483163 (List_1_t857997111 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  AudioClip_t3680889665 * (*) (List_1_t857997111 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method);
}
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
extern "C" IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m2638275526 (SoundManager_t2102329059 * __this, AudioClipU5BU5D_t143221404* ___clips0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m3463216446 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2134052629 (Animator_t434523843 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void Player::CheckIfGameOver()
extern "C" IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_m3408464579 (Player_t3266647312 * __this, const RuntimeMethod* method);
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m8272110 (SoundManager_t2102329059 * __this, AudioClip_t3680889665 * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Stop()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Void GameManager::GameOver()
extern "C" IL2CPP_METHOD_ATTR void GameManager_GameOver_m2317540222 (GameManager_t1536523654 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m1310743131 (ScriptableObject_t2528358522 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_clip_m31653938 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
extern "C" IL2CPP_METHOD_ATTR void AudioSource_Play_m48294159 (AudioSource_t3935305588 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C" IL2CPP_METHOD_ATTR void AudioSource_set_pitch_m2413801168 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method);
// System.Void TutorialInfo::StartGame()
extern "C" IL2CPP_METHOD_ATTR void TutorialInfo_StartGame_m3688046553 (TutorialInfo_t3629245769 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C" IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m2794939670 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m3797620966 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Toggle_set_isOn_m3548357404 (Toggle_t2735377061 * __this, bool p0, const RuntimeMethod* method);
// System.Void TutorialInfo::ShowLaunchScreen()
extern "C" IL2CPP_METHOD_ATTR void TutorialInfo_ShowLaunchScreen_m1140610230 (TutorialInfo_t3629245769 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
extern "C" IL2CPP_METHOD_ATTR void Time_set_timeScale_m1127545364 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
extern "C" IL2CPP_METHOD_ATTR void Application_OpenURL_m738341736 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
extern "C" IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m1428293607 (Toggle_t2735377061 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m2842000469 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3235626157 * Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502 (Component_t1923634451 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C" IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method);
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
// System.Void BoardManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BoardManager__ctor_m264717062 (BoardManager_t1918054749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager__ctor_m264717062_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_columns_4(8);
		__this->set_rows_5(8);
		Count_t2164209956 * L_0 = (Count_t2164209956 *)il2cpp_codegen_object_new(Count_t2164209956_il2cpp_TypeInfo_var);
		Count__ctor_m4228117428(L_0, 5, ((int32_t)9), /*hidden argument*/NULL);
		__this->set_wallCount_6(L_0);
		Count_t2164209956 * L_1 = (Count_t2164209956 *)il2cpp_codegen_object_new(Count_t2164209956_il2cpp_TypeInfo_var);
		Count__ctor_m4228117428(L_1, 1, 5, /*hidden argument*/NULL);
		__this->set_foodCount_7(L_1);
		List_1_t899420910 * L_2 = (List_1_t899420910 *)il2cpp_codegen_object_new(List_1_t899420910_il2cpp_TypeInfo_var);
		List_1__ctor_m1536473967(L_2, /*hidden argument*/List_1__ctor_m1536473967_RuntimeMethod_var);
		__this->set_gridPositions_15(L_2);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BoardManager::InitialiseList()
extern "C" IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_m2058516594 (BoardManager_t1918054749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_InitialiseList_m2058516594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		List_1_t899420910 * L_0 = __this->get_gridPositions_15();
		List_1_Clear_m3097985365(L_0, /*hidden argument*/List_1_Clear_m3097985365_RuntimeMethod_var);
		V_0 = 1;
		goto IL_0048;
	}

IL_0012:
	{
		V_1 = 1;
		goto IL_0036;
	}

IL_0019:
	{
		List_1_t899420910 * L_1 = __this->get_gridPositions_15();
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector3_t3722313464  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m3353183577((&L_4), (((float)((float)L_2))), (((float)((float)L_3))), (0.0f), /*hidden argument*/NULL);
		List_1_Add_m1524640104(L_1, L_4, /*hidden argument*/List_1_Add_m1524640104_RuntimeMethod_var);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0036:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->get_rows_5();
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)))))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = __this->get_columns_4();
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)))))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void BoardManager::BoardSetup()
extern "C" IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m4142678938 (BoardManager_t1918054749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_BoardSetup_m4142678938_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t1113636619 * V_2 = NULL;
	GameObject_t1113636619 * V_3 = NULL;
	{
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral2683480893, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		__this->set_boardHolder_14(L_1);
		V_0 = (-1);
		goto IL_00b6;
	}

IL_001c:
	{
		V_1 = (-1);
		goto IL_00a4;
	}

IL_0023:
	{
		GameObjectU5BU5D_t3328599146* L_2 = __this->get_floorTiles_9();
		GameObjectU5BU5D_t3328599146* L_3 = __this->get_floorTiles_9();
		int32_t L_4 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))), /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		GameObject_t1113636619 * L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_columns_4();
		if ((((int32_t)L_8) == ((int32_t)L_9)))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_11 = V_1;
		int32_t L_12 = __this->get_rows_5();
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_0075;
		}
	}

IL_005f:
	{
		GameObjectU5BU5D_t3328599146* L_13 = __this->get_outerWallTiles_13();
		GameObjectU5BU5D_t3328599146* L_14 = __this->get_outerWallTiles_13();
		int32_t L_15 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))), /*hidden argument*/NULL);
		int32_t L_16 = L_15;
		GameObject_t1113636619 * L_17 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		V_2 = L_17;
	}

IL_0075:
	{
		GameObject_t1113636619 * L_18 = V_2;
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		Vector3_t3722313464  L_21;
		memset(&L_21, 0, sizeof(L_21));
		Vector3__ctor_m3353183577((&L_21), (((float)((float)L_19))), (((float)((float)L_20))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_22 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		GameObject_t1113636619 * L_23 = Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_18, L_21, L_22, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		V_3 = L_23;
		GameObject_t1113636619 * L_24 = V_3;
		Transform_t3600365921 * L_25 = GameObject_get_transform_m1369836730(L_24, /*hidden argument*/NULL);
		Transform_t3600365921 * L_26 = __this->get_boardHolder_14();
		Transform_SetParent_m381167889(L_25, L_26, /*hidden argument*/NULL);
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a4:
	{
		int32_t L_28 = V_1;
		int32_t L_29 = __this->get_rows_5();
		if ((((int32_t)L_28) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)))))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00b6:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = __this->get_columns_4();
		if ((((int32_t)L_31) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)))))
		{
			goto IL_001c;
		}
	}
	{
		return;
	}
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  BoardManager_RandomPosition_m3015571429 (BoardManager_t1918054749 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_RandomPosition_m3015571429_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		List_1_t899420910 * L_0 = __this->get_gridPositions_15();
		int32_t L_1 = List_1_get_Count_m576380744(L_0, /*hidden argument*/List_1_get_Count_m576380744_RuntimeMethod_var);
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, 0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		List_1_t899420910 * L_3 = __this->get_gridPositions_15();
		int32_t L_4 = V_0;
		Vector3_t3722313464  L_5 = List_1_get_Item_m200663048(L_3, L_4, /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
		V_1 = L_5;
		List_1_t899420910 * L_6 = __this->get_gridPositions_15();
		int32_t L_7 = V_0;
		List_1_RemoveAt_m1985601461(L_6, L_7, /*hidden argument*/List_1_RemoveAt_m1985601461_RuntimeMethod_var);
		Vector3_t3722313464  L_8 = V_1;
		return L_8;
	}
}
// System.Void BoardManager::LayoutObject(UnityEngine.GameObject[],System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BoardManager_LayoutObject_m3905658523 (BoardManager_t1918054749 * __this, GameObjectU5BU5D_t3328599146* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_LayoutObject_m3905658523_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	GameObject_t1113636619 * V_3 = NULL;
	{
		int32_t L_0 = ___minimum1;
		int32_t L_1 = ___maximum2;
		int32_t L_2 = Random_Range_m4054026115(NULL /*static, unused*/, L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_0035;
	}

IL_0011:
	{
		Vector3_t3722313464  L_3 = BoardManager_RandomPosition_m3015571429(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		GameObjectU5BU5D_t3328599146* L_4 = ___tileArray0;
		GameObjectU5BU5D_t3328599146* L_5 = ___tileArray0;
		int32_t L_6 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))), /*hidden argument*/NULL);
		int32_t L_7 = L_6;
		GameObject_t1113636619 * L_8 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		GameObject_t1113636619 * L_9 = V_3;
		Vector3_t3722313464  L_10 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_11 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0011;
		}
	}
	{
		return;
	}
}
// System.Void BoardManager::SetupScene(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m3361451887 (BoardManager_t1918054749 * __this, int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoardManager_SetupScene_m3361451887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		BoardManager_BoardSetup_m4142678938(__this, /*hidden argument*/NULL);
		BoardManager_InitialiseList_m2058516594(__this, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_wallTiles_10();
		Count_t2164209956 * L_1 = __this->get_wallCount_6();
		int32_t L_2 = L_1->get_minimum_0();
		Count_t2164209956 * L_3 = __this->get_wallCount_6();
		int32_t L_4 = L_3->get_maximum_1();
		BoardManager_LayoutObject_m3905658523(__this, L_0, L_2, L_4, /*hidden argument*/NULL);
		GameObjectU5BU5D_t3328599146* L_5 = __this->get_foodTiles_11();
		Count_t2164209956 * L_6 = __this->get_foodCount_7();
		int32_t L_7 = L_6->get_minimum_0();
		Count_t2164209956 * L_8 = __this->get_foodCount_7();
		int32_t L_9 = L_8->get_maximum_1();
		BoardManager_LayoutObject_m3905658523(__this, L_5, L_7, L_9, /*hidden argument*/NULL);
		int32_t L_10 = ___level0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_11 = Mathf_Log_m2177375338(NULL /*static, unused*/, (((float)((float)L_10))), (2.0f), /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_11)));
		GameObjectU5BU5D_t3328599146* L_12 = __this->get_enemyTiles_12();
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		BoardManager_LayoutObject_m3905658523(__this, L_12, L_13, L_14, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_15 = __this->get_exit_8();
		int32_t L_16 = __this->get_columns_4();
		int32_t L_17 = __this->get_rows_5();
		Vector3_t3722313464  L_18;
		memset(&L_18, 0, sizeof(L_18));
		Vector3__ctor_m3353183577((&L_18), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1))))), (((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1))))), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_19 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_15, L_18, L_19, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
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
// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Count__ctor_m4228117428 (Count_t2164209956 * __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___min0;
		__this->set_minimum_0(L_0);
		int32_t L_1 = ___max1;
		__this->set_maximum_1(L_1);
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
// System.Void Enemy::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Enemy__ctor_m2535212804 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	{
		__this->set_wallDamage_15(1);
		MovingObject__ctor_m4192820200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::Start()
extern "C" IL2CPP_METHOD_ATTR void Enemy_Start_m3612231678 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_m3612231678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instace_7();
		GameManager_AddEnemyToList_m69037753(L_0, __this, /*hidden argument*/NULL);
		Animator_t434523843 * L_1 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_animator_10(L_1);
		GameObject_t1113636619 * L_2 = GameObject_FindGameObjectWithTag_m2129039296(NULL /*static, unused*/, _stringLiteral2261822918, /*hidden argument*/NULL);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		__this->set_target_11(L_3);
		MovingObject_Start_m1751232218(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::MoveEnemy()
extern "C" IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_m2528933447 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_MoveEnemy_m2528933447_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t3722313464  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		Transform_t3600365921 * L_0 = __this->get_target_11();
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		float L_2 = (&V_2)->get_x_2();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		float L_5 = (&V_3)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = fabsf(((float)il2cpp_codegen_subtract((float)L_2, (float)L_5)));
		if ((!(((float)L_6) < ((float)(1.401298E-45f)))))
		{
			goto IL_0074;
		}
	}
	{
		Transform_t3600365921 * L_7 = __this->get_target_11();
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = (&V_4)->get_y_3();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		float L_12 = (&V_5)->get_y_3();
		if ((!(((float)L_9) > ((float)L_12))))
		{
			goto IL_006d;
		}
	}
	{
		G_B4_0 = 1;
		goto IL_006e;
	}

IL_006d:
	{
		G_B4_0 = (-1);
	}

IL_006e:
	{
		V_1 = G_B4_0;
		goto IL_00a9;
	}

IL_0074:
	{
		Transform_t3600365921 * L_13 = __this->get_target_11();
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_6 = L_14;
		float L_15 = (&V_6)->get_x_2();
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		V_7 = L_17;
		float L_18 = (&V_7)->get_x_2();
		if ((!(((float)L_15) > ((float)L_18))))
		{
			goto IL_00a7;
		}
	}
	{
		G_B8_0 = 1;
		goto IL_00a8;
	}

IL_00a7:
	{
		G_B8_0 = (-1);
	}

IL_00a8:
	{
		V_0 = G_B8_0;
	}

IL_00a9:
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisPlayer_t3266647312_m3614727677_RuntimeMethod_var, __this, L_19, L_20);
		return;
	}
}
// System.Void Enemy::Attacked(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Enemy_Attacked_m2656376888 (Enemy_t1765729589 * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_HP_16();
		int32_t L_1 = ___loss0;
		__this->set_HP_16(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		Enemy_CheckIfDead_m2657785876(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Enemy::CheckIfDead()
extern "C" IL2CPP_METHOD_ATTR void Enemy_CheckIfDead_m2657785876 (Enemy_t1765729589 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_CheckIfDead_m2657785876_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_HP_16();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0017:
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
// System.Void GameManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GameManager__ctor_m180891015 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		__this->set_levelStartDelay_4((2.0f));
		__this->set_turnDelay_5((0.1f));
		__this->set_playerFoodPoint_8(((int32_t)100));
		__this->set_playerTurn_9((bool)1);
		__this->set_level_12(1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void GameManager_Awake_m2466247815 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_m2466247815_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instace_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->set_instace_7(__this);
		goto IL_0036;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_2 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instace_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		List_1_t3237804331 * L_6 = (List_1_t3237804331 *)il2cpp_codegen_object_new(List_1_t3237804331_il2cpp_TypeInfo_var);
		List_1__ctor_m1084649037(L_6, /*hidden argument*/List_1__ctor_m1084649037_RuntimeMethod_var);
		__this->set_enemies_13(L_6);
		BoardManager_t1918054749 * L_7 = Component_GetComponent_TisBoardManager_t1918054749_m2055188458(__this, /*hidden argument*/Component_GetComponent_TisBoardManager_t1918054749_m2055188458_RuntimeMethod_var);
		__this->set_boardScript_6(L_7);
		GameManager_InitGame_m3135065078(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::OnLevelWasLoaded()
extern "C" IL2CPP_METHOD_ATTR void GameManager_OnLevelWasLoaded_m3802559286 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_level_12();
		__this->set_level_12(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		GameManager_InitGame_m3135065078(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::GameOver()
extern "C" IL2CPP_METHOD_ATTR void GameManager_GameOver_m2317540222 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_GameOver_m2317540222_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t1901882714 * L_0 = __this->get_levelText_10();
		int32_t L_1 = __this->get_level_12();
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral65781805, L_3, _stringLiteral3996524808, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		GameObject_t1113636619 * L_5 = __this->get_levelImage_11();
		GameObject_SetActive_m796801857(L_5, (bool)1, /*hidden argument*/NULL);
		Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::InitGame()
extern "C" IL2CPP_METHOD_ATTR void GameManager_InitGame_m3135065078 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_InitGame_m3135065078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_doingSetup_15((bool)1);
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral2881472559, /*hidden argument*/NULL);
		__this->set_levelImage_11(L_0);
		GameObject_t1113636619 * L_1 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral984116472, /*hidden argument*/NULL);
		Text_t1901882714 * L_2 = GameObject_GetComponent_TisText_t1901882714_m2114913816(L_1, /*hidden argument*/GameObject_GetComponent_TisText_t1901882714_m2114913816_RuntimeMethod_var);
		__this->set_levelText_10(L_2);
		Text_t1901882714 * L_3 = __this->get_levelText_10();
		int32_t L_4 = __this->get_level_12();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral778109049, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		GameObject_t1113636619 * L_8 = __this->get_levelImage_11();
		GameObject_SetActive_m796801857(L_8, (bool)1, /*hidden argument*/NULL);
		float L_9 = __this->get_levelStartDelay_4();
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral2964773526, L_9, /*hidden argument*/NULL);
		List_1_t3237804331 * L_10 = __this->get_enemies_13();
		List_1_Clear_m3223488525(L_10, /*hidden argument*/List_1_Clear_m3223488525_RuntimeMethod_var);
		BoardManager_t1918054749 * L_11 = __this->get_boardScript_6();
		int32_t L_12 = __this->get_level_12();
		BoardManager_SetupScene_m3361451887(L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::HideLevelImage()
extern "C" IL2CPP_METHOD_ATTR void GameManager_HideLevelImage_m2436177929 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_levelImage_11();
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		__this->set_doingSetup_15((bool)0);
		return;
	}
}
// System.Void GameManager::Update()
extern "C" IL2CPP_METHOD_ATTR void GameManager_Update_m1981238775 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_playerTurn_9();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = __this->get_enemiesMoving_14();
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->get_doingSetup_15();
		if (!L_2)
		{
			goto IL_0022;
		}
	}

IL_0021:
	{
		return;
	}

IL_0022:
	{
		RuntimeObject* L_3 = GameManager_MoveEnemies_m2997376252(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::AddEnemyToList(Enemy)
extern "C" IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_m69037753 (GameManager_t1536523654 * __this, Enemy_t1765729589 * ___script0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_AddEnemyToList_m69037753_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t3237804331 * L_0 = __this->get_enemies_13();
		Enemy_t1765729589 * L_1 = ___script0;
		List_1_Add_m3099710085(L_0, L_1, /*hidden argument*/List_1_Add_m3099710085_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator GameManager::MoveEnemies()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m2997376252 (GameManager_t1536523654 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_MoveEnemies_m2997376252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * V_0 = NULL;
	{
		U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * L_0 = (U3CMoveEnemiesU3Ec__Iterator0_t1756774843 *)il2cpp_codegen_object_new(U3CMoveEnemiesU3Ec__Iterator0_t1756774843_il2cpp_TypeInfo_var);
		U3CMoveEnemiesU3Ec__Iterator0__ctor_m1101148808(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * L_1 = V_0;
		L_1->set_U24this_1(__this);
		U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * L_2 = V_0;
		return L_2;
	}
}
// System.Void GameManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void GameManager__cctor_m4243923930 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
// System.Void GameManager/<MoveEnemies>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ec__Iterator0__ctor_m1101148808 (U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameManager/<MoveEnemies>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CMoveEnemiesU3Ec__Iterator0_MoveNext_m4133326528 (U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveEnemiesU3Ec__Iterator0_MoveNext_m4133326528_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0029;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_009e;
			}
			case 3:
			{
				goto IL_0120;
			}
		}
	}
	{
		goto IL_01a4;
	}

IL_0029:
	{
		GameManager_t1536523654 * L_2 = __this->get_U24this_1();
		L_2->set_enemiesMoving_14((bool)1);
		GameManager_t1536523654 * L_3 = __this->get_U24this_1();
		float L_4 = L_3->get_turnDelay_5();
		WaitForSeconds_t1699091251 * L_5 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U24current_2(L_5);
		bool L_6 = __this->get_U24disposing_3();
		if (L_6)
		{
			goto IL_005a;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_005a:
	{
		goto IL_01a6;
	}

IL_005f:
	{
		GameManager_t1536523654 * L_7 = __this->get_U24this_1();
		List_1_t3237804331 * L_8 = L_7->get_enemies_13();
		int32_t L_9 = List_1_get_Count_m1829428969(L_8, /*hidden argument*/List_1_get_Count_m1829428969_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_009e;
		}
	}
	{
		GameManager_t1536523654 * L_10 = __this->get_U24this_1();
		float L_11 = L_10->get_turnDelay_5();
		WaitForSeconds_t1699091251 * L_12 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_12, L_11, /*hidden argument*/NULL);
		__this->set_U24current_2(L_12);
		bool L_13 = __this->get_U24disposing_3();
		if (L_13)
		{
			goto IL_0099;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_0099:
	{
		goto IL_01a6;
	}

IL_009e:
	{
		__this->set_U3CiU3E__1_0(0);
		goto IL_016a;
	}

IL_00aa:
	{
		GameManager_t1536523654 * L_14 = __this->get_U24this_1();
		List_1_t3237804331 * L_15 = L_14->get_enemies_13();
		int32_t L_16 = __this->get_U3CiU3E__1_0();
		Enemy_t1765729589 * L_17 = List_1_get_Item_m2343809838(L_15, L_16, /*hidden argument*/List_1_get_Item_m2343809838_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0125;
		}
	}
	{
		GameManager_t1536523654 * L_19 = __this->get_U24this_1();
		List_1_t3237804331 * L_20 = L_19->get_enemies_13();
		int32_t L_21 = __this->get_U3CiU3E__1_0();
		Enemy_t1765729589 * L_22 = List_1_get_Item_m2343809838(L_20, L_21, /*hidden argument*/List_1_get_Item_m2343809838_RuntimeMethod_var);
		Enemy_MoveEnemy_m2528933447(L_22, /*hidden argument*/NULL);
		GameManager_t1536523654 * L_23 = __this->get_U24this_1();
		List_1_t3237804331 * L_24 = L_23->get_enemies_13();
		int32_t L_25 = __this->get_U3CiU3E__1_0();
		Enemy_t1765729589 * L_26 = List_1_get_Item_m2343809838(L_24, L_25, /*hidden argument*/List_1_get_Item_m2343809838_RuntimeMethod_var);
		float L_27 = ((MovingObject_t1059405609 *)L_26)->get_moveTime_4();
		WaitForSeconds_t1699091251 * L_28 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_28, L_27, /*hidden argument*/NULL);
		__this->set_U24current_2(L_28);
		bool L_29 = __this->get_U24disposing_3();
		if (L_29)
		{
			goto IL_011b;
		}
	}
	{
		__this->set_U24PC_4(3);
	}

IL_011b:
	{
		goto IL_01a6;
	}

IL_0120:
	{
		goto IL_015c;
	}

IL_0125:
	{
		GameManager_t1536523654 * L_30 = __this->get_U24this_1();
		List_1_t3237804331 * L_31 = L_30->get_enemies_13();
		int32_t L_32 = __this->get_U3CiU3E__1_0();
		Enemy_t1765729589 * L_33 = List_1_get_Item_m2343809838(L_31, L_32, /*hidden argument*/List_1_get_Item_m2343809838_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_34 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_33, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_015c;
		}
	}
	{
		GameManager_t1536523654 * L_35 = __this->get_U24this_1();
		List_1_t3237804331 * L_36 = L_35->get_enemies_13();
		int32_t L_37 = __this->get_U3CiU3E__1_0();
		List_1_RemoveAt_m2293281476(L_36, L_37, /*hidden argument*/List_1_RemoveAt_m2293281476_RuntimeMethod_var);
	}

IL_015c:
	{
		int32_t L_38 = __this->get_U3CiU3E__1_0();
		__this->set_U3CiU3E__1_0(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)));
	}

IL_016a:
	{
		int32_t L_39 = __this->get_U3CiU3E__1_0();
		GameManager_t1536523654 * L_40 = __this->get_U24this_1();
		List_1_t3237804331 * L_41 = L_40->get_enemies_13();
		int32_t L_42 = List_1_get_Count_m1829428969(L_41, /*hidden argument*/List_1_get_Count_m1829428969_RuntimeMethod_var);
		if ((((int32_t)L_39) < ((int32_t)L_42)))
		{
			goto IL_00aa;
		}
	}
	{
		GameManager_t1536523654 * L_43 = __this->get_U24this_1();
		L_43->set_playerTurn_9((bool)1);
		GameManager_t1536523654 * L_44 = __this->get_U24this_1();
		L_44->set_enemiesMoving_14((bool)0);
		__this->set_U24PC_4((-1));
	}

IL_01a4:
	{
		return (bool)0;
	}

IL_01a6:
	{
		return (bool)1;
	}
}
// System.Object GameManager/<MoveEnemies>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1323242125 (U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object GameManager/<MoveEnemies>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CMoveEnemiesU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2247027718 (U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void GameManager/<MoveEnemies>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ec__Iterator0_Dispose_m602221333 (U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void GameManager/<MoveEnemies>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ec__Iterator0_Reset_m3640555388 (U3CMoveEnemiesU3Ec__Iterator0_t1756774843 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CMoveEnemiesU3Ec__Iterator0_Reset_m3640555388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CMoveEnemiesU3Ec__Iterator0_Reset_m3640555388_RuntimeMethod_var);
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
// System.Void Loader::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Loader__ctor_m2381677123 (Loader_t243995532 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Loader::Awake()
extern "C" IL2CPP_METHOD_ATTR void Loader_Awake_m115609444 (Loader_t243995532 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Loader_Awake_m115609444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instace_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		GameManager_t1536523654 * L_2 = __this->get_gameManager_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameManager_t1536523654_m3088355940(NULL /*static, unused*/, L_2, /*hidden argument*/Object_Instantiate_TisGameManager_t1536523654_m3088355940_RuntimeMethod_var);
	}

IL_001c:
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
// System.Void MovingObject::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MovingObject__ctor_m4192820200 (MovingObject_t1059405609 * __this, const RuntimeMethod* method)
{
	{
		__this->set_moveTime_4((0.1f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MovingObject::Start()
extern "C" IL2CPP_METHOD_ATTR void MovingObject_Start_m1751232218 (MovingObject_t1059405609 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovingObject_Start_m1751232218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BoxCollider2D_t3581341831 * L_0 = Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273(__this, /*hidden argument*/Component_GetComponent_TisBoxCollider2D_t3581341831_m414724273_RuntimeMethod_var);
		__this->set_boxCollider_6(L_0);
		Rigidbody2D_t939494601 * L_1 = Component_GetComponent_TisRigidbody2D_t939494601_m1531613439(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t939494601_m1531613439_RuntimeMethod_var);
		__this->set_rb2D_7(L_1);
		float L_2 = __this->get_moveTime_4();
		__this->set_inverseMoveTime_8(((float)((float)(1.0f)/(float)L_2)));
		return;
	}
}
// System.Boolean MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
extern "C" IL2CPP_METHOD_ATTR bool MovingObject_Move_m344826299 (MovingObject_t1059405609 * __this, int32_t ___xDir0, int32_t ___yDir1, RaycastHit2D_t2279581989 * ___hit2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovingObject_Move_m344826299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_2 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector2_t2156229523  L_3 = V_0;
		int32_t L_4 = ___xDir0;
		int32_t L_5 = ___yDir1;
		Vector2_t2156229523  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3970636864((&L_6), (((float)((float)L_4))), (((float)((float)L_5))), /*hidden argument*/NULL);
		Vector2_t2156229523  L_7 = Vector2_op_Addition_m800700293(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		BoxCollider2D_t3581341831 * L_8 = __this->get_boxCollider_6();
		Behaviour_set_enabled_m20417929(L_8, (bool)0, /*hidden argument*/NULL);
		RaycastHit2D_t2279581989 * L_9 = ___hit2;
		Vector2_t2156229523  L_10 = V_0;
		Vector2_t2156229523  L_11 = V_1;
		LayerMask_t3493934918  L_12 = __this->get_blockingLayer_5();
		int32_t L_13 = LayerMask_op_Implicit_m3296792737(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1528932956_il2cpp_TypeInfo_var);
		RaycastHit2D_t2279581989  L_14 = Physics2D_Linecast_m2347689996(NULL /*static, unused*/, L_10, L_11, L_13, /*hidden argument*/NULL);
		*(RaycastHit2D_t2279581989 *)L_9 = L_14;
		BoxCollider2D_t3581341831 * L_15 = __this->get_boxCollider_6();
		Behaviour_set_enabled_m20417929(L_15, (bool)1, /*hidden argument*/NULL);
		RaycastHit2D_t2279581989 * L_16 = ___hit2;
		Transform_t3600365921 * L_17 = RaycastHit2D_get_transform_m2048267409((RaycastHit2D_t2279581989 *)L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_17, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0077;
		}
	}
	{
		Vector2_t2156229523  L_19 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_20 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		RuntimeObject* L_21 = MovingObject_SmoothMovement_m4091427040(__this, L_20, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_21, /*hidden argument*/NULL);
		return (bool)1;
	}

IL_0077:
	{
		return (bool)0;
	}
}
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_m4091427040 (MovingObject_t1059405609 * __this, Vector3_t3722313464  ___end0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MovingObject_SmoothMovement_m4091427040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CSmoothMovementU3Ec__Iterator0_t2533550195 * V_0 = NULL;
	{
		U3CSmoothMovementU3Ec__Iterator0_t2533550195 * L_0 = (U3CSmoothMovementU3Ec__Iterator0_t2533550195 *)il2cpp_codegen_object_new(U3CSmoothMovementU3Ec__Iterator0_t2533550195_il2cpp_TypeInfo_var);
		U3CSmoothMovementU3Ec__Iterator0__ctor_m137902820(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSmoothMovementU3Ec__Iterator0_t2533550195 * L_1 = V_0;
		Vector3_t3722313464  L_2 = ___end0;
		L_1->set_end_0(L_2);
		U3CSmoothMovementU3Ec__Iterator0_t2533550195 * L_3 = V_0;
		L_3->set_U24this_3(__this);
		U3CSmoothMovementU3Ec__Iterator0_t2533550195 * L_4 = V_0;
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
// System.Void MovingObject/<SmoothMovement>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ec__Iterator0__ctor_m137902820 (U3CSmoothMovementU3Ec__Iterator0_t2533550195 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MovingObject/<SmoothMovement>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CSmoothMovementU3Ec__Iterator0_MoveNext_m1888986924 (U3CSmoothMovementU3Ec__Iterator0_t2533550195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSmoothMovementU3Ec__Iterator0_MoveNext_m1888986924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00e5;
			}
		}
	}
	{
		goto IL_00fc;
	}

IL_0021:
	{
		MovingObject_t1059405609 * L_2 = __this->get_U24this_3();
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector3_t3722313464  L_5 = __this->get_end_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&V_1), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E__0_1(L_7);
		goto IL_00e5;
	}

IL_004f:
	{
		MovingObject_t1059405609 * L_8 = __this->get_U24this_3();
		Rigidbody2D_t939494601 * L_9 = L_8->get_rb2D_7();
		Vector2_t2156229523  L_10 = Rigidbody2D_get_position_m2575647076(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Vector3_t3722313464  L_12 = __this->get_end_0();
		MovingObject_t1059405609 * L_13 = __this->get_U24this_3();
		float L_14 = L_13->get_inverseMoveTime_8();
		float L_15 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_11, L_12, ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15)), /*hidden argument*/NULL);
		__this->set_U3CnewPositionU3E__1_2(L_16);
		MovingObject_t1059405609 * L_17 = __this->get_U24this_3();
		Rigidbody2D_t939494601 * L_18 = L_17->get_rb2D_7();
		Vector3_t3722313464  L_19 = __this->get_U3CnewPositionU3E__1_2();
		Vector2_t2156229523  L_20 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m1934912072(L_18, L_20, /*hidden argument*/NULL);
		MovingObject_t1059405609 * L_21 = __this->get_U24this_3();
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(L_21, /*hidden argument*/NULL);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		Vector3_t3722313464  L_24 = __this->get_end_0();
		Vector3_t3722313464  L_25 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		float L_26 = Vector3_get_sqrMagnitude_m1474274574((Vector3_t3722313464 *)(&V_2), /*hidden argument*/NULL);
		__this->set_U3CsqrRemainingDistanceU3E__0_1(L_26);
		__this->set_U24current_4(NULL);
		bool L_27 = __this->get_U24disposing_5();
		if (L_27)
		{
			goto IL_00e0;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_00e0:
	{
		goto IL_00fe;
	}

IL_00e5:
	{
		float L_28 = __this->get_U3CsqrRemainingDistanceU3E__0_1();
		if ((((float)L_28) > ((float)(1.401298E-45f))))
		{
			goto IL_004f;
		}
	}
	{
		__this->set_U24PC_6((-1));
	}

IL_00fc:
	{
		return (bool)0;
	}

IL_00fe:
	{
		return (bool)1;
	}
}
// System.Object MovingObject/<SmoothMovement>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2671081902 (U3CSmoothMovementU3Ec__Iterator0_t2533550195 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object MovingObject/<SmoothMovement>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CSmoothMovementU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m4175371609 (U3CSmoothMovementU3Ec__Iterator0_t2533550195 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void MovingObject/<SmoothMovement>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ec__Iterator0_Dispose_m4252898365 (U3CSmoothMovementU3Ec__Iterator0_t2533550195 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void MovingObject/<SmoothMovement>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ec__Iterator0_Reset_m1022227904 (U3CSmoothMovementU3Ec__Iterator0_t2533550195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CSmoothMovementU3Ec__Iterator0_Reset_m1022227904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CSmoothMovementU3Ec__Iterator0_Reset_m1022227904_RuntimeMethod_var);
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
// System.Void Player::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Player__ctor_m509448900 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		__this->set_wallDamage_9(1);
		__this->set_enemyDamage_10(((int32_t)10));
		__this->set_pointPerFood_11(((int32_t)10));
		__this->set_pointPerSoda_12(((int32_t)20));
		__this->set_restartLevelDelay_13((1.0f));
		MovingObject__ctor_m4192820200(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Start()
extern "C" IL2CPP_METHOD_ATTR void Player_Start_m250748966 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_m250748966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = Component_GetComponent_TisAnimator_t434523843_m2351447238(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t434523843_m2351447238_RuntimeMethod_var);
		__this->set_animator_16(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_1 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instace_7();
		int32_t L_2 = L_1->get_playerFoodPoint_8();
		__this->set_food_17(L_2);
		Text_t1901882714 * L_3 = __this->get_foodText_14();
		int32_t L_4 = __this->get_food_17();
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2376712629, L_6, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		MovingObject_Start_m1751232218(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::OnDisable()
extern "C" IL2CPP_METHOD_ATTR void Player_OnDisable_m1728043007 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnDisable_m1728043007_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instace_7();
		int32_t L_1 = __this->get_food_17();
		L_0->set_playerFoodPoint_8(L_1);
		return;
	}
}
// System.Void Player::Update()
extern "C" IL2CPP_METHOD_ATTR void Player_Update_m2111558832 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Update_m2111558832_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_0 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instace_7();
		bool L_1 = L_0->get_playerTurn_9();
		if (L_1)
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0010:
	{
		V_0 = 0;
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		float L_2 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, _stringLiteral1828639942, /*hidden argument*/NULL);
		V_0 = (((int32_t)((int32_t)L_2)));
		float L_3 = Input_GetAxisRaw_m2316819917(NULL /*static, unused*/, _stringLiteral2984908384, /*hidden argument*/NULL);
		V_1 = (((int32_t)((int32_t)L_3)));
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		V_1 = 0;
	}

IL_0034:
	{
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_005e;
		}
	}

IL_0040:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisWall_t2206666577_m1949303063_RuntimeMethod_var, __this, L_7, L_8);
		int32_t L_9 = __this->get_food_17();
		__this->set_food_17(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisEnemy_t1765729589_m2025003302_RuntimeMethod_var, __this, L_10, L_11);
	}

IL_005e:
	{
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_m1893340054 (Player_t3266647312 * __this, Collider2D_t2806799626 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnTriggerEnter2D_m1893340054_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t2806799626 * L_0 = ___other0;
		String_t* L_1 = Component_get_tag_m2716693327(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m920492651(NULL /*static, unused*/, L_1, _stringLiteral3136113192, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		float L_3 = __this->get_restartLevelDelay_13();
		MonoBehaviour_Invoke_m4227543964(__this, _stringLiteral1108043616, L_3, /*hidden argument*/NULL);
		Behaviour_set_enabled_m20417929(__this, (bool)0, /*hidden argument*/NULL);
		goto IL_017f;
	}

IL_0032:
	{
		Collider2D_t2806799626 * L_4 = ___other0;
		String_t* L_5 = Component_get_tag_m2716693327(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m920492651(NULL /*static, unused*/, L_5, _stringLiteral3564307913, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00db;
		}
	}
	{
		int32_t L_7 = __this->get_food_17();
		int32_t L_8 = __this->get_pointPerFood_11();
		__this->set_food_17(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)));
		Text_t1901882714 * L_9 = __this->get_foodText_14();
		ObjectU5BU5D_t2843939325* L_10 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		ArrayElementTypeCheck (L_11, _stringLiteral3452614533);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614533);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		int32_t L_13 = __this->get_pointPerFood_11();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_15);
		ObjectU5BU5D_t2843939325* L_16 = L_12;
		ArrayElementTypeCheck (L_16, _stringLiteral1237693985);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1237693985);
		ObjectU5BU5D_t2843939325* L_17 = L_16;
		int32_t L_18 = __this->get_food_17();
		int32_t L_19 = L_18;
		RuntimeObject * L_20 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_19);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m2971454694(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_21);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t2102329059_il2cpp_TypeInfo_var);
		SoundManager_t2102329059 * L_22 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t143221404* L_23 = (AudioClipU5BU5D_t143221404*)SZArrayNew(AudioClipU5BU5D_t143221404_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t143221404* L_24 = L_23;
		List_1_t857997111 * L_25 = __this->get_sounds_15();
		AudioClip_t3680889665 * L_26 = List_1_get_Item_m1011483163(L_25, 2, /*hidden argument*/List_1_get_Item_m1011483163_RuntimeMethod_var);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (AudioClip_t3680889665 *)L_26);
		AudioClipU5BU5D_t143221404* L_27 = L_24;
		List_1_t857997111 * L_28 = __this->get_sounds_15();
		AudioClip_t3680889665 * L_29 = List_1_get_Item_m1011483163(L_28, 3, /*hidden argument*/List_1_get_Item_m1011483163_RuntimeMethod_var);
		ArrayElementTypeCheck (L_27, L_29);
		(L_27)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (AudioClip_t3680889665 *)L_29);
		SoundManager_RandomizeSfx_m2638275526(L_22, L_27, /*hidden argument*/NULL);
		Collider2D_t2806799626 * L_30 = ___other0;
		GameObject_t1113636619 * L_31 = Component_get_gameObject_m442555142(L_30, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_31, (bool)0, /*hidden argument*/NULL);
		goto IL_017f;
	}

IL_00db:
	{
		Collider2D_t2806799626 * L_32 = ___other0;
		String_t* L_33 = Component_get_tag_m2716693327(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_34 = String_op_Equality_m920492651(NULL /*static, unused*/, L_33, _stringLiteral2749844707, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_35 = __this->get_food_17();
		int32_t L_36 = __this->get_pointPerSoda_12();
		__this->set_food_17(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)L_36)));
		Text_t1901882714 * L_37 = __this->get_foodText_14();
		ObjectU5BU5D_t2843939325* L_38 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_39 = L_38;
		ArrayElementTypeCheck (L_39, _stringLiteral3452614533);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614533);
		ObjectU5BU5D_t2843939325* L_40 = L_39;
		int32_t L_41 = __this->get_pointPerSoda_12();
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_42);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_43);
		ObjectU5BU5D_t2843939325* L_44 = L_40;
		ArrayElementTypeCheck (L_44, _stringLiteral1237693985);
		(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1237693985);
		ObjectU5BU5D_t2843939325* L_45 = L_44;
		int32_t L_46 = __this->get_food_17();
		int32_t L_47 = L_46;
		RuntimeObject * L_48 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_47);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_48);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_49 = String_Concat_m2971454694(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_49);
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t2102329059_il2cpp_TypeInfo_var);
		SoundManager_t2102329059 * L_50 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t143221404* L_51 = (AudioClipU5BU5D_t143221404*)SZArrayNew(AudioClipU5BU5D_t143221404_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t143221404* L_52 = L_51;
		List_1_t857997111 * L_53 = __this->get_sounds_15();
		AudioClip_t3680889665 * L_54 = List_1_get_Item_m1011483163(L_53, 4, /*hidden argument*/List_1_get_Item_m1011483163_RuntimeMethod_var);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (AudioClip_t3680889665 *)L_54);
		AudioClipU5BU5D_t143221404* L_55 = L_52;
		List_1_t857997111 * L_56 = __this->get_sounds_15();
		AudioClip_t3680889665 * L_57 = List_1_get_Item_m1011483163(L_56, 5, /*hidden argument*/List_1_get_Item_m1011483163_RuntimeMethod_var);
		ArrayElementTypeCheck (L_55, L_57);
		(L_55)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (AudioClip_t3680889665 *)L_57);
		SoundManager_RandomizeSfx_m2638275526(L_50, L_55, /*hidden argument*/NULL);
		Collider2D_t2806799626 * L_58 = ___other0;
		GameObject_t1113636619 * L_59 = Component_get_gameObject_m442555142(L_58, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_59, (bool)0, /*hidden argument*/NULL);
	}

IL_017f:
	{
		return;
	}
}
// System.Void Player::Restart()
extern "C" IL2CPP_METHOD_ATTR void Player_Restart_m3729153021 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	{
		SceneManager_LoadScene_m3463216446(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::LoseFood(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Player_LoseFood_m445858792 (Player_t3266647312 * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_LoseFood_m445858792_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Animator_t434523843 * L_0 = __this->get_animator_16();
		Animator_SetTrigger_m2134052629(L_0, _stringLiteral762081554, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_food_17();
		int32_t L_2 = ___loss0;
		__this->set_food_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
		Text_t1901882714 * L_3 = __this->get_foodText_14();
		ObjectU5BU5D_t2843939325* L_4 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral3452614531);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3452614531);
		ObjectU5BU5D_t2843939325* L_6 = L_5;
		int32_t L_7 = ___loss0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_t2843939325* L_10 = L_6;
		ArrayElementTypeCheck (L_10, _stringLiteral1237693985);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1237693985);
		ObjectU5BU5D_t2843939325* L_11 = L_10;
		int32_t L_12 = __this->get_food_17();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_13);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2971454694(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_15);
		Player_CheckIfGameOver_m3408464579(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::CheckIfGameOver()
extern "C" IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_m3408464579 (Player_t3266647312 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_CheckIfGameOver_m3408464579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_food_17();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t2102329059_il2cpp_TypeInfo_var);
		SoundManager_t2102329059 * L_1 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_instance_6();
		List_1_t857997111 * L_2 = __this->get_sounds_15();
		AudioClip_t3680889665 * L_3 = List_1_get_Item_m1011483163(L_2, 6, /*hidden argument*/List_1_get_Item_m1011483163_RuntimeMethod_var);
		SoundManager_PlaySingle_m8272110(L_1, L_3, /*hidden argument*/NULL);
		SoundManager_t2102329059 * L_4 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_instance_6();
		AudioSource_t3935305588 * L_5 = L_4->get_musicSource_5();
		AudioSource_Stop_m2682712816(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GameManager_t1536523654_il2cpp_TypeInfo_var);
		GameManager_t1536523654 * L_6 = ((GameManager_t1536523654_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_t1536523654_il2cpp_TypeInfo_var))->get_instace_7();
		GameManager_GameOver_m2317540222(L_6, /*hidden argument*/NULL);
	}

IL_003b:
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
// System.Void Readme::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Readme__ctor_m3508133495 (Readme_t240784718 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m1310743131(__this, /*hidden argument*/NULL);
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
// System.Void Readme/Section::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Section__ctor_m4015757037 (Section_t3705589568 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void SoundManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void SoundManager__ctor_m1311707663 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	{
		__this->set_lowPitchRange_7((0.95f));
		__this->set_highPitchRange_8((1.05f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::Awake()
extern "C" IL2CPP_METHOD_ATTR void SoundManager_Awake_m2554457172 (SoundManager_t2102329059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SoundManager_Awake_m2554457172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t2102329059_il2cpp_TypeInfo_var);
		SoundManager_t2102329059 * L_0 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t2102329059_il2cpp_TypeInfo_var);
		((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->set_instance_6(__this);
		goto IL_0036;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t2102329059_il2cpp_TypeInfo_var);
		SoundManager_t2102329059 * L_2 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_instance_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::PlaySingle(UnityEngine.AudioClip)
extern "C" IL2CPP_METHOD_ATTR void SoundManager_PlaySingle_m8272110 (SoundManager_t2102329059 * __this, AudioClip_t3680889665 * ___clip0, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_sfxSource_4();
		AudioClip_t3680889665 * L_1 = ___clip0;
		AudioSource_set_clip_m31653938(L_0, L_1, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_2 = __this->get_sfxSource_4();
		AudioSource_Play_m48294159(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::RandomizeSfx(UnityEngine.AudioClip[])
extern "C" IL2CPP_METHOD_ATTR void SoundManager_RandomizeSfx_m2638275526 (SoundManager_t2102329059 * __this, AudioClipU5BU5D_t143221404* ___clips0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		AudioClipU5BU5D_t143221404* L_0 = ___clips0;
		int32_t L_1 = Random_Range_m4054026115(NULL /*static, unused*/, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = __this->get_lowPitchRange_7();
		float L_3 = __this->get_highPitchRange_8();
		float L_4 = Random_Range_m2202990745(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		AudioSource_t3935305588 * L_5 = __this->get_sfxSource_4();
		float L_6 = V_1;
		AudioSource_set_pitch_m2413801168(L_5, L_6, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_7 = __this->get_sfxSource_4();
		AudioClipU5BU5D_t143221404* L_8 = ___clips0;
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		AudioClip_t3680889665 * L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		AudioSource_set_clip_m31653938(L_7, L_11, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_12 = __this->get_sfxSource_4();
		AudioSource_Play_m48294159(L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SoundManager::.cctor()
extern "C" IL2CPP_METHOD_ATTR void SoundManager__cctor_m881290866 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
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
// System.Void TutorialInfo::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TutorialInfo__ctor_m3380974637 (TutorialInfo_t3629245769 * __this, const RuntimeMethod* method)
{
	{
		__this->set_showAtStart_4((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::Awake()
extern "C" IL2CPP_METHOD_ATTR void TutorialInfo_Awake_m435255452 (TutorialInfo_t3629245769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialInfo_Awake_m435255452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_t3629245769_il2cpp_TypeInfo_var);
		bool L_0 = ((TutorialInfo_t3629245769_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t3629245769_il2cpp_TypeInfo_var))->get_alreadyShownThisSession_10();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		TutorialInfo_StartGame_m3688046553(__this, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_t3629245769_il2cpp_TypeInfo_var);
		((TutorialInfo_t3629245769_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t3629245769_il2cpp_TypeInfo_var))->set_alreadyShownThisSession_10((bool)1);
		String_t* L_1 = ((TutorialInfo_t3629245769_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t3629245769_il2cpp_TypeInfo_var))->get_showAtStartPrefsKey_9();
		bool L_2 = PlayerPrefs_HasKey_m2794939670(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_t3629245769_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TutorialInfo_t3629245769_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t3629245769_il2cpp_TypeInfo_var))->get_showAtStartPrefsKey_9();
		int32_t L_4 = PlayerPrefs_GetInt_m3797620966(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set_showAtStart_4((bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0));
	}

IL_003d:
	{
		Toggle_t2735377061 * L_5 = __this->get_showAtStartToggle_8();
		bool L_6 = __this->get_showAtStart_4();
		Toggle_set_isOn_m3548357404(L_5, L_6, /*hidden argument*/NULL);
		bool L_7 = __this->get_showAtStart_4();
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		TutorialInfo_ShowLaunchScreen_m1140610230(__this, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0064:
	{
		TutorialInfo_StartGame_m3688046553(__this, /*hidden argument*/NULL);
	}

IL_006a:
	{
		return;
	}
}
// System.Void TutorialInfo::ShowLaunchScreen()
extern "C" IL2CPP_METHOD_ATTR void TutorialInfo_ShowLaunchScreen_m1140610230 (TutorialInfo_t3629245769 * __this, const RuntimeMethod* method)
{
	{
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		AudioListener_t2734094699 * L_0 = __this->get_mainListener_7();
		Behaviour_set_enabled_m20417929(L_0, (bool)0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_1 = __this->get_overlay_6();
		GameObject_SetActive_m796801857(L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::LaunchTutorial()
extern "C" IL2CPP_METHOD_ATTR void TutorialInfo_LaunchTutorial_m1159260386 (TutorialInfo_t3629245769 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_url_5();
		Application_OpenURL_m738341736(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::StartGame()
extern "C" IL2CPP_METHOD_ATTR void TutorialInfo_StartGame_m3688046553 (TutorialInfo_t3629245769 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_overlay_6();
		GameObject_SetActive_m796801857(L_0, (bool)0, /*hidden argument*/NULL);
		AudioListener_t2734094699 * L_1 = __this->get_mainListener_7();
		Behaviour_set_enabled_m20417929(L_1, (bool)1, /*hidden argument*/NULL);
		Time_set_timeScale_m1127545364(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::ToggleShowAtLaunch()
extern "C" IL2CPP_METHOD_ATTR void TutorialInfo_ToggleShowAtLaunch_m3759128467 (TutorialInfo_t3629245769 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialInfo_ToggleShowAtLaunch_m3759128467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		Toggle_t2735377061 * L_0 = __this->get_showAtStartToggle_8();
		bool L_1 = Toggle_get_isOn_m1428293607(L_0, /*hidden argument*/NULL);
		__this->set_showAtStart_4(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(TutorialInfo_t3629245769_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TutorialInfo_t3629245769_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t3629245769_il2cpp_TypeInfo_var))->get_showAtStartPrefsKey_9();
		bool L_3 = __this->get_showAtStart_4();
		G_B1_0 = L_2;
		if (!L_3)
		{
			G_B2_0 = L_2;
			goto IL_0027;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TutorialInfo::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TutorialInfo__cctor_m579740354 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TutorialInfo__cctor_m579740354_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TutorialInfo_t3629245769_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t3629245769_il2cpp_TypeInfo_var))->set_showAtStartPrefsKey_9(_stringLiteral2663840776);
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
// System.Void Wall::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Wall__ctor_m559063296 (Wall_t2206666577 * __this, const RuntimeMethod* method)
{
	{
		__this->set_hp_5(4);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Wall::Start()
extern "C" IL2CPP_METHOD_ATTR void Wall_Start_m1066291526 (Wall_t2206666577 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wall_Start_m1066291526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SpriteRenderer_t3235626157 * L_0 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		__this->set_spriteRenderer_8(L_0);
		return;
	}
}
// System.Void Wall::DamageWall(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Wall_DamageWall_m2651420924 (Wall_t2206666577 * __this, int32_t ___loss0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Wall_DamageWall_m2651420924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SoundManager_t2102329059_il2cpp_TypeInfo_var);
		SoundManager_t2102329059 * L_0 = ((SoundManager_t2102329059_StaticFields*)il2cpp_codegen_static_fields_for(SoundManager_t2102329059_il2cpp_TypeInfo_var))->get_instance_6();
		AudioClipU5BU5D_t143221404* L_1 = (AudioClipU5BU5D_t143221404*)SZArrayNew(AudioClipU5BU5D_t143221404_il2cpp_TypeInfo_var, (uint32_t)2);
		AudioClipU5BU5D_t143221404* L_2 = L_1;
		AudioClip_t3680889665 * L_3 = __this->get_chop1_6();
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (AudioClip_t3680889665 *)L_3);
		AudioClipU5BU5D_t143221404* L_4 = L_2;
		AudioClip_t3680889665 * L_5 = __this->get_chop2_7();
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (AudioClip_t3680889665 *)L_5);
		SoundManager_RandomizeSfx_m2638275526(L_0, L_4, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_6 = __this->get_spriteRenderer_8();
		Sprite_t280657092 * L_7 = __this->get_dmgSprite_4();
		SpriteRenderer_set_sprite_m1286893786(L_6, L_7, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_hp_5();
		int32_t L_9 = ___loss0;
		__this->set_hp_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)L_9)));
		int32_t L_10 = __this->get_hp_5();
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		GameObject_t1113636619 * L_11 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		GameObject_SetActive_m796801857(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0059:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
