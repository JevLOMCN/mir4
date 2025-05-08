#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Revival_Select.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Occupation_Minimap;
class UMirListView;
class URevivalSelectSlotObj;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Revival_Select : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Occupation_Minimap* OccupationMinimap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_RevivalSelectList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_Revival;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URevivalSelectSlotObj*> m_arRevivalSelectSlotObj;
    
public:
    UMM_Popup_Revival_Select();

    UFUNCTION(BlueprintCallable)
    void OnClickRevival();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

