#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EEnvQueryStatus.h"
#include "EQSQueryResultSourceInterface.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryInstanceBlueprintWrapper.generated.h"

class AActor;
class UEnvQueryInstanceBlueprintWrapper;
class UEnvQueryItemType;

UCLASS(Blueprintable)
class AIMODULE_API UEnvQueryInstanceBlueprintWrapper : public UObject, public IEQSQueryResultSourceInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEQSQueryDoneSignature, UEnvQueryInstanceBlueprintWrapper*, QueryInstance, TEnumAsByte<EEnvQueryStatus::Type>, QueryStatus);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QueryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryItemType> ItemType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionIndex;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSQueryDoneSignature OnQueryFinishedEvent;
    
public:
    UEnvQueryInstanceBlueprintWrapper();

    UFUNCTION(BlueprintCallable)
    void SetNamedParam(FName ParamName, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> GetResultsAsLocations() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetResultsAsActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemScore(int32 ItemIndex) const;
    

    // Fix for true pure virtual functions not being implemented
};

