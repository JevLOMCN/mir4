#include "LevelSequencePlayerActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

ALevelSequencePlayerActor::ALevelSequencePlayerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->m_RenderClassType = EClassType::NONE;
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->m_PCW = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PCW"));
    this->m_PCM = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PCM"));
    this->m_PCT = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PCT"));
    this->m_PCA = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PCA"));
    this->m_PCZ = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("PCZ"));
    this->m_MeshArray.AddDefaulted(5);
    this->m_pSkeletalMesh = NULL;
    this->m_pMesh = NULL;
    this->m_PCW->SetupAttachment(RootComponent);
    this->m_PCM->SetupAttachment(RootComponent);
    this->m_PCT->SetupAttachment(RootComponent);
    this->m_PCA->SetupAttachment(RootComponent);
    this->m_PCZ->SetupAttachment(RootComponent);
}

void ALevelSequencePlayerActor::InitLoadComplete() {
}


