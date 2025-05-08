#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "TutorialGuidCommentWidget.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UTutorialGuidCommentWidget : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TutorialEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* cp_can;
    
    UTutorialGuidCommentWidget();

};

