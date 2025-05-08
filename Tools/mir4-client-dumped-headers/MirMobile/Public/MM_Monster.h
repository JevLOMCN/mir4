#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "MM_NonePlayer.h"
#include "PoolingInterface.h"
#include "MM_Monster.generated.h"

class AActor;
class AMonsterGroupTrigger;
class UMM_B_MonNameTag;
class UMonsterEntityComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AMM_Monster : public AMM_NonePlayer, public IPoolingInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MonDebugFSMLogCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_MonDebugFSMLogList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_MonDebugLog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDrawPushPullLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> m_PushPullLocationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPoolingObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMM_B_MonNameTag* m_pMonNameTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMonsterGroupTrigger* m_pMonsterGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDeleteTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bHideNameTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMonsterEntityComponent* m_pMonsterEntityComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 SPState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SPUpdateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SPStateLimitTime;
    
public:
    AMM_Monster(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TestFunction2();
    
    UFUNCTION(BlueprintCallable)
    void TestFunction1();
    
    UFUNCTION(BlueprintCallable)
    void StartAirWalk(TArray<FVector> DestLocList);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnDamageBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* pOtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoMoveFinished();
    

    // Fix for true pure virtual functions not being implemented
};

