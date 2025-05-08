#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "WidgetBase.h"
#include "MyLogWidget.generated.h"

class UScrollBox;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMyLogWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo m_LogFont;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_TxtToggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_SBoxLog;
    
public:
    UMyLogWidget();

    UFUNCTION(BlueprintCallable)
    void OnClickToggle();
    
};

