#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MM_Hud_Chat_MacroSlot.generated.h"

class UEditableText;
class UMM_Common_Btn;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Chat_MacroSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuideMsgTid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubmitMsgTID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CheckEmptyTextMsgTID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Txt_Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEditableText* m_EditTxt_MacroMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Submit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FText m_MacroText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_SlotIndex;
    
public:
    UMM_Hud_Chat_MacroSlot();

    UFUNCTION(BlueprintCallable)
    void OnCommittedMacroTextField(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitType);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSendMessage();
    
    UFUNCTION(BlueprintCallable)
    void OnChangedMacroTextField(const FText& InText);
    
};

