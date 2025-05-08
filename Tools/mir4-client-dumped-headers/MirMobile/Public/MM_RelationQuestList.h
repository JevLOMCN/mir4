#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_RelationQuestList.generated.h"

class UMM_CommonHorizontalTabSet;
class UMM_QuestRelation_Progress;
class UMirListView;
class URelationGroupSlotObj;
class URelationSlotObj;

UCLASS(Blueprintable, EditInlineNew)
class UMM_RelationQuestList : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> m_CategoryToStr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_GroupList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirListView* m_ListView_RelationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_CommonHorizontalTabSet* m_CategorySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_QuestRelation_Progress* m_QuestRelationProg;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URelationGroupSlotObj*> m_arRelationGroupSlotObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<URelationSlotObj*> m_arRelationSlotObj;
    
public:
    UMM_RelationQuestList();

    UFUNCTION(BlueprintCallable)
    void OnClickGroup(int32 GroupIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCategory(int32 SlotIndex, bool bLocked);
    
};

