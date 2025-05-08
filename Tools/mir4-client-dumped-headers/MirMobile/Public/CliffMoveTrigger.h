#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CliffMoveTrigger.generated.h"

class AMirSplineActor;

UCLASS(Blueprintable)
class ACliffMoveTrigger : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMirSplineActor* m_pSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bRightVector;
    
    ACliffMoveTrigger(const FObjectInitializer& ObjectInitializer);

};

