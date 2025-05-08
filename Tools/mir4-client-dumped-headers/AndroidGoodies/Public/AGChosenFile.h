#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGChosenFile.generated.h"

UCLASS(Blueprintable)
class UAGChosenFile : public UObject {
    GENERATED_BODY()
public:
    UAGChosenFile();

    UFUNCTION(BlueprintCallable)
    bool IsSuccess();
    
    UFUNCTION(BlueprintCallable)
    int64 GetSize();
    
    UFUNCTION(BlueprintCallable)
    FString GetOriginalPath();
    
    UFUNCTION(BlueprintCallable)
    FString GetMimeType();
    
    UFUNCTION(BlueprintCallable)
    FString GetHumanReadableSize(bool bytesRounded);
    
    UFUNCTION(BlueprintCallable)
    FString GetFileExtensionFromMimeTypeWithoutDot();
    
    UFUNCTION(BlueprintCallable)
    FString GetFileExtensionFromMimeType();
    
    UFUNCTION(BlueprintCallable)
    FString GetDisplayName();
    
    UFUNCTION(BlueprintCallable)
    FDateTime GetCreatedAt();
    
};

