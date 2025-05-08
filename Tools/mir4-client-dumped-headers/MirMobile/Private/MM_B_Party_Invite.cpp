#include "MM_B_Party_Invite.h"

UMM_B_Party_Invite::UMM_B_Party_Invite() {
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->m_C_Btn_Close = NULL;
    this->m_C_Vrt_Tab = NULL;
    this->m_ListView_InviteList = NULL;
    this->m_ListView_MemberList = NULL;
    this->m_Txt_PartyInfo = NULL;
    this->m_Grid_Empty = NULL;
    this->m_Editable_NickName = NULL;
    this->m_C_Btn_FindUser = NULL;
    this->m_Can_Notice = NULL;
    this->m_HrzBox_Page = NULL;
    this->m_C_Btn_Prev = NULL;
    this->m_C_Btn_Next = NULL;
    this->m_Txt_PageNum = NULL;
    this->m_C_Btn_AllInvite = NULL;
    this->m_Ani_Start = NULL;
    this->m_Ani_End = NULL;
}

void UMM_B_Party_Invite::OnTextNickNameCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UMM_B_Party_Invite::OnClickSearchPagePrev() {
}

void UMM_B_Party_Invite::OnClickSearchPageNext() {
}

void UMM_B_Party_Invite::OnClickFindUser() {
}

void UMM_B_Party_Invite::OnClickClose() {
}

void UMM_B_Party_Invite::OnClickAllInvite() {
}

void UMM_B_Party_Invite::OnChangeTab(int32 iIndex, bool bLocked) {
}


