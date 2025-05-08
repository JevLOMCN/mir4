#include "SceneCapturePawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESpawnActorCollisionHandlingMethod -FallbackName=ESpawnActorCollisionHandlingMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FloatingPawnMovement -FallbackName=FloatingPawnMovement
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ASceneCapturePawn::ASceneCapturePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeDamaged = false;
    this->bCollideWhenPlacing = false;
    this->bReplicates = false;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_None;
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    this->RootComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent0"));
    this->MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent0"));
    this->CollisionComponent = (USphereComponent*)RootComponent;
    this->MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent0"));
    this->CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent0"));
    this->CameraPrich = 0.00f;
    this->CameraFov = 0.00f;
    this->Sensitivity = 0.50f;
    this->MeshComponent->SetupAttachment(RootComponent);
    this->CameraComponent->SetupAttachment(RootComponent);
}

void ASceneCapturePawn::MoveUp_World(float Val) {
}

void ASceneCapturePawn::MoveRight(float Val) {
}

void ASceneCapturePawn::MoveForward(float Val) {
}

float ASceneCapturePawn::GetSensitivity() {
    return 0.0f;
}

UStaticMeshComponent* ASceneCapturePawn::GetMeshComponent() const {
    return NULL;
}

USphereComponent* ASceneCapturePawn::GetCollisionComponent() const {
    return NULL;
}

UCameraComponent* ASceneCapturePawn::GetCameraComponent() const {
    return NULL;
}

void ASceneCapturePawn::AddCameraSensitivity(float Val) {
}

void ASceneCapturePawn::AddCameraPitchInput(float Val) {
}

void ASceneCapturePawn::AddCameraFOVInput(float Val) {
}


