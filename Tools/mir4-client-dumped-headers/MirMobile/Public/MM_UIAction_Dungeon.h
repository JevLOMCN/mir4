#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction_CommonDungeon.h"
#include "MM_UIAction_Dungeon.generated.h"

UCLASS(Blueprintable)
class UMM_UIAction_Dungeon : public UMM_UIAction_CommonDungeon {
    GENERATED_BODY()
public:
    UMM_UIAction_Dungeon();

    UFUNCTION(BlueprintCallable)
    void OnClickConfirmOpenHuntingSquadCreate();
    
};

