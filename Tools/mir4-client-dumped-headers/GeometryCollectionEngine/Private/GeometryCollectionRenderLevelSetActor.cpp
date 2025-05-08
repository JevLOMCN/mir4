#include "GeometryCollectionRenderLevelSetActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent

AGeometryCollectionRenderLevelSetActor::AGeometryCollectionRenderLevelSetActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent0"));
    this->SurfaceTolerance = 0.01f;
    this->Isovalue = 0.00f;
    this->Enabled = true;
    this->RenderVolumeBoundingBox = false;
}


