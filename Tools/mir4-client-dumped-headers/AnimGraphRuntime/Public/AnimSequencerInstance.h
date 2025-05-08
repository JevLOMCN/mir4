#pragma once
#include "CoreMinimal.h"
#include "AnimCustomInstance.h"
#include "AnimSequencerInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class ANIMGRAPHRUNTIME_API UAnimSequencerInstance : public UAnimCustomInstance {
    GENERATED_BODY()
public:
    UAnimSequencerInstance();

};

