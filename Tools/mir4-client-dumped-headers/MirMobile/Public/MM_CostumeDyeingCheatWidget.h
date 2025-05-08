#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MM_CostumeDyeingCheatWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UMM_CostumeDyeingCheatWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Body01_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Body01_G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Body01_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Body01_V;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Body02_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Body02_G;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Body02_B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Body02_V;
    
    UMM_CostumeDyeingCheatWidget();

    UFUNCTION(BlueprintCallable)
    void UpdateCostume(const int32 CostumeID);
    
    UFUNCTION(BlueprintCallable)
    void OnClickCopy02();
    
    UFUNCTION(BlueprintCallable)
    void OnClickCopy01();
    
    UFUNCTION(BlueprintCallable)
    void Change02ColorValue(float Body02_R, float Body02_G, float Body02_B, float Body02_V);
    
    UFUNCTION(BlueprintCallable)
    void Change01ColorValue(float Body01_R, float Body01_G, float Body01_B, float Body01_V);
    
    UFUNCTION(BlueprintCallable)
    void ChagneMeshComplete();
    
};

