#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "PIELoginSettingsInternal.h"
#include "OnlinePIESettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class UOnlinePIESettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlinePIEEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPIELoginSettingsInternal> Logins;
    
    UOnlinePIESettings();

};

