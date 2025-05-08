#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MM_NPCBase.h"
#include "MM_NPC.generated.h"

UCLASS(Blueprintable)
class AMM_NPC : public AMM_NPCBase {
    GENERATED_BODY()
public:
    AMM_NPC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartAirWalk(TArray<FVector> DestLocList);
    
};

