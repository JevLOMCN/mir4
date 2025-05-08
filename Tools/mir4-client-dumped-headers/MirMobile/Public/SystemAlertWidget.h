#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "SystemAlertWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class USystemAlertWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Txt_BattleTitle;
    
    USystemAlertWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayShowAni();
    
};

