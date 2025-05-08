#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RichTextBlockDecorator.generated.h"

UCLASS(Abstract, Blueprintable)
class UMG_API URichTextBlockDecorator : public UObject {
    GENERATED_BODY()
public:
    URichTextBlockDecorator();

};

