#pragma once
#include "CoreMinimal.h"
#include "GuildInfo.generated.h"

USTRUCT(BlueprintType)
struct FGuildInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 GuildID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString GuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GuildMarkEdgeIconID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 GuildMarkIconID;
    
    MIRMOBILE_API FGuildInfo();
};

