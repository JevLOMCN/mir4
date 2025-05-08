#pragma once
#include "CoreMinimal.h"
#include "BrushObject.h"
#include "EAutoBattleState.h"
#include "WidgetBase.h"
#include "MM_HudAutoBattle_Element.generated.h"

class UMirButton;
class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudAutoBattle_Element : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAutoBattleState, FBrushObject> AuotBattleStateIcon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* ElementButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* IconImage;
    
public:
    UMM_HudAutoBattle_Element();

private:
    UFUNCTION(BlueprintCallable)
    void OnClicked();
    
};

