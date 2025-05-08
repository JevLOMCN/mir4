#pragma once
#include "CoreMinimal.h"
#include "ESpectatorReservationResult.generated.h"

UENUM(BlueprintType)
namespace ESpectatorReservationResult {
    enum Type {
        NoResult,
        RequestPending,
        GeneralError,
        SpectatorLimitReached,
        IncorrectPlayerCount,
        RequestTimedOut,
        ReservationDuplicate,
        ReservationNotFound,
        ReservationAccepted,
        ReservationDenied,
        ReservationDenied_CrossPlayRestriction,
        ReservationDenied_Banned,
        ReservationRequestCanceled,
        ReservationInvalid,
        BadSessionId,
        ReservationDenied_ContainsExistingPlayers,
    };
}

