#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SlateWidgetStyleAsset.generated.h"

class USlateWidgetStyleContainerBase;

UCLASS(Blueprintable)
class SLATECORE_API USlateWidgetStyleAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlateWidgetStyleContainerBase* CustomStyle;
    
    USlateWidgetStyleAsset();

};

