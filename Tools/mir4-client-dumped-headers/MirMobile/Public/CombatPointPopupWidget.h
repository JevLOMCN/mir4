#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "CombatPointPopupWidget.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UCombatPointPopupWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniOpen;
    
    UCombatPointPopupWidget();

    UFUNCTION(BlueprintCallable)
    void OnCloseWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float GetChagePercent();
    
};

