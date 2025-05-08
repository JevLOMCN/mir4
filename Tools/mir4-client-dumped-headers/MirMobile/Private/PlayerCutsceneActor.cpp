#include "PlayerCutsceneActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

APlayerCutsceneActor::APlayerCutsceneActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_pWeaponMeshComponent01 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMeshComponent01"));
    this->m_pWeaponMeshComponent02 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WeaponMeshComponent02"));
    this->m_pWeaponMeshComponent02->SetupAttachment(m_pMesh);
    this->m_pWeaponMeshComponent01->SetupAttachment(m_pMesh);
}


