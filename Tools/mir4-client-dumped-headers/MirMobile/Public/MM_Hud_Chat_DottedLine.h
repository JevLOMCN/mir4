#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_Chat_DottedLine.generated.h"

class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Chat_DottedLine : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* RTxt_DottedLine;
    
public:
    UMM_Hud_Chat_DottedLine();

};

