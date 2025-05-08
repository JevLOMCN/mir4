#include "HolyStuffRenderRoom.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AHolyStuffRenderRoom::AHolyStuffRenderRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_pSceneComponent = (USceneComponent*)RootComponent;
    this->m_pMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("HolyStuffMesh"));
    this->m_pHolyStuffAnim = NULL;
    this->m_pUIBackGroundActor = NULL;
    this->m_eAnimType = EHolyStuffAnimType::UNOPEN;
    this->m_pMesh->SetupAttachment(RootComponent);
}

void AHolyStuffRenderRoom::ClearAniType() {
}


