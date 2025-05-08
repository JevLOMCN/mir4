#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "UserListEntry.generated.h"

UINTERFACE(Blueprintable)
class UMG_API UUserListEntry : public UInterface {
    GENERATED_BODY()
};

class UMG_API IUserListEntry : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemSelectionChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnItemExpansionChanged(bool bIsExpanded);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEntryReleased();
    
};

