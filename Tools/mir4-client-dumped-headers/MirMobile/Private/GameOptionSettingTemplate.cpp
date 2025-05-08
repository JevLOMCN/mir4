#include "GameOptionSettingTemplate.h"

FGameOptionSettingTemplate::FGameOptionSettingTemplate() {
    this->Name = 0;
    this->GameOptionKey = EGameOptionType::None;
    this->DefaultSettingType = 0;
    this->DefaultSettingValueCommon = 0;
    this->DefaultSettingValuePCW = 0;
    this->DefaultSettingValuePCM = 0;
    this->DefaultSettingValuePCT = 0;
    this->DefaultSettingValuePCA = 0;
    this->DefaultSettingValuePCZ = 0;
    this->OptionStorageType = 0;
    this->MinimumValue = 0;
    this->MaximumValue = 0;
}

