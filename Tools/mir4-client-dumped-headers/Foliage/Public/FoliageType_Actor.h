#pragma once
#include "CoreMinimal.h"
#include "FoliageType.h"
#include "Templates/SubclassOf.h"
#include "FoliageType_Actor.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFoliageType_Actor : public UFoliageType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAttachToBaseComponent;
    
    UFoliageType_Actor();

};

