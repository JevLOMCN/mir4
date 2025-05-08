#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MM_BlueprintActionEffect.generated.h"

class UObject;

UCLASS(Blueprintable)
class MIRMOBILE_API AMM_BlueprintActionEffect : public AActor {
    GENERATED_BODY()
public:
    AMM_BlueprintActionEffect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActionData(UObject* EffectActionData);
    
};

