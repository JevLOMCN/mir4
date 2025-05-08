#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudBtnSetJump.generated.h"

class UMM_HudBtnAction;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudBtnSetJump : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudBtnAction* m_pBtnJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudBtnAction* m_pBtnDash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudBtnAction* m_pBtnWallJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudBtnAction* m_pBtnLand;
    
public:
    UMM_HudBtnSetJump();

};

