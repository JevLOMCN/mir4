#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ARFilter.h"
#include "AssetData.h"
#include "AssetRegistry.h"
#include "AssetRegistryDependencyOptions.h"
#include "AssetRegistryImpl.generated.h"

UCLASS(Blueprintable, Transient)
class UAssetRegistryImpl : public UObject, public IAssetRegistry {
    GENERATED_BODY()
public:
    UAssetRegistryImpl();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UseFilterToExcludeAssets(UPARAM(Ref) TArray<FAssetData>& AssetDataList, const FARFilter& Filter) const override PURE_VIRTUAL(UseFilterToExcludeAssets,);
    
    UFUNCTION(BlueprintCallable)
    void SearchAllAssets(bool bSynchronousSearch) override PURE_VIRTUAL(SearchAllAssets,);
    
    UFUNCTION(BlueprintCallable)
    void ScanPathsSynchronous(const TArray<FString>& InPaths, bool bForceRescan) override PURE_VIRTUAL(ScanPathsSynchronous,);
    
    UFUNCTION(BlueprintCallable)
    void ScanModifiedAssetFiles(const TArray<FString>& InFilePaths) override PURE_VIRTUAL(ScanModifiedAssetFiles,);
    
    UFUNCTION(BlueprintCallable)
    void ScanFilesSynchronous(const TArray<FString>& InFilePaths, bool bForceRescan) override PURE_VIRTUAL(ScanFilesSynchronous,);
    
    UFUNCTION(BlueprintCallable)
    void RunAssetsThroughFilter(UPARAM(Ref) TArray<FAssetData>& AssetDataList, const FARFilter& Filter) const override PURE_VIRTUAL(RunAssetsThroughFilter,);
    
    UFUNCTION(BlueprintCallable)
    void PrioritizeSearchPath(const FString& PathToPrioritize) override PURE_VIRTUAL(PrioritizeSearchPath,);
    
    UFUNCTION(BlueprintCallable)
    bool K2_GetReferencers(FName PackageName, const FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers) const override PURE_VIRTUAL(K2_GetReferencers, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool K2_GetDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies) const override PURE_VIRTUAL(K2_GetDependencies, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoadingAssets() const override PURE_VIRTUAL(IsLoadingAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAssets(const FName PackagePath, const bool bRecursive) const override PURE_VIRTUAL(HasAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetSubPaths(const FString& InBasePath, TArray<FString>& OutPathList, bool bInRecurse) const override PURE_VIRTUAL(GetSubPaths,);
    
    UFUNCTION(BlueprintCallable)
    bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const override PURE_VIRTUAL(GetAssetsByPath, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) const override PURE_VIRTUAL(GetAssetsByPackageName, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses) const override PURE_VIRTUAL(GetAssetsByClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetAssets(const FARFilter& Filter, TArray<FAssetData>& OutAssetData) const override PURE_VIRTUAL(GetAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    FAssetData GetAssetByObjectPath(const FName ObjectPath, bool bIncludeOnlyOnDiskAssets) const override PURE_VIRTUAL(GetAssetByObjectPath, return FAssetData{};);
    
    UFUNCTION(BlueprintCallable)
    void GetAllCachedPaths(TArray<FString>& OutPathList) const override PURE_VIRTUAL(GetAllCachedPaths,);
    
    UFUNCTION(BlueprintCallable)
    bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) const override PURE_VIRTUAL(GetAllAssets, return false;);
    
};

