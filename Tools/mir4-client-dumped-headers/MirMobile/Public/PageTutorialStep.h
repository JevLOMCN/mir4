#pragma once
#include "CoreMinimal.h"
#include "PageTutorialStep.generated.h"

class UPaperSprite;

USTRUCT(BlueprintType)
struct FPageTutorialStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TitleStringID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TutorialDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> TutorialImageID;
    
    MIRMOBILE_API FPageTutorialStep();
};

