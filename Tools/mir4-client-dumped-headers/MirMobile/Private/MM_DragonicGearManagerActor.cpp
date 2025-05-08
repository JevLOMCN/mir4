#include "MM_DragonicGearManagerActor.h"

AMM_DragonicGearManagerActor::AMM_DragonicGearManagerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_MediaPlayer = NULL;
    this->m_MediaTexture = NULL;
    this->m_MediaSource = NULL;
    this->m_pSceneCaptureComponent = NULL;
    this->m_pRenderTarget = NULL;
    this->m_pRenderTargetMaterial = NULL;
    this->m_pRenderTargetImage = NULL;
}




