#include "AIPerceptionStimuliSourceComponent.h"
#include "Templates/SubclassOf.h"

UAIPerceptionStimuliSourceComponent::UAIPerceptionStimuliSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegisterAsSource = false;
}

void UAIPerceptionStimuliSourceComponent::UnregisterFromSense(TSubclassOf<UAISense> SenseClass) {
}

void UAIPerceptionStimuliSourceComponent::UnregisterFromPerceptionSystem() {
}

void UAIPerceptionStimuliSourceComponent::RegisterWithPerceptionSystem() {
}

void UAIPerceptionStimuliSourceComponent::RegisterForSense(TSubclassOf<UAISense> SenseClass) {
}


