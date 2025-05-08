#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_Worldmap.generated.h"

class UCanvasPanel;
class UImage;
class UMM_Map_AreaBtn;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_Worldmap : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Map_AreaBtn*> m_arAreaBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* m_CanIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ImgWorldMap;
    
public:
    UMM_Map_Worldmap();

};

