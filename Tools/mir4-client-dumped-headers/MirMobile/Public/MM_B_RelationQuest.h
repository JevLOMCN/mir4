#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_RelationQuest.generated.h"

class UMM_RelationQuestDetailList;
class UMM_RelationQuestList;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_RelationQuest : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_RelationQuestList* m_List_RelationQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_RelationQuestDetailList* m_RelationQuestDetail;
    
    UMM_B_RelationQuest();

    UFUNCTION(BlueprintCallable)
    void OnClickReturnDetail();
    
};

