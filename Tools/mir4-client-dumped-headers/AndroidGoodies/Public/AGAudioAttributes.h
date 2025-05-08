#pragma once
#include "CoreMinimal.h"
#include "AGAudioAttributesFlags.h"
#include "AudioAttributesContentType.h"
#include "AudioAttributesUsage.h"
#include "AGAudioAttributes.generated.h"

USTRUCT(BlueprintType)
struct ANDROIDGOODIES_API FAGAudioAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGAudioAttributesFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<AudioAttributesUsage> Usage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<AudioAttributesContentType> ContentType;
    
    FAGAudioAttributes();
};

