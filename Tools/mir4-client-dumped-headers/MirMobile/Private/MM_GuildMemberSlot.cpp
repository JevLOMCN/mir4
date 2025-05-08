#include "MM_GuildMemberSlot.h"

UMM_GuildMemberSlot::UMM_GuildMemberSlot() {
    this->Portrait = NULL;
    this->txt_nickname = NULL;
    this->img_combat_power = NULL;
    this->txt_combat_power = NULL;
    this->Btn_Main = NULL;
    this->img_online = NULL;
    this->btn_partner = NULL;
    this->portrait_partner = NULL;
    this->img_partner = NULL;
    this->txt_partner = NULL;
    this->GuildMemberSlotType = 0;
    this->ani_effect = NULL;
}

void UMM_GuildMemberSlot::OnClickPartner() {
}

void UMM_GuildMemberSlot::OnClick() {
}


