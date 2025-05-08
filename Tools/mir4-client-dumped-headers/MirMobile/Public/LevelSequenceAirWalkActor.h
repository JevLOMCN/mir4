#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "LevelSequenceAirWalkActor.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class ALevelSequenceAirWalkActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString m_NewSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_OldSectionName;
    
    ALevelSequenceAirWalkActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UAnimMontage* GetAirwalkMontage();
    
};

