#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMirSoundClass.h"
#include "EMirSoundDataType.h"
#include "MirSoundStatics.generated.h"

class UMediaSoundComponent;
class USoundBase;

UCLASS(Blueprintable)
class UMirSoundStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMirSoundStatics();

    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void UpdateFieldBGM();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopSound(int32 TableID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopDialogueSound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void StopBGM();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void SetMediaVolume(UMediaSoundComponent* pMesiaSoundComponent, float fVolume);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlaySoundAtLocation_TableID(int32 TableID, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlaySoundAtLocation(USoundBase* pSoundBase, FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlaySound2D_SoundBase(USoundBase* pSoundBase);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlaySound2D(int32 TableID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlaySound(int32 TableID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlayMirSoundData(EMirSoundDataType SoundType);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlayDialogueSound(int32 TableID);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlayBGM_SoundBase(USoundBase* pSoundBase, bool bPhasingBGM);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlayBGM(int32 TableID, bool bPhasingBGM);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void MuteSound(EMirSoundClass SoundType, bool bMute);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void LoadOptionVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool GetPlayNotifySound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool ChangeSoundVolume(EMirSoundClass SoundType, float Volume, float FadeInTime);
    
};

