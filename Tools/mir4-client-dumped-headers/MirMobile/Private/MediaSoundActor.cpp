#include "MediaSoundActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaSoundComponent -FallbackName=MediaSoundComponent

AMediaSoundActor::AMediaSoundActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UMediaSoundComponent>(TEXT("MediaSound"));
    this->m_pMediaSoundComponent = (UMediaSoundComponent*)RootComponent;
}


