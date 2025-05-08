#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "WidgetBase.h"
#include "NormalPopupWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UNormalPopupWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility OneButton_Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility TwoButton_Visibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility ThreeButton_Visibility;
    
    UNormalPopupWidget();

    UFUNCTION(BlueprintCallable)
    void OnCloseWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedSecondBtn();
    
    UFUNCTION(BlueprintCallable)
    void OnClickedFirstBtn();
    
};

