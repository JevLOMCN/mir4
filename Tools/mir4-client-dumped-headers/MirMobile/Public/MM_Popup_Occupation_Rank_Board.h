#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_Occupation_Rank_Board.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn_Symbol;
class UMM_Slot_Occupation_Ranking;
class UMirImage;
class UMirTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Occupation_Rank_Board : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Occupation_Ranking* m_rankingBoard_Defense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Slot_Occupation_Ranking* m_rankingBoard_Offense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_img_Defense_Symbol_BGFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_img_Defense_Symbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_txt_Defense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_txt_Defense_Guild_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_img_Offense_Symbol_BGFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_img_Offense_Symbol;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_txt_Offense;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_txt_Offense_Guild_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_txt_Remain_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_txt_Remain_Time_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_Rank_List_Empty_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_txt_Rank_Update;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_btn_Rank_Update;
    
public:
    UMM_Popup_Occupation_Rank_Board();

private:
    UFUNCTION(BlueprintCallable)
    void OnClikcClose();
    
    UFUNCTION(BlueprintCallable)
    void OnClickRankingRefresh();
    
};

