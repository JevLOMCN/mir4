#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EPermissionsPrivacy.h"
#include "RequestNewPublishPermissionsDelegateDelegate.h"
#include "RequestNewPublishPermissions.generated.h"

class URequestNewPublishPermissions;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API URequestNewPublishPermissions : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestNewPublishPermissionsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestNewPublishPermissionsDelegate OnFail;
    
    URequestNewPublishPermissions();

    UFUNCTION(BlueprintCallable)
    static URequestNewPublishPermissions* RequestNewPublishPermissions(const TArray<FString>& PermissionsSet, EPermissionsPrivacy PermissionsPrivacy);
    
};

