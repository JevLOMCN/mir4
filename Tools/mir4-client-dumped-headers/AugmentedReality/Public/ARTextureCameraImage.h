#pragma once
#include "CoreMinimal.h"
#include "ARTexture.h"
#include "ARTextureCameraImage.generated.h"

UCLASS(Abstract, Blueprintable)
class AUGMENTEDREALITY_API UARTextureCameraImage : public UARTexture {
    GENERATED_BODY()
public:
    UARTextureCameraImage();

};

