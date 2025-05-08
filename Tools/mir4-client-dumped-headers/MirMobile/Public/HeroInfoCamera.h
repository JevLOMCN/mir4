#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "HeroInfoCamera.generated.h"

class APlayerModelingActor;
class AUIBackGroundActor;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class AHeroInfoCamera : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerModelingActor* DisplayActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WheelCameraType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AUIBackGroundActor* UIBackGroundActor;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, TWeakObjectPtr<UParticleSystemComponent>> m_LoopEffects;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UParticleSystemComponent>> m_OneShotEffectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentCharacterAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetCharacterAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CameraType;
    
public:
    AHeroInfoCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetHeroInfoVisibility(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void IncreaseWheelCamera();
    
private:
    UFUNCTION(BlueprintCallable)
    void DisplayActorInitComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void DecreaseWheelCamera();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChangeSubState(int32 NewSubState);
    
    UFUNCTION(BlueprintCallable)
    void ChangeMainState(int32 NewMainState);
    
};

