#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MissionFailedWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMissionFailedWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_StartAni;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitSeconds;
    
    UMissionFailedWidget();

    UFUNCTION(BlueprintCallable)
    void CloseMissionFailPopup();
    
};

