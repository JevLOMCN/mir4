#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_DungeonCommonTitle3.generated.h"

class UMirImage;

UCLASS(Blueprintable, EditInlineNew)
class UMM_DungeonCommonTitle3 : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirImage* imgBoss[5];
    
public:
    UMM_DungeonCommonTitle3();

};

