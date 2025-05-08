#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "WallTrigger.generated.h"

class UBoxComponent;

UCLASS(Blueprintable)
class AWallTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_pBoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWallActivated;
    
    AWallTrigger(const FObjectInitializer& ObjectInitializer);

};

