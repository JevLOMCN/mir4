#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HolyStuff_UnOpen.generated.h"

class UMM_Common_Board_Notice;
class UMM_Common_Btn;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HolyStuff_UnOpen : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_Notice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_OpenTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_OpenLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_Btn_Open;
    
public:
    UMM_HolyStuff_UnOpen();

    UFUNCTION(BlueprintCallable)
    void OnClickOpen();
    
};

