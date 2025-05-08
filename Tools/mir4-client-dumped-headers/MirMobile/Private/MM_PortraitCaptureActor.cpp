#include "MM_PortraitCaptureActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "MM_CharacterPartsComponent.h"

AMM_PortraitCaptureActor::AMM_PortraitCaptureActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_pSceneCapture = NULL;
    this->m_pRenderTarget2D = NULL;
    this->m_pPartsComponent = CreateDefaultSubobject<UMM_CharacterPartsComponent>(TEXT("PartsComponent"));
    this->BackGroundMesh = NULL;
    this->BackgroundMID = NULL;
    this->BackGroundSprite = NULL;
    this->m_pHQPlayer = NULL;
    this->IMAGE_SIZE_X = 134;
    this->IMAGE_SIZE_Y = 126;
}


void AMM_PortraitCaptureActor::TestPortrait() {
}

void AMM_PortraitCaptureActor::TEST_UpdatePortraitEvent() {
}

void AMM_PortraitCaptureActor::TEST_SetRenderTargetUI(UImage* pImage) {
}

void AMM_PortraitCaptureActor::TEST_SetHQPlayerLocationByPC() {
}

void AMM_PortraitCaptureActor::TEST_SetHQPlayerLocationByDefault() {
}

void AMM_PortraitCaptureActor::TEST_SetHQPlayer() {
}

void AMM_PortraitCaptureActor::TEST_Destroy() {
}

UTexture2D* AMM_PortraitCaptureActor::TEST_CaptureTest1() {
    return NULL;
}


void AMM_PortraitCaptureActor::SetPortraitRenderTarget(UTextureRenderTarget2D* RenderTarget) {
}


void AMM_PortraitCaptureActor::SetBackGroundMesh() {
}


UTexture2D* AMM_PortraitCaptureActor::CreatePortraitTextureByRenderTarget(UTextureRenderTarget2D* RenderTarget) {
    return NULL;
}




