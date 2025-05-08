#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_Channel.generated.h"

class UChannelSlotObj;
class UMM_Common_Btn_Symbol;
class UMirButton;
class UMirImage;
class UMirListView;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_Channel : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ChangeChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CB_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_PartyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_PartyChannelInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_ChannelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UChannelSlotObj*> m_arChannelSlotObj;
    
public:
    UMM_Map_Channel();

    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

