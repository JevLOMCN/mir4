#include "IGImagePicker.h"

UIGImagePicker::UIGImagePicker() {
}

void UIGImagePicker::TakeScreenShot(const FOnImagePickedDelegate& onScreenShotTakenCallback) {
}

void UIGImagePicker::SaveImageToGallery(UTexture2D* Texture, const FOnImageSavedDelegate& onImageSavedCallback, const FOnSaveErrorDelegate& onSaveErrorCallback) {
}

void UIGImagePicker::PickPhotoFromCamera(bool allowEditing, bool useRearCamera, TEnumAsByte<CameraFlashMode> flashMode, const FOnImagePickedDelegate& onPickPhotoFromCameraCallback, const FOnCancelPickDelegate& onCancelCallback, int32 MaxSize) {
}

void UIGImagePicker::PickMediaFromGallery(TEnumAsByte<GallerySourceType> SourceType, bool allowEditing, int32 posX, int32 posY, const FOnMediaPickedDelegate& onPickMediaFromGalleryCallback, const FOnCancelPickDelegate& onCancelCallback, const TArray<FString>& mediaTypes, int32 MaxSize) {
}

void UIGImagePicker::PickImageFromGallery(TEnumAsByte<GallerySourceType> SourceType, bool allowEditing, int32 posX, int32 posY, const FOnImagePickedDelegate& onPickImageFromGalleryCallback, const FOnCancelPickDelegate& onCancelCallback, int32 MaxSize) {
}

void UIGImagePicker::DeleteImageFromGallery(TEnumAsByte<GallerySourceType> SourceType, int32 posX, int32 posY, const FOnImageSavedDelegate& onSuccessCallback, const FOnSaveErrorDelegate& onCancelCallback) {
}


