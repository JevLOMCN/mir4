#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
#include "WidgetBase.h"
#include "MM_ItemCollectEffectSlot.generated.h"

class UMirImage;
class UMirTextBlock;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ItemCollectEffectSlot : public UWidgetBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* Img_LevelUpPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Grid_Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PercentFormatStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ValueFormatStrID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CompleteEffectID;
    
    UMM_ItemCollectEffectSlot();


    // Fix for true pure virtual functions not being implemented
};

