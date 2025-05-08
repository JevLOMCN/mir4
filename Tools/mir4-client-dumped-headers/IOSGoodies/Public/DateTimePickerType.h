#pragma once
#include "CoreMinimal.h"
#include "DateTimePickerType.generated.h"

UENUM(BlueprintType)
enum DateTimePickerType {
    DatePicker,
    TimePicker,
    DateTimePicker,
    CountdownTimer,
};

