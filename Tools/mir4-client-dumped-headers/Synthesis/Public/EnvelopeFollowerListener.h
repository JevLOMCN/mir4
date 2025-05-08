#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnEnvelopeFollowerUpdateDelegate.h"
#include "EnvelopeFollowerListener.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SYNTHESIS_API UEnvelopeFollowerListener : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnvelopeFollowerUpdate OnEnvelopeFollowerUpdate;
    
    UEnvelopeFollowerListener(const FObjectInitializer& ObjectInitializer);

};

