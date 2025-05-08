#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Chat_VoiceOption.generated.h"

class UMM_Common_Btn_Symbol;
class UMirCheckBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Chat_VoiceOption : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* Toggle_VoiceChat_Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* Toggle_VoiceChat_Microphone;
    
public:
    UMM_Popup_Chat_VoiceOption();

    UFUNCTION(BlueprintCallable)
    void OnToggleVoiceChatSound(bool CheckState);
    
    UFUNCTION(BlueprintCallable)
    void OnToggleVoiceChatMicrophone(bool CheckState);
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

