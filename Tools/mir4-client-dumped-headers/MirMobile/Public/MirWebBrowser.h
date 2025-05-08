#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=WebBrowserWidget -ObjectName=WebBrowser -FallbackName=WebBrowser
#include "MirWebBrowser.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMirWebBrowser : public UWebBrowser {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLoadCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadCompleted OnLoadCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadCompleted OnLoadError;
    
    UMirWebBrowser();

protected:
    UFUNCTION(BlueprintCallable)
    void MirHandleOnUrlChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    bool MirHandleOnLoadUrl(const FString& Method, const FString& URL, FString& OutResponse);
    
    UFUNCTION(BlueprintCallable)
    bool MirHandleOnBeforePopup(const FString& URL, const FString& Frame);
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLoadError();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnLoadCompleted();
    
};

