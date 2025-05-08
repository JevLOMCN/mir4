#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AGAlarmDaysData.h"
#include "AGAlarmClock.generated.h"

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGAlarmClock : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGAlarmClock();

    UFUNCTION(BlueprintCallable)
    static void SnoozeAlarm(int32 snoozeDurationMinutes);
    
    UFUNCTION(BlueprintCallable)
    static void ShowAllTimers();
    
    UFUNCTION(BlueprintCallable)
    static void ShowAllAlarms();
    
    UFUNCTION(BlueprintCallable)
    static void SetTimer(int32 lengthSeconds, const FString& Message, bool skipUi);
    
    UFUNCTION(BlueprintCallable)
    static void SetAlarm(int32 Hour, int32 Minute, const FString& Message, FAGAlarmDaysData days, bool Vibrate, bool skipUi);
    
    UFUNCTION(BlueprintCallable)
    static bool CanSetTimer();
    
    UFUNCTION(BlueprintCallable)
    static bool CanSetAlarm();
    
};

