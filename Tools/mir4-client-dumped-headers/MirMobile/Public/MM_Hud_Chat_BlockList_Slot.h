#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Hud_Chat_BlockList_Slot.generated.h"

class UMM_Common_Btn;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Hud_Chat_BlockList_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 STRING_BTN_UNBLOCK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Nickname_BlockUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* Btn_UnBlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_BlockUserName;
    
public:
    UMM_Hud_Chat_BlockList_Slot();

private:
    UFUNCTION(BlueprintCallable)
    void OnClickUnBlockUser();
    
};

