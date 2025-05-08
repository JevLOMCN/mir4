#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Status_Info.generated.h"

class UGridPanel;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Status_Info : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UGridPanel* CanvasPanel;
    
public:
    UMM_Status_Info();

};

