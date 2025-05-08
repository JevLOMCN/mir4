#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_SharedScrollBox.generated.h"

class UScrollBox;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_SharedScrollBox : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWrapBox* m_WrapBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* m_ScrollBox;
    
    UMM_SharedScrollBox();

};

