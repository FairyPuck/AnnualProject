// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnnualProject/AnnualProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnnualProjectGameMode() {}
// Cross Module References
	ANNUALPROJECT_API UClass* Z_Construct_UClass_AAnnualProjectGameMode_NoRegister();
	ANNUALPROJECT_API UClass* Z_Construct_UClass_AAnnualProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AnnualProject();
// End Cross Module References
	void AAnnualProjectGameMode::StaticRegisterNativesAAnnualProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AAnnualProjectGameMode_NoRegister()
	{
		return AAnnualProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAnnualProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnnualProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnnualProject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnnualProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AnnualProjectGameMode.h" },
		{ "ModuleRelativePath", "AnnualProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnnualProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnnualProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnnualProjectGameMode_Statics::ClassParams = {
		&AAnnualProjectGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AAnnualProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAnnualProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnnualProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnnualProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnnualProjectGameMode, 3949314744);
	template<> ANNUALPROJECT_API UClass* StaticClass<AAnnualProjectGameMode>()
	{
		return AAnnualProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnnualProjectGameMode(Z_Construct_UClass_AAnnualProjectGameMode, &AAnnualProjectGameMode::StaticClass, TEXT("/Script/AnnualProject"), TEXT("AAnnualProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnnualProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
