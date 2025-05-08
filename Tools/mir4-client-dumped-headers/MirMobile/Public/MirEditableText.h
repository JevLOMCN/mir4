#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EditableText -FallbackName=EditableText
#include "EStringTableType.h"
#include "MirEditableText.generated.h"

UCLASS(Blueprintable)
class MIRMOBILE_API UMirEditableText : public UEditableText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStringTableType m_StringTableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StringTableID;
    
    UMirEditableText();

    UFUNCTION(BlueprintCallable)
    void OnEditableTxtTitleCommitted(const FText& text_, TEnumAsByte<ETextCommit::Type> commit_method_);
    
};

