#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_WorldMap_Occupation.generated.h"

class UImage;
class UPanelWidget;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UMM_WorldMap_Occupation : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Txt_GuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* m_Txt_OccupationState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPanelWidget* m_Grid_GuildName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_Img_Symbol;
    
public:
    UMM_WorldMap_Occupation();

};

