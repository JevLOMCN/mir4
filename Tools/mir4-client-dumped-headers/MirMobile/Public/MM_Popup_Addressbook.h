#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MM_Popup_Addressbook.generated.h"

class UAddressbookSlotObj;
class UMM_Common_Board_Notice;
class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMM_Popup_Addressbook_TabSlot;
class UMirCheckBox;
class UMirEditableText;
class UMirListView;
class UMirRichTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_Addressbook : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STRING_SEARCH_HINT_ID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_EditableTxt_NickName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_C_Btn_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* m_C_Btn_Search;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_AddressList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Board_Notice* m_C_Empty_Notice;
    
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Popup_Addressbook_TabSlot* m_TabSlot[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckBoxAllSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_C_Btn_Select;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAddressbookSlotObj*> m_arAddressSlotObj;
    
public:
    UMM_Popup_Addressbook();

    UFUNCTION(BlueprintCallable)
    void OnTextCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSelect();
    
    UFUNCTION(BlueprintCallable)
    void OnClickSearchUser();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
    UFUNCTION(BlueprintCallable)
    void OnCheckBoxAllSelect(bool bChecked);
    
};

