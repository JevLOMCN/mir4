#pragma once
#include "CoreMinimal.h"
#include "CameraControlBase.h"
#include "CharSelCameraControl.generated.h"

class AActor;

UCLASS(Blueprintable)
class ACharSelCameraControl : public ACameraControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pBackupCameraActor;
    
    ACharSelCameraControl(const FObjectInitializer& ObjectInitializer);

};

