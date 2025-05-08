#pragma once
#include "CoreMinimal.h"
#include "BrushObject.h"
#include "EAutoBattleState.h"
#include "EBehaviorType.h"
#include "WidgetBase.h"
#include "MM_HudAutoBattle.generated.h"

class UEffectWidgetBase;
class UMM_HudAutoBattle_Element;
class UMirButton;
class UMirImage;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudAutoBattle : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAutoBattleState, FBrushObject> AuotBattleStateIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBrushObject CounterAttackIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AutoExecEffectID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TouchEffectID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBehaviorType BehaviorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* SelecteButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* SelectedIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* ExpandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_HudAutoBattle_Element*> ElementList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectWidgetBase* ExecuteEffectWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectWidgetBase* TouchEffectWidget;
    
public:
    UMM_HudAutoBattle();

private:
    UFUNCTION(BlueprintCallable)
    void ClearTouchEffect();
    
};

