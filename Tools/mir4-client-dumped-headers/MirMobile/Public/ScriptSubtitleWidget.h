#pragma once
#include "CoreMinimal.h"
#include "EDialoguePostion.h"
#include "WidgetBase.h"
#include "ScriptSubtitleWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UScriptSubtitleWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_SubtitleText;
    
    UScriptSubtitleWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TimeEnd_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSubtitleType(EDialoguePostion SubtitleType);
    
    UFUNCTION(BlueprintCallable)
    void EndSubtitle();
    
};

