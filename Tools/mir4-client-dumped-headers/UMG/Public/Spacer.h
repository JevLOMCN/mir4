#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Widget.h"
#include "Spacer.generated.h"

UCLASS(Blueprintable)
class UMG_API USpacer : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    USpacer();

    UFUNCTION(BlueprintCallable)
    void SetSize(FVector2D InSize);
    
};

