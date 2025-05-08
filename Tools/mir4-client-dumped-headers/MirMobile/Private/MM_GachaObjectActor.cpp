#include "MM_GachaObjectActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Paper2D -ObjectName=PaperSpriteComponent -FallbackName=PaperSpriteComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent

AMM_GachaObjectActor::AMM_GachaObjectActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->GachaMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GachaMesh"));
    this->RewardSpriteComponent = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("RewardSprite"));
    this->TouchWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("TouchWidget"));
    this->NameTagWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("NameTagWidget"));
    this->DefaultParticleComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("DefaultParticle"));
    this->GachaDirectingData = NULL;
    this->GachaAnimInstance = NULL;
    this->GachaManagerActor = NULL;
    this->m_bSettingComplete = false;
    this->m_CachedGachaMesh = NULL;
    this->m_CachedRewardSprite = NULL;
    this->GachaMeshComponent->SetupAttachment(RootComponent);
    this->RewardSpriteComponent->SetupAttachment(RootComponent);
    this->TouchWidgetComponent->SetupAttachment(RootComponent);
    this->NameTagWidgetComponent->SetupAttachment(RootComponent);
    this->DefaultParticleComponent->SetupAttachment(RootComponent);
}

void AMM_GachaObjectActor::StartSecondEffect() {
}


void AMM_GachaObjectActor::StartBeginEffect_Delay() {
}



void AMM_GachaObjectActor::SetGachaObjectData(EGachaType GachaType, EGachaResultType GachaResultType, const int32 ItemId, const int32 ItemGrade) {
}



void AMM_GachaObjectActor::PlayGachaOpenEffect_Delay() {
}

void AMM_GachaObjectActor::OnClickButton() {
}

void AMM_GachaObjectActor::GachaOpenAnimEnd() {
}



