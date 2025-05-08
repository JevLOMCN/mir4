#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "StructSerializerBuiltinTestStruct.h"
#include "StructSerializerArrayTestStruct.generated.h"

USTRUCT(BlueprintType)
struct FStructSerializerArrayTestStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Int32Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StaticSingleElement;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StaticInt32Array[3];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float StaticFloatArray[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> VectorArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructSerializerBuiltinTestStruct> StructArray;
    
    SERIALIZATION_API FStructSerializerArrayTestStruct();
};

