#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HuaweiPushHelper.generated.h"

UCLASS(Blueprintable)
class UHuaweiPushHelper : public UObject {
    GENERATED_BODY()
public:
    UHuaweiPushHelper();

    UFUNCTION(BlueprintCallable)
    void OnResponseHuaweiPushUnSubscribe(bool bSuccess, int32 resultCode);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseHuaweiPushSubscribe(bool bSuccess, int32 resultCode);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseHuaweiPushNewToken(bool bSuccess, int32 resultCode, const FString& Token);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseHuaweiPushMessageReceived(bool bSuccess, int32 resultCode, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseHuaweiPushGetToken(bool bSuccess, int32 resultCode, const FString& Token);
    
    UFUNCTION(BlueprintCallable)
    void OnResponseHuaweiPushDeleteToken(bool bSuccess, int32 resultCode);
    
};

