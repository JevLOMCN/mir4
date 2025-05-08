#pragma once
#include "CoreMinimal.h"
#include "EHDRCaptureGamut.generated.h"

UENUM(BlueprintType)
enum EHDRCaptureGamut {
    HCGM_Rec709,
    HCGM_P3DCI,
    HCGM_Rec2020,
    HCGM_ACES,
    HCGM_ACEScg,
    HCGM_Linear,
};

