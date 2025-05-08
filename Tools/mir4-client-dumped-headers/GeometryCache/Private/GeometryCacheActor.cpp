#include "GeometryCacheActor.h"
#include "GeometryCacheComponent.h"

AGeometryCacheActor::AGeometryCacheActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UGeometryCacheComponent>(TEXT("GeometryCacheComponent"));
    this->GeometryCacheComponent = (UGeometryCacheComponent*)RootComponent;
}

UGeometryCacheComponent* AGeometryCacheActor::GetGeometryCacheComponent() const {
    return NULL;
}


