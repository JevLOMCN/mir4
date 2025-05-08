#include "MM_Vehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "MM_CharacterPartsComponent.h"

AMM_Vehicle::AMM_Vehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->BodyMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->m_pPartsComponent = CreateDefaultSubobject<UMM_CharacterPartsComponent>(TEXT("PartsComponent"));
    this->m_pAnimInstace = NULL;
    this->m_pDefaultMesh = NULL;
    this->IsTakeOff = false;
    this->m_ThisPC = NULL;
    this->m_Velocity = 0.00f;
    this->BodyMesh->SetupAttachment(RootComponent);
}




void AMM_Vehicle::OnDestroyVehicle() {
}


