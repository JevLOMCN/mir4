#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_SubTarget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_SubTarget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Ani_SubTarget;
    
    UMM_SubTarget();

};

