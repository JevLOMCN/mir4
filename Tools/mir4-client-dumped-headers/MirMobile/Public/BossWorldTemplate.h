#pragma once
#include "CoreMinimal.h"
#include "BossWorldTemplate.generated.h"

USTRUCT(BlueprintType)
struct MIRMOBILE_API FBossWorldTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WorldBossId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageId;
    
    FBossWorldTemplate();
};

