#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BatteryState.h"
#include "UserInterfaceIdiom.h"
#include "IGDeviceInfo.generated.h"

UCLASS(Blueprintable)
class IOSGOODIES_API UIGDeviceInfo : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGDeviceInfo();

private:
    UFUNCTION(BlueprintCallable)
    static void SetProximityMonitoringEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static void SetBatteryMonitoringEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    static bool ProximityState();
    
    UFUNCTION(BlueprintCallable)
    static bool IsProximityMonitoringEnabled();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMultitaskingSupported();
    
    UFUNCTION(BlueprintCallable)
    static bool IsBatteryMonitoringEnabled();
    
    UFUNCTION(BlueprintCallable)
    static FString GetUUID();
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<UserInterfaceIdiom> GetUserInterfaceIdiom();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSystemVersion();
    
    UFUNCTION(BlueprintCallable)
    static FString GetSystemName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetName();
    
    UFUNCTION(BlueprintCallable)
    static FString GetModel();
    
    UFUNCTION(BlueprintCallable)
    static FString GetLocalizedModel();
    
    UFUNCTION(BlueprintCallable)
    static BatteryState GetBatteryState();
    
    UFUNCTION(BlueprintCallable)
    static float GetBatteryLevel();
    
};

