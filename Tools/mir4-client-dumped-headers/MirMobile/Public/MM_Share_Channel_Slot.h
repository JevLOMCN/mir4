#pragma once
#include "CoreMinimal.h"
#include "CHAT_CHANNEL_TYPE.h"
#include "WidgetBase.h"
#include "MM_Share_Channel_Slot.generated.h"

class UMirButton;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Share_Channel_Slot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Title_StringID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    CHAT_CHANNEL_TYPE ShareChannelType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* Btn_Slot;
    
public:
    UMM_Share_Channel_Slot();

    UFUNCTION(BlueprintCallable)
    void OnClickSlot();
    
};

