#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "DialogTheme.h"
#include "OnCancelDelegateDelegate.h"
#include "OnDateSetDelegateDelegate.h"
#include "OnTimeSetDelegateDelegate.h"
#include "AGDateTimePickerBPL.generated.h"

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGDateTimePickerBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGDateTimePickerBPL();

    UFUNCTION(BlueprintCallable)
    static void ShowTimePicker(int32 Hour, int32 Minute, const FOnTimeSetDelegate& onTimeSetCallback, const FOnCancelDelegate& onCancelCallback, TEnumAsByte<DialogTheme> Theme, bool is24HourView);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDatePickerWithLimits(FDateTime initialDate, const FOnDateSetDelegate& onDateSetCallback, const FOnCancelDelegate& onCancelCallback, FDateTime fromDate, FDateTime toDate, TEnumAsByte<DialogTheme> Theme);
    
    UFUNCTION(BlueprintCallable)
    static void ShowDatePicker(FDateTime initialDate, const FOnDateSetDelegate& onDateSetCallback, const FOnCancelDelegate& onCancelCallback, TEnumAsByte<DialogTheme> Theme);
    
};

