#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "FixedCameraPointer.generated.h"

UCLASS(Blueprintable)
class AFixedCameraPointer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraNumber;
    
    AFixedCameraPointer(const FObjectInitializer& ObjectInitializer);

};

