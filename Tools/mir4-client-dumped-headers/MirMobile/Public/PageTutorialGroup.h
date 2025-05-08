#pragma once
#include "CoreMinimal.h"
#include "PageTutorialStep.h"
#include "PageTutorialGroup.generated.h"

USTRUCT(BlueprintType)
struct FPageTutorialGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPageTutorialStep> PageTutorialStepArray;
    
    MIRMOBILE_API FPageTutorialGroup();
};

