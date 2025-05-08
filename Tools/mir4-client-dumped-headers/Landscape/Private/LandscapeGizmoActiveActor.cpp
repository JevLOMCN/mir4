#include "LandscapeGizmoActiveActor.h"
#include "LandscapeGizmoRenderComponent.h"

ALandscapeGizmoActiveActor::ALandscapeGizmoActiveActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<ULandscapeGizmoRenderComponent>(TEXT("GizmoRendererComponent0"))) {
}


