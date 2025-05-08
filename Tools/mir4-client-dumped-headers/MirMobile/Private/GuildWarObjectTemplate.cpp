#include "GuildWarObjectTemplate.h"

FGuildWarObjectTemplate::FGuildWarObjectTemplate() {
    this->ObjectID = 0;
    this->ObjectKind = EGuildWarObjectKind::NONE;
    this->OwnerShip = EGuildWarObjectOwnerShip::NEUTRAL;
    this->SiegeZoneRange = 0;
    this->SiegeZone_MaxPoint = 0;
    this->SiegeZone_AddPoint = 0;
    this->SiegeZone_FallPoint = 0;
    this->SiegeZone_LockTimeSec = 0;
    this->SiegeRankingPoint = 0;
    this->SiegeZoneUIHeight = 0;
    this->Plunder_DarkSteelRewardValue = 0;
}

