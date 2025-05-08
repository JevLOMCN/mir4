#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Loading_Inner.generated.h"

class UPanelWidget;
class UProgressBar;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Loading_Inner : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Txt_Percent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UProgressBar* m_Pgr_Loading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Can_Effect;
    
public:
    UMM_Loading_Inner();

};

