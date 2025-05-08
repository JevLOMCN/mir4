#pragma once
#include "CoreMinimal.h"
#include "NavArea.h"
#include "NavAreaMeta.generated.h"

UCLASS(Abstract, Blueprintable)
class NAVIGATIONSYSTEM_API UNavAreaMeta : public UNavArea {
    GENERATED_BODY()
public:
    UNavAreaMeta();

};

