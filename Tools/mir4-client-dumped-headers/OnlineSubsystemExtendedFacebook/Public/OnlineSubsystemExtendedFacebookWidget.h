#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OnlineSubsystemExtendedFacebookWidget.generated.h"

class UButton;
class UOnlineSubsystemExtendedFacebookWebBrowser;

UCLASS(Blueprintable, EditInlineNew)
class UOnlineSubsystemExtendedFacebookWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineSubsystemExtendedFacebookWebBrowser* WebBrowser;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_Btn_Close;
    
public:
    UOnlineSubsystemExtendedFacebookWidget();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBackButton();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnUrlChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void EnableCustomStyle(bool bEnable);
    
};

