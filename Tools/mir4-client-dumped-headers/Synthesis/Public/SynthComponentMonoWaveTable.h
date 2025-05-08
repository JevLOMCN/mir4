#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "CurveInterpolationType.h"
#include "ESynthLFOType.h"
#include "NumTablesChangedDelegate.h"
#include "OnTableAlteredDelegate.h"
#include "SynthComponentMonoWaveTable.generated.h"

class UMonoWaveTableSynthPreset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SYNTHESIS_API USynthComponentMonoWaveTable : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTableAltered OnTableAltered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNumTablesChanged OnNumTablesChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMonoWaveTableSynthPreset* CurrentPreset;
    
public:
    USynthComponentMonoWaveTable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWaveTablePosition(float InPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetSustainPedalState(bool InSustainPedalState);
    
    UFUNCTION(BlueprintCallable)
    void SetPosLfoType(const ESynthLFOType InLfoType);
    
    UFUNCTION(BlueprintCallable)
    void SetPosLfoFrequency(const float InLfoFrequency);
    
    UFUNCTION(BlueprintCallable)
    void SetPosLfoDepth(const float InLfoDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionEnvelopeSustainGain(const float InSustainGain);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionEnvelopeReleaseTime(const float InReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionEnvelopeInvert(const bool bInInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionEnvelopeDepth(const float InDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionEnvelopeDecayTime(const float InDecayTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionEnvelopeBiasInvert(const bool bInBiasInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionEnvelopeBiasDepth(const float InDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetPositionEnvelopeAttackTime(const float InAttackTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetLowPassFilterResonance(float InNewQ);
    
    UFUNCTION(BlueprintCallable)
    void SetLowPassFilterFrequency(float InNewFrequency);
    
    UFUNCTION(BlueprintCallable)
    void SetFrequencyWithMidiNote(const float InMidiNote);
    
    UFUNCTION(BlueprintCallable)
    void SetFrequencyPitchBend(const float FrequencyOffsetCents);
    
    UFUNCTION(BlueprintCallable)
    void SetFrequency(const float FrequencyHz);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterEnvelopeSustainGain(const float InSustainGain);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterEnvelopeReleaseTime(const float InReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterEnvelopenDecayTime(const float InDecayTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterEnvelopeInvert(const bool bInInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterEnvelopeDepth(const float InDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterEnvelopeBiasInvert(const bool bInBiasInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterEnvelopeBiasDepth(const float InDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterEnvelopeAttackTime(const float InAttackTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurveValue(int32 TableIndex, int32 KeyframeIndex, const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurveTangent(int32 TableIndex, float InNewTangent);
    
    UFUNCTION(BlueprintCallable)
    bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32 TableIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetAmpEnvelopeSustainGain(const float InSustainGain);
    
    UFUNCTION(BlueprintCallable)
    void SetAmpEnvelopeReleaseTime(const float InReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetAmpEnvelopeInvert(const bool bInInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetAmpEnvelopeDepth(const float InDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetAmpEnvelopeDecayTime(const float InDecayTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetAmpEnvelopeBiasInvert(const bool bInBiasInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetAmpEnvelopeBiasDepth(const float InDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetAmpEnvelopeAttackTime(const float InAttackTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void RefreshWaveTable(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void RefreshAllWaveTables();
    
    UFUNCTION(BlueprintCallable)
    void NoteOn(const float InMidiNote, const float InVelocity);
    
    UFUNCTION(BlueprintCallable)
    void NoteOff(const float InMidiNote);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumTableEntries();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxTableIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<float> GetKeyFrameValuesForTable(float TableIndex) const;
    
    UFUNCTION(BlueprintCallable)
    float GetCurveTangent(int32 TableIndex);
    
};

