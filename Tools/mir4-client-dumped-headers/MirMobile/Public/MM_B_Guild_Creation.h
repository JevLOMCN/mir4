#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Guild_Creation.generated.h"

class UEditableText;
class UImage;
class UMM_Common_Btn_Cost;
class UMM_Common_Btn_Symbol;
class UScrollBox;
class UTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Guild_Creation : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iCreateCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Txt_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Symbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEditableText* m_Edit_GuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_Scr_SymbolList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_Scr_FrameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_SymbolList_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_SymbolList_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_FrameList_Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_FrameList_Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_CB_Create;
    
public:
    UMM_B_Guild_Creation();

    UFUNCTION(BlueprintCallable)
    float PlayEndAnimation();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSymbolList_Right();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSymbolList_Left();
    
    UFUNCTION(BlueprintCallable)
    void OnClickFrameList_Right();
    
    UFUNCTION(BlueprintCallable)
    void OnClickFrameList_Left();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCreate();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeGuildName(const FText& Text);
    
};

