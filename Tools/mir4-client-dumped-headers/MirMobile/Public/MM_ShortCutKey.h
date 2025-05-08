#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ShortCutKey.generated.h"

class UMirButton;
class UMirCanvasPanel;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_ShortCutKey : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* cp_slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_BG;
    
    UMM_ShortCutKey();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

