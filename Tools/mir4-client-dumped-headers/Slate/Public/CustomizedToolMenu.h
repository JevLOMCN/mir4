#pragma once
#include "CoreMinimal.h"
#include "CustomizedToolMenuEntry.h"
#include "CustomizedToolMenuNameArray.h"
#include "CustomizedToolMenuSection.h"
#include "CustomizedToolMenu.generated.h"

USTRUCT(BlueprintType)
struct SLATE_API FCustomizedToolMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedToolMenuEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedToolMenuSection> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCustomizedToolMenuNameArray> EntryOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SectionOrder;
    
    FCustomizedToolMenu();
};

