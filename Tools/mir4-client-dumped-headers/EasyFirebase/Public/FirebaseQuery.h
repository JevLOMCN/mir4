#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FirebaseQuery.generated.h"

class UFirebaseChildListener;
class UFirebaseDatabaseRef;
class UFirebaseFutureDataSnapshot;
class UFirebaseQuery;
class UFirebaseValueListener;
class UFirebaseVariant;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseQuery : public UObject {
    GENERATED_BODY()
public:
    UFirebaseQuery();

    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* StartWithKeyAt(UFirebaseVariant* orderValue, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* StartAt(UFirebaseVariant* orderValue);
    
    UFUNCTION(BlueprintCallable)
    void SetKeepSynchronized(bool keep_sync);
    
    UFUNCTION(BlueprintCallable)
    void RemoveValueListener(UFirebaseValueListener* listner);
    
    UFUNCTION(BlueprintCallable)
    void RemoveChildListener(UFirebaseChildListener* listener);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllValueListeners();
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllChildListeners();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* OrderByValue();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* OrderByPriority();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* OrderByKey();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* OrderByChild(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* LimitToLast(int64 Limit);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* LimitToFirst(int64 Limit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureDataSnapshot* GetValueLastResult();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseFutureDataSnapshot* GetValue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseDatabaseRef* GetReference();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* EqualWithKeyTo(UFirebaseVariant* orderValue, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* EqualTo(UFirebaseVariant* orderValue);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* EndWithKeyAt(UFirebaseVariant* orderValue, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseQuery* EndAt(UFirebaseVariant* orderValue);
    
    UFUNCTION(BlueprintCallable)
    UFirebaseValueListener* AddValueListener();
    
    UFUNCTION(BlueprintCallable)
    UFirebaseChildListener* AddChildListener();
    
};

