#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "XRLoadingScreenFunctionLibrary.generated.h"

class UTexture;

UCLASS(Blueprintable)
class HEADMOUNTEDDISPLAY_API UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UXRLoadingScreenFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void ShowLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void SetLoadingScreen(UTexture* Texture, FVector2D Scale, FVector Offset, bool bShowLoadingMovie, bool bShowOnSet);
    
    UFUNCTION(BlueprintCallable)
    static void HideLoadingScreen();
    
    UFUNCTION(BlueprintCallable)
    static void ClearLoadingScreenSplashes();
    
    UFUNCTION(BlueprintCallable)
    static void AddLoadingScreenSplash(UTexture* Texture, FVector Translation, FRotator Rotation, FVector2D Size, FRotator DeltaRotation, bool bClearBeforeAdd);
    
};

