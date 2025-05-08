#include "MediaSource.h"

UMediaSource::UMediaSource() {
}

bool UMediaSource::Validate() const {
    return false;
}

void UMediaSource::SetMediaOptionString(const FName& Key, const FString& Value) {
}

void UMediaSource::SetMediaOptionInt64(const FName& Key, int64 Value) {
}

void UMediaSource::SetMediaOptionFloat(const FName& Key, float Value) {
}

void UMediaSource::SetMediaOptionBool(const FName& Key, bool Value) {
}

FString UMediaSource::GetUrl() const {
    return TEXT("");
}


