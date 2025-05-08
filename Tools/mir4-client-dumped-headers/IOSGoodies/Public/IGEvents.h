#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EventCreatedDelegateDelegate.h"
#include "EventErrorDelegateDelegate.h"
#include "EventRemovedDelegateDelegate.h"
#include "RecurrencyRuleType.h"
#include "IGEvents.generated.h"

UCLASS(Blueprintable)
class IOSGOODIES_API UIGEvents : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGEvents();

    UFUNCTION(BlueprintCallable)
    static void RemoveCalendarEvent(const FString& eventId, const FEventRemovedDelegate& onRemovedCallback);
    
    UFUNCTION(BlueprintCallable)
    static void OpenCalendarAtDate(FDateTime date);
    
    UFUNCTION(BlueprintCallable)
    static void OpenCalendar();
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteReminder(const FString& reminderId);
    
    UFUNCTION(BlueprintCallable)
    static void CreateRepeatingEvent(const FString& Title, const FString& notes, FDateTime StartDate, FDateTime EndDate, FDateTime repeatUntilDate, TEnumAsByte<RecurrencyRuleType> ruleType, int32 Interval, const FEventCreatedDelegate& onSuccessCallback, const FEventErrorDelegate& onErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void CreateReminder(const FString& Title, FDateTime StartDate, FDateTime dueDate, const FEventCreatedDelegate& onSuccessCallback, const FEventErrorDelegate& onErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void CreateCalendarEvent(const FString& Title, const FString& notes, FDateTime StartDate, FDateTime EndDate, const FEventCreatedDelegate& onSuccessCallback, const FEventErrorDelegate& onErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static bool CompleteReminder(const FString& reminderId, bool complete);
    
};

