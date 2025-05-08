#pragma once
#include "CoreMinimal.h"
#include "AITouchEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct AIMODULE_API FAITouchEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TouchReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OtherActor;
    
    FAITouchEvent();
};

