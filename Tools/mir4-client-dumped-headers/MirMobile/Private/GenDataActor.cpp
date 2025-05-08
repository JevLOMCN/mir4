#include "GenDataActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

AGenDataActor::AGenDataActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->PosID = 0;
    this->Stage = 0;
    this->GenObjectID = 0;
    this->GenObjectType = 0;
    this->SpawnCount = 1;
    this->SpawnRange = 0;
    this->ActiveType = 0;
    this->RegMinTime = 0;
    this->RegMaxTime = 0;
    this->GenType = 0;
    this->FirstGenDelayMin = 0;
    this->FirstGenDelayMax = 0;
    this->GroupGenID = 0;
    this->GroupGenCountThreshold = 0;
    this->RoamingId = 0;
    this->RoamingType = 0;
    this->RoamingPath = NULL;
    this->LinkGroup = 0;
    this->LinkGroupDistance = 0;
    this->bDrawDistance = false;
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh->SetupAttachment(RootComponent);
}


