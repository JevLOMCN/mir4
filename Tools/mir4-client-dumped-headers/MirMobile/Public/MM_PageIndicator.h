#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MM_PageIndicator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_PageIndicator : public UUserWidget {
    GENERATED_BODY()
public:
    UMM_PageIndicator();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIndicator(int32 IndicatorIndex);
    
    UFUNCTION(BlueprintCallable)
    bool OnClickIndicator(int32 PageIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreatePageIndicator(int32 IndicatorLength);
    
};

