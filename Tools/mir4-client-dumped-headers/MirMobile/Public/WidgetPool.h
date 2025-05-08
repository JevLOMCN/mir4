#pragma once
#include "CoreMinimal.h"
#include "EWidgetID.h"
#include "WidgetPool.generated.h"

class UWidgetBase;

USTRUCT(BlueprintType)
struct FWidgetPool {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWidgetID m_eWidgetID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iWidgetLayerPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iInitCount;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UWidgetBase>> m_arPool;
    
    MIRMOBILE_API FWidgetPool();
};

