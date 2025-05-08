#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MobileInstalledContent.generated.h"

UCLASS(Blueprintable)
class MOBILEPATCHINGUTILS_API UMobileInstalledContent : public UObject {
    GENERATED_BODY()
public:
    UMobileInstalledContent();

    UFUNCTION(BlueprintCallable)
    bool Mount(int32 PakOrder, const FString& MountPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInstalledContentSize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDiskFreeSpace();
    
};

