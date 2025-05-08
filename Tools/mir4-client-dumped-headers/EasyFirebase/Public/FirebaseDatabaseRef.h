#pragma once
#include "CoreMinimal.h"
#include "FirebaseQuery.h"
#include "FirebaseDatabaseRef.generated.h"

class UFirebaseDatabaseRef;
class UFirebaseFutureVoid;
class UFirebaseVariant;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseDatabaseRef : public UFirebaseQuery {
    GENERATED_BODY()
public:
    UFirebaseDatabaseRef();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString URL();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* UpdateChildrenLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* UpdateChildren(UFirebaseVariant* Values);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* SetValueLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* SetValueAndPriorityLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* SetValueAndPriority(UFirebaseVariant* Value, UFirebaseVariant* Priority);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* SetValue(UFirebaseVariant* variant);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* SetPriorityLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* SetPriority(UFirebaseVariant* variant);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureVoid* RemoveValueLastResult();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseFutureVoid* RemoveValue();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseDatabaseRef* PushChild();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Key();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDatabaseValid();
    
    UFUNCTION(BlueprintCallable)
    void GoOnline();
    
    UFUNCTION(BlueprintCallable)
    void GoOffline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFirebaseDatabaseRef* GetRootDatabaseRefFromUrl(const FString& NewURL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFirebaseDatabaseRef* GetRootDatabaseRef();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseDatabaseRef* GetRoot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseDatabaseRef* GetParent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseDatabaseRef* Child(const FString& Path);
    
};

