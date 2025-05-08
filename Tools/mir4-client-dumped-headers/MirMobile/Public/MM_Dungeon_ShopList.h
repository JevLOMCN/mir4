#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Dungeon_ShopList.generated.h"

class UMirTextBlock;
class UWrapBox;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Dungeon_ShopList : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMirTextBlock* m_Txt_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWrapBox* m_WrapBox;
    
public:
    UMM_Dungeon_ShopList();

    UFUNCTION()
    void OnClickInvenSlot(int64 iItemUID, int32 iItemTID, int32 iEquipID);
    
};

