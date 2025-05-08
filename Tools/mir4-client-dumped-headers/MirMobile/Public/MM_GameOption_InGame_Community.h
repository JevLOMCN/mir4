#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_InGame_Community.generated.h"

class UMM_GameOption_Switch;

UCLASS(Blueprintable, EditInlineNew)
class UMM_GameOption_InGame_Community : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* Option_BuddyRequestAutoReject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* Option_BuddyLoginNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* Option_ARejectParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* Option_ARejectSquad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_GameOption_Switch* Option_NotifyItemGain;
    
public:
    UMM_GameOption_InGame_Community();

};

