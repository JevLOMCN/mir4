#include "FirebaseMessage.h"

FFirebaseMessage::FFirebaseMessage() {
    this->time_to_live = 0;
    this->notification_opened = false;
    this->sent_time = 0;
    this->have_notify = false;
}

