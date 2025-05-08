#include "MM_DeviceInfo.h"

UMM_DeviceInfo::UMM_DeviceInfo() {
    this->m_bUse_NetworkType = true;
    this->m_bUse_Battery = true;
    this->m_bUse_Time = true;
    this->m_bUse_ExpSpacer = false;
    this->m_fUpdateSignalStrengthInterval = 1.00f;
    this->m_fUpdateBatteryInterval = 1.00f;
    this->m_fUpdateTimeInterval = 1.00f;
    this->m_Spc_NetworkType = NULL;
    this->m_Overlay_NetworkType = NULL;
    this->m_Img_WiFi = NULL;
    this->m_Txt_Mobile = NULL;
    this->m_Spc_Battery = NULL;
    this->m_Can_Battery = NULL;
    this->m_Prg_Battery = NULL;
    this->m_Img_BatteryCharge = NULL;
    this->m_Txt_Battery = NULL;
    this->m_Spc_Time = NULL;
    this->m_Img_Time = NULL;
    this->m_Txt_Time = NULL;
    this->m_Spc_Exp = NULL;
    this->m_Hrz_Ping = NULL;
    this->m_Img_Ping = NULL;
    this->m_Txt_Ping = NULL;
}


