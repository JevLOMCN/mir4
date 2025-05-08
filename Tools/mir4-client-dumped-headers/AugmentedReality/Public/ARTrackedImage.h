#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ARTrackedGeometry.h"
#include "ARTrackedImage.generated.h"

class UARCandidateImage;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARTrackedImage : public UARTrackedGeometry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UARCandidateImage* DetectedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D EstimatedSize;
    
public:
    UARTrackedImage();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetEstimateSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UARCandidateImage* GetDetectedImage() const;
    
};

