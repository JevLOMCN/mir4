#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "ARFilter.h"
#include "AssetData.h"
#include "TagAndValue.h"
#include "AssetRegistryHelpers.generated.h"

class IAssetRegistry;
class UAssetRegistry;

UCLASS(Blueprintable, Transient)
class UAssetRegistryHelpers : public UObject {
    GENERATED_BODY()
public:
    UAssetRegistryHelpers();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSoftObjectPath ToSoftObjectPath(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FARFilter SetFilterTagsAndValues(const FARFilter& InFilter, const TArray<FTagAndValue>& InTagsAndValues);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool isValid(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUAsset(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRedirector(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAssetLoaded(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetTagValue(const FAssetData& InAssetData, const FName& InTagName, FString& OutTagValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetFullName(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetExportTextName(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* GetClass(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TScriptInterface<IAssetRegistry> GetAssetRegistry();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetAsset(const FAssetData& InAssetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FAssetData CreateAssetData(const UObject* InAsset, bool bAllowBlueprintClass);
    
};

