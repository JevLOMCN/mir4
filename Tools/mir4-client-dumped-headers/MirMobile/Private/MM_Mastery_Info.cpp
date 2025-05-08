#include "MM_Mastery_Info.h"

UMM_Mastery_Info::UMM_Mastery_Info() {
    this->mMasteryTitle = NULL;
    this->mTrainingPanel = NULL;
    this->mTrainingSlotPanel = NULL;
    this->mRTxtSuccessPercent = NULL;
    this->mCBTrainingCost = NULL;
    this->mUpgradePanel = NULL;
    this->mRTxtNeedCharLevel = NULL;
    this->mFirstMatItemPanel = NULL;
    this->mSecondMatItemPanel = NULL;
    this->mCBUpgradeCost = NULL;
}

void UMM_Mastery_Info::OnClickUpgrade() {
}

void UMM_Mastery_Info::OnClickTraining() {
}

void UMM_Mastery_Info::OnClickMatUpgradeSlot(int64 ItemUID, int32 ItemTID, int32 EquipPosition) {
}

void UMM_Mastery_Info::OnClickMatTrainingSlot(int64 ItemUID, int32 ItemTID, int32 EquipPosition) {
}


