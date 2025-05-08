#pragma once
#include "CoreMinimal.h"
#include "PaperFlipbookKeyFrame.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FPaperFlipbookKeyFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPaperSprite* Sprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FrameRun;
    
    PAPER2D_API FPaperFlipbookKeyFrame();
};

