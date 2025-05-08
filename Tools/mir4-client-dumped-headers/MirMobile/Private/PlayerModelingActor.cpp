#include "PlayerModelingActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "MM_CharacterPartsComponent.h"

APlayerModelingActor::APlayerModelingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootScene"));
    this->CapsuleComponent = NULL;
    this->m_pPartsComponent = CreateDefaultSubobject<UMM_CharacterPartsComponent>(TEXT("PartsComponent"));
    this->m_CustomizingModule = NULL;
    this->m_ClassID = 0;
    this->MainState = 0;
    this->SubState = 0;
    this->Mesh = NULL;
}

void APlayerModelingActor::TestSpawn() {
}

void APlayerModelingActor::ResetSubState() {
}

void APlayerModelingActor::InitLoadComplete() {
}


void APlayerModelingActor::ChagneMeshComplete() {
}


