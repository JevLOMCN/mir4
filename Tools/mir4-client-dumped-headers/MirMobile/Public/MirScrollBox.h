#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ScrollBox -FallbackName=ScrollBox
#include "EStyle_MirScrollBox.h"
#include "MirScrollBox.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMirScrollBox : public UScrollBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStyle_MirScrollBox m_eStyle;
    
    UMirScrollBox();

};

