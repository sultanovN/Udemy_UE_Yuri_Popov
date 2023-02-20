// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdemyUE/UdemyUEGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdemyUEGameModeBase() {}
// Cross Module References
	UDEMYUE_API UClass* Z_Construct_UClass_AUdemyUEGameModeBase_NoRegister();
	UDEMYUE_API UClass* Z_Construct_UClass_AUdemyUEGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UdemyUE();
// End Cross Module References
	void AUdemyUEGameModeBase::StaticRegisterNativesAUdemyUEGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUdemyUEGameModeBase_NoRegister()
	{
		return AUdemyUEGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUdemyUEGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUdemyUEGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UdemyUE,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUdemyUEGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UdemyUEGameModeBase.h" },
		{ "ModuleRelativePath", "UdemyUEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUdemyUEGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUdemyUEGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUdemyUEGameModeBase_Statics::ClassParams = {
		&AUdemyUEGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUdemyUEGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUdemyUEGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUdemyUEGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUdemyUEGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUdemyUEGameModeBase, 2280445646);
	template<> UDEMYUE_API UClass* StaticClass<AUdemyUEGameModeBase>()
	{
		return AUdemyUEGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUdemyUEGameModeBase(Z_Construct_UClass_AUdemyUEGameModeBase, &AUdemyUEGameModeBase::StaticClass, TEXT("/Script/UdemyUE"), TEXT("AUdemyUEGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUdemyUEGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
