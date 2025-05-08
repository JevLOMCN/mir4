#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FirebaseDataSnapshot.generated.h"

class UFirebaseDataSnapshot;
class UFirebaseVariant;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseDataSnapshot : public UObject {
    GENERATED_BODY()
public:
    UFirebaseDataSnapshot();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseVariant* Value();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseVariant* Priority();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Key();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isValid();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasChildren();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasChild(const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Exists();
    
    UFUNCTION(BlueprintPure)
    int64 ChildrenCount();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UFirebaseDataSnapshot*> Children();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFirebaseDataSnapshot* Child(const FString& Path);
    
};

