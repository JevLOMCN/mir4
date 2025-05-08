#pragma once
#include "CoreMinimal.h"
#include "BTAuxiliaryNode.h"
#include "BTService.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UBTService : public UBTAuxiliaryNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Interval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomDeviation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCallTickOnSearchStart: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRestartTimerOnEachActivation: 1;
    
public:
    UBTService();

};

