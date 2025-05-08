#pragma once
#include "CoreMinimal.h"
#include "EWidgetAnimationEvent.h"
#include "BlueprintWidgetAnimationDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct UMG_API FBlueprintWidgetAnimationDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWidgetAnimationEvent Action;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnimationToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserTag;
    
    FBlueprintWidgetAnimationDelegateBinding();
};

