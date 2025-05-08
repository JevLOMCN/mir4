#include "MM_ObjectBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ParticleSystemComponent -FallbackName=ParticleSystemComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "EFSM_TYPE.h"

AMM_ObjectBase::AMM_ObjectBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CurrentFSM = EFSM_TYPE::EFSM_IDLE;
    this->m_bPoolingObject = false;
    this->ObjectNameTagWidget = NULL;
    this->WidgetComp = CreateDefaultSubobject<UWidgetComponent>(TEXT("WidgetComponent"));
    this->NameTagWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("NameTagWidget"));
    this->InteractionWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("InteractionWidget"));
    this->LoopEffectComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent0"));
    this->m_LoopParticleSystem = NULL;
    this->OperatingBtnWidget = NULL;
    this->InteractionWidgetComponent->SetupAttachment(RootComponent);
    this->LoopEffectComponent->SetupAttachment(RootComponent);
    this->WidgetComp->SetupAttachment(RootComponent);
    this->NameTagWidgetComponent->SetupAttachment(RootComponent);
}


