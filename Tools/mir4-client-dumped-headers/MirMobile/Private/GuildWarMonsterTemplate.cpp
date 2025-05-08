#include "GuildWarMonsterTemplate.h"

FGuildWarMonsterTemplate::FGuildWarMonsterTemplate() {
    this->MonsterId = 0;
    this->MonsterKind = EGuildWarMonsterKind::NONE;
    this->OwnerShip = 0;
    this->GetBuffPerOwner_SearchRange = 0;
    this->GetBuffPerOwner_BuffId = 0;
    this->SiegeWeaponImgId = 0;
    this->SiegeWeaponNoteSId = 0;
    this->SiegeWeaponGuildDevId = 0;
    this->SiegeWeaponReqMoneyId01 = 0;
    this->SiegeWeaponReqMoneyCnt01 = 0;
    this->SiegeWeaponReqMoneyId02 = 0;
    this->SiegeWeaponReqMoneyCnt02 = 0;
    this->SiegeWeaponReqMoneyId03 = 0;
    this->SiegeWeaponReqMoneyCnt03 = 0;
    this->SiegeWeaponReqMoneyId04 = 0;
    this->SiegeWeaponReqMoneyCnt04 = 0;
    this->ProductionEffectType = 0;
    this->ProductionTime = 0;
    this->ReproductionCoolTime = 0;
    this->OpenTime_Minute = 0;
}

