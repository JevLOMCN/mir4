#pragma once
#include "CoreMinimal.h"
#include "ECostumeType.h"
#include "WidgetBase.h"
#include "MM_Costume_CombatPoint.generated.h"

class UMM_Common_Btn;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Costume_CombatPoint : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECostumeType CostumeType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_C_TxtCombatPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Common_Btn* m_C_BtnDetail;
    
public:
    UMM_Costume_CombatPoint();

    UFUNCTION(BlueprintCallable)
    void OnClickDetailButton();
    
};

