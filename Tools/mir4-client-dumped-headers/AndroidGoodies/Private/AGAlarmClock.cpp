#include "AGAlarmClock.h"

UAGAlarmClock::UAGAlarmClock() {
}

void UAGAlarmClock::SnoozeAlarm(int32 snoozeDurationMinutes) {
}

void UAGAlarmClock::ShowAllTimers() {
}

void UAGAlarmClock::ShowAllAlarms() {
}

void UAGAlarmClock::SetTimer(int32 lengthSeconds, const FString& Message, bool skipUi) {
}

void UAGAlarmClock::SetAlarm(int32 Hour, int32 Minute, const FString& Message, FAGAlarmDaysData days, bool Vibrate, bool skipUi) {
}

bool UAGAlarmClock::CanSetTimer() {
    return false;
}

bool UAGAlarmClock::CanSetAlarm() {
    return false;
}


