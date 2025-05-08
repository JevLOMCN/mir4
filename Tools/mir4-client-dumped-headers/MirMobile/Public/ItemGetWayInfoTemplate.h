#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EItemGetWayLinkType.h"
#include "EItemGetWayType.h"
#include "ItemGetWayInfoTemplate.generated.h"

USTRUCT(BlueprintType)
struct MIRMOBILE_API FItemGetWayInfoTemplate : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NpcID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LinkID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemGetWayType GetWayType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EItemGetWayLinkType LinkType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FItemGetWayInfoTemplate();
};

