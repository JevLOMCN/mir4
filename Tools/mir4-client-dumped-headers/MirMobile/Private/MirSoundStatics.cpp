#include "MirSoundStatics.h"

UMirSoundStatics::UMirSoundStatics() {
}

void UMirSoundStatics::UpdateFieldBGM() {
}

void UMirSoundStatics::StopSound(int32 TableID) {
}

void UMirSoundStatics::StopDialogueSound() {
}

void UMirSoundStatics::StopBGM() {
}

void UMirSoundStatics::SetMediaVolume(UMediaSoundComponent* pMesiaSoundComponent, float fVolume) {
}

void UMirSoundStatics::PlaySoundAtLocation_TableID(int32 TableID, FVector Location) {
}

void UMirSoundStatics::PlaySoundAtLocation(USoundBase* pSoundBase, FVector Location) {
}

void UMirSoundStatics::PlaySound2D_SoundBase(USoundBase* pSoundBase) {
}

void UMirSoundStatics::PlaySound2D(int32 TableID) {
}

void UMirSoundStatics::PlaySound(int32 TableID) {
}

void UMirSoundStatics::PlayMirSoundData(EMirSoundDataType SoundType) {
}

void UMirSoundStatics::PlayDialogueSound(int32 TableID) {
}

void UMirSoundStatics::PlayBGM_SoundBase(USoundBase* pSoundBase, bool bPhasingBGM) {
}

void UMirSoundStatics::PlayBGM(int32 TableID, bool bPhasingBGM) {
}

void UMirSoundStatics::MuteSound(EMirSoundClass SoundType, bool bMute) {
}

void UMirSoundStatics::LoadOptionVolume() {
}

bool UMirSoundStatics::GetPlayNotifySound() {
    return false;
}

bool UMirSoundStatics::ChangeSoundVolume(EMirSoundClass SoundType, float Volume, float FadeInTime) {
    return false;
}


