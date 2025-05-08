#pragma once
#include "CoreMinimal.h"
#include "ECharMaterialParameterType.h"
#include "CharMaterialData.generated.h"

class UCurveBase;

USTRUCT(BlueprintType)
struct MIRMOBILE_API FCharMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECharMaterialParameterType> m_eParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_strName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveBase* m_pCurve;
    
    FCharMaterialData();
};

