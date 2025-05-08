#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ServerVisitRelocation_SetList.generated.h"

class UMM_Common_Btn;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_ServerVisitRelocation_SetList : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Move;
    
public:
    UMM_ServerVisitRelocation_SetList();

    UFUNCTION(BlueprintCallable)
    void OnClickMove();
    
};

