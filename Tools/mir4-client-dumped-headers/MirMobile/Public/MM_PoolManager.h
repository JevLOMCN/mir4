#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ResourcePoolData.h"
#include "MM_PoolManager.generated.h"

UCLASS(Blueprintable)
class UMM_PoolManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FResourcePoolData> m_mapMaintainResourcePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FResourcePoolData> m_mapMaintainInStageResourcePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FResourcePoolData> m_mapInstantResourcePool;
    
    UMM_PoolManager();

};

