#pragma once
#include "CoreMinimal.h"
#include "MM_PreviewModeBase.h"
#include "MM_MapPreviewMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class AMM_MapPreviewMode : public AMM_PreviewModeBase {
    GENERATED_BODY()
public:
    AMM_MapPreviewMode(const FObjectInitializer& ObjectInitializer);

};

