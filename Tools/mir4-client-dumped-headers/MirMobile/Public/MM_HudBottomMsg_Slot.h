#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudBottomMsg_Slot.generated.h"

class UMirRichTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudBottomMsg_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniStart;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Message;
    
public:
    UMM_HudBottomMsg_Slot();

};

