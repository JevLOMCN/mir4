#pragma once
#include "CoreMinimal.h"
#include "MM_PC.h"
#include "PoolingInterface.h"
#include "MM_NetPC.generated.h"

UCLASS(Blueprintable)
class AMM_NetPC : public AMM_PC, public IPoolingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPoolingObject;
    
    AMM_NetPC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestFunction2();
    
    UFUNCTION(BlueprintCallable)
    void TestFunction1();
    

    // Fix for true pure virtual functions not being implemented
};

