#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VariantType.h"
#include "FirebaseVariant.generated.h"

class UFirebaseVariant;

UCLASS(Blueprintable)
class EASYFIREBASE_API UFirebaseVariant : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    VariantType DataType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Int64Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool BoolValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFirebaseVariant*> VectorValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UFirebaseVariant*> MapValue;
    
    UFirebaseVariant();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFirebaseVariant* CreateVariantVector(const TArray<UFirebaseVariant*>& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFirebaseVariant* CreateVariantString(const FString& Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFirebaseVariant* CreateVariantMap(const TMap<FString, UFirebaseVariant*>& Value);
    
    UFUNCTION(BlueprintPure)
    static UFirebaseVariant* CreateVariantInt64(int64 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFirebaseVariant* CreateVariantFloat(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFirebaseVariant* CreateVariantBool(bool Value);
    
};

