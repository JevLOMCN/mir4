#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Dominion_Base_List.generated.h"

class UDominionSlotObj;
class UMirListView;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Dominion_Base_List : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_DominionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDominionSlotObj*> m_arDominionSlotObj;
    
public:
    UMM_Dominion_Base_List();

};

