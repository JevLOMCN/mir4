#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_InGame.generated.h"

class UMM_CommonVerticalTabSet;
class UMM_GameOption_InGame_Alarm;
class UMM_GameOption_InGame_Battle;
class UMM_GameOption_InGame_Community;
class UMM_GameOption_InGame_Convenience;
class UMM_GameOption_InGame_HUD;
class UMM_GameOption_InGame_QuickSlot;
class UMM_GameOption_InGame_Target;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_InGame : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* InGameTabSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_InGame_Battle* InGame_Battle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_InGame_QuickSlot* InGame_QuickSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_InGame_HUD* InGame_HUD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_InGame_Convenience* InGame_Convenience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_InGame_Community* InGame_Community;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_InGame_Target* InGame_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_InGame_Alarm* InGame_Alarm;
    
public:
    UMM_GameOption_InGame();

};

