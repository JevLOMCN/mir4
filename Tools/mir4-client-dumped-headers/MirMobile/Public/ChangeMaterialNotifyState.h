#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "ChangeMaterialNotifyState.generated.h"

class UMaterial;
class UMaterialInstanceDynamic;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UChangeMaterialNotifyState : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* ChangeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInstanceDynamic*> OrgMIDList;
    
    UChangeMaterialNotifyState();

};

