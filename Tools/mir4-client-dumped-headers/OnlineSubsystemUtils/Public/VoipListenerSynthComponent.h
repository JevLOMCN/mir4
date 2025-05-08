#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "VoipListenerSynthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ONLINESUBSYSTEMUTILS_API UVoipListenerSynthComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UVoipListenerSynthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool IsIdling();
    
};

