#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotify_PlayMontageNotifyWindow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ANIMGRAPHRUNTIME_API UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyName;
    
public:
    UAnimNotify_PlayMontageNotifyWindow();

};

