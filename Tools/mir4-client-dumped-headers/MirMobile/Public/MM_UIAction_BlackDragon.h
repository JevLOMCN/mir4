#pragma once
#include "CoreMinimal.h"
#include "MM_UIAction_CommonDungeon.h"
#include "MM_UIAction_BlackDragon.generated.h"

class UMM_B_DungeonCommon;

UCLASS(Blueprintable)
class UMM_UIAction_BlackDragon : public UMM_UIAction_CommonDungeon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_B_DungeonCommon* m_pCurDungeonWidget;
    
public:
    UMM_UIAction_BlackDragon();

    UFUNCTION(BlueprintCallable)
    void StopAutoMission(bool isEnter);
    
    UFUNCTION(BlueprintCallable)
    void EnterDungeon();
    
};

