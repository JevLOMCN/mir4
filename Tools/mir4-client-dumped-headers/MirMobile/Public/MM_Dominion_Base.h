#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Dominion_Base.generated.h"

class UMM_Common_Btn;
class UMM_Common_Btn_Cost;
class UMM_Dominion_Base_List;
class UMM_Dominion_Base_StrongPoint;
class UMirImage;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Dominion_Base : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_pImgPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtUserCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn_Cost* m_pBtnFastEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_pBtnEnter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Base_List* m_pBaseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Dominion_Base_StrongPoint* m_pBaseStrongPoint;
    
public:
    UMM_Dominion_Base();

    UFUNCTION(BlueprintCallable)
    void OnClickFastEnter();
    
    UFUNCTION(BlueprintCallable)
    void OnClickEnter();
    
    UFUNCTION(BlueprintCallable)
    void ClickFastEnter();
    
    UFUNCTION(BlueprintCallable)
    void ClickEnter();
    
};

