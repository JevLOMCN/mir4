#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OnlineSubsystemExtendedSteamWidget.generated.h"

class UButton;
class UOnlineSubsystemExtendedSteamWebBrowser;

UCLASS(Blueprintable, EditInlineNew)
class UOnlineSubsystemExtendedSteamWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineSubsystemExtendedSteamWebBrowser* WebBrowser;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_Btn_Close;
    
public:
    UOnlineSubsystemExtendedSteamWidget();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnUrlChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void EnableCustomStyle(bool bEnable);
    
};

