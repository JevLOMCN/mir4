#pragma once
#include "CoreMinimal.h"
#include "SupportedAreaData.generated.h"

USTRUCT(BlueprintType)
struct NAVIGATIONSYSTEM_API FSupportedAreaData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AreaClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AreaId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* AreaClass;
    
    FSupportedAreaData();
};

