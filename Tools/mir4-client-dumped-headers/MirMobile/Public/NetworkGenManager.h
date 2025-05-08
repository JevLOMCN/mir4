#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "NetworkGenManager.generated.h"

UCLASS(Blueprintable)
class ANetworkGenManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bNamingPosID;
    
    ANetworkGenManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SaveData();
    
    UFUNCTION(BlueprintCallable)
    void LoadData();
    
};

