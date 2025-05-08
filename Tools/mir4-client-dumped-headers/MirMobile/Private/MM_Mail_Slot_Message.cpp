#include "MM_Mail_Slot_Message.h"

UMM_Mail_Slot_Message::UMM_Mail_Slot_Message() {
    this->ICON_READ_MAIL = 1400;
    this->ICON_NOT_READ_MAIL = 1401;
    this->ICON_READ_SEND_MAIL = 1402;
    this->ICON_NOT_READ_SEND_MAIL = 1403;
    this->ICON_READ_MAIL_INCLUDE_ITEM = 1404;
    this->ICON_NOT_READ_MAIL_INCLUDE_ITEM = 1405;
    this->ICON_READ_SEND_MAIL_INCLUDE_ITEM = 1406;
    this->ICON_NOT_READ_SEND_MAIL_INCLUDE_ITEM = 1407;
    this->m_Txt_Title = NULL;
    this->m_Txt_SubTitle = NULL;
    this->m_Txt_SendTime = NULL;
    this->m_RTxt_ExpireTime = NULL;
    this->m_Img_IconState = NULL;
    this->m_Img_Selected = NULL;
    this->m_Btn_Main = NULL;
}

void UMM_Mail_Slot_Message::OnClickMain() {
}


