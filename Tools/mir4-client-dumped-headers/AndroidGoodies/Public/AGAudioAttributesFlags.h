#pragma once
#include "CoreMinimal.h"
#include "AGAudioAttributesFlags.generated.h"

USTRUCT(BlueprintType)
struct ANDROIDGOODIES_API FAGAudioAttributesFlags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AudibilityEnforced;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HwAvSync;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LowLatency;
    
    FAGAudioAttributesFlags();
};

