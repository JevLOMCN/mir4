#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Widget_Master.generated.h"

class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Widget_Master : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Can_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Can_Effect;
    
public:
    UMM_Widget_Master();

};

