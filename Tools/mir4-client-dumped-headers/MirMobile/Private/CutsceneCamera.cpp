#include "CutsceneCamera.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TextRenderComponent -FallbackName=TextRenderComponent

ACutsceneCamera::ACutsceneCamera(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_Index = 0;
    this->m_CameraAlpha = 0.00f;
    this->m_pStartPlacement = NULL;
    this->m_pEndPlacement = NULL;
    this->pTextRender = CreateDefaultSubobject<UTextRenderComponent>(TEXT("TextComp"));
    this->pTextRender->SetupAttachment(RootComponent);
}



