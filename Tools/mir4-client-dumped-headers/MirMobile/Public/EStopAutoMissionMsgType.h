#pragma once
#include "CoreMinimal.h"
#include "EStopAutoMissionMsgType.generated.h"

UENUM(BlueprintType)
enum class EStopAutoMissionMsgType : uint8 {
    Normal,
    Main,
    AccountChange,
    InputDirection,
    Party,
    PartyAssemble,
    AutoSetting,
    ChannelChange,
    AutoBattle,
    AutoGather,
    AirWalk,
    ChatPosition,
    PartyMove,
};

