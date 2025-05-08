#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_ServerVisitSelect.generated.h"

class UHorizontalBox;
class UMM_Common_Btn_Symbol;
class UMM_Popup_ServerVisitSelect_Slot;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Popup_ServerVisitSelect : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_Hrz_Contents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Popup_ServerVisitSelect_Slot*> m_arrContentsSlot;
    
public:
    UMM_Popup_ServerVisitSelect();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

