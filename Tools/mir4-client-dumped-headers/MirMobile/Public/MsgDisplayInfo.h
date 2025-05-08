#pragma once
#include "CoreMinimal.h"
#include "MsgDisplayInfo.generated.h"

class UWidgetBase;

USTRUCT(BlueprintType)
struct FMsgDisplayInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidgetBase> m_pSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_iCurIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_fDestLocY;
    
    MIRMOBILE_API FMsgDisplayInfo();
};

