#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "Popup_DungeonReward_Info2.generated.h"

class UMirCanvasPanel;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UPopup_DungeonReward_Info2 : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sclPartyReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCanvasPanel* canReward;
    
public:
    UPopup_DungeonReward_Info2();

};

