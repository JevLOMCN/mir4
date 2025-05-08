#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_Chat_ChattingRoom.generated.h"

class UCanvasPanel;
class UMM_Common_Btn_Symbol;
class UMM_Hud_Chat_QuickMove;
class UMirTextBlock;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Chat_ChattingRoom : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* Panel_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_nickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* Btn_EixtChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UScrollBox* m_ScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Hud_Chat_QuickMove* m_Chat_QuickMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_WorldName;
    
public:
    UMM_Hud_Chat_ChattingRoom();

    UFUNCTION(BlueprintCallable)
    void OnClickExitChannel();
    
};

