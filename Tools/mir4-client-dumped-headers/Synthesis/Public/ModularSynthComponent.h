#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "ESynth1OscType.h"
#include "ESynth1PatchSource.h"
#include "ESynthFilterAlgorithm.h"
#include "ESynthFilterType.h"
#include "ESynthLFOMode.h"
#include "ESynthLFOPatchType.h"
#include "ESynthLFOType.h"
#include "ESynthModEnvBiasPatch.h"
#include "ESynthModEnvPatch.h"
#include "ESynthStereoDelayMode.h"
#include "ModularSynthPreset.h"
#include "PatchId.h"
#include "Synth1PatchCable.h"
#include "ModularSynthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SYNTHESIS_API UModularSynthComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VoiceCount;
    
    UModularSynthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSynthPreset(const FModularSynthPreset& SynthPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetSustainGain(float SustainGain);
    
    UFUNCTION(BlueprintCallable)
    void SetStereoDelayWetlevel(float DelayWetlevel);
    
    UFUNCTION(BlueprintCallable)
    void SetStereoDelayTime(float DelayTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetStereoDelayRatio(float DelayRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);
    
    UFUNCTION(BlueprintCallable)
    void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetStereoDelayFeedback(float DelayFeedback);
    
    UFUNCTION(BlueprintCallable)
    void SetSpread(float Spread);
    
    UFUNCTION(BlueprintCallable)
    void SetReleaseTime(float ReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetPortamento(float Portamento);
    
    UFUNCTION(BlueprintCallable)
    void SetPitchBend(float PitchBend);
    
    UFUNCTION(BlueprintCallable)
    void SetPan(float Pan);
    
    UFUNCTION(BlueprintCallable)
    void SetOscType(int32 OscIndex, ESynth1OscType OscType);
    
    UFUNCTION(BlueprintCallable)
    void SetOscSync(const bool bIsSynced);
    
    UFUNCTION(BlueprintCallable)
    void SetOscSemitones(int32 OscIndex, float Semitones);
    
    UFUNCTION(BlueprintCallable)
    void SetOscPulsewidth(int32 OscIndex, float Pulsewidth);
    
    UFUNCTION(BlueprintCallable)
    void SetOscOctave(int32 OscIndex, float Octave);
    
    UFUNCTION(BlueprintCallable)
    void SetOscGainMod(int32 OscIndex, float OscGainMod);
    
    UFUNCTION(BlueprintCallable)
    void SetOscGain(int32 OscIndex, float OscGain);
    
    UFUNCTION(BlueprintCallable)
    void SetOscFrequencyMod(int32 OscIndex, float OscFreqMod);
    
    UFUNCTION(BlueprintCallable)
    void SetOscCents(int32 OscIndex, float Cents);
    
    UFUNCTION(BlueprintCallable)
    void SetModEnvSustainGain(const float SustainGain);
    
    UFUNCTION(BlueprintCallable)
    void SetModEnvReleaseTime(const float Release);
    
    UFUNCTION(BlueprintCallable)
    void SetModEnvPatch(const ESynthModEnvPatch InPatchType);
    
    UFUNCTION(BlueprintCallable)
    void SetModEnvInvert(const bool bInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetModEnvDepth(const float Depth);
    
    UFUNCTION(BlueprintCallable)
    void SetModEnvDecayTime(const float DecayTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetModEnvBiasPatch(const ESynthModEnvBiasPatch InPatchType);
    
    UFUNCTION(BlueprintCallable)
    void SetModEnvBiasInvert(const bool bInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetModEnvAttackTime(const float AttackTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetLFOType(int32 LFOIndex, ESynthLFOType LFOType);
    
    UFUNCTION(BlueprintCallable)
    void SetLFOPatch(int32 LFOIndex, ESynthLFOPatchType LFOPatchType);
    
    UFUNCTION(BlueprintCallable)
    void SetLFOMode(int32 LFOIndex, ESynthLFOMode LFOMode);
    
    UFUNCTION(BlueprintCallable)
    void SetLFOGainMod(int32 LFOIndex, float GainMod);
    
    UFUNCTION(BlueprintCallable)
    void SetLFOGain(int32 LFOIndex, float Gain);
    
    UFUNCTION(BlueprintCallable)
    void SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz);
    
    UFUNCTION(BlueprintCallable)
    void SetLFOFrequency(int32 LFOIndex, float FrequencyHz);
    
    UFUNCTION(BlueprintCallable)
    void SetGainDb(float GainDb);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterType(ESynthFilterType FilterType);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterQMod(float FilterQ);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterQ(float FilterQ);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterFrequencyMod(float FilterFrequencyHz);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterFrequency(float FilterFrequencyHz);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableUnison(bool EnableUnison);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRetrigger(bool RetriggerEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnablePolyphony(bool bEnablePolyphony);
    
    UFUNCTION(BlueprintCallable)
    bool SetEnablePatch(const FPatchId PatchId, const bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLegato(bool LegatoEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDecayTime(float DecayTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetChorusFrequency(float Frequency);
    
    UFUNCTION(BlueprintCallable)
    void SetChorusFeedback(float Feedback);
    
    UFUNCTION(BlueprintCallable)
    void SetChorusEnabled(bool EnableChorus);
    
    UFUNCTION(BlueprintCallable)
    void SetChorusDepth(float Depth);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTime(float AttackTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void NoteOn(const float Note, const int32 Velocity, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    void NoteOff(const float Note, const bool bAllNotesOff, const bool bKillAllNotes);
    
    UFUNCTION(BlueprintCallable)
    FPatchId CreatePatch(const ESynth1PatchSource PatchSource, const TArray<FSynth1PatchCable>& PatchCables, const bool bEnableByDefault);
    
};

