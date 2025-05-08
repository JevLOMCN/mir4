#include "MM_TotemObject.h"
#include "MM_ExecuteDecalComponent.h"

AMM_TotemObject::AMM_TotemObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ExecuteDecalComponent = CreateDefaultSubobject<UMM_ExecuteDecalComponent>(TEXT("ExecuteDecalComponent"));
}


