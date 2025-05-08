#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Party_Slot_Option.generated.h"

class UMM_Common_Btn_Symbol;
class UMM_Popup_Party_Slot_Option_Item;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Party_Slot_Option : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_C_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Popup_Party_Slot_Option_Item*> m_arSlotItems;
    
public:
    UMM_Popup_Party_Slot_Option();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

