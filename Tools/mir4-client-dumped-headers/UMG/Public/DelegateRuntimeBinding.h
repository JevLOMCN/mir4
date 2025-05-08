#pragma once
#include "CoreMinimal.h"
#include "DynamicPropertyPath.h"
#include "EBindingKind.h"
#include "DelegateRuntimeBinding.generated.h"

USTRUCT(BlueprintType)
struct FDelegateRuntimeBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ObjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDynamicPropertyPath SourcePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBindingKind Kind;
    
    UMG_API FDelegateRuntimeBinding();
};

