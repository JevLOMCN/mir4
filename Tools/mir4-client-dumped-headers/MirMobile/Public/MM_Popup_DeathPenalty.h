#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Popup_DeathPenalty.generated.h"

class UMirButton;
class UMirImage;
class UMirTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Popup_DeathPenalty : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UVerticalBox*> m_arrVerticalBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirImage*> m_arrImgIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirTextBlock*> m_arrTxtName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMirButton*> m_arrBtnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgBg;
    
public:
    UMM_Popup_DeathPenalty();

    UFUNCTION(BlueprintCallable)
    void OnClickItem();
    
    UFUNCTION(BlueprintCallable)
    void OnClickInjure();
    
    UFUNCTION(BlueprintCallable)
    void OnClickExp();
    
};

