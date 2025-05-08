#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MediaCaptureDevice.h"
#include "MediaBlueprintFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMediaBlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void EnumerateWebcamCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    
    UFUNCTION(BlueprintCallable)
    static void EnumerateVideoCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    
    UFUNCTION(BlueprintCallable)
    static void EnumerateAudioCaptureDevices(TArray<FMediaCaptureDevice>& OutDevices, int32 Filter);
    
};

