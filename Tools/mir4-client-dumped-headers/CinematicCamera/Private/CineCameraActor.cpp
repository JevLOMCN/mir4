#include "CineCameraActor.h"
#include "CineCameraComponent.h"

ACineCameraActor::ACineCameraActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UCineCameraComponent>(TEXT("CameraComponent"))) {
    const FProperty* p_CameraComponent = GetClass()->FindPropertyByName("CameraComponent");
    (*p_CameraComponent->ContainerPtrToValuePtr<UCameraComponent*>(this))->SetupAttachment(RootComponent);
}

UCineCameraComponent* ACineCameraActor::GetCineCameraComponent() const {
    return NULL;
}


