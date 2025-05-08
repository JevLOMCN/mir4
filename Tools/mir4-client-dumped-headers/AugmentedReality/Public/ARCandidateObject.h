#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ARCandidateObject.generated.h"

UCLASS(Blueprintable)
class AUGMENTEDREALITY_API UARCandidateObject : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> CandidateObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendlyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox BoundingBox;
    
public:
    UARCandidateObject();

    UFUNCTION(BlueprintCallable)
    void SetFriendlyName(const FString& NewName);
    
    UFUNCTION(BlueprintCallable)
    void SetCandidateObjectData(const TArray<uint8>& InCandidateObject);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundingBox(const FBox& InBoundingBox);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFriendlyName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetCandidateObjectData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox GetBoundingBox() const;
    
};

