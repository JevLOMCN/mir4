#pragma once
#include "CoreMinimal.h"
#include "EWeaponMaterialParameterType.h"
#include "WeaponMaterialData.generated.h"

class UCurveBase;

USTRUCT(BlueprintType)
struct MIRMOBILE_API FWeaponMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EWeaponMaterialParameterType> m_eParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveBase* m_pCurve;
    
    FWeaponMaterialData();
};

