#pragma once
#include "CoreMinimal.h"
#include "NodeObject.generated.h"

USTRUCT(BlueprintType)
struct FNodeObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentName;
    
    ANIMATIONCORE_API FNodeObject();
};

