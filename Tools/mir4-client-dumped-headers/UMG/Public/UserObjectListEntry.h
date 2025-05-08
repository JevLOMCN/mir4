#pragma once
#include "CoreMinimal.h"
#include "UserListEntry.h"
#include "UserObjectListEntry.generated.h"

class UObject;

UINTERFACE()
class UMG_API UUserObjectListEntry : public UUserListEntry {
    GENERATED_BODY()
};

class UMG_API IUserObjectListEntry : public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnListItemObjectSet(UObject* ListItemObject);
    
};

