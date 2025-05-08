#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_PopupNFTCharacterList.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Symbol;
class UMirScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_B_PopupNFTCharacterList : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Symbol* btn_close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_refresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* btn_confirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirScrollBox* sb_character;
    
public:
    UMM_B_PopupNFTCharacterList();

    UFUNCTION(BlueprintCallable)
    void OnClickRefresh();
    
    UFUNCTION(BlueprintCallable)
    void OnClickConfirm();
    
    UFUNCTION(BlueprintCallable)
    void OnClickClose();
    
};

