#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "WidgetBase.h"
#include "MM_Party_ExplainTextField.generated.h"

class UMM_Common_Btn_Translation;
class UMM_Common_ComboList;
class UMirEditableText;
class UMirTextBlock;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Party_ExplainTextField : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> arComboBoxStringID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_ComboList* m_ComboBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_ComboBox_Spacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirEditableText* m_Editable_Explain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Explan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Translation* m_C_Btn_Translation;
    
public:
    UMM_Party_ExplainTextField();

    UFUNCTION(BlueprintCallable)
    void OnTextPartyExplainCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void OnComboBoxChanged(const FString& strSelectItem);
    
    UFUNCTION(BlueprintCallable)
    void OnClickTranslation();
    
    UFUNCTION(BlueprintCallable)
    void OnChangeTextPartyExplain(const FText& Text);
    
};

