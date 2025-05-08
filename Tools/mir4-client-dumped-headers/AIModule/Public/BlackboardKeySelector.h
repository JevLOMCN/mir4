#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BlackboardKeySelector.generated.h"

class UBlackboardKeyType;

USTRUCT(BlueprintType)
struct AIMODULE_API FBlackboardKeySelector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBlackboardKeyType*> AllowedTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SelectedKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBlackboardKeyType> SelectedKeyType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 SelectedKeyID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNoneIsAllowedValue: 1;
    
public:
    FBlackboardKeySelector();
};

