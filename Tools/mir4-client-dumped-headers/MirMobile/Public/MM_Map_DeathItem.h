#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_DeathItem.generated.h"

class UImage;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_DeathItem : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRaderScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_SpcMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ImgPlayer;
    
    UMM_Map_DeathItem();

};

