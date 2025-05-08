#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_Smite.generated.h"

class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_Smite : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniLoop;
    
    UMM_B_Smite();

};

