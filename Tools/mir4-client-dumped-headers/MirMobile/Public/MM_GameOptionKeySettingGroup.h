#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_GameOptionKeySettingGroup.generated.h"

class UMirTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class MIRMOBILE_API UMM_GameOptionKeySettingGroup : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* txt_group_name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* vb_group_slot;
    
public:
    UMM_GameOptionKeySettingGroup();

};

