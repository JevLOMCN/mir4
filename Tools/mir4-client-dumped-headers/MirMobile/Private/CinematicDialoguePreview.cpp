#include "CinematicDialoguePreview.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ACinematicDialoguePreview::ACinematicDialoguePreview(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->m_CinematicSettingID = 0;
    this->m_bSpawn = false;
    this->m_bFileExport = false;
    this->m_CinematicDialogueID = 0;
    this->m_pMainCamera = NULL;
    this->m_bActionFileExport = false;
}


