#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EdgeID.h"
#include "PolygonGroupID.h"
#include "PolygonID.h"
#include "TriangleID.h"
#include "VertexID.h"
#include "VertexInstanceID.h"
#include "MeshDescriptionBase.generated.h"

UCLASS(Blueprintable)
class MESHDESCRIPTION_API UMeshDescriptionBase : public UObject {
    GENERATED_BODY()
public:
    UMeshDescriptionBase();

    UFUNCTION(BlueprintCallable)
    void SetVertexPosition(FVertexID VertexID, const FVector& Position);
    
    UFUNCTION(BlueprintCallable)
    void SetPolygonVertexInstance(FPolygonID PolygonID, int32 PerimeterIndex, FVertexInstanceID VertexInstanceID);
    
    UFUNCTION(BlueprintCallable)
    void SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID);
    
    UFUNCTION(BlueprintCallable)
    void ReversePolygonFacing(FPolygonID PolygonID);
    
    UFUNCTION(BlueprintCallable)
    void ReserveNewVertices(int32 NumberOfNewVertices);
    
    UFUNCTION(BlueprintCallable)
    void ReserveNewVertexInstances(int32 NumberOfNewVertexInstances);
    
    UFUNCTION(BlueprintCallable)
    void ReserveNewTriangles(int32 NumberOfNewTriangles);
    
    UFUNCTION(BlueprintCallable)
    void ReserveNewPolygons(const int32 NumberOfNewPolygons);
    
    UFUNCTION(BlueprintCallable)
    void ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups);
    
    UFUNCTION(BlueprintCallable)
    void ReserveNewEdges(int32 NumberOfNewEdges);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVertexValid(FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVertexOrphaned(FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVertexInstanceValid(FVertexInstanceID VertexInstanceID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTriangleValid(const FTriangleID TriangleID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTrianglePartOfNgon(FTriangleID TriangleID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPolygonValid(FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPolygonGroupValid(FPolygonGroupID PolygonGroupID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEdgeValid(FEdgeID EdgeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEdgeInternal(FEdgeID EdgeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetVertexPosition(FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEdgeID GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVertexID GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEdgeID GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVertexInstanceID GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVertexInstanceID GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVertexInstanceID GetTriangleVertexInstance(FTriangleID TriangleID, int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPolygonGroupID GetTrianglePolygonGroup(FTriangleID TriangleID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPolygonID GetTrianglePolygon(FTriangleID TriangleID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPolygonGroupID GetPolygonPolygonGroup(FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVertexVertexInstances(FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVertexConnectedTriangles(FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVertexConnectedPolygons(FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumVertexConnectedEdges(FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPolygonVertices(FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPolygonTriangles(FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPolygonInternalEdges(FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumEdgeConnectedTriangles(FEdgeID EdgeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumEdgeConnectedPolygons(FEdgeID EdgeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEdgeVertices(const FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVertexID GetEdgeVertex(FEdgeID EdgeID, int32 VertexNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
    UFUNCTION(BlueprintCallable)
    void DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices);
    
    UFUNCTION(BlueprintCallable)
    void DeleteVertex(FVertexID VertexID);
    
    UFUNCTION(BlueprintCallable)
    void DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr);
    
    UFUNCTION(BlueprintCallable)
    void DeletePolygonGroup(FPolygonGroupID PolygonGroupID);
    
    UFUNCTION(BlueprintCallable)
    void DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups);
    
    UFUNCTION(BlueprintCallable)
    void DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices);
    
    UFUNCTION(BlueprintCallable)
    void CreateVertexWithID(FVertexID VertexID);
    
    UFUNCTION(BlueprintCallable)
    void CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID);
    
    UFUNCTION(BlueprintCallable)
    FVertexInstanceID CreateVertexInstance(FVertexID VertexID);
    
    UFUNCTION(BlueprintCallable)
    FVertexID CreateVertex();
    
    UFUNCTION(BlueprintCallable)
    void CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, const TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    FTriangleID CreateTriangle(FPolygonGroupID PolygonGroupID, const TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID);
    
    UFUNCTION(BlueprintCallable)
    FPolygonGroupID CreatePolygonGroup();
    
    UFUNCTION(BlueprintCallable)
    FPolygonID CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1);
    
    UFUNCTION(BlueprintCallable)
    FEdgeID CreateEdge(FVertexID VertexID0, FVertexID VertexID1);
    
    UFUNCTION(BlueprintCallable)
    void ComputePolygonTriangulation(FPolygonID PolygonID);
    
};

