#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "Widget.h"
#include "Throbber.generated.h"

class USlateBrushAsset;

UCLASS(Blueprintable)
class UMG_API UThrobber : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfPieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateHorizontally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateVertically;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnimateOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USlateBrushAsset* PieceImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UThrobber();

    UFUNCTION(BlueprintCallable)
    void SetNumberOfPieces(int32 InNumberOfPieces);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateVertically(bool bInAnimateVertically);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateOpacity(bool bInAnimateOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimateHorizontally(bool bInAnimateHorizontally);
    
};

