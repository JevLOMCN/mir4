#pragma once
#include "CoreMinimal.h"
#include "EPartyReservationResult.generated.h"

UENUM(BlueprintType)
namespace EPartyReservationResult {
    enum Type {
        NoResult,
        RequestPending,
        GeneralError,
        PartyLimitReached,
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

