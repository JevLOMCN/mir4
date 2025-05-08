#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction_CommonDungeon.h"
#include "MM_UIAction_Labyrinth.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Labyrinth : public UMM_UIAction_CommonDungeon {
    GENERATED_BODY()
public:
    UMM_UIAction_Labyrinth();

    UFUNCTION(BlueprintCallable)
    void StopAutoMission(bool isEnter);
    
};

