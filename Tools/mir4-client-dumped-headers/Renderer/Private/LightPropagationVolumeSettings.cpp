#include "LightPropagationVolumeSettings.h"

FLightPropagationVolumeSettings::FLightPropagationVolumeSettings() {
    this->bOverride_LPVIntensity = false;
    this->bOverride_LPVDirectionalOcclusionIntensity = false;
    this->bOverride_LPVDirectionalOcclusionRadius = false;
    this->bOverride_LPVDiffuseOcclusionExponent = false;
    this->bOverride_LPVSpecularOcclusionExponent = false;
    this->bOverride_LPVDiffuseOcclusionIntensity = false;
    this->bOverride_LPVSpecularOcclusionIntensity = false;
    this->bOverride_LPVSize = false;
    this->bOverride_LPVSecondaryOcclusionIntensity = false;
    this->bOverride_LPVSecondaryBounceIntensity = false;
    this->bOverride_LPVGeometryVolumeBias = false;
    this->bOverride_LPVVplInjectionBias = false;
    this->bOverride_LPVEmissiveInjectionIntensity = false;
    this->LPVIntensity = 0.00f;
    this->LPVVplInjectionBias = 0.00f;
    this->LPVSize = 0.00f;
    this->LPVSecondaryOcclusionIntensity = 0.00f;
    this->LPVSecondaryBounceIntensity = 0.00f;
    this->LPVGeometryVolumeBias = 0.00f;
    this->LPVEmissiveInjectionIntensity = 0.00f;
    this->LPVDirectionalOcclusionIntensity = 0.00f;
    this->LPVDirectionalOcclusionRadius = 0.00f;
    this->LPVDiffuseOcclusionExponent = 0.00f;
    this->LPVSpecularOcclusionExponent = 0.00f;
    this->LPVDiffuseOcclusionIntensity = 0.00f;
    this->LPVSpecularOcclusionIntensity = 0.00f;
    this->LPVFadeRange = 0.00f;
    this->LPVDirectionalOcclusionFadeRange = 0.00f;
}

