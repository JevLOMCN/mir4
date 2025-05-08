#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "FacebookQueryUserInfoDelegateDelegate.h"
#include "FacebookQueryUserInfo.generated.h"

class UFacebookQueryUserInfo;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UFacebookQueryUserInfo : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacebookQueryUserInfoDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacebookQueryUserInfoDelegate OnFail;
    
    UFacebookQueryUserInfo();

    UFUNCTION(BlueprintCallable)
    static UFacebookQueryUserInfo* FacebookQueryUserInfo(const FString& UserID);
    
};

