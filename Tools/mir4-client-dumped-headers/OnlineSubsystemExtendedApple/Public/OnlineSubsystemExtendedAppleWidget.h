#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OnlineSubsystemExtendedAppleWidget.generated.h"

class UButton;
class UOnlineSubsystemExtendedAppleWebBrowser;

UCLASS(Blueprintable, EditInlineNew)
class UOnlineSubsystemExtendedAppleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineSubsystemExtendedAppleWebBrowser* WebBrowser;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_Btn_Close;
    
public:
    UOnlineSubsystemExtendedAppleWidget();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnUrlChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void EnableCustomStyle(bool bEnable);
    
};

