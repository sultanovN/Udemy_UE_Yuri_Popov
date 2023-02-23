// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UDEMYUE_BaseGeometryActor_generated_h
#error "BaseGeometryActor.generated.h already included, missing '#pragma once' in BaseGeometryActor.h"
#endif
#define UDEMYUE_BaseGeometryActor_generated_h

#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGeometryData_Statics; \
	UDEMYUE_API static class UScriptStruct* StaticStruct();


template<> UDEMYUE_API UScriptStruct* StaticStruct<struct FGeometryData>();

#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_SPARSE_DATA
#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_RPC_WRAPPERS
#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS
#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UdemyUE"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_INCLASS \
private: \
	static void StaticRegisterNativesABaseGeometryActor(); \
	friend struct Z_Construct_UClass_ABaseGeometryActor_Statics; \
public: \
	DECLARE_CLASS(ABaseGeometryActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UdemyUE"), NO_API) \
	DECLARE_SERIALIZER(ABaseGeometryActor)


#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseGeometryActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseGeometryActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public:


#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseGeometryActor(ABaseGeometryActor&&); \
	NO_API ABaseGeometryActor(const ABaseGeometryActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseGeometryActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseGeometryActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseGeometryActor)


#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryData() { return STRUCT_OFFSET(ABaseGeometryActor, GeometryData); } \
	FORCEINLINE static uint32 __PPO__WeaponsNum() { return STRUCT_OFFSET(ABaseGeometryActor, WeaponsNum); } \
	FORCEINLINE static uint32 __PPO__KillsNum() { return STRUCT_OFFSET(ABaseGeometryActor, KillsNum); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ABaseGeometryActor, Health); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(ABaseGeometryActor, IsDead); } \
	FORCEINLINE static uint32 __PPO__HasWeapon() { return STRUCT_OFFSET(ABaseGeometryActor, HasWeapon); }


#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_38_PROLOG
#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_PRIVATE_PROPERTY_OFFSET \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_SPARSE_DATA \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_RPC_WRAPPERS \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_INCLASS \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_PRIVATE_PROPERTY_OFFSET \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_SPARSE_DATA \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_INCLASS_NO_PURE_DECLS \
	UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UDEMYUE_API UClass* StaticClass<class ABaseGeometryActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UdemyUE_Source_UdemyUE_Public_BaseGeometryActor_h


#define FOREACH_ENUM_EMOVEMENTTYPE(op) \
	op(EMovementType::Sin) \
	op(EMovementType::Static) 

enum class EMovementType : uint8;
template<> UDEMYUE_API UEnum* StaticEnum<EMovementType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
