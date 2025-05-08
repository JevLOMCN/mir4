#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SequenceSkipWidget.generated.h"

class UButton;
class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class USequenceSkipWidget : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_CanSkip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_BtnSkip;
    
public:
    USequenceSkipWidget();

    UFUNCTION(BlueprintCallable)
    void OnClickSkip();
    
};

