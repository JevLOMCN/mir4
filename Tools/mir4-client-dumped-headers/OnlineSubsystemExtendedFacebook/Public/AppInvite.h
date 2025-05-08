#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "AppInviteDelegateDelegate.h"
#include "AppInvite.generated.h"

class UAppInvite;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API UAppInvite : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppInviteDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppInviteDelegate OnFail;
    
    UAppInvite();

    UFUNCTION(BlueprintCallable)
    static UAppInvite* AppInvite(const FString& AppLinkURL, const FString& PreviewImageURL);
    
};

