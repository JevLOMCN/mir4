#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ARFilter.h"
#include "AssetData.h"
#include "AssetRegistryDependencyOptions.h"
#include "AssetRegistry.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UAssetRegistry : public UInterface {
    GENERATED_BODY()
};

class IAssetRegistry : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UseFilterToExcludeAssets(UPARAM(Ref) TArray<FAssetData>& AssetDataList, const FARFilter& Filter) const PURE_VIRTUAL(UseFilterToExcludeAssets,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SearchAllAssets(bool bSynchronousSearch) PURE_VIRTUAL(SearchAllAssets,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ScanPathsSynchronous(const TArray<FString>& InPaths, bool bForceRescan) PURE_VIRTUAL(ScanPathsSynchronous,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ScanModifiedAssetFiles(const TArray<FString>& InFilePaths) PURE_VIRTUAL(ScanModifiedAssetFiles,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ScanFilesSynchronous(const TArray<FString>& InFilePaths, bool bForceRescan) PURE_VIRTUAL(ScanFilesSynchronous,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RunAssetsThroughFilter(UPARAM(Ref) TArray<FAssetData>& AssetDataList, const FARFilter& Filter) const PURE_VIRTUAL(RunAssetsThroughFilter,);
    
    UFUNCTION(BlueprintCallable)
    virtual void PrioritizeSearchPath(const FString& PathToPrioritize) PURE_VIRTUAL(PrioritizeSearchPath,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool K2_GetReferencers(FName PackageName, const FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers) const PURE_VIRTUAL(K2_GetReferencers, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool K2_GetDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies) const PURE_VIRTUAL(K2_GetDependencies, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsLoadingAssets() const PURE_VIRTUAL(IsLoadingAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasAssets(const FName PackagePath, const bool bRecursive) const PURE_VIRTUAL(HasAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetSubPaths(const FString& InBasePath, TArray<FString>& OutPathList, bool bInRecurse) const PURE_VIRTUAL(GetSubPaths,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets) const PURE_VIRTUAL(GetAssetsByPath, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) const PURE_VIRTUAL(GetAssetsByPackageName, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses) const PURE_VIRTUAL(GetAssetsByClass, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAssets(const FARFilter& Filter, TArray<FAssetData>& OutAssetData) const PURE_VIRTUAL(GetAssets, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FAssetData GetAssetByObjectPath(const FName ObjectPath, bool bIncludeOnlyOnDiskAssets) const PURE_VIRTUAL(GetAssetByObjectPath, return FAssetData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetAllCachedPaths(TArray<FString>& OutPathList) const PURE_VIRTUAL(GetAllCachedPaths,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets) const PURE_VIRTUAL(GetAllAssets, return false;);
    
};

