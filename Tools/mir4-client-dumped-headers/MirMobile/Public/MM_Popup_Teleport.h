#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Teleport.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Teleport : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnBGClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnSymClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnSymTeleport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_pScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_pCommonBoard;
    
public:
    UMM_Popup_Teleport();

    UFUNCTION(BlueprintCallable)
    void OnClickTeleport();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

