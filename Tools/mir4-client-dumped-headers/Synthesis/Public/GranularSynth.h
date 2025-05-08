#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "EGranularSynthEnvelopeType.h"
#include "EGranularSynthSeekType.h"
#include "GranularSynth.generated.h"

class USoundWave;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SYNTHESIS_API UGranularSynth : public USynthComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundWave* GranulatedSoundWave;
    
public:
    UGranularSynth(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSustainGain(const float SustainGain);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundWave(USoundWave* InSoundWave);
    
    UFUNCTION(BlueprintCallable)
    void SetScrubMode(const bool bScrubMode);
    
    UFUNCTION(BlueprintCallable)
    void SetReleaseTimeMsec(const float ReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayheadTime(const float InPositionSec, const float LerpTimeSec, EGranularSynthSeekType SeekType);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackSpeed(const float InPlayheadRate);
    
    UFUNCTION(BlueprintCallable)
    void SetGrainVolume(const float BaseVolume, const FVector2D VolumeRange);
    
    UFUNCTION(BlueprintCallable)
    void SetGrainsPerSecond(const float InGrainsPerSecond);
    
    UFUNCTION(BlueprintCallable)
    void SetGrainProbability(const float InGrainProbability);
    
    UFUNCTION(BlueprintCallable)
    void SetGrainPitch(const float BasePitch, const FVector2D PitchRange);
    
    UFUNCTION(BlueprintCallable)
    void SetGrainPan(const float BasePan, const FVector2D PanRange);
    
    UFUNCTION(BlueprintCallable)
    void SetGrainEnvelopeType(const EGranularSynthEnvelopeType EnvelopeType);
    
    UFUNCTION(BlueprintCallable)
    void SetGrainDuration(const float BaseDurationMsec, const FVector2D DurationRange);
    
    UFUNCTION(BlueprintCallable)
    void SetDecayTime(const float DecayTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackTime(const float AttackTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void NoteOn(const float Note, const int32 Velocity, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    void NoteOff(const float Note, const bool bKill);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSampleDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPlayheadTime() const;
    
};

