#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SpinBoxStyle -FallbackName=SpinBoxStyle
#include "SpinBoxWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpinBoxStyle SpinBoxStyle;
    
    USpinBoxWidgetStyle();

};

