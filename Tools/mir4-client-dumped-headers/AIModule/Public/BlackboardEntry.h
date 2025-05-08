#pragma once
#include "CoreMinimal.h"
#include "BlackboardEntry.generated.h"

class UBlackboardKeyType;

USTRUCT(BlueprintType)
struct FBlackboardEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBlackboardKeyType* KeyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInstanceSynced: 1;
    
    AIMODULE_API FBlackboardEntry();
};

