#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "CameraControlBase.h"
#include "LobbyCameraControl.generated.h"

class AMM_EntityBase;
class AMediaSoundActor;
class UAutoCameraData;
class UCameraShake;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class ALobbyCameraControl : public ACameraControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAutoCameraData* m_pAutoCameraData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMediaSoundActor* m_pMediaSoundActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pCameraParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraShake* m_pScriptCameraShake;
    
    ALobbyCameraControl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateLockOnCamera(FVector CurrentLoc, FRotator CurrentRot, FVector& RefLoc, FRotator& RefRot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopScriptCameraShake_Event(UCameraShake* pCameraShake);
    
    UFUNCTION(BlueprintCallable)
    void StopScriptCameraShake();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowPhaseEnterEffect(bool bPhaseIn);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraTarget(AMM_EntityBase* pCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UCameraShake* PlayScriptCameraShake_Event();
    
    UFUNCTION(BlueprintCallable)
    void PlayScriptCameraShake(float Duration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearMediaPlayer();
    
    UFUNCTION(BlueprintCallable)
    void CirculationCameraMode();
    
};

