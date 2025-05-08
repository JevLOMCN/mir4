#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Synthesis.generated.h"

class UMM_CommonHorizontalTabSet;
class UMM_CommonVerticalTabSet;
class UMM_ItemSynthesis;
class UMM_ItemSynthesis_Inven;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Synthesis : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonVerticalTabSet* m_C_Tab_Vertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* m_C_Tab_Horizon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ItemSynthesis* m_ItemSynthesis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ItemSynthesis_Inven* m_ItemSynthesis_Inven;
    
public:
    UMM_B_Synthesis();

    UFUNCTION(BlueprintCallable)
    void OnClickTabVertical(int32 iIndex, bool bLocked);
    
    UFUNCTION(BlueprintCallable)
    void OnClickTabHorizon(int32 iIndex, bool bLocked);
    
};

