#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_ClosedTraining_CollectListSlot.generated.h"

class UMirImage;
class UMirRichTextBlock;
class UMirTextBlock;
class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_ClosedTraining_CollectListSlot : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirRichTextBlock* m_RTxt_TotalCollect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_Img_Selected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVerticalBox* m_VerticalBox;
    
public:
    UMM_ClosedTraining_CollectListSlot();

};

