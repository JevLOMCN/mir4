#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMiniGamePlayerMoveDirection.h"
#include "EMiniGamePlayerState.h"
#include "MiniGame_PlayerActor.generated.h"

class AMiniGame_ManagerActor;

UCLASS(Blueprintable)
class AMiniGame_PlayerActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCurFlipbookLength;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMiniGame_ManagerActor* m_MiniGameActor;
    
public:
    AMiniGame_PlayerActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHitEffectFilpbook_BP(FVector vScale, FVector vLoc, float fDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowAttackEffectFilpbook_BP(EMiniGamePlayerState eState, FVector vScale, FVector vLoc, float fDelay);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseFilpbook_BP(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void OnReleased_Right();
    
    UFUNCTION(BlueprintCallable)
    void OnReleased_Move();
    
    UFUNCTION(BlueprintCallable)
    void OnReleased_Left();
    
    UFUNCTION(BlueprintCallable)
    void OnPressed_Right();
    
    UFUNCTION(BlueprintCallable)
    void OnPressed_Left();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Avoid();
    
    UFUNCTION(BlueprintCallable)
    void OnClick_Attack();
    
    UFUNCTION(BlueprintCallable)
    AMiniGame_ManagerActor* GetMiniGameActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeFlipbook_BP(EMiniGamePlayerState eState, EMiniGamePlayerMoveDirection eDirection);
    
};

