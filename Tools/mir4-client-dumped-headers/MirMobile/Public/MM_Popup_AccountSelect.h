#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MM_Popup_AccountSelect.generated.h"

class UMM_Common_Btn;
class UMirButton;
class UMirEditableText;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_AccountSelect : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_Edit_Account;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Login;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_GuestLogin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_GoogleLogin;
    
public:
    UMM_Popup_AccountSelect();

    UFUNCTION(BlueprintCallable)
    void OnCommitEditText(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnClickLogin();
    
    UFUNCTION(BlueprintCallable)
    void OnClickGuestLogin();
    
    UFUNCTION(BlueprintCallable)
    void OnClickGoogleLogin();
    
    UFUNCTION(BlueprintCallable)
    void LoginSvnID(FText LoginIDText);
    
};

