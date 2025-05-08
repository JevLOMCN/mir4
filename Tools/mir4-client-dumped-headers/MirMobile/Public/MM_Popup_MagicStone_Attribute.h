#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_MagicStone_Attribute.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_MagicStone_Attribute : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sb_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* notice_empty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_BG;
    
public:
    UMM_Popup_MagicStone_Attribute();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

