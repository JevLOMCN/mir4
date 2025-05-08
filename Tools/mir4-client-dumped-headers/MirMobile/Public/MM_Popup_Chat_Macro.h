#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Chat_Macro.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_Hud_Chat_MacroSlot;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Chat_Macro : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Hud_Chat_MacroSlot*> m_SlotList;
    
public:
    UMM_Popup_Chat_Macro();

    UFUNCTION(BlueprintCallable)
    void OnSendMacroText(int32 SlotIndex, FString& MacroText);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveMacroText(int32 SlotIndex, FString& MacroText);
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

