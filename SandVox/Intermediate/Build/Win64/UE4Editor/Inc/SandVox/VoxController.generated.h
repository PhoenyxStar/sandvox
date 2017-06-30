// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SANDVOX_VoxController_generated_h
#error "VoxController.generated.h already included, missing '#pragma once' in VoxController.h"
#endif
#define SANDVOX_VoxController_generated_h

#define SandVox_Source_SandVox_VoxController_h_15_RPC_WRAPPERS
#define SandVox_Source_SandVox_VoxController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define SandVox_Source_SandVox_VoxController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVoxController(); \
	friend SANDVOX_API class UClass* Z_Construct_UClass_AVoxController(); \
public: \
	DECLARE_CLASS(AVoxController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/SandVox"), NO_API) \
	DECLARE_SERIALIZER(AVoxController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SandVox_Source_SandVox_VoxController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAVoxController(); \
	friend SANDVOX_API class UClass* Z_Construct_UClass_AVoxController(); \
public: \
	DECLARE_CLASS(AVoxController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/SandVox"), NO_API) \
	DECLARE_SERIALIZER(AVoxController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define SandVox_Source_SandVox_VoxController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxController(AVoxController&&); \
	NO_API AVoxController(const AVoxController&); \
public:


#define SandVox_Source_SandVox_VoxController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AVoxController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AVoxController(AVoxController&&); \
	NO_API AVoxController(const AVoxController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVoxController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVoxController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AVoxController)


#define SandVox_Source_SandVox_VoxController_h_15_PRIVATE_PROPERTY_OFFSET
#define SandVox_Source_SandVox_VoxController_h_12_PROLOG
#define SandVox_Source_SandVox_VoxController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SandVox_Source_SandVox_VoxController_h_15_PRIVATE_PROPERTY_OFFSET \
	SandVox_Source_SandVox_VoxController_h_15_RPC_WRAPPERS \
	SandVox_Source_SandVox_VoxController_h_15_INCLASS \
	SandVox_Source_SandVox_VoxController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SandVox_Source_SandVox_VoxController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SandVox_Source_SandVox_VoxController_h_15_PRIVATE_PROPERTY_OFFSET \
	SandVox_Source_SandVox_VoxController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	SandVox_Source_SandVox_VoxController_h_15_INCLASS_NO_PURE_DECLS \
	SandVox_Source_SandVox_VoxController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SandVox_Source_SandVox_VoxController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
