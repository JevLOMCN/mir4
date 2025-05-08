#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_CostumeAbility_Select.generated.h"

class UMM_PopUp_ItemInfo_Ability;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_CostumeAbility_Select : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_PopUp_ItemInfo_Ability*> arrSelect_Ability;
    
public:
    UMM_CostumeAbility_Select();

};

