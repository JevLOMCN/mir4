#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "CharMaterialData.h"
#include "CharMaterialNotify.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UCharMaterialNotify : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharMaterialData> m_arrCharMaterial;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> m_arMaterialInstDynamic;
    
public:
    UCharMaterialNotify();

};

