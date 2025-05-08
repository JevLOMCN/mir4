#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraActor -FallbackName=CameraActor
#include "CameraLookatTrackingSettings.h"
#include "CineCameraActor.generated.h"

class UCineCameraComponent;

UCLASS(Blueprintable)
class CINEMATICCAMERA_API ACineCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraLookatTrackingSettings LookatTrackingSettings;
    
    ACineCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCineCameraComponent* GetCineCameraComponent() const;
    
};

