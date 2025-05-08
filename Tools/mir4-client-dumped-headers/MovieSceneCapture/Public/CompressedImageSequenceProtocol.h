#pragma once
#include "CoreMinimal.h"
#include "ImageSequenceProtocol.h"
#include "CompressedImageSequenceProtocol.generated.h"

UCLASS(Abstract, Blueprintable, Config=Engine)
class MOVIESCENECAPTURE_API UCompressedImageSequenceProtocol : public UImageSequenceProtocol {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CompressionQuality;
    
    UCompressedImageSequenceProtocol();

};

