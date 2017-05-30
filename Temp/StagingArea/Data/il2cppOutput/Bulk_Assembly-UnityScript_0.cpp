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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E3783534214.h"
#include "AssemblyU2DUnityScript_CameraController3555666667.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DUnityScript_PlayerController4148409433.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "UnityEngine_UnityEngine_Collider3497673348.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "AssemblyU2DUnityScript_Rotator3375904803.h"

// CameraController
struct CameraController_t3555666667;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerController
struct PlayerController_t4148409433;
// System.String
struct String_t;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Collider
struct Collider_t3497673348;
// System.Object
struct Il2CppObject;
// Rotator
struct Rotator_t3375904803;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern const uint32_t PlayerController_FixedUpdate_m3546129858_MetadataUsageId;
extern Il2CppCodeGenString* _stringLiteral1239896192;
extern const uint32_t PlayerController_OnTriggerEnter_m2626394561_MetadataUsageId;
extern Il2CppClass* RuntimeServices_t1910041954_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3256499869;
extern Il2CppCodeGenString* _stringLiteral3913072064;
extern const uint32_t PlayerController_setCountText_m4272666789_MetadataUsageId;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t4233889191_m1908970916_MethodInfo_var;
extern const uint32_t PlayerController_Start_m1716885693_MetadataUsageId;



// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3275118058 * Component_get_transform_m2697483695 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3275118058 * GameObject_get_transform_m909382139 (GameObject_t1756533147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t2243707580  Transform_get_position_m1104419803 (Transform_t3275118058 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Addition_m3146764857 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m2469242620 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t2243707580  Vector3_op_Subtraction_m2407545601 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, Vector3_t2243707580  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m2098048324 (Il2CppObject * __this /* static, unused */, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m2638739322 (Vector3_t2243707580 * __this, float p0, float p1, float p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m1351554733 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m2836187433 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1756533147 * Component_get_gameObject_m3105766835 (Component_t3819376471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
extern "C"  bool GameObject_CompareTag_m2797152613 (GameObject_t1756533147 * __this, String_t* p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m2887581199 (GameObject_t1756533147 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m2960866144 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern "C"  String_t* RuntimeServices_op_Addition_m1630013314 (Il2CppObject * __this /* static, unused */, String_t* p0, String_t* p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t4233889191_m1908970916(__this, method) ((  Rigidbody_t4233889191 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m2233168104 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
extern "C"  void Transform_Rotate_m1743927093 (Transform_t3275118058 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraController::.ctor()
extern "C"  void CameraController__ctor_m2959878283 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::LateUpdate()
extern "C"  void CameraController_LateUpdate_m1257571146 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_1 = __this->get_player_3();
		Transform_t3275118058 * L_2 = GameObject_get_transform_m909382139(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = __this->get_offset_2();
		Vector3_t2243707580  L_5 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraController::Start()
extern "C"  void CameraController_Start_m1331504167 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_2 = __this->get_player_3();
		Transform_t3275118058 * L_3 = GameObject_get_transform_m909382139(L_2, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Vector3_op_Subtraction_m2407545601(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		__this->set_offset_2(L_5);
		return;
	}
}
// System.Void CameraController::Main()
extern "C"  void CameraController_Main_m2979593614 (CameraController_t3555666667 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2700026613 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m3546129858 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_FixedUpdate_m3546129858_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		V_0 = L_0;
		float L_1 = Input_GetAxis_m2098048324(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3_t2243707580  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector3__ctor_m2638739322(&L_4, L_2, (((float)((float)0))), L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Rigidbody_t4233889191 * L_5 = __this->get_rb_4();
		Vector3_t2243707580  L_6 = V_2;
		float L_7 = __this->get_speed_5();
		Vector3_t2243707580  L_8 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Rigidbody_AddForce_m2836187433(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void PlayerController_OnTriggerEnter_m2626394561 (PlayerController_t4148409433 * __this, Collider_t3497673348 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter_m2626394561_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider_t3497673348 * L_0 = ___other0;
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(L_0, /*hidden argument*/NULL);
		bool L_2 = GameObject_CompareTag_m2797152613(L_1, _stringLiteral1239896192, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		Collider_t3497673348 * L_3 = ___other0;
		GameObject_t1756533147 * L_4 = Component_get_gameObject_m3105766835(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_m2887581199(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_count_2();
		__this->set_count_2(((int32_t)((int32_t)L_5+(int32_t)1)));
		VirtActionInvoker0::Invoke(6 /* System.Void PlayerController::setCountText() */, __this);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PlayerController::setCountText()
extern "C"  void PlayerController_setCountText_m4272666789 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_setCountText_m4272666789_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Text_t356221433 * L_0 = __this->get_countText_3();
		int32_t* L_1 = __this->get_address_of_count_2();
		String_t* L_2 = Int32_ToString_m2960866144(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t1910041954_il2cpp_TypeInfo_var);
		String_t* L_3 = RuntimeServices_op_Addition_m1630013314(NULL /*static, unused*/, _stringLiteral3256499869, L_2, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		int32_t L_4 = __this->get_count_2();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)12))))
		{
			goto IL_003d;
		}
	}
	{
		Text_t356221433 * L_5 = __this->get_winText_6();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral3913072064);
	}

IL_003d:
	{
		return;
	}
}
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1716885693 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m1716885693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m1908970916(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m1908970916_MethodInfo_var);
		__this->set_rb_4(L_0);
		__this->set_count_2(0);
		VirtActionInvoker0::Invoke(6 /* System.Void PlayerController::setCountText() */, __this);
		Text_t356221433 * L_1 = __this->get_winText_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.Void PlayerController::Main()
extern "C"  void PlayerController_Main_m2330156708 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Rotator::.ctor()
extern "C"  void Rotator__ctor_m3595199915 (Rotator_t3375904803 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Update()
extern "C"  void Rotator_Update_m421039082 (Rotator_t3375904803 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1;
		memset(&L_1, 0, sizeof(L_1));
		Vector3__ctor_m2638739322(&L_1, (((float)((float)((int32_t)15)))), (((float)((float)((int32_t)30)))), (((float)((float)((int32_t)45)))), /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		Transform_Rotate_m1743927093(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Rotator::Main()
extern "C"  void Rotator_Main_m872946002 (Rotator_t3375904803 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
