#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "WeaponMaterialData.h"
#include "WeaponMaterialNotify.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UWeaponMaterialNotify : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponMaterialData> m_arrWeaponMaterial;
    
public:
    UWeaponMaterialNotify();

};

