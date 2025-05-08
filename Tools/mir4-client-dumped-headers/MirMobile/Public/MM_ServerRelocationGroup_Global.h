#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ServerRelocationGroup_Global.generated.h"

class UMirButton;
class UMirCheckBox;
class UMirTextBlock;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_ServerRelocationGroup_Global : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_ServerGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_Btn_Fold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirCheckBox* m_CheckBox_Flod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_Wrap_ServerList;
    
public:
    UMM_ServerRelocationGroup_Global();

    UFUNCTION(BlueprintCallable)
    void OnClickFold();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCheckBox(bool bChecked);
    
};

