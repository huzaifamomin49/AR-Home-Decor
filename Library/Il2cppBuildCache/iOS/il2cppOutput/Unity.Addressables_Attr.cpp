#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.AttributeUsageAttribute
struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// System.Diagnostics.ConditionalAttribute
struct ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// System.ComponentModel.DisplayNameAttribute
struct DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85;
// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C;
// System.ObsoleteAttribute
struct ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671;
// System.ParamArrayAttribute
struct ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// UnityEngine.SerializeField
struct SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25;
// System.String
struct String_t;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct  CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct  CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Diagnostics.ConditionalAttribute
struct  ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Diagnostics.ConditionalAttribute::m_conditionString
	String_t* ___m_conditionString_0;

public:
	inline static int32_t get_offset_of_m_conditionString_0() { return static_cast<int32_t>(offsetof(ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C, ___m_conditionString_0)); }
	inline String_t* get_m_conditionString_0() const { return ___m_conditionString_0; }
	inline String_t** get_address_of_m_conditionString_0() { return &___m_conditionString_0; }
	inline void set_m_conditionString_0(String_t* value)
	{
		___m_conditionString_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_conditionString_0), (void*)value);
	}
};


// System.ComponentModel.DisplayNameAttribute
struct  DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ComponentModel.DisplayNameAttribute::_displayName
	String_t* ____displayName_1;

public:
	inline static int32_t get_offset_of__displayName_1() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85, ____displayName_1)); }
	inline String_t* get__displayName_1() const { return ____displayName_1; }
	inline String_t** get_address_of__displayName_1() { return &____displayName_1; }
	inline void set__displayName_1(String_t* value)
	{
		____displayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayName_1), (void*)value);
	}
};

struct DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85_StaticFields
{
public:
	// System.ComponentModel.DisplayNameAttribute System.ComponentModel.DisplayNameAttribute::Default
	DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85_StaticFields, ___Default_0)); }
	inline DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85 * get_Default_0() const { return ___Default_0; }
	inline DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

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

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.Serialization.FormerlySerializedAsAttribute
struct  FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.Serialization.FormerlySerializedAsAttribute::m_oldName
	String_t* ___m_oldName_0;

public:
	inline static int32_t get_offset_of_m_oldName_0() { return static_cast<int32_t>(offsetof(FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210, ___m_oldName_0)); }
	inline String_t* get_m_oldName_0() const { return ___m_oldName_0; }
	inline String_t** get_address_of_m_oldName_0() { return &___m_oldName_0; }
	inline void set_m_oldName_0(String_t* value)
	{
		___m_oldName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_oldName_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.InternalsVisibleToAttribute
struct  InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.CompilerServices.InternalsVisibleToAttribute::_assemblyName
	String_t* ____assemblyName_0;
	// System.Boolean System.Runtime.CompilerServices.InternalsVisibleToAttribute::_allInternalsVisible
	bool ____allInternalsVisible_1;

public:
	inline static int32_t get_offset_of__assemblyName_0() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____assemblyName_0)); }
	inline String_t* get__assemblyName_0() const { return ____assemblyName_0; }
	inline String_t** get_address_of__assemblyName_0() { return &____assemblyName_0; }
	inline void set__assemblyName_0(String_t* value)
	{
		____assemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____assemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of__allInternalsVisible_1() { return static_cast<int32_t>(offsetof(InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C, ____allInternalsVisible_1)); }
	inline bool get__allInternalsVisible_1() const { return ____allInternalsVisible_1; }
	inline bool* get_address_of__allInternalsVisible_1() { return &____allInternalsVisible_1; }
	inline void set__allInternalsVisible_1(bool value)
	{
		____allInternalsVisible_1 = value;
	}
};


// System.ObsoleteAttribute
struct  ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.ObsoleteAttribute::_message
	String_t* ____message_0;
	// System.Boolean System.ObsoleteAttribute::_error
	bool ____error_1;

public:
	inline static int32_t get_offset_of__message_0() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____message_0)); }
	inline String_t* get__message_0() const { return ____message_0; }
	inline String_t** get_address_of__message_0() { return &____message_0; }
	inline void set__message_0(String_t* value)
	{
		____message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_0), (void*)value);
	}

	inline static int32_t get_offset_of__error_1() { return static_cast<int32_t>(offsetof(ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671, ____error_1)); }
	inline bool get__error_1() const { return ____error_1; }
	inline bool* get_address_of__error_1() { return &____error_1; }
	inline void set__error_1(bool value)
	{
		____error_1 = value;
	}
};


// System.ParamArrayAttribute
struct  ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct  RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// UnityEngine.SerializeField
struct  SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// System.AttributeTargets
struct  AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct  DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.AttributeUsageAttribute
struct  AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.AttributeTargets System.AttributeUsageAttribute::m_attributeTarget
	int32_t ___m_attributeTarget_0;
	// System.Boolean System.AttributeUsageAttribute::m_allowMultiple
	bool ___m_allowMultiple_1;
	// System.Boolean System.AttributeUsageAttribute::m_inherited
	bool ___m_inherited_2;

public:
	inline static int32_t get_offset_of_m_attributeTarget_0() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_attributeTarget_0)); }
	inline int32_t get_m_attributeTarget_0() const { return ___m_attributeTarget_0; }
	inline int32_t* get_address_of_m_attributeTarget_0() { return &___m_attributeTarget_0; }
	inline void set_m_attributeTarget_0(int32_t value)
	{
		___m_attributeTarget_0 = value;
	}

	inline static int32_t get_offset_of_m_allowMultiple_1() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_allowMultiple_1)); }
	inline bool get_m_allowMultiple_1() const { return ___m_allowMultiple_1; }
	inline bool* get_address_of_m_allowMultiple_1() { return &___m_allowMultiple_1; }
	inline void set_m_allowMultiple_1(bool value)
	{
		___m_allowMultiple_1 = value;
	}

	inline static int32_t get_offset_of_m_inherited_2() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C, ___m_inherited_2)); }
	inline bool get_m_inherited_2() const { return ___m_inherited_2; }
	inline bool* get_address_of_m_inherited_2() { return &___m_inherited_2; }
	inline void set_m_inherited_2(bool value)
	{
		___m_inherited_2 = value;
	}
};

struct AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields
{
public:
	// System.AttributeUsageAttribute System.AttributeUsageAttribute::Default
	AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * ___Default_3;

public:
	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C_StaticFields, ___Default_3)); }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * get_Default_3() const { return ___Default_3; }
	inline AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_3), (void*)value);
	}
};


// System.Diagnostics.DebuggableAttribute
struct  DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.InternalsVisibleToAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9 (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * __this, String_t* ___assemblyName0, const RuntimeMethod* method);
// System.Void UnityEngine.SerializeField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3 (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * __this, const RuntimeMethod* method);
// System.Void System.AttributeUsageAttribute::.ctor(System.AttributeTargets)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeUsageAttribute__ctor_m5114E18826A49A025D48DC71904C430BD590656D (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * __this, int32_t ___validOn0, const RuntimeMethod* method);
// System.Void System.AttributeUsageAttribute::set_AllowMultiple(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeUsageAttribute_set_AllowMultiple_mF412CDAFFE16D056721EF81A1EC04ACE63612055_inline (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.ParamArrayAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719 (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.ConditionalAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionalAttribute__ctor_m43C71F47F8ED8FDF9A11FB20E8916C3737DD66AF (ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C * __this, String_t* ___conditionString0, const RuntimeMethod* method);
// System.Void System.ObsoleteAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853 (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Serialization.FormerlySerializedAsAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * __this, String_t* ___oldName0, const RuntimeMethod* method);
// System.Void System.ComponentModel.DisplayNameAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayNameAttribute__ctor_m44CB3F48C86138F3E381AF9FE560B959DD73E845 (DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85 * __this, String_t* ___displayName0, const RuntimeMethod* method);
static void Unity_Addressables_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[0];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[1];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[2];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C * tmp = (InternalsVisibleToAttribute_t1D9772A02892BAC440952F880A43C257E6C3E68C *)cache->attributes[3];
		InternalsVisibleToAttribute__ctor_m420071A75DCEEC72356490C64B4B0B9270DA32B9(tmp, il2cpp_codegen_string_new_wrapper("\x55\x6E\x69\x74\x79\x2E\x41\x64\x64\x72\x65\x73\x73\x61\x62\x6C\x65\x73\x2E\x54\x65\x73\x74\x73"), NULL);
	}
}
static void PackedPlayModeBuildLogs_t15392C5514380884F9E55C1A49D9DAE60980D7CC_CustomAttributesCacheGenerator_m_RuntimeBuildLogs(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void AssetReferenceUIRestriction_t597D3ACE768BC69569BE36FE49658E5F82831249_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * tmp = (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C *)cache->attributes[0];
		AttributeUsageAttribute__ctor_m5114E18826A49A025D48DC71904C430BD590656D(tmp, 384LL, NULL);
		AttributeUsageAttribute_set_AllowMultiple_mF412CDAFFE16D056721EF81A1EC04ACE63612055_inline(tmp, true, NULL);
	}
}
static void AssetReferenceUILabelRestriction_t0658AF5FDE56D514BCAD640E5DA69B9D8FA50C86_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * tmp = (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C *)cache->attributes[0];
		AttributeUsageAttribute__ctor_m5114E18826A49A025D48DC71904C430BD590656D(tmp, 384LL, NULL);
		AttributeUsageAttribute_set_AllowMultiple_mF412CDAFFE16D056721EF81A1EC04ACE63612055_inline(tmp, false, NULL);
	}
}
static void AssetReferenceUILabelRestriction_t0658AF5FDE56D514BCAD640E5DA69B9D8FA50C86_CustomAttributesCacheGenerator_AssetReferenceUILabelRestriction__ctor_mE105F6EA65FE844FE37AFC78B8115F8BBAEF32E0____allowedLabels0(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void InitalizationObjectsOperation_tB327C4C33B585E8D197BFAA550E075D3596B364F_CustomAttributesCacheGenerator_InitalizationObjectsOperation_U3CExecuteU3Eb__7_0_m730AF86C7FF5A4E49F8DFCE17E1900B6DAD34FEE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_U3CKeyU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_U3CTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_InvalidKeyException_get_Key_m4F3D624B0C1D0BB759A35DC8251EA4A0C4D5A186(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_InvalidKeyException_set_Key_m66490CAC4948DA8D913621BA9BD730B27E3F11AE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_InvalidKeyException_get_Type_m30B6C787C02E2F4958F7CD83F766DE44B76A062E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_InvalidKeyException_set_Type_m3032079F04498BDF4F36EB44FA183D282BFD1F27(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_InternalSafeSerializationLog_mB5D2DDFE4B8F5AC75AEB9F8FDD7FE68F214D71E2(CustomAttributesCache* cache)
{
	{
		ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C * tmp = (ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C *)cache->attributes[0];
		ConditionalAttribute__ctor_m43C71F47F8ED8FDF9A11FB20E8916C3737DD66AF(tmp, il2cpp_codegen_string_new_wrapper("\x41\x44\x44\x52\x45\x53\x53\x41\x42\x4C\x45\x53\x5F\x4C\x4F\x47\x5F\x41\x4C\x4C"), NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_InternalSafeSerializationLogFormat_m6E8639B46AFDCB56C5C293CB2CC80C2145276879(CustomAttributesCache* cache)
{
	{
		ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C * tmp = (ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C *)cache->attributes[0];
		ConditionalAttribute__ctor_m43C71F47F8ED8FDF9A11FB20E8916C3737DD66AF(tmp, il2cpp_codegen_string_new_wrapper("\x41\x44\x44\x52\x45\x53\x53\x41\x42\x4C\x45\x53\x5F\x4C\x4F\x47\x5F\x41\x4C\x4C"), NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_InternalSafeSerializationLogFormat_m6E8639B46AFDCB56C5C293CB2CC80C2145276879____args2(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Log_m5845F43742503641DCFC15CE0C0819BCC817BC91(CustomAttributesCache* cache)
{
	{
		ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C * tmp = (ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C *)cache->attributes[0];
		ConditionalAttribute__ctor_m43C71F47F8ED8FDF9A11FB20E8916C3737DD66AF(tmp, il2cpp_codegen_string_new_wrapper("\x41\x44\x44\x52\x45\x53\x53\x41\x42\x4C\x45\x53\x5F\x4C\x4F\x47\x5F\x41\x4C\x4C"), NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LogFormat_mB5F8A04A23790DBFD49DB0C3738617E3747508EB(CustomAttributesCache* cache)
{
	{
		ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C * tmp = (ConditionalAttribute_t5DD558ED67ECF65952A82B94A75C6E8E121B2D8C *)cache->attributes[0];
		ConditionalAttribute__ctor_m43C71F47F8ED8FDF9A11FB20E8916C3737DD66AF(tmp, il2cpp_codegen_string_new_wrapper("\x41\x44\x44\x52\x45\x53\x53\x41\x42\x4C\x45\x53\x5F\x4C\x4F\x47\x5F\x41\x4C\x4C"), NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LogFormat_mB5F8A04A23790DBFD49DB0C3738617E3747508EB____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LogWarningFormat_m12976450C6328F99FB142EBDFE78356D3928AA76____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LogErrorFormat_m2E398937855646F14A4F0C45EACF0F96EB026F7E____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Initialize_m403AA44EB0D16AA3E9CBFCACB7BEA7BA4C2F8D03(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadContentCatalog_mB25784B828FD6B8CD4006BE767F98278AA6B6469(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAsset_m161AAA92A72D0278D4F77DDA4EF8245753BDF472(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAsset_m8C5B76CA233AE4D121578DB75CCEB61CE0590571(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadResourceLocations_mC4807D74C9ABEA1FE1806A6138FF08831874A0DB(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadResourceLocationsAsync_m79113BA329509F0FAEAC8525753E28639C59369A(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadResourceLocations_m3DE0FE09B81AC9014E5AF9EB3B6D9D05A6AEE0E1(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssets_m879838F84E107F0E3D58E85AA20C2073CBB18EF6(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssets_m06D232E82A28A1485FBDF9564DB22F1F88CFDC26(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssetsAsync_m85F24622B9AE2D53DA699FF4AAD717D6DD182CAC(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssetsAsync_m198A3BA3106639C61E4898BD8EE2A36440C2B54F(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssets_mBFF1579629A143276E4C4A42473D554641548332(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_GetDownloadSize_m9D94FD729B8D28816446B9F223BC2825B448DB94(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_GetDownloadSizeAsync_mC45CE2019AC0B5DE72485D623F531D28294DDBD1(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_DownloadDependencies_m846EBBB6DB178A6AB00312BC59C23ED3D47799E8(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_DownloadDependenciesAsync_m0DA9C3548B3B861B78051507238247184107C7DA(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_ClearDependencyCacheAsync_m4736112EC974CDF8344610197F3D214D145EB4AA(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_ClearDependencyCacheAsync_m29794B52FFE06405814731887725BC956C32415A(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m47DB349470BA2727DAA51C6350BC543DC7ED9461(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m822450E203A03436D9CC580B59901420B15CBDFF(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m18A6D432A9BE973AB4A49E5DFF952BE0928D2194(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m09604771FDB0435E2B016E869AE9BFE21FB4A65F(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m59CF9A43A5F57BDCF0C7BE166010394C97A40C0F(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_mCAA14115193523B002A1D179BFE1E41BDF8C714E(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadScene_m6444FC156A69053C3A74CB68C4AB3C4D73DBBA61(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadScene_m6768BC6219CB21EF58CFF5518B3E63D187B03429(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_UnloadScene_mC1F70CAE0BA155904DD50D37917F08AC26085285(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_UnloadScene_mAECB89BF9E0E874F866FDC01DC795AAA986BFADF(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_UnloadScene_m45EE3BF14D39A9AC041139EA6D2CDD11AB32788F(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF____InitializationOperation_PropertyInfo(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_LogFormat_m26C886855458DD4180396DFE42023A4453C97D31____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_LogWarningFormat_mF9E3A182B218859F2FCAAD046CF9D2EC006A22D8____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_LogErrorFormat_mEF8073B80442A459D24C24D8AAD7F00B0F9AFFC4____args1(CustomAttributesCache* cache)
{
	{
		ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F * tmp = (ParamArrayAttribute_t9DCEB4CDDB8EDDB1124171D4C51FA6069EEA5C5F *)cache->attributes[0];
		ParamArrayAttribute__ctor_mCC72AFF718185BA7B87FD8D9471F1274400C5719(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CInitializeAsyncU3Eb__57_0_m8A567BD458CAE8E13107981C0A491F78B8C145B7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CTrackHandleU3Eb__61_0_m3CD40821CC81EFFEF914C4D3E1E17BBF7A5242BD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__91_0_m9E1C8B4F189D25880014A95CC20A239D215F0971(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__91_1_m2A131B7500FF4FCCCEBD795A77D2794565255A30(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__93_0_mE94D0DFBA9BA2A3484F1A1ADC5D4A3CF722BEBE3(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__95_0_mD250B465933AADE4400C23CD09AD2A86205597CF(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__95_1_mBBA8300F4781CEF37A7F70079C2C321D13E288AE(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CInternalUnloadSceneU3Eb__117_0_m23FC6421B49DD92392A7CEFA1BAFF67224ECAAA8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CCheckForCatalogUpdatesU3Eb__119_0_mAD81E9B93C82B31D7CA758CCB7670CE09813F6DA(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_U3CLocatorU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_U3CLocalHashU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_U3CCatalogLocationU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_U3CContentUpdateAvailableU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_get_Locator_m315EAC054D286C93AE6A02A376937834C2D31DD5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_set_Locator_m9E4F243E0A1FDCA2B512F7A2D8670C5800C160AC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_get_LocalHash_mE8089137665C2A42D293B365A44C4D3B809F32D9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_set_LocalHash_mAD62F555D862B2209F5F4C7A739F26AD634F1307(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_get_CatalogLocation_m9CAC4EBC6989B90AEBF6E8A74EF23080E18192A1(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_set_CatalogLocation_m6BCE2F7FD159BBE7B2F63BB03F1AB5B9527A0D68(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_get_ContentUpdateAvailable_mCD81A3E2249E601FDE29A1FCF37176A6DCFBFC43(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_set_ContentUpdateAvailable_m6B4E2E5E7E11CD97FDEC3AF6C192FAA3EBB2821A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass33_0_tEFDA1A8220541DE63B4C030286A40248AD2600D2_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t7D1E5EB3A0D9418AF2E1EC136762E861BA6843CE_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass53_0_tA1ACD907F485A27BC1FEE69E68DD5E33F5C7E105_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass60_0_t672276996DDA0AC8734FAA99E06DC0A18A5E3A6F_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass66_0_1_t3A1921ED073E8153AAFFCC0DECC371BD6566179A_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass70_0_tB3E603D64262A99033B68A381CC36A2A97A185F8_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass72_0_t00E7588C4E7E9340A4C1E741EA7B37BE61242C9B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass75_0_1_t879966AFACC78C904D87AE2FBDA22A587A525C9C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass77_0_1_t6F4385FACE6348CC1D527265736C3F6793E4E030_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass85_0_tF0A8318A9B4ED06911A86152E41092EC218492C6_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass86_0_tEE9D3CB7728FF68CAD0AA0ABEB9B1A0B42509FE1_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass89_0_t5E3C4F9A5E49DA02ED7A026D14A806891A6C9FC5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass92_0_t725EA42B88804DC55A257A3323D6706A25E44E8B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass94_0_tCFAECD30CB871E18471B59F5CAD9DCB0AD551717_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass97_0_t69EDAFAF33A11F62AF42ED454E13EB756AD2BE3B_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass98_0_t44C2D2254ACA28166315DAF48FAD6C5E8F9419EA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass99_0_t5A40B4A4BBEAF7313354361DB7EEEA296603843C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass104_0_t8583BDAA6B6F332F8FD147340D81D7D4632E64E5_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass106_0_t64C83AB7AF754C7DB6A736BEBE681C17BE8AA6BA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass109_0_t101EAEADD2BC4A5D41DAF5AD342A6CDB33B81434_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass115_0_tE7E3457C5D830089043FCEB3D0869E973809D78E_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass116_0_t905036DC078E2CC2BEC2002392C9E53E817C307C_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass123_0_tCD33A77F1BCE981B44D1CA32B0C1FFF0759608AF_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void AssetLabelReference_t1B83851B173A7347E50C1837F22D29C10C9459FE_CustomAttributesCacheGenerator_m_LabelString(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x6C\x61\x62\x65\x6C\x53\x74\x72\x69\x6E\x67"), NULL);
	}
}
static void AssetReferenceT_1_t9187B7A42A68D3F74BD661313B03D3C091F2F08C_CustomAttributesCacheGenerator_AssetReferenceT_1_LoadAsset_mF19D268D1789082C5E4FE1E8ED4F62AEF4788746(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_m_AssetGUID(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x61\x73\x73\x65\x74\x47\x55\x49\x44"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_m_SubObjectName(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_m_SubObjectType(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_AssetReference_LoadAsset_m3164B152A2324B2793E1B50F12085BF98060D1E7(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_AssetReference_LoadScene_m258083D0D3D8B9B3B4D66127E4B50EBCDAAC0A35(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_AssetReference_Instantiate_mB0C421723306C0663D84F2D4A59A087C31DCC549(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_AssetReference_Instantiate_m503286BC1E3993E5F85A747E035D7D5DBE40292D(CustomAttributesCache* cache)
{
	{
		ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 * tmp = (ObsoleteAttribute_t14BAC1669C0409EB9F28D72D664FFA6764ACD671 *)cache->attributes[0];
		ObsoleteAttribute__ctor_m9BC17A80675E9013AA71F9FB38D89FEF56883853(tmp, NULL);
	}
}
static void U3CU3Ec_t695CBAD64A17413270CF1D368893E0BF44534AAF_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogProvider_t9816343589D5F6B669F2194F2D6F4A87EE5C5202_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85 * tmp = (DisplayNameAttribute_t23E87B8B23DC5CF5E2A72B8039935029D0A53E85 *)cache->attributes[0];
		DisplayNameAttribute__ctor_m44CB3F48C86138F3E381AF9FE560B959DD73E845(tmp, il2cpp_codegen_string_new_wrapper("\x43\x6F\x6E\x74\x65\x6E\x74\x20\x43\x61\x74\x61\x6C\x6F\x67\x20\x50\x72\x6F\x76\x69\x64\x65\x72"), NULL);
	}
}
static void InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007_CustomAttributesCacheGenerator_InternalOp_U3CLoadCatalogU3Eb__7_0_m0646A3CF5D3E729488DEB333B2E88066A335C1A0(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007_CustomAttributesCacheGenerator_InternalOp_U3CLoadCatalogU3Eb__7_1_mF6357B9B3C45A6692433E0713780DDA3B37D8120(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_OnLoaded(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_BundledCatalog_add_OnLoaded_mAD3E254385A3C20FD2233B2C6F5F9AAEF5A2DC7A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_BundledCatalog_remove_OnLoaded_mDEFD0B4C9684C80FFAFAAE3355F2A7E0B9E497BD(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__16_0_m4418D3993811E996B5C013C3AAF0F3838392EC6F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__16_1_m2DB195FBDE74BA8784FD586C2183365B0928FBC4(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CInternalIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CProviderU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CKeysU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CDependenciesU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CDataU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CResourceTypeU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_InternalId_m1721F1221A70CDCBDEB336772EAB0CB85DDB1B2E(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_InternalId_m1424F350C7AF2CA967685A6EE158CEBF97906587(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_Provider_m177D783F360EBADC754DC8169341F77737AA9BC5(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_Provider_m4A969AE01FF5DD8E48777B8C7ADF7B96314B86E2(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_Keys_mBC55983C8741C99612996FA31C1BD64431775667(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_Keys_m05CF7DB1AB2B0A98C63E62E632F16D1A6D5C5918(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_Dependencies_m06DAA27A643BA2F24CC659B5FCCBED64E6133196(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_Dependencies_m621A1DCEBE0FE21FF472F2C51F89B15CCBB891D7(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_Data_mD6AC0D9FD928BAB6BF9DD3B5A9F2916670B99B2F(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_Data_m0E8A65EADB5C231A7302B21BF951D5F54D2BC7EC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_ResourceType_m0018F6DFA8AAE355D30A1A48C9450D69C61C8040(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_ResourceType_m6C9885AA02D7824D814225E5E399F13D1890903A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_LocatorId(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_InstanceProviderData(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_SceneProviderData(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_ResourceProviderData(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_ProviderIds(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x70\x72\x6F\x76\x69\x64\x65\x72\x49\x64\x73"), NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_InternalIds(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x69\x6E\x74\x65\x72\x6E\x61\x6C\x49\x64\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_KeyDataString(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x6B\x65\x79\x44\x61\x74\x61\x53\x74\x72\x69\x6E\x67"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_BucketDataString(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x62\x75\x63\x6B\x65\x74\x44\x61\x74\x61\x53\x74\x72\x69\x6E\x67"), NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_EntryDataString(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x65\x6E\x74\x72\x79\x44\x61\x74\x61\x53\x74\x72\x69\x6E\x67"), NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_ExtraDataString(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x65\x78\x74\x72\x61\x44\x61\x74\x61\x53\x74\x72\x69\x6E\x67"), NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_resourceTypes(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_InternalIdPrefixes(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_Keys(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x6B\x65\x79\x73"), NULL);
	}
}
static void ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_InternalId(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x69\x6E\x74\x65\x72\x6E\x61\x6C\x49\x64"), NULL);
	}
}
static void ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_Provider(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x70\x72\x6F\x76\x69\x64\x65\x72"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_Dependencies(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x64\x65\x70\x65\x6E\x64\x65\x6E\x63\x69\x65\x73"), NULL);
	}
}
static void ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_ResourceType(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_U3CLocatorIdU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_U3CLocationsU3Ek__BackingField(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_ResourceLocationMap_get_LocatorId_mE22F834A1D7018FD66C17A1A13B8DFE301D0A545(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_ResourceLocationMap_set_LocatorId_mDB4685FC97A268850DCF39B7620999FEE48F595A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_ResourceLocationMap_get_Locations_m6F152234217D9CFAC7102F940B022955AEFF3DEC(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_ResourceLocationMap_set_Locations_m8074EA0212EFB7019B8556564DE3CEA31D61043A(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass1_0_t229194F102D1AD09B379C87231EDB11FE80F822D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_CompressionEnabled(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x63\x6F\x6D\x70\x72\x65\x73\x73\x69\x6F\x6E\x45\x6E\x61\x62\x6C\x65\x64"), NULL);
	}
}
static void CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_CacheDirectoryOverride(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x63\x61\x63\x68\x65\x44\x69\x72\x65\x63\x74\x6F\x72\x79\x4F\x76\x65\x72\x72\x69\x64\x65"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_ExpirationDelay(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x65\x78\x70\x69\x72\x61\x74\x69\x6F\x6E\x44\x65\x6C\x61\x79"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_LimitCacheSize(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x6C\x69\x6D\x69\x74\x43\x61\x63\x68\x65\x53\x69\x7A\x65"), NULL);
	}
}
static void CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_MaximumCacheSize(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x6D\x61\x78\x69\x6D\x75\x6D\x43\x61\x63\x68\x65\x53\x69\x7A\x65"), NULL);
	}
}
static void U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass14_0_tDFD1DD3172B4A7C8E0C5521F01748586B3C59278_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec__DisplayClass16_0_tF42A377A5088BDDD9F2C683DAA8C640D1A4D6A2D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_buildTarget(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_SettingsHash(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x73\x65\x74\x74\x69\x6E\x67\x73\x48\x61\x73\x68"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_CatalogLocations(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x63\x61\x74\x61\x6C\x6F\x67\x4C\x6F\x63\x61\x74\x69\x6F\x6E\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_ProfileEvents(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x70\x72\x6F\x66\x69\x6C\x65\x45\x76\x65\x6E\x74\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_LogResourceManagerExceptions(CustomAttributesCache* cache)
{
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[0];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x6C\x6F\x67\x52\x65\x73\x6F\x75\x72\x63\x65\x4D\x61\x6E\x61\x67\x65\x72\x45\x78\x63\x65\x70\x74\x69\x6F\x6E\x73"), NULL);
	}
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[1];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_ExtraInitializationData(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
	{
		FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 * tmp = (FormerlySerializedAsAttribute_t9505BD2243F1C81AB32EEAF3543A796C2D935210 *)cache->attributes[1];
		FormerlySerializedAsAttribute__ctor_m7A9FC6914FCBA79EE12567BEF3B482CAB7D5265D(tmp, il2cpp_codegen_string_new_wrapper("\x6D\x5F\x65\x78\x74\x72\x61\x49\x6E\x69\x74\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x44\x61\x74\x61"), NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_DisableCatalogUpdateOnStart(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_IsLocalCatalogInBundle(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_CertificateHandlerType(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_AddressablesVersion(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
static void ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_maxConcurrentWebRequests(CustomAttributesCache* cache)
{
	{
		SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 * tmp = (SerializeField_t6B23EE6CC99B21C3EBD946352112832A70E67E25 *)cache->attributes[0];
		SerializeField__ctor_mDE6A7673BA2C1FAD03CFEC65C6D473CC37889DD3(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_Unity_Addressables_AttributeGenerators[];
const CustomAttributesCacheGenerator g_Unity_Addressables_AttributeGenerators[177] = 
{
	AssetReferenceUIRestriction_t597D3ACE768BC69569BE36FE49658E5F82831249_CustomAttributesCacheGenerator,
	AssetReferenceUILabelRestriction_t0658AF5FDE56D514BCAD640E5DA69B9D8FA50C86_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass33_0_tEFDA1A8220541DE63B4C030286A40248AD2600D2_CustomAttributesCacheGenerator,
	U3CU3Ec_t7D1E5EB3A0D9418AF2E1EC136762E861BA6843CE_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass53_0_tA1ACD907F485A27BC1FEE69E68DD5E33F5C7E105_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass60_0_t672276996DDA0AC8734FAA99E06DC0A18A5E3A6F_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass66_0_1_t3A1921ED073E8153AAFFCC0DECC371BD6566179A_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass70_0_tB3E603D64262A99033B68A381CC36A2A97A185F8_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass72_0_t00E7588C4E7E9340A4C1E741EA7B37BE61242C9B_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass75_0_1_t879966AFACC78C904D87AE2FBDA22A587A525C9C_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass77_0_1_t6F4385FACE6348CC1D527265736C3F6793E4E030_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass85_0_tF0A8318A9B4ED06911A86152E41092EC218492C6_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass86_0_tEE9D3CB7728FF68CAD0AA0ABEB9B1A0B42509FE1_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass89_0_t5E3C4F9A5E49DA02ED7A026D14A806891A6C9FC5_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass92_0_t725EA42B88804DC55A257A3323D6706A25E44E8B_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass94_0_tCFAECD30CB871E18471B59F5CAD9DCB0AD551717_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass97_0_t69EDAFAF33A11F62AF42ED454E13EB756AD2BE3B_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass98_0_t44C2D2254ACA28166315DAF48FAD6C5E8F9419EA_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass99_0_t5A40B4A4BBEAF7313354361DB7EEEA296603843C_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass104_0_t8583BDAA6B6F332F8FD147340D81D7D4632E64E5_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass106_0_t64C83AB7AF754C7DB6A736BEBE681C17BE8AA6BA_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass109_0_t101EAEADD2BC4A5D41DAF5AD342A6CDB33B81434_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass115_0_tE7E3457C5D830089043FCEB3D0869E973809D78E_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass116_0_t905036DC078E2CC2BEC2002392C9E53E817C307C_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass123_0_tCD33A77F1BCE981B44D1CA32B0C1FFF0759608AF_CustomAttributesCacheGenerator,
	U3CU3Ec_t695CBAD64A17413270CF1D368893E0BF44534AAF_CustomAttributesCacheGenerator,
	U3CU3Ec_tE3A011DF421290DB4C8EA792D291399105345BF7_CustomAttributesCacheGenerator,
	ContentCatalogProvider_t9816343589D5F6B669F2194F2D6F4A87EE5C5202_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass1_0_t229194F102D1AD09B379C87231EDB11FE80F822D_CustomAttributesCacheGenerator,
	U3CU3Ec_tE17B4DF6A08D70F6313ABCA926AC5827846947BB_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass14_0_tDFD1DD3172B4A7C8E0C5521F01748586B3C59278_CustomAttributesCacheGenerator,
	U3CU3Ec__DisplayClass16_0_tF42A377A5088BDDD9F2C683DAA8C640D1A4D6A2D_CustomAttributesCacheGenerator,
	PackedPlayModeBuildLogs_t15392C5514380884F9E55C1A49D9DAE60980D7CC_CustomAttributesCacheGenerator_m_RuntimeBuildLogs,
	InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_U3CKeyU3Ek__BackingField,
	InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_U3CTypeU3Ek__BackingField,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_U3CLocatorU3Ek__BackingField,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_U3CLocalHashU3Ek__BackingField,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_U3CCatalogLocationU3Ek__BackingField,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_U3CContentUpdateAvailableU3Ek__BackingField,
	AssetLabelReference_t1B83851B173A7347E50C1837F22D29C10C9459FE_CustomAttributesCacheGenerator_m_LabelString,
	AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_m_AssetGUID,
	AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_m_SubObjectName,
	AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_m_SubObjectType,
	BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_OnLoaded,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CInternalIdU3Ek__BackingField,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CProviderU3Ek__BackingField,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CKeysU3Ek__BackingField,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CDependenciesU3Ek__BackingField,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CDataU3Ek__BackingField,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_U3CResourceTypeU3Ek__BackingField,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_LocatorId,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_InstanceProviderData,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_SceneProviderData,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_ResourceProviderData,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_ProviderIds,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_InternalIds,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_KeyDataString,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_BucketDataString,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_EntryDataString,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_ExtraDataString,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_resourceTypes,
	ContentCatalogData_t87BA73BE241F9430656B9097362DC3AF36D9578D_CustomAttributesCacheGenerator_m_InternalIdPrefixes,
	ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_Keys,
	ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_InternalId,
	ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_Provider,
	ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_Dependencies,
	ResourceLocationData_tDE44E4FB8CCDB61F532FCA1140616ED8D31A2FE4_CustomAttributesCacheGenerator_m_ResourceType,
	ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_U3CLocatorIdU3Ek__BackingField,
	ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_U3CLocationsU3Ek__BackingField,
	CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_CompressionEnabled,
	CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_CacheDirectoryOverride,
	CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_ExpirationDelay,
	CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_LimitCacheSize,
	CacheInitializationData_tF17CF258198FC1AF23295B75D6FAF7E267DFF808_CustomAttributesCacheGenerator_m_MaximumCacheSize,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_buildTarget,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_SettingsHash,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_CatalogLocations,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_ProfileEvents,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_LogResourceManagerExceptions,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_ExtraInitializationData,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_DisableCatalogUpdateOnStart,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_IsLocalCatalogInBundle,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_CertificateHandlerType,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_AddressablesVersion,
	ResourceManagerRuntimeData_t6233F52CDD54494E807FBA048385B560546E1F01_CustomAttributesCacheGenerator_m_maxConcurrentWebRequests,
	InitalizationObjectsOperation_tB327C4C33B585E8D197BFAA550E075D3596B364F_CustomAttributesCacheGenerator_InitalizationObjectsOperation_U3CExecuteU3Eb__7_0_m730AF86C7FF5A4E49F8DFCE17E1900B6DAD34FEE,
	InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_InvalidKeyException_get_Key_m4F3D624B0C1D0BB759A35DC8251EA4A0C4D5A186,
	InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_InvalidKeyException_set_Key_m66490CAC4948DA8D913621BA9BD730B27E3F11AE,
	InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_InvalidKeyException_get_Type_m30B6C787C02E2F4958F7CD83F766DE44B76A062E,
	InvalidKeyException_t9192B49CF7BDD9B81107014CA23ECEBCB6736EC0_CustomAttributesCacheGenerator_InvalidKeyException_set_Type_m3032079F04498BDF4F36EB44FA183D282BFD1F27,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_InternalSafeSerializationLog_mB5D2DDFE4B8F5AC75AEB9F8FDD7FE68F214D71E2,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_InternalSafeSerializationLogFormat_m6E8639B46AFDCB56C5C293CB2CC80C2145276879,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Log_m5845F43742503641DCFC15CE0C0819BCC817BC91,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LogFormat_mB5F8A04A23790DBFD49DB0C3738617E3747508EB,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Initialize_m403AA44EB0D16AA3E9CBFCACB7BEA7BA4C2F8D03,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadContentCatalog_mB25784B828FD6B8CD4006BE767F98278AA6B6469,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAsset_m161AAA92A72D0278D4F77DDA4EF8245753BDF472,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAsset_m8C5B76CA233AE4D121578DB75CCEB61CE0590571,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadResourceLocations_mC4807D74C9ABEA1FE1806A6138FF08831874A0DB,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadResourceLocationsAsync_m79113BA329509F0FAEAC8525753E28639C59369A,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadResourceLocations_m3DE0FE09B81AC9014E5AF9EB3B6D9D05A6AEE0E1,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssets_m879838F84E107F0E3D58E85AA20C2073CBB18EF6,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssets_m06D232E82A28A1485FBDF9564DB22F1F88CFDC26,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssetsAsync_m85F24622B9AE2D53DA699FF4AAD717D6DD182CAC,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssetsAsync_m198A3BA3106639C61E4898BD8EE2A36440C2B54F,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadAssets_mBFF1579629A143276E4C4A42473D554641548332,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_GetDownloadSize_m9D94FD729B8D28816446B9F223BC2825B448DB94,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_GetDownloadSizeAsync_mC45CE2019AC0B5DE72485D623F531D28294DDBD1,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_DownloadDependencies_m846EBBB6DB178A6AB00312BC59C23ED3D47799E8,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_DownloadDependenciesAsync_m0DA9C3548B3B861B78051507238247184107C7DA,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_ClearDependencyCacheAsync_m4736112EC974CDF8344610197F3D214D145EB4AA,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_ClearDependencyCacheAsync_m29794B52FFE06405814731887725BC956C32415A,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m47DB349470BA2727DAA51C6350BC543DC7ED9461,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m822450E203A03436D9CC580B59901420B15CBDFF,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m18A6D432A9BE973AB4A49E5DFF952BE0928D2194,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m09604771FDB0435E2B016E869AE9BFE21FB4A65F,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_m59CF9A43A5F57BDCF0C7BE166010394C97A40C0F,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_Instantiate_mCAA14115193523B002A1D179BFE1E41BDF8C714E,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadScene_m6444FC156A69053C3A74CB68C4AB3C4D73DBBA61,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LoadScene_m6768BC6219CB21EF58CFF5518B3E63D187B03429,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_UnloadScene_mC1F70CAE0BA155904DD50D37917F08AC26085285,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_UnloadScene_mAECB89BF9E0E874F866FDC01DC795AAA986BFADF,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_UnloadScene_m45EE3BF14D39A9AC041139EA6D2CDD11AB32788F,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CInitializeAsyncU3Eb__57_0_m8A567BD458CAE8E13107981C0A491F78B8C145B7,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CTrackHandleU3Eb__61_0_m3CD40821CC81EFFEF914C4D3E1E17BBF7A5242BD,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__91_0_m9E1C8B4F189D25880014A95CC20A239D215F0971,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__91_1_m2A131B7500FF4FCCCEBD795A77D2794565255A30,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__93_0_mE94D0DFBA9BA2A3484F1A1ADC5D4A3CF722BEBE3,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__95_0_mD250B465933AADE4400C23CD09AD2A86205597CF,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CDownloadDependenciesAsyncU3Eb__95_1_mBBA8300F4781CEF37A7F70079C2C321D13E288AE,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CInternalUnloadSceneU3Eb__117_0_m23FC6421B49DD92392A7CEFA1BAFF67224ECAAA8,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_U3CCheckForCatalogUpdatesU3Eb__119_0_mAD81E9B93C82B31D7CA758CCB7670CE09813F6DA,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_get_Locator_m315EAC054D286C93AE6A02A376937834C2D31DD5,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_set_Locator_m9E4F243E0A1FDCA2B512F7A2D8670C5800C160AC,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_get_LocalHash_mE8089137665C2A42D293B365A44C4D3B809F32D9,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_set_LocalHash_mAD62F555D862B2209F5F4C7A739F26AD634F1307,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_get_CatalogLocation_m9CAC4EBC6989B90AEBF6E8A74EF23080E18192A1,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_set_CatalogLocation_m6BCE2F7FD159BBE7B2F63BB03F1AB5B9527A0D68,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_get_ContentUpdateAvailable_mCD81A3E2249E601FDE29A1FCF37176A6DCFBFC43,
	ResourceLocatorInfo_t5DCB229AC92B8EC0FDF55ED49BCFD84C6E14C4DA_CustomAttributesCacheGenerator_ResourceLocatorInfo_set_ContentUpdateAvailable_m6B4E2E5E7E11CD97FDEC3AF6C192FAA3EBB2821A,
	AssetReferenceT_1_t9187B7A42A68D3F74BD661313B03D3C091F2F08C_CustomAttributesCacheGenerator_AssetReferenceT_1_LoadAsset_mF19D268D1789082C5E4FE1E8ED4F62AEF4788746,
	AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_AssetReference_LoadAsset_m3164B152A2324B2793E1B50F12085BF98060D1E7,
	AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_AssetReference_LoadScene_m258083D0D3D8B9B3B4D66127E4B50EBCDAAC0A35,
	AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_AssetReference_Instantiate_mB0C421723306C0663D84F2D4A59A087C31DCC549,
	AssetReference_tEE914DC579E5892CE5B86800656A5AE3DEDC667C_CustomAttributesCacheGenerator_AssetReference_Instantiate_m503286BC1E3993E5F85A747E035D7D5DBE40292D,
	InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007_CustomAttributesCacheGenerator_InternalOp_U3CLoadCatalogU3Eb__7_0_m0646A3CF5D3E729488DEB333B2E88066A335C1A0,
	InternalOp_t02B0755C55F9BB0FA159F741AD79F9D94236A007_CustomAttributesCacheGenerator_InternalOp_U3CLoadCatalogU3Eb__7_1_mF6357B9B3C45A6692433E0713780DDA3B37D8120,
	BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_BundledCatalog_add_OnLoaded_mAD3E254385A3C20FD2233B2C6F5F9AAEF5A2DC7A,
	BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_BundledCatalog_remove_OnLoaded_mDEFD0B4C9684C80FFAFAAE3355F2A7E0B9E497BD,
	BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__16_0_m4418D3993811E996B5C013C3AAF0F3838392EC6F,
	BundledCatalog_t0339865FD3004B1640C1314D57EA3E2B4EDF91BD_CustomAttributesCacheGenerator_BundledCatalog_U3CLoadCatalogFromBundleAsyncU3Eb__16_1_m2DB195FBDE74BA8784FD586C2183365B0928FBC4,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_InternalId_m1721F1221A70CDCBDEB336772EAB0CB85DDB1B2E,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_InternalId_m1424F350C7AF2CA967685A6EE158CEBF97906587,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_Provider_m177D783F360EBADC754DC8169341F77737AA9BC5,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_Provider_m4A969AE01FF5DD8E48777B8C7ADF7B96314B86E2,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_Keys_mBC55983C8741C99612996FA31C1BD64431775667,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_Keys_m05CF7DB1AB2B0A98C63E62E632F16D1A6D5C5918,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_Dependencies_m06DAA27A643BA2F24CC659B5FCCBED64E6133196,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_Dependencies_m621A1DCEBE0FE21FF472F2C51F89B15CCBB891D7,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_Data_mD6AC0D9FD928BAB6BF9DD3B5A9F2916670B99B2F,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_Data_m0E8A65EADB5C231A7302B21BF951D5F54D2BC7EC,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_get_ResourceType_m0018F6DFA8AAE355D30A1A48C9450D69C61C8040,
	ContentCatalogDataEntry_t97BA2D606AABA14ED44B38236F778EEBBCB486E1_CustomAttributesCacheGenerator_ContentCatalogDataEntry_set_ResourceType_m6C9885AA02D7824D814225E5E399F13D1890903A,
	ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_ResourceLocationMap_get_LocatorId_mE22F834A1D7018FD66C17A1A13B8DFE301D0A545,
	ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_ResourceLocationMap_set_LocatorId_mDB4685FC97A268850DCF39B7620999FEE48F595A,
	ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_ResourceLocationMap_get_Locations_m6F152234217D9CFAC7102F940B022955AEFF3DEC,
	ResourceLocationMap_t14A3D5C863FAE0D257213393BC576B3EEF04A6A8_CustomAttributesCacheGenerator_ResourceLocationMap_set_Locations_m8074EA0212EFB7019B8556564DE3CEA31D61043A,
	AssetReferenceUILabelRestriction_t0658AF5FDE56D514BCAD640E5DA69B9D8FA50C86_CustomAttributesCacheGenerator_AssetReferenceUILabelRestriction__ctor_mE105F6EA65FE844FE37AFC78B8115F8BBAEF32E0____allowedLabels0,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_InternalSafeSerializationLogFormat_m6E8639B46AFDCB56C5C293CB2CC80C2145276879____args2,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LogFormat_mB5F8A04A23790DBFD49DB0C3738617E3747508EB____args1,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LogWarningFormat_m12976450C6328F99FB142EBDFE78356D3928AA76____args1,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_LogErrorFormat_m2E398937855646F14A4F0C45EACF0F96EB026F7E____args1,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_LogFormat_m26C886855458DD4180396DFE42023A4453C97D31____args1,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_LogWarningFormat_mF9E3A182B218859F2FCAAD046CF9D2EC006A22D8____args1,
	AddressablesImpl_tE17A85285A6E3D47EE8ED33FC8F26FF0EA0BF2F2_CustomAttributesCacheGenerator_AddressablesImpl_LogErrorFormat_mEF8073B80442A459D24C24D8AAD7F00B0F9AFFC4____args1,
	Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF_CustomAttributesCacheGenerator_Addressables_t7F51877471833E53C4F87465F14E6A5FD072ABFF____InitializationOperation_PropertyInfo,
	Unity_Addressables_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AttributeUsageAttribute_set_AllowMultiple_mF412CDAFFE16D056721EF81A1EC04ACE63612055_inline (AttributeUsageAttribute_tBB0BAAA82036E6FCDD80A688BBD039F6FFD8EA1C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_allowMultiple_1(L_0);
		return;
	}
}
