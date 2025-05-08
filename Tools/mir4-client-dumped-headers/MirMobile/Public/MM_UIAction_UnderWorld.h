#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction_CommonDungeon.h"
#include "MM_UIAction_UnderWorld.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_UnderWorld : public UMM_UIAction_CommonDungeon {
    GENERATED_BODY()
public:
    UMM_UIAction_UnderWorld();

    UFUNCTION(BlueprintCallable)
    void StopAutoMission(bool isEnter);
    
};

