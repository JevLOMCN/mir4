#include "OpObjectSpawner.h"
#include "ETriggerType.h"

AOpObjectSpawner::AOpObjectSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_TriggerType = ETriggerType::OPOBJECT;
    this->m_ObjectID = 0;
    this->m_bDefaultObjectSpawn = true;
    this->m_bDefaultObjectActive = false;
}

void AOpObjectSpawner::SpawnOpObject() {
}


