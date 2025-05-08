#pragma once
#include "CoreMinimal.h"
#include "PIELoginSettingsInternal.generated.h"

USTRUCT(BlueprintType)
struct FPIELoginSettingsInternal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString Token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> TokenBytes;
    
    ONLINESUBSYSTEMUTILS_API FPIELoginSettingsInternal();
};

