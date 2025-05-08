#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Dominion.generated.h"

class UMM_CommonHorizontalTabSet;
class UMM_Dominion_Base;
class UMM_Dominion_Castle;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Dominion : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* m_pTabDominion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* m_pSwitchDominion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Castle* m_pDominionCastle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Base* m_pDominionBase;
    
public:
    UMM_B_Dominion();

    UFUNCTION(BlueprintCallable)
    void OnClickMainTab(int32 iTabIndex, bool bLocked);
    
};

