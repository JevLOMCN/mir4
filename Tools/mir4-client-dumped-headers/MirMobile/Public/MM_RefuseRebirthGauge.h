#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_RefuseRebirthGauge.generated.h"

class UCanvasPanel;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_RefuseRebirthGauge : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_RefuseRebirthGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_Canvas_PartyMember;
    
public:
    UMM_RefuseRebirthGauge();

};

