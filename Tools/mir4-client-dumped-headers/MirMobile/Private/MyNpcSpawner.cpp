#include "MyNpcSpawner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AMyNpcSpawner::AMyNpcSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_pMesh = NULL;
    this->m_fCapsuleHalfHeigth = 88.00f;
    this->m_fCapsuleRadius = 34.00f;
    this->m_NpcID = 0;
    this->m_InteractionRange = 0.00f;
    this->m_SightRange = 0.00f;
    this->m_bShowInteractionRange = false;
    this->m_bSightRange = false;
}

void AMyNpcSpawner::SetPreviewData(const FString& NameTitle, const FString& NpcName, float InteractionRange, float SightRange) {
}

void AMyNpcSpawner::SetNpcData() {
}


