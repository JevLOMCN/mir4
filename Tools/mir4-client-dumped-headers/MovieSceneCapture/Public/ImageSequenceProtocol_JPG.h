#pragma once
#include "CoreMinimal.h"
#include "CompressedImageSequenceProtocol.h"
#include "ImageSequenceProtocol_JPG.generated.h"

UCLASS(Blueprintable)
class MOVIESCENECAPTURE_API UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol {
    GENERATED_BODY()
public:
    UImageSequenceProtocol_JPG();

};

