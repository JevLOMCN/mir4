#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Common_Popup_Info.generated.h"

class UMirRichTextBlock;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Common_Popup_Info : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Txt_Message;
    
public:
    UMM_Common_Popup_Info();

};

