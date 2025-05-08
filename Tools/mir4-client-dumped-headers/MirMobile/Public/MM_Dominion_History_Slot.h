#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserObjectListEntry -FallbackName=UserObjectListEntry
#include "WidgetBase.h"
#include "MM_Dominion_History_Slot.generated.h"

class UMirRichTextBlock;
class UMirTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Dominion_History_Slot : public UWidgetBase, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_pTxtTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_pTxtLog;
    
public:
    UMM_Dominion_History_Slot();


    // Fix for true pure virtual functions not being implemented
};

