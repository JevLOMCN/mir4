#pragma once
#include "CoreMinimal.h"
#include "BrushLoading_Callback.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FBrushLoading_Callback {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UObject> m_CallbackOwnerPtr;
    
    MIRMOBILE_API FBrushLoading_Callback();
};

