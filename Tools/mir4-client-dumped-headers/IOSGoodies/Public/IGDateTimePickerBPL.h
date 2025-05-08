#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "OnDateTimeCancelDelegateDelegate.h"
#include "OnDateTimeSetDelegateDelegate.h"
#include "IGDateTimePickerBPL.generated.h"

UCLASS(Blueprintable)
class IOSGOODIES_API UIGDateTimePickerBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGDateTimePickerBPL();

    UFUNCTION(BlueprintCallable)
    static void ShowTimePickerWithLimits(int32 Hour, int32 Minute, int32 fromHour, int32 fromMinute, int32 toHour, int32 toMinute, const FOnDateTimeSetDelegate& onTimeSetCallback, const FOnDateTimeCancelDelegate& onCancelCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowTimePicker(int32 Hour, int32 Minute, const FOnDateTimeSetDelegate& onTimeSetCallback, const FOnDateTimeCancelDelegate& onCancelCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDateTimePickerWithLimits(FDateTime initialDate, FDateTime fromDate, FDateTime toDate, int32 Hour, int32 Minute, int32 fromHour, int32 fromMinute, int32 toHour, int32 toMinute, const FOnDateTimeSetDelegate& onDateTimeSetCallback, const FOnDateTimeCancelDelegate& onCancelCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDateTimePicker(FDateTime initialDate, int32 Hour, int32 Minute, const FOnDateTimeSetDelegate& onDateTimeSetCallback, const FOnDateTimeCancelDelegate& onCancelCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDatePickerWithLimits(FDateTime initialDate, FDateTime fromDate, FDateTime toDate, const FOnDateTimeSetDelegate& onDateSetCallback, const FOnDateTimeCancelDelegate& onCancelCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDatePicker(FDateTime initialDate, const FOnDateTimeSetDelegate& onDateSetCallback, const FOnDateTimeCancelDelegate& onCancelCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ShowCoundownTimer(int32 Hour, int32 Minute, const FOnDateTimeSetDelegate& onTimerSetCallback, const FOnDateTimeCancelDelegate& onCancelCallback);
    
};

