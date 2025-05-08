#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PKWarning.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PKWarning : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float playSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 cycleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* warningAni;
    
public:
    UMM_PKWarning();

};

