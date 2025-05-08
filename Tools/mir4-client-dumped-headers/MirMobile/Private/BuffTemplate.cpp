#include "BuffTemplate.h"

FBuffTemplate::FBuffTemplate() {
    this->BuffId = 0;
    this->BuffName = 0;
    this->BuffExplain = 0;
    this->ShowDamageFont = 0;
    this->ShowDamageLog = 0;
    this->PetId = 0;
    this->BuffUseType = 0;
    this->ApplyType = 0;
    this->BuffTarget = 0;
    this->ActEffect = 0;
    this->BuffEffect = 0;
    this->BuffEffectScale = 0;
    this->icon = 0;
    this->Icon_Big = 0;
    this->BuffTime = 0.00f;
    this->LevelUpBuffTime = 0.00f;
    this->BuffType = 0;
    this->BuffIndexType_1 = 0;
    this->BuffIndex_1 = 0;
    this->BuffValue_1 = 0;
    this->LevelUpBuffValue_1 = 0;
    this->BuffValueEx_1 = 0;
    this->BuffIndexType_2 = 0;
    this->BuffIndex_2 = 0;
    this->BuffValue_2 = 0;
    this->LevelUpBuffValue_2 = 0;
    this->BuffValueEx_2 = 0;
    this->BuffIndexType_3 = 0;
    this->BuffIndex_3 = 0;
    this->BuffValue_3 = 0;
    this->LevelUpBuffValue_3 = 0;
    this->BuffValueEx_3 = 0;
    this->BuffOverlap = 0;
    this->EffectSocket_Type = EBuffSocketType::NONE;
    this->EffectHeight = 0.00f;
    this->BuffArmorType = 0;
    this->BuffProbability = 0;
    this->UpdateRule = 0;
    this->Fresnel_Exponenth = 0.00f;
    this->Fresnel_BaseReflect = 0.00f;
    this->BuffAttackID = 0;
    this->ExtinctionEffect = 0;
    this->OverLapCallGroupID = 0;
    this->KeepType_Die = 0;
    this->KeepType_StageOut = 0;
    this->KeepType_LogOut = 0;
    this->IsHideRemainTime = 0;
}

