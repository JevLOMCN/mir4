#include "MovieScene3DAttachSectionTemplate.h"

FMovieScene3DAttachSectionTemplate::FMovieScene3DAttachSectionTemplate() {
    this->AttachmentLocationRule = EAttachmentRule::KeepRelative;
    this->AttachmentRotationRule = EAttachmentRule::KeepRelative;
    this->AttachmentScaleRule = EAttachmentRule::KeepRelative;
    this->DetachmentLocationRule = EDetachmentRule::KeepRelative;
    this->DetachmentRotationRule = EDetachmentRule::KeepRelative;
    this->DetachmentScaleRule = EDetachmentRule::KeepRelative;
}

