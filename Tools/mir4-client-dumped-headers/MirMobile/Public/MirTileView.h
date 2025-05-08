#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TileView -FallbackName=TileView
#include "EStyle_MirTileView.h"
#include "Templates/SubclassOf.h"
#include "MirTileView.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class MIRMOBILE_API UMirTileView : public UTileView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStyle_MirTileView m_eStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> m_arEntryWidgetClass;
    
    UMirTileView();

    UFUNCTION(BlueprintCallable)
    bool ChangeEntryWidget(int32 iIndex);
    
};

