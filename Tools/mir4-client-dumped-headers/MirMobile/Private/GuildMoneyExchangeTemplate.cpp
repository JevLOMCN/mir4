#include "GuildMoneyExchangeTemplate.h"

FGuildMoneyExchangeTemplate::FGuildMoneyExchangeTemplate() {
    this->Name = 0;
    this->ExchangeId = 0;
    this->ExchangeType = 0;
    this->MoneyId_Send = 0;
    this->MoneyId_Receive = 0;
    this->ExchangeRate = 0;
    this->ExchangeStringId = 0;
    this->PayCommissionRate = 0;
    this->PayMailPresetId = 0;
    this->UnLockDevId = 0;
    this->UnLockDevLevel = 0;
    this->DonationReward_MoneyId = 0;
    this->DonationReward_MoneyRate = 0;
    this->DonationReward_GuildExpRate = 0;
    this->DonationMoneyMinValue = 0;
    this->PayMoneyMinValue = 0;
    this->ChangeMoneyMinValue = 0;
    this->DonationMoneyLimit = 0;
    this->DonationLevelLimit = 0;
}

