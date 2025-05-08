#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceBindingReference.h"
#include "LevelSequenceBindingReferenceArray.generated.h"

USTRUCT(BlueprintType)
struct FLevelSequenceBindingReferenceArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FLevelSequenceBindingReference> References;
    
    LEVELSEQUENCE_API FLevelSequenceBindingReferenceArray();
};

