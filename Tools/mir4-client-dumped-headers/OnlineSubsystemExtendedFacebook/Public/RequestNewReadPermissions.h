#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "RequestNewReadPermissionsDelegateDelegate.h"
#include "RequestNewReadPermissions.generated.h"

class URequestNewReadPermissions;

UCLASS(Blueprintable)
class ONLINESUBSYSTEMEXTENDEDFACEBOOK_API URequestNewReadPermissions : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestNewReadPermissionsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRequestNewReadPermissionsDelegate OnFail;
    
    URequestNewReadPermissions();

    UFUNCTION(BlueprintCallable)
    static URequestNewReadPermissions* RequestNewReadPermissions(const TArray<FString>& PermissionsSet);
    
};

