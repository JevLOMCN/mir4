#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "DebugPanel.generated.h"

class UCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class UDebugPanel : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* DebugCanvasPanel;
    
    UDebugPanel();

};

