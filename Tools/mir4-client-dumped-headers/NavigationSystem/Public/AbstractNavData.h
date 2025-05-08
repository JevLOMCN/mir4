#pragma once
#include "CoreMinimal.h"
#include "NavigationData.h"
#include "AbstractNavData.generated.h"

UCLASS(Blueprintable)
class NAVIGATIONSYSTEM_API AAbstractNavData : public ANavigationData {
    GENERATED_BODY()
public:
    AAbstractNavData(const FObjectInitializer& ObjectInitializer);

};

