#pragma once
#include "CoreMinimal.h"
#include "AISightEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAISightEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SeenActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Observer;
    
    FAISightEvent();
};

