#pragma once
#include "CoreMinimal.h"
#include "ARTrackedGeometry.h"
#include "ARTrackedObject.generated.h"

class UARCandidateObject;

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARTrackedObject : public UARTrackedGeometry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UARCandidateObject* DetectedObject;
    
public:
    UARTrackedObject();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UARCandidateObject* GetDetectedObject() const;
    
};

