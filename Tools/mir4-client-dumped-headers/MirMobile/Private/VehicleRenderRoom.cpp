#include "VehicleRenderRoom.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AVehicleRenderRoom::AVehicleRenderRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_pSceneComponent = (USceneComponent*)RootComponent;
    this->m_pMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VehicleMesh"));
    this->m_pVehicleAnim = NULL;
    this->m_pUIBackGroundActor = NULL;
    this->m_pMesh->SetupAttachment(RootComponent);
}


