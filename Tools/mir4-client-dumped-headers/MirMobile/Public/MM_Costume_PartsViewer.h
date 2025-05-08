#pragma once
#include "CoreMinimal.h"
#include "ECostumeType.h"
#include "WidgetBase.h"
#include "MM_Costume_PartsViewer.generated.h"

class UMM_Costume_Slot_EquipInfo;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Costume_PartsViewer : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECostumeType CostumeType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMM_Costume_Slot_EquipInfo*> CostumeEquipSlotList;
    
public:
    UMM_Costume_PartsViewer();

};

