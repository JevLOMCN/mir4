#pragma once
#include "CoreMinimal.h"
#include "SmallDialog.generated.h"

USTRUCT(BlueprintType)
struct FSmallDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 STDId;
    
    MIRMOBILE_API FSmallDialog();
};

