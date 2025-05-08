#pragma once
#include "CoreMinimal.h"
#include "ActivateTrigger.h"
#include "PlaySoundTrigger.generated.h"

UCLASS(Blueprintable)
class APlaySoundTrigger : public AActivateTrigger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SoundID;
    
    APlaySoundTrigger(const FObjectInitializer& ObjectInitializer);

};

