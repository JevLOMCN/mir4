#pragma once
#include "CoreMinimal.h"
#include "ESpectatorClientRequestType.generated.h"

UENUM(BlueprintType)
enum class ESpectatorClientRequestType : uint8 {
    NonePending,
    ExistingSessionReservation,
    ReservationUpdate,
    EmptyServerReservation,
    Reconnect,
    Abandon,
};

