#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Ranking_Reward_Item.generated.h"

class UCanvasPanel;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Ranking_Reward_Item : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pCanPanelItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_pCanPanelStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgStatus;
    
public:
    UMM_Ranking_Reward_Item();

};

