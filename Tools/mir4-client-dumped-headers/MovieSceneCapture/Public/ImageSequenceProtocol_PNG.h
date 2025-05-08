#pragma once
#include "CoreMinimal.h"
#include "CompressedImageSequenceProtocol.h"
#include "ImageSequenceProtocol_PNG.generated.h"

UCLASS(Blueprintable)
class MOVIESCENECAPTURE_API UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol {
    GENERATED_BODY()
public:
    UImageSequenceProtocol_PNG();

};

