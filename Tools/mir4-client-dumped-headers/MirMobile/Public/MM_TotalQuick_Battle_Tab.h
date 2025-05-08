#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_TotalQuick_Battle_Tab.generated.h"

class UImage;
class UMirButton;
class UMirImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_TotalQuick_Battle_Tab : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirButton* m_pBtnClick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgLock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_pImgSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_pImgDeSelect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_pTxtName;
    
public:
    UMM_TotalQuick_Battle_Tab();

    UFUNCTION(BlueprintCallable)
    void OnClickTab();
    
};

