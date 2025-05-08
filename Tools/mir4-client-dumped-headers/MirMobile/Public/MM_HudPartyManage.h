#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_HudPartyManage.generated.h"

class UButton;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_HudPartyManage : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BTN_PartyCreateStringID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BTN_IconTID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ImgIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_TxtMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UButton* m_BtnMain;
    
public:
    UMM_HudPartyManage();

    UFUNCTION(BlueprintCallable)
    void OnClickMain();
    
};

