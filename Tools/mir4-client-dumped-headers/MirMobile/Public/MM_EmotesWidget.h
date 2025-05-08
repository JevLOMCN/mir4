#pragma once
#include "CoreMinimal.h"
#include "EmoteSlotInfo.h"
#include "WidgetBase.h"
#include "MM_EmotesWidget.generated.h"

class UWidget;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_EmotesWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_EmotesWrapBox;
    
    UMM_EmotesWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEmotionSlotText(UWidget* EmoteSlot, const FText& NameText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayOpenAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayCloseAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnCloseWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnClickEmoteButton(int32 EmoteID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CreateEmotesSlot(const TArray<FEmoteSlotInfo>& EmoteInfoArray);
    
};

