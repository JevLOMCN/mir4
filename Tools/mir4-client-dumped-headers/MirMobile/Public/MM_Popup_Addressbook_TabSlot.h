#pragma once
#include "CoreMinimal.h"
#include "EMail_AddressbookTab.h"
#include "WidgetBase.h"
#include "MM_Popup_Addressbook_TabSlot.generated.h"

class UMirButton;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Addressbook_TabSlot : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STRING_TAB_NAME_ID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMail_AddressbookTab ETabType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_TabName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Main;
    
public:
    UMM_Popup_Addressbook_TabSlot();

    UFUNCTION(BlueprintCallable)
    void OnClickMain();
    
};

