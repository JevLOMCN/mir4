#include "AGPickersBPL.h"

UAGPickersBPL::UAGPickersBPL() {
}

void UAGPickersBPL::TakeScreenShot(const FOnImageReadyDelegate& onScreenShotTakenCallback, const FOnImageErrorDelegate& onErrorCallback, bool ShowUI) {
}

void UAGPickersBPL::SaveImageToGallery(UTexture2D* Image, const FString& Filename) {
}

void UAGPickersBPL::PickPhotoFromCamera(bool shouldGenerateThumbnails, const FOnImageReadyDelegate& onPhotoPickedCallback, const FOnImageErrorDelegate& onPhotoPickErrorCallback) {
}

void UAGPickersBPL::PickImageFromGallery(int32 quality, TEnumAsByte<ImageSize> MaxSize, bool shouldGenerateThumbnails, const FOnImageReadyDelegate& onImagePickedCallback, const FOnImageErrorDelegate& onImagePickErrorCallback) {
}

void UAGPickersBPL::PickFilesFromLocalStorage(bool allowMultiple, const FOnFilesPickedDelegate& OnFilesPickedCallback, const FOnFilesPickErrorDelegate& OnFilesPickErrorCallback) {
}

void UAGPickersBPL::GetTextureFromPath(const FString& imagePath, const FOnImageReadyDelegate& onTextureReadyCallback, const FOnImageErrorDelegate& onTextureErrorCallback) {
}

void UAGPickersBPL::GetPhotoDataFromCamera(bool shouldGenerateThumbnails, const FOnImagesPickedDelegate& OnPhotoTakenCallback, const FOnImageErrorDelegate& OnPhotoTakeErrorCallback) {
}

void UAGPickersBPL::GetChosenImagesData(int32 quality, TEnumAsByte<ImageSize> MaxSize, bool shouldGenerateThumbnails, bool allowMultiple, const FOnImagesPickedDelegate& OnImagesPickedCallback, const FOnImageErrorDelegate& OnImagesPickErrorCallback) {
}

void UAGPickersBPL::ClearTexture(UTexture2D* Texture) {
}


