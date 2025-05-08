#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnChangedAndroidDeviceStateDelegate.h"
#include "WNAndroidDeviceState.generated.h"

class UWNAndroidDeviceState;

UCLASS(Blueprintable)
class WNGAMEPLUGIN_API UWNAndroidDeviceState : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnChangedAndroidDeviceState OnChangedAndroidDeviceState;
    
    UWNAndroidDeviceState();

    UFUNCTION(BlueprintCallable)
    static void DisConnectListener(UWNAndroidDeviceState* RemoveListener);
    
    UFUNCTION(BlueprintCallable)
    static UWNAndroidDeviceState* ConnectListener();
    
};

