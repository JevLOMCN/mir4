#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderFloatValue.h"
#include "BTDecorator_BlackboardBase.h"
#include "FAIDistanceType.h"
#include "BTDecorator_IsAtLocation.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptableRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ParametrizedAcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDistanceType GeometricDistanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseParametrizedRadius: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNavAgentGoalLocation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPathFindingBasedTest: 1;
    
    UBTDecorator_IsAtLocation();

};

