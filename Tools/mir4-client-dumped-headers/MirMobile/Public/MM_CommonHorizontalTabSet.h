#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CommonHorizontalTabSet.generated.h"

class UMM_CommonHorizontalTabBtn;
class UPanelWidget;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CommonHorizontalTabSet : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iBtnMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseFillBtn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Hrz_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_CommonHorizontalTabBtn*> m_arTab;
    
public:
    UMM_CommonHorizontalTabSet();

    UFUNCTION(BlueprintCallable)
    void OnClickTab(int32 iTabIndex, bool bLocked);
    
};

