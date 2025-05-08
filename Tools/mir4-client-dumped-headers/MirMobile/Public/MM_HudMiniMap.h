#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudMiniMap.generated.h"

class UMM_Map_Detail;
class URetainerBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudMiniMap : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Map_Detail* m_Map_Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    URetainerBox* m_RetainerBox_Map;
    
public:
    UMM_HudMiniMap();

};

