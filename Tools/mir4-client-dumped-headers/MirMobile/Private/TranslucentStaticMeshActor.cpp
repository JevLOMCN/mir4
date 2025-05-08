#include "TranslucentStaticMeshActor.h"

ATranslucentStaticMeshActor::ATranslucentStaticMeshActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanBeInCluster = false;
}

void ATranslucentStaticMeshActor::SetMaterialToTranslucency() {
}

void ATranslucentStaticMeshActor::OnActorHiting(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ATranslucentStaticMeshActor::OnActorEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex) {
}

void ATranslucentStaticMeshActor::OnActorBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ATranslucentStaticMeshActor::BackToTheOrgMaterial() {
}


