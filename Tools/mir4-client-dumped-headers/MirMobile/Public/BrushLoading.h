#pragma once
#include "CoreMinimal.h"
#include "BrushLoading_Callback.h"
#include "BrushLoading.generated.h"

USTRUCT(BlueprintType)
struct FBrushLoading {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_strPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_bLoading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBrushLoading_Callback> m_arCallback;
    
    MIRMOBILE_API FBrushLoading();
};

