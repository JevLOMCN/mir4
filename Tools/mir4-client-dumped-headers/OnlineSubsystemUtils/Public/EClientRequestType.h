#pragma once
#include "CoreMinimal.h"
#include "EClientRequestType.generated.h"

UENUM(BlueprintType)
enum class EClientRequestType : uint8 {
    NonePending,
    ExistingSessionReservation,
    ReservationUpdate,
    EmptyServerReservation,
    Reconnect,
    Abandon,
    ReservationRemoveMembers,
};

