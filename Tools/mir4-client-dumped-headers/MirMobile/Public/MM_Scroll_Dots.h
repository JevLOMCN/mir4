#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Scroll_Dots.generated.h"

class UMirCanvasPanel;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Scroll_Dots : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iDotsMaxCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirImage*> ImgList_ON;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirCanvasPanel*> PanelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentDot;
    
public:
    UMM_Scroll_Dots();

};

