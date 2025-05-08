#include "MM_Dominion_Occupation.h"

UMM_Dominion_Occupation::UMM_Dominion_Occupation() {
    this->m_pTxtTitle = NULL;
    this->m_pImgCastleBg = NULL;
    this->m_pCommToolTip = NULL;
    this->m_pCommGuideBtn = NULL;
    this->m_pTxtRemainOpenSiege = NULL;
    this->m_pTxtRemainStartSiege = NULL;
    this->m_pBtnRefresh = NULL;
    this->m_pBtnMain = NULL;
    this->m_pCanvasOccupation = NULL;
    this->m_pCanvasNormal = NULL;
    this->m_pCanvasAuctionTitle = NULL;
    this->m_pMainAdminPortrait = NULL;
    this->m_pTxtMainAdminTitle = NULL;
    this->m_pTxtMainAdminName = NULL;
}

void UMM_Dominion_Occupation::OnSelectDelegate(int32 iPBS_ID) {
}

void UMM_Dominion_Occupation::OnClickRefreshButton() {
}

void UMM_Dominion_Occupation::OnClickMainButton() {
}

void UMM_Dominion_Occupation::OnClickGuildMember(int64 iGuildMemberUID) {
}


