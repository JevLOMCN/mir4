#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_ServerVisit_Members.generated.h"

class UMM_Common_Btn_Symbol;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Popup_ServerVisit_Members : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_BtnClose;
    
public:
    UMM_Popup_ServerVisit_Members();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

