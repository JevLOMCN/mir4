#pragma once
#include "CoreMinimal.h"
#include "RichTextBlockDecorator.h"
#include "RichTextBlockImageDecorator.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class UMG_API URichTextBlockImageDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ImageSet;
    
public:
    URichTextBlockImageDecorator();

};

