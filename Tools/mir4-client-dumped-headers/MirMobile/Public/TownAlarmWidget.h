#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "TownAlarmWidget.generated.h"

class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UTownAlarmWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText m_TownAlarmText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* WidgetAnim_appear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* m_TownAlarm;
    
    UTownAlarmWidget();

    UFUNCTION(BlueprintCallable)
    void ShowTownAlarm(int32 AreaId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayMainAnimation();
    
};

