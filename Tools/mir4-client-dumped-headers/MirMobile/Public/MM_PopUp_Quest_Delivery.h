#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_PopUp_Quest_Delivery.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Slot_Quest_Info;
class UMirTextBlock;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_PopUp_Quest_Delivery : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_CloseBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_OkBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_PopupTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_Slot_Quest_Info* m_QuestInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_OpenAni;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_CloseAni;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DeliveryToStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DoingDeliveryToStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TitleWithCountToStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CompleteToStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_NotEnoughToStr;
    
    UMM_PopUp_Quest_Delivery();

    UFUNCTION(BlueprintCallable)
    float PlayCloseAni();
    
    UFUNCTION(BlueprintCallable)
    void OnClickDelivery();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

