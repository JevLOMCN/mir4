#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "GuardNpcEnterCheckTrigger.generated.h"

class AActor;
class AGuardNpcSpawnTrigger;
class UBoxComponent;

UCLASS(Blueprintable)
class AGuardNpcEnterCheckTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AGuardNpcSpawnTrigger* m_pFriendNpcTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* m_pBoxCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pDelayInitActor;
    
    AGuardNpcEnterCheckTrigger(const FObjectInitializer& ObjectInitializer);

};

