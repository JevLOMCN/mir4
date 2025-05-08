#include "CutsceneActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "MM_CharacterPartsComponent.h"

ACutsceneActor::ACutsceneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_pCinematicDialogue = NULL;
    this->m_NpcID = 0;
    this->m_bHidden = false;
    this->m_pMovePlacement = NULL;
    this->m_MoveSpeed = 0.00f;
    this->m_bAnimationLoop = false;
    this->m_bLookAt = false;
    this->m_pAnimInstace = NULL;
    this->m_pPartsComponent = CreateDefaultSubobject<UMM_CharacterPartsComponent>(TEXT("PartsComponent"));
    this->m_pMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1"));
    this->m_pMesh->SetupAttachment(RootComponent);
}

void ACutsceneActor::TestSetSkeletalMesh(const FString& MeshPath, const FString& AnimClassName) {
}


