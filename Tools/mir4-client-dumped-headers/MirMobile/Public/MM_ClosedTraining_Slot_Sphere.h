#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ClosedTraining_Slot_Sphere.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ClosedTraining_Slot_Sphere : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidgetAnimation*> m_Ani_PercentList;
    
public:
    UMM_ClosedTraining_Slot_Sphere();

};

