#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnlineSubsystemExtendedGoogleWebBrowser.generated.h"

UCLASS(Blueprintable)
class UOnlineSubsystemExtendedGoogleWebBrowser : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUrlChanged, const FText&, Text);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUrlChanged OnUrlChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InitialURL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsTransparency;
    
public:
    UOnlineSubsystemExtendedGoogleWebBrowser();

    UFUNCTION(BlueprintCallable)
    void LoadURL(const FString& NewURL);
    
};

