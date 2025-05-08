#pragma once
#include "CoreMinimal.h"
#include "EMoviePlaybackType.generated.h"

UENUM(BlueprintType)
enum EMoviePlaybackType {
    MT_Normal,
    MT_Looped,
    MT_LoadingLoop,
};

