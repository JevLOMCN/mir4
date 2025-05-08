#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_UserEvent_PaintExchange.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_UserEvent_PaintExchange : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_C_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_C_Btn_Regist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_C_Board_Notice;
    
public:
    UMM_Popup_UserEvent_PaintExchange();

    UFUNCTION(BlueprintCallable)
    void OnClickRegist();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

