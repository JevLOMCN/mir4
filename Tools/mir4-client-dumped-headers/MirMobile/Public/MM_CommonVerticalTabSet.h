#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CommonVerticalTabSet.generated.h"

class UEffectWidgetBase;
class UMM_CommonVerticalTabBtn;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CommonVerticalTabSet : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iFontSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideInsteadOfLock;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_Scr_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_CommonVerticalTabBtn*> m_arTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEffectWidgetBase* m_SelectedEffect;
    
public:
    UMM_CommonVerticalTabSet();

};

