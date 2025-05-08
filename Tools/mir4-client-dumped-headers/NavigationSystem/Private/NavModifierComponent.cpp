#include "NavModifierComponent.h"
#include "NavArea_Null.h"
#include "Templates/SubclassOf.h"

UNavModifierComponent::UNavModifierComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->bIncludeAgentHeight = true;
}

void UNavModifierComponent::SetAreaClass(TSubclassOf<UNavArea> NewAreaClass) {
}


