#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CameraFlashMode.h"
#include "GallerySourceType.h"
#include "OnCancelPickDelegateDelegate.h"
#include "OnImagePickedDelegateDelegate.h"
#include "OnImageSavedDelegateDelegate.h"
#include "OnMediaPickedDelegateDelegate.h"
#include "OnSaveErrorDelegateDelegate.h"
#include "IGImagePicker.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class IOSGOODIES_API UIGImagePicker : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGImagePicker();

private:
    UFUNCTION(BlueprintCallable)
    static void TakeScreenShot(const FOnImagePickedDelegate& onScreenShotTakenCallback);
    
    UFUNCTION(BlueprintCallable)
    static void SaveImageToGallery(UTexture2D* Texture, const FOnImageSavedDelegate& onImageSavedCallback, const FOnSaveErrorDelegate& onSaveErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void PickPhotoFromCamera(bool allowEditing, bool useRearCamera, TEnumAsByte<CameraFlashMode> flashMode, const FOnImagePickedDelegate& onPickPhotoFromCameraCallback, const FOnCancelPickDelegate& onCancelCallback, int32 MaxSize);
    
    UFUNCTION(BlueprintCallable)
    static void PickMediaFromGallery(TEnumAsByte<GallerySourceType> SourceType, bool allowEditing, int32 posX, int32 posY, const FOnMediaPickedDelegate& onPickMediaFromGalleryCallback, const FOnCancelPickDelegate& onCancelCallback, const TArray<FString>& mediaTypes, int32 MaxSize);
    
    UFUNCTION(BlueprintCallable)
    static void PickImageFromGallery(TEnumAsByte<GallerySourceType> SourceType, bool allowEditing, int32 posX, int32 posY, const FOnImagePickedDelegate& onPickImageFromGalleryCallback, const FOnCancelPickDelegate& onCancelCallback, int32 MaxSize);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteImageFromGallery(TEnumAsByte<GallerySourceType> SourceType, int32 posX, int32 posY, const FOnImageSavedDelegate& onSuccessCallback, const FOnSaveErrorDelegate& onCancelCallback);
    
};

