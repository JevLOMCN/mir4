#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_Waypoint_List.generated.h"

class UHorizontalBox;
class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class UMM_MAP_Waypoint_Category;
class UMM_Map_CheckBtn;
class UMirRichTextBlock;
class UMirTextBlock;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_Waypoint_List : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_MAP_Waypoint_Category* m_arWaypointCategroy[9];
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Map_CheckBtn* m_arMapCheckBtn[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_Scr_WaypointList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_ChannelChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_CB_Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_CB_Immedi_Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHorizontalBox* m_Hrz_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_Txt_MapType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_btn_ChangeMapType;
    
public:
    UMM_Map_Waypoint_List();

    UFUNCTION(BlueprintCallable)
    void StopAutoQuest(bool isImmediate);
    
    UFUNCTION(BlueprintCallable)
    void OnClickMove();
    
    UFUNCTION(BlueprintCallable)
    void OnClickImmediMove();
    
    UFUNCTION(BlueprintCallable)
    void OnClickChannelChange();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCancel();
    
    UFUNCTION(BlueprintCallable)
    void OnClickBuy();
    
    UFUNCTION(BlueprintCallable)
    void OnChannelChange();
    
};

