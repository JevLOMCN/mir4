#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ServerGroup_NFT.generated.h"

class UMM_ServerSlot_Global;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ServerGroup_NFT : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Ping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_ServerSlot_Global* m_ServerSlot;
    
public:
    UMM_ServerGroup_NFT();

};

