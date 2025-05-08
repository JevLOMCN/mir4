#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "MM_MonsterDyeingCheatWidget.generated.h"

class AMM_Monster;

UCLASS(Blueprintable, EditInlineNew)
class UMM_MonsterDyeingCheatWidget : public UUserWidget {
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
    AMM_Monster* m_pMonster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMM_Monster* m_pPrevMonster;
    
    UMM_MonsterDyeingCheatWidget();

    UFUNCTION(BlueprintCallable)
    void OnClickCopy01();
    
    UFUNCTION(BlueprintCallable)
    void Change01ColorValue(float Body01_R, float Body01_G, float Body01_B, float Body01_V);
    
};

