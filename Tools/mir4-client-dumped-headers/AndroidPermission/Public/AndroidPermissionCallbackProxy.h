#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AndroidPermissionDynamicDelegateDelegate.h"
#include "AndroidPermissionCallbackProxy.generated.h"

UCLASS(Blueprintable)
class ANDROIDPERMISSION_API UAndroidPermissionCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAndroidPermissionDynamicDelegate OnPermissionsGrantedDynamicDelegate;
    
    UAndroidPermissionCallbackProxy();

};

