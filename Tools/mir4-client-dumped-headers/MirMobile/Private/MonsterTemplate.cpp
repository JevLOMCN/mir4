#include "MonsterTemplate.h"

FMonsterTemplate::FMonsterTemplate() {
    this->MonsterId = 0;
    this->MonsterResourceID = 0;
    this->GroupId = 0;
    this->NameSId = 0;
    this->NameTitleSid = 0;
    this->Race = 0;
    this->MonGrade = 0;
    this->WaypointAuto = 0;
    this->Level = 0;
    this->MonType = 0;
    this->MonScale = 0.00f;
    this->RunSpeed = 0;
    this->WalkSpeed = 0;
    this->MaxHP = 0;
    this->HpStack = 0;
    this->CombatPower = 0;
    this->PierceBody = 0;
    this->FactionType = EMONSTER_FACTION::Neutral;
    this->MonColorGroupID = 0;
    this->CapsuleHalfHeight = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->UseAppear = 0.00f;
    this->SiegeMode = 0;
    this->CollectItemId = 0;
    this->DropItemId = 0;
    this->PhysicalAttack = 0;
    this->MagicAttack = 0;
    this->Physicaldefense = 0;
    this->Magicdefense = 0;
    this->Accuracy = 0;
    this->Dodge = 0;
    this->AiIndex = 0;
    this->LongAttackRange = 0;
}

