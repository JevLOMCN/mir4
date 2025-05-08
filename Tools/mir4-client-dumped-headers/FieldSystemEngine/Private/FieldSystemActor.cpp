#include "FieldSystemActor.h"
#include "FieldSystemComponent.h"

AFieldSystemActor::AFieldSystemActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UFieldSystemComponent>(TEXT("FieldSystemComponent"));
    this->FieldSystemComponent = (UFieldSystemComponent*)RootComponent;
}


