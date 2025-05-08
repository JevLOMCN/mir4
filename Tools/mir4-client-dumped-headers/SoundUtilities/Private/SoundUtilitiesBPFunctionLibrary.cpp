#include "SoundUtilitiesBPFunctionLibrary.h"

USoundUtilitiesBPFunctionLibrary::USoundUtilitiesBPFunctionLibrary() {
}

float USoundUtilitiesBPFunctionLibrary::GetPitchScaleFromMIDIPitch(int32 BaseMidiNote, int32 TargetMidiNote) {
    return 0.0f;
}

int32 USoundUtilitiesBPFunctionLibrary::GetMIDIPitchFromFrequency(float Frequency) {
    return 0;
}

float USoundUtilitiesBPFunctionLibrary::GetFrequencyFromMIDIPitch(int32 MidiNote) {
    return 0.0f;
}

float USoundUtilitiesBPFunctionLibrary::GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote) {
    return 0.0f;
}


