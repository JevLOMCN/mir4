#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ImageSize.h"
#include "OnFilesPickErrorDelegateDelegate.h"
#include "OnFilesPickedDelegateDelegate.h"
#include "OnImageErrorDelegateDelegate.h"
#include "OnImageReadyDelegateDelegate.h"
#include "OnImagesPickedDelegateDelegate.h"
#include "AGPickersBPL.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGPickersBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGPickersBPL();

    UFUNCTION(BlueprintCallable)
    static void TakeScreenShot(const FOnImageReadyDelegate& onScreenShotTakenCallback, const FOnImageErrorDelegate& onErrorCallback, bool ShowUI);
    
    UFUNCTION(BlueprintCallable)
    static void SaveImageToGallery(UTexture2D* Image, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void PickPhotoFromCamera(bool shouldGenerateThumbnails, const FOnImageReadyDelegate& onPhotoPickedCallback, const FOnImageErrorDelegate& onPhotoPickErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void PickImageFromGallery(int32 quality, TEnumAsByte<ImageSize> MaxSize, bool shouldGenerateThumbnails, const FOnImageReadyDelegate& onImagePickedCallback, const FOnImageErrorDelegate& onImagePickErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void PickFilesFromLocalStorage(bool allowMultiple, const FOnFilesPickedDelegate& OnFilesPickedCallback, const FOnFilesPickErrorDelegate& OnFilesPickErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void GetTextureFromPath(const FString& imagePath, const FOnImageReadyDelegate& onTextureReadyCallback, const FOnImageErrorDelegate& onTextureErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void GetPhotoDataFromCamera(bool shouldGenerateThumbnails, const FOnImagesPickedDelegate& OnPhotoTakenCallback, const FOnImageErrorDelegate& OnPhotoTakeErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void GetChosenImagesData(int32 quality, TEnumAsByte<ImageSize> MaxSize, bool shouldGenerateThumbnails, bool allowMultiple, const FOnImagesPickedDelegate& OnImagesPickedCallback, const FOnImageErrorDelegate& OnImagesPickErrorCallback);
    
    UFUNCTION(BlueprintCallable)
    static void ClearTexture(UTexture2D* Texture);
    
};

