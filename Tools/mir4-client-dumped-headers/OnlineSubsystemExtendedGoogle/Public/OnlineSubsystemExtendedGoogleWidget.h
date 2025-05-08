#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "OnlineSubsystemExtendedGoogleWidget.generated.h"

class UButton;
class UOnlineSubsystemExtendedGoogleWebBrowser;

UCLASS(Blueprintable, EditInlineNew)
class UOnlineSubsystemExtendedGoogleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOnlineSubsystemExtendedGoogleWebBrowser* WebBrowser;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_Btn_Close;
    
public:
    UOnlineSubsystemExtendedGoogleWidget();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnUrlChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void EnableCustomStyle(bool bEnable);
    
};

