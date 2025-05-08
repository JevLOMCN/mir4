#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_Auction_Tab_Search_Enchant.generated.h"

class UMM_Auction_Enchant_ComboList;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UMM_Auction_Tab_Search_Enchant : public UWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Auction_Enchant_ComboList* m_pComboList_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Auction_Enchant_ComboList* m_pComboList_Max;
    
public:
    UMM_Auction_Tab_Search_Enchant();

    UFUNCTION(BlueprintCallable)
    void OnClickSlotMin(int32 iIndex, bool bSlotUpdate);
    
    UFUNCTION(BlueprintCallable)
    void OnClickSlotMax(int32 iIndex, bool bSlotUpdate);
    
    UFUNCTION(BlueprintCallable)
    void OnClickComboList(int32 iIndex);
    
    UFUNCTION(BlueprintCallable)
    void Bind_ClickSlotDelegate(UObject* pObj, const FName& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    void Bind_ClickDelegate(UObject* pObj, const FName& FunctionName);
    
};

