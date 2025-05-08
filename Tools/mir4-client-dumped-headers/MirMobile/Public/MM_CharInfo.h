#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CharInfo.generated.h"

class UHorizontalBox;
class UMM_CombatPoint;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_ProfileSlot;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CharInfo : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_C_TxtLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_C_TxtNickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* horizontal_box_levelup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* mir_textblock_next_level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_CombatPoint* CombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ProfileSlot* m_Profile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_pPanelDominionTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_pBtnTitleInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtTitleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_NickNameCopy;
    
public:
    UMM_CharInfo();

    UFUNCTION(BlueprintCallable)
    void OnClickProfile(int32 IntProperty_0);
    
    UFUNCTION(BlueprintCallable)
    void OnClickNickNameCopy();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDominionTitle();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDetailButton();
    
};

