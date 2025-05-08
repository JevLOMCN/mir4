#pragma once
#include "CoreMinimal.h"
#include "MM_MessageWidgetBase.h"
#include "MM_GM_Msg.generated.h"

class UMirCanvasPanel;
class UMirImage;
class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GM_Msg : public UMM_MessageWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShowTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* m_pPanelArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Bg;
    
public:
    UMM_GM_Msg();

};

