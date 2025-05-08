#pragma once
#include "CoreMinimal.h"
#include "EWidgetAnimationEvent.h"
#include "WidgetAnimationDynamicEventDelegate.h"
#include "AnimationEventBinding.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FAnimationEventBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent Delegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetAnimationEvent AnimationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserTag;
    
    UMG_API FAnimationEventBinding();
};

