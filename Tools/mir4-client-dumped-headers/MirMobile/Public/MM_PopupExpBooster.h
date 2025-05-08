#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopupExpBooster.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirRichTextBlock;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopupExpBooster : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* txt_time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* txt_1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_exp_booster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* txt_active;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sb_status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_go_to_shop;
    
public:
    UMM_PopupExpBooster();

    UFUNCTION(BlueprintCallable)
    void OnClickGoShop();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

