#include "ObjectTemplate.h"

FObjectTemplate::FObjectTemplate() {
    this->Name = 0;
    this->ObjectID = 0;
    this->ObjectType = EGatherObjectType::NORMAL;
    this->ObjectGatherType = EObject_GatherType::NONE;
    this->GetWayType = 0;
    this->ObjectScale = 0.00f;
    this->ObjectNameSid = 0;
    this->ObjectNameOnOff = false;
    this->AlwaysVisible = false;
    this->CollectQualificationType = 0;
    this->CollectQualificationValue = 0;
    this->CollectMethod = 0;
    this->InteractionRange = 0;
    this->ProgressRangeInteraction = 0;
    this->ProgressRange = 0;
    this->CollectCountMin = 0;
    this->CollectCountMax = 0;
    this->CastingTime = 0;
    this->CastingDesc = 0;
    this->CollectAniType = 0;
    this->EffectScale = 0.00f;
    this->ObjectLoopFxId = 0;
    this->ObjectGenFxId = 0;
    this->ObjectAniOnOff = false;
    this->ABPLink = 0;
    this->ObjectDisappearTime = 0;
    this->DropItemId = 0;
    this->MonsterId = 0;
    this->MonGenType = 0;
    this->CollectIcon = 0;
    this->DecalScale = 0.00f;
    this->LinkOccupationId = 0;
    this->BroadcastingSize = 0;
    this->IsBossDropRewardBox = false;
    this->ObjectRadius = 0.00f;
    this->CollectActivationString = 0;
}

