#pragma once
#include "CoreMinimal.h"
#include "AGChosenFile.h"
#include "AGChosenImage.generated.h"

UCLASS(Blueprintable)
class UAGChosenImage : public UAGChosenFile {
    GENERATED_BODY()
public:
    UAGChosenImage();

    UFUNCTION(BlueprintCallable)
    int32 GetWidth();
    
    UFUNCTION(BlueprintCallable)
    FString GetThumbnailSmallPath();
    
    UFUNCTION(BlueprintCallable)
    FString GetThumbnailPath();
    
    UFUNCTION(BlueprintCallable)
    FString GetOrientationName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetOrientation();
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeight();
    
};

