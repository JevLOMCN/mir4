#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_TermsOfService.generated.h"

class UMM_Common_Btn;
class UMirCheckBox;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_TermsOfService : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_SelectAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Agree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_TermsInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_PrivacyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckBox_Terms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckBox_Privacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckBox_Ad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckBox_NightPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Hrz_NightPush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Hrz_Ad;
    
public:
    UMM_Popup_TermsOfService();

    UFUNCTION(BlueprintCallable)
    void OnClickTermsInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSelectAll();
    
    UFUNCTION(BlueprintCallable)
    void OnClickPrivacyInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBoxTerms(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBoxPrivacy(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBoxNightPush(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBoxAd(bool bChecked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickAgree();
    
};

