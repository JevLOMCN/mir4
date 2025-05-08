#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "SoundUtilitiesBPFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class SOUNDUTILITIES_API USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USoundUtilitiesBPFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static float GetPitchScaleFromMIDIPitch(int32 BaseMidiNote, int32 TargetMidiNote);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMIDIPitchFromFrequency(float Frequency);
    
    UFUNCTION(BlueprintCallable)
    static float GetFrequencyFromMIDIPitch(int32 MidiNote);
    
    UFUNCTION(BlueprintCallable)
    static float GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote);
    
};

