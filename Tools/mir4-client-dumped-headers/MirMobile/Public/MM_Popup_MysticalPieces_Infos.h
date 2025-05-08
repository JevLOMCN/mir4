#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_MysticalPieces_Infos.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn_Symbol;
class UMM_PassiveSkillDesc;
class UMM_PopUp_ItemInfo_Ability;
class UMirButton;
class UMirScrollBox;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_MysticalPieces_Infos : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* m_MirScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_PopUp_ItemInfo_Ability*> m_ItemInfo_Abilitys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_PassiveSkillDesc*> m_SkillInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Bg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Notice;
    
public:
    UMM_Popup_MysticalPieces_Infos();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

