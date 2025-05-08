#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOption_Language.generated.h"

class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_GameOption_Language : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* wb_language;
    
public:
    UMM_GameOption_Language();

};

