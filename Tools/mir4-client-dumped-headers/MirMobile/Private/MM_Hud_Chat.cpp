#include "MM_Hud_Chat.h"

UMM_Hud_Chat::UMM_Hud_Chat() {
    this->m_AniStart = NULL;
    this->m_AniEnd = NULL;
    this->MAX_VIEW_MESSAGE_COUNT = 3;
    this->TEXT_WRAPPING_SIZE = 300.00f;
    this->m_ScrollBox = NULL;
    this->m_ChannelId = 0;
    this->m_InitAsyncLoad = false;
}


