#include "IGEvents.h"

UIGEvents::UIGEvents() {
}

void UIGEvents::RemoveCalendarEvent(const FString& eventId, const FEventRemovedDelegate& onRemovedCallback) {
}

void UIGEvents::OpenCalendarAtDate(FDateTime date) {
}

void UIGEvents::OpenCalendar() {
}

bool UIGEvents::DeleteReminder(const FString& reminderId) {
    return false;
}

void UIGEvents::CreateRepeatingEvent(const FString& Title, const FString& notes, FDateTime StartDate, FDateTime EndDate, FDateTime repeatUntilDate, TEnumAsByte<RecurrencyRuleType> ruleType, int32 Interval, const FEventCreatedDelegate& onSuccessCallback, const FEventErrorDelegate& onErrorCallback) {
}

void UIGEvents::CreateReminder(const FString& Title, FDateTime StartDate, FDateTime dueDate, const FEventCreatedDelegate& onSuccessCallback, const FEventErrorDelegate& onErrorCallback) {
}

void UIGEvents::CreateCalendarEvent(const FString& Title, const FString& notes, FDateTime StartDate, FDateTime EndDate, const FEventCreatedDelegate& onSuccessCallback, const FEventErrorDelegate& onErrorCallback) {
}

bool UIGEvents::CompleteReminder(const FString& reminderId, bool complete) {
    return false;
}


