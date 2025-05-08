#include "LandscapeEditToolRenderData.h"

FLandscapeEditToolRenderData::FLandscapeEditToolRenderData() {
    this->ToolMaterial = NULL;
    this->GizmoMaterial = NULL;
    this->SelectedType = 0;
    this->DebugChannelR = 0;
    this->DebugChannelG = 0;
    this->DebugChannelB = 0;
    this->DataTexture = NULL;
    this->LayerContributionTexture = NULL;
    this->DirtyTexture = NULL;
}

