#include "MM_Popup_Profile.h"

UMM_Popup_Profile::UMM_Popup_Profile() {
    this->MyProfile = NULL;
    this->m_ProfileImageEditor = NULL;
    this->m_IconListBox = NULL;
    this->m_ApplyBtn = NULL;
    this->m_AddProfileImage = NULL;
    this->m_SelectIcon = NULL;
    this->m_CloseBtn = NULL;
    this->m_pProfileTexture = NULL;
}

void UMM_Popup_Profile::UploadProfileImageResult(bool bSuccess) {
}


void UMM_Popup_Profile::SetUserProfileImage(UTexture2D* pProfileTexture) {
}

void UMM_Popup_Profile::OnClickClose() {
}

void UMM_Popup_Profile::OnClickApply() {
}

void UMM_Popup_Profile::OnClickAddProfile() {
}




TArray<UMM_ProfileSlot*> UMM_Popup_Profile::CreateIcon_Implementation(int32 Count) {
    return TArray<UMM_ProfileSlot*>();
}

void UMM_Popup_Profile::AddDeviceProfileImage(UTexture2D* pPhotoTexture, const FString& FailMessage) {
}


