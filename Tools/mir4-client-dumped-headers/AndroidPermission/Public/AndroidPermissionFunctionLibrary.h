#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AndroidPermissionFunctionLibrary.generated.h"

class UAndroidPermissionCallbackProxy;

UCLASS(Blueprintable)
class ANDROIDPERMISSION_API UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAndroidPermissionFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool CheckPermission(const FString& permission);
    
    UFUNCTION(BlueprintCallable)
    static UAndroidPermissionCallbackProxy* AcquirePermissions(const TArray<FString>& Permissions);
    
};

