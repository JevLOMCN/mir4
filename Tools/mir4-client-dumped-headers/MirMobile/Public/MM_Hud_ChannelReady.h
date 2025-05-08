#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_ChannelReady.generated.h"

class UCanvasPanel;
class UMirButton;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_ChannelReady : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_Canvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Select;
    
public:
    UMM_Hud_ChannelReady();

    UFUNCTION(BlueprintCallable)
    void OnClickSelect();
    
};

