#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ListView -FallbackName=ListView
#include "EStyle_MirListView.h"
#include "Templates/SubclassOf.h"
#include "MirListView.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class MIRMOBILE_API UMirListView : public UListView {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStyle_MirListView m_eStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UUserWidget>> m_arEntryWidgetClass;
    
    UMirListView();

    UFUNCTION(BlueprintCallable)
    bool ChangeEntryWidget(int32 iIndex);
    
};

