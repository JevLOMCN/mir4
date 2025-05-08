#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_StarGrade.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_StarGrade : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* m_arStarGrade[5];
    
public:
    UMM_StarGrade();

};

