#pragma once
#include "CoreMinimal.h"
#include "AudioAttributesContentType.generated.h"

UENUM(BlueprintType)
enum AudioAttributesContentType {
    Unknown,
    Speech,
    Music,
    Movie,
    Sonification,
};

