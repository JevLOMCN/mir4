#include "QuestArrivalDisplayActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent

AQuestArrivalDisplayActor::AQuestArrivalDisplayActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("ArrivalIcon"));
    this->ArrivalWidgetCom = (UWidgetComponent*)RootComponent;
    this->EffectUID = 0;
    this->IconID = 0;
    this->MinLimit = 0.00f;
}


