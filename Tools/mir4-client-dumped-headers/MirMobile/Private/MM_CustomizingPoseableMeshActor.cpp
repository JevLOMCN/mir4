#include "MM_CustomizingPoseableMeshActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseableMeshComponent -FallbackName=PoseableMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AMM_CustomizingPoseableMeshActor::AMM_CustomizingPoseableMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPoseableMeshComponent>(TEXT("Poseable"));
    this->m_pPoseableMeshComponent = (UPoseableMeshComponent*)RootComponent;
    this->m_pSkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal"));
    this->m_pSkeletalMeshComponent->SetupAttachment(RootComponent);
}


