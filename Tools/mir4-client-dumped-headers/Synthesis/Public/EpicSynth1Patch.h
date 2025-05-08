#pragma once
#include "CoreMinimal.h"
#include "ESynth1PatchSource.h"
#include "Synth1PatchCable.h"
#include "EpicSynth1Patch.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FEpicSynth1Patch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESynth1PatchSource PatchSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSynth1PatchCable> PatchCables;
    
    FEpicSynth1Patch();
};

