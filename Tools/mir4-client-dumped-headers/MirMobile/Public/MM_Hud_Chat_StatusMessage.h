#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_Chat_StatusMessage.generated.h"

class UMirButton;
class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Chat_StatusMessage : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_TalkMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_StageInfo;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 m_UserUID;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int64 m_iSendTime;
    
public:
    UMM_Hud_Chat_StatusMessage();

    UFUNCTION(BlueprintCallable)
    void OnClickStageInfo();
    
};

