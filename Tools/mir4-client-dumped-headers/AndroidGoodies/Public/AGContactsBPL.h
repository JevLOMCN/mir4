#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AGContact.h"
#include "AGContactsBPL.generated.h"

UCLASS(Blueprintable)
class ANDROIDGOODIES_API UAGContactsBPL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAGContactsBPL();

    UFUNCTION(BlueprintCallable)
    static FString GetUserPhoneNumber();
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAGContact> GetContactsWithNumber(const FString& Number);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAGContact> GetContactsWithName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FAGContact> GetAllContacts();
    
    UFUNCTION(BlueprintCallable)
    static bool AddContact(FAGContact contact);
    
};

