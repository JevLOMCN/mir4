#pragma once
#include "CoreMinimal.h"
#include "MM_QuestBaseMsg.h"
#include "MM_RelationQuestCompleteMsg.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_RelationQuestCompleteMsg : public UMM_QuestBaseMsg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Rare_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Hero_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Legend_Icon;
    
    UMM_RelationQuestCompleteMsg();

};

