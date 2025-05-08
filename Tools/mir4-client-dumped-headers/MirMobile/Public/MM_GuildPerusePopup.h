#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GuildPerusePopup.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirCanvasPanel;
class UMirCheckBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GuildPerusePopup : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* cb_combatpower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* cb_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* cb_none;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* cb_recommend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* cb_request;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* cb_invited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* cb_confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* cb_cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* cp_filter;
    
public:
    UMM_GuildPerusePopup();

    UFUNCTION(BlueprintCallable)
    void OnClickRequest(bool checked_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickRecommend(bool checked_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickNone(bool checked_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickLevel(bool checked_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickInvited(bool checked_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCombatPower(bool checked_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancel();
    
};

