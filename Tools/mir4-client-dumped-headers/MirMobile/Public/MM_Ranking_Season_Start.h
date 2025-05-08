#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Ranking_Season_Start.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_Ranking_Season_Start : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Ani_Season_Start;
    
public:
    UMM_Ranking_Season_Start();

    UFUNCTION(BlueprintCallable)
    void CLoseAni();
    
};

