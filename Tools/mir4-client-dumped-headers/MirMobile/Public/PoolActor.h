#pragma once
#include "CoreMinimal.h"
#include "PoolActor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FPoolActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* pPoolActor;
    
    MIRMOBILE_API FPoolActor();
};

