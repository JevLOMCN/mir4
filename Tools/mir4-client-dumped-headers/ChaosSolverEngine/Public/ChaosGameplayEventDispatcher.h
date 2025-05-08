#pragma once
#include "CoreMinimal.h"
#include "BreakEventCallbackWrapper.h"
#include "ChaosEventListenerComponent.h"
#include "ChaosHandlerSet.h"
#include "ChaosGameplayEventDispatcher.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CHAOSSOLVERENGINE_API UChaosGameplayEventDispatcher : public UChaosEventListenerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations;
    
public:
    UChaosGameplayEventDispatcher(const FObjectInitializer& ObjectInitializer);

};

