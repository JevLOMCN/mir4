#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Slot_Occupation_Ranking.generated.h"

class UMirListView;
class URankingSlotObj;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Slot_Occupation_Ranking : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ranking_ListView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URankingSlotObj*> m_rankSlot_List;
    
public:
    UMM_Slot_Occupation_Ranking();

};

