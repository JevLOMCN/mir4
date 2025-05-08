#include "MM_PetObject.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AMM_PetObject::AMM_PetObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_pSkelMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->LoopEffectComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent0"));
    this->m_pOwnerActor = NULL;
    this->HeroEffectID = 1019014;
    this->LegendEffectID = 1019015;
    this->skillEffectID = 1019001;
    this->levelUpEffectID = 1019002;
    this->m_TargetDistance = 0.00f;
    this->m_MovePitch = 0.00f;
    this->m_OwnerMoveThreshold = 0.00f;
    this->m_InterpSpeed = 0.00f;
    this->m_MoveSpeed = 0.00f;
    this->m_CloseRange = 0.00f;
    this->m_FarRange = 0.00f;
    this->m_TargetMoveSpeed = 0.00f;
    this->m_pSpeedCurve = NULL;
    this->m_pSkelMeshComp->SetupAttachment(RootComponent);
    this->LoopEffectComponent->SetupAttachment(RootComponent);
}


