#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MM_CharacterCustomizingModule.generated.h"

class UMM_CharacterPartsComponent;

UCLASS(Blueprintable)
class UMM_CharacterCustomizingModule : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMM_CharacterPartsComponent> m_pPartsComponent;
    
public:
    UMM_CharacterCustomizingModule();

private:
    UFUNCTION(BlueprintCallable)
    void InitLoadComplete();
    
    UFUNCTION(BlueprintCallable)
    void ChangeMeshComplete();
    
};

