#include "ContentsLightManager.h"

AContentsLightManager::AContentsLightManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pUIDirectionalLight = NULL;
    this->m_pUIPointLight1 = NULL;
    this->m_pUIPointLight2 = NULL;
    this->m_pUIPostProcessVolume = NULL;
    this->m_pCustomizeDirectionalLight = NULL;
    this->m_pCustomizePointLight1 = NULL;
    this->m_pCustomizePointLight2 = NULL;
    this->m_pCustomizePostProcessVolume = NULL;
    this->m_pContentsLightData = NULL;
    this->CurrentContentsState = EContentsLightType::NONE;
    this->CurrentClassID = EPlayerClassID::NONE;
}

void AContentsLightManager::SetCustomizingLight(ADirectionalLight* pDirectional, APointLight* pPoint1, APointLight* pPoint2) {
}

void AContentsLightManager::SetCustomizeSceneEffect(ADirectionalLight* pDirectional, APointLight* pPoint1, APointLight* pPoint2, AMM_PostProcessVolume* pPostProcess) {
}

void AContentsLightManager::ClearCustomizingLight() {
}

void AContentsLightManager::ChangePostProcessData() {
}

void AContentsLightManager::ChangeLightData() {
}


