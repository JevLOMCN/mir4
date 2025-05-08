#include "ItemGetWayInfoTemplate.h"

FItemGetWayInfoTemplate::FItemGetWayInfoTemplate() {
    this->UniqueId = 0;
    this->StageId = 0;
    this->NpcID = 0;
    this->LinkID = 0;
    this->GetWayType = EItemGetWayType::NONE;
    this->LinkType = EItemGetWayLinkType::NONE;
}

