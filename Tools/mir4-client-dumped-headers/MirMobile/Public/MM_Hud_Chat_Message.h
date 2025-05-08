#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_Chat_Message.generated.h"

class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Chat_Message : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Message;
    
public:
    UMM_Hud_Chat_Message();

};

