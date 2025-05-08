#include "UdpMessagingSettings.h"

UUdpMessagingSettings::UUdpMessagingSettings() {
    this->EnableTransport = true;
    this->bAutoRepair = true;
    this->MulticastTimeToLive = 1;
    this->EnableTunnel = false;
}


