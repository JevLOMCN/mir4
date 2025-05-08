#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "MM_DebugWidgetManager.generated.h"

class AMM_Monster;
class AMM_NetPC;

UCLASS(Blueprintable)
class AMM_DebugWidgetManager : public AActor {
    GENERATED_BODY()
public:
    AMM_DebugWidgetManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNpcState(AMM_NetPC* pNetPC, int32& uid, int32& HP, int32& VehicleId, bool& bRide, FString& CurrentFSM) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMonsterState(AMM_Monster* pMonster, FString& uid, FString& TID, FString& Grade, FString& CP, FString& HP, FString& Att, FString& Def, FString& Accm, FString& BT, FString& CurrentFSM, FString& PrevFSM) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMonsterSimpleState(AMM_Monster* pMonster, FString& PhysicalAttack, FString& MagicAttack, FString& Physicaldefense, FString& Magicdefense) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMainpcState(FVector& Loc, bool& bRide, FString& CurrentFSM, int32& MoveSpeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMainPCStat(FString& PhysicalAttack, FString& MagicAttack, FString& Physicaldefense, FString& Magicdefense) const;
    
};

