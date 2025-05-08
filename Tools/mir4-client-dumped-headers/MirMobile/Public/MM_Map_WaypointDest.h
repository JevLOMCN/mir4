#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Map_WaypointDest.generated.h"

class UImage;
class USpacer;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Map_WaypointDest : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* m_AniActive;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpacer* m_SpcMain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ImgDest_0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UImage* m_ImgDest_1;
    
public:
    UMM_Map_WaypointDest();

};

