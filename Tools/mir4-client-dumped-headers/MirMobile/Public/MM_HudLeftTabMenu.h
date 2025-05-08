#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudLeftTabMenu.generated.h"

class UMM_HudLeftTabMenuSlot;
class UMM_HudPartyList;
class UMirButton;
class UMirTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudLeftTabMenu : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudLeftTabMenuSlot* m_Menu_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudLeftTabMenuSlot* m_Menu_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_HudPartyList* m_pPartyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_AlarmCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_FoldPartyList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_Ani_FoldPartyList;
    
public:
    UMM_HudLeftTabMenu();

    UFUNCTION(BlueprintCallable)
    void OnClickFoldPartyList();
    
};

