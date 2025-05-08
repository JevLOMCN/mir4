#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MM_GameStateBase.h"
#include "MM_CharSelState.generated.h"

class AActor;
class ACameraActor;
class UPlanarReflectionComponent;

UCLASS(Blueprintable)
class AMM_CharSelState : public AMM_GameStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* m_pCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_DisplayLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_DisplayRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CustomizingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_CustomizingRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlanarReflectionComponent* m_pPlanarReflectionComp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_CurrentActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACameraActor*> m_ZoomCameraArray;
    
public:
    AMM_CharSelState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ZoomScreen(float ZoomLength);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterSelectLevelData(ACameraActor* pMainCamera, float CameraDefaultFOV, FVector CameraDefaultLocation, FRotator CameraDefaultRotation, FVector ModelingLocation, FRotator ModelingRotation, TArray<ACameraActor*> ZoomCameraActorArray);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetPostProcessValue();
    
};

