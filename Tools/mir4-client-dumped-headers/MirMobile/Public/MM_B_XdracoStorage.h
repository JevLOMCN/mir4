#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "MM_B_XdracoStorage.generated.h"

class UMM_Xdraco_InvenLeft;
class UMM_Xdraco_InvenRight;

UCLASS(Blueprintable, EditInlineNew)
class UMM_B_XdracoStorage : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 INVENTORY_ID;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Xdraco_InvenLeft* m_InvenLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMM_Xdraco_InvenRight* m_InvenRight;
    
public:
    UMM_B_XdracoStorage();

};

