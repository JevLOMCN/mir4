#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_Player.generated.h"

class UImage;
class USpacer;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_Player : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRaderScale;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_SpcMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ImgView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ImgPlayer;
    
public:
    UMM_Map_Player();

};

