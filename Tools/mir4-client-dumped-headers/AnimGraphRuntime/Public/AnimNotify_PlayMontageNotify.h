#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "AnimNotify_PlayMontageNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ANIMGRAPHRUNTIME_API UAnimNotify_PlayMontageNotify : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyName;
    
public:
    UAnimNotify_PlayMontageNotify();

};

