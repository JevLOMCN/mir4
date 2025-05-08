#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "PageTutorialGroup.h"
#include "PageTutorialData.generated.h"

UCLASS(Blueprintable)
class UPageTutorialData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPageTutorialGroup> PageTutorialStepArray;
    
    UPageTutorialData();

};

