#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Plane -FallbackName=Plane
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=EdgeID -FallbackName=EdgeID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonGroupID -FallbackName=PolygonGroupID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=TriangleID -FallbackName=TriangleID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexID -FallbackName=VertexID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexInstanceID -FallbackName=VertexInstanceID
#include "AttributesForEdge.h"
#include "AttributesForVertex.h"
#include "AttributesForVertexInstance.h"
#include "ChangeVertexInstancesForPolygon.h"
#include "EInsetPolygonsMode.h"
#include "EMeshModificationType.h"
#include "EMeshTopologyChange.h"
#include "ETriangleTessellationMode.h"
#include "EdgeToCreate.h"
#include "PolygonGroupForPolygon.h"
#include "PolygonGroupToCreate.h"
#include "PolygonToCreate.h"
#include "PolygonToSplit.h"
#include "SubdivisionLimitData.h"
#include "VertexAttributesForPolygon.h"
#include "VertexInstanceToCreate.h"
#include "VertexToCreate.h"
#include "VertexToMove.h"
#include "EditableMesh.generated.h"

class UEditableMesh;
class UEditableMeshAdapter;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class EDITABLEMESH_API UEditableMesh : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UEditableMeshAdapter*> Adapters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureCoordinateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PendingCompactCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SubdivisionCount;
    
    UEditableMesh();

    UFUNCTION(BlueprintCallable)
    void WeldVertices(const TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID);
    
    UFUNCTION(BlueprintCallable)
    void TryToRemoveVertex(const FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID);
    
    UFUNCTION(BlueprintCallable)
    void TryToRemovePolygonEdge(const FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID);
    
    UFUNCTION(BlueprintCallable)
    void TriangulatePolygons(const TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons);
    
    UFUNCTION(BlueprintCallable)
    void TessellatePolygons(const TArray<FPolygonID>& PolygonIDs, const ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void StartModification(const EMeshModificationType MeshModificationType, const EMeshTopologyChange MeshTopologyChange);
    
    UFUNCTION(BlueprintCallable)
    void SplitPolygons(const TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void SplitPolygonalMesh(const FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs);
    
    UFUNCTION(BlueprintCallable)
    void SplitEdge(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticesCornerSharpness(const TArray<FVertexID>& VertexIDs, const TArray<float>& VerticesNewCornerSharpness);
    
    UFUNCTION(BlueprintCallable)
    void SetVerticesAttributes(const TArray<FAttributesForVertex>& AttributesForVertices);
    
    UFUNCTION(BlueprintCallable)
    void SetVertexInstancesAttributes(const TArray<FAttributesForVertexInstance>& AttributesForVertexInstances);
    
    UFUNCTION(BlueprintCallable)
    void SetTextureCoordinateCount(const int32 NumTexCoords);
    
    UFUNCTION(BlueprintCallable)
    void SetSubdivisionCount(const int32 NewSubdivisionCount);
    
    UFUNCTION(BlueprintCallable)
    void SetPolygonsVertexAttributes(const TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgesHardnessAutomatically(const TArray<FEdgeID>& EdgeIDs, const float MaxDotProductForSoftEdge);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgesHardness(const TArray<FEdgeID>& EdgeIDs, const TArray<bool>& EdgesNewIsHard);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgesCreaseSharpness(const TArray<FEdgeID>& EdgeIDs, const TArray<float>& EdgesNewCreaseSharpness);
    
    UFUNCTION(BlueprintCallable)
    void SetEdgesAttributes(const TArray<FAttributesForEdge>& AttributesForEdges);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowUndo(const bool bInAllowUndo);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowSpatialDatabase(const bool bInAllowSpatialDatabase);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowCompact(const bool bInAllowCompact);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const FPlane& InPlane, TArray<FPolygonID>& OutPolygons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const FVector LineSegmentStart, const FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void SearchSpatialDatabaseForPolygonsInVolume(const TArray<FPlane>& planes, TArray<FPolygonID>& OutPolygons) const;
    
    UFUNCTION(BlueprintCallable)
    UEditableMesh* RevertInstance();
    
    UFUNCTION(BlueprintCallable)
    void Revert();
    
    UFUNCTION(BlueprintCallable)
    void RebuildRenderMesh();
    
    UFUNCTION(BlueprintCallable)
    void QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void PropagateInstanceChanges();
    
    UFUNCTION(BlueprintCallable)
    void MoveVertices(const TArray<FVertexToMove>& VerticesToMove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVertexID MakeVertexID(const int32 VertexIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPolygonID MakePolygonID(const int32 PolygonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPolygonGroupID MakePolygonGroupID(const int32 PolygonGroupIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEdgeID MakeEdgeID(const int32 EdgeIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidVertex(const FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPolygonGroup(const FPolygonGroupID PolygonGroupID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPolygon(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidEdge(const FEdgeID EdgeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUndoAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpatialDatabaseAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreviewingSubdivisions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOrphanedVertex(const FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompactAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCommittedAsInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCommitted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBeingModified() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVertexID InvalidVertexID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPolygonID InvalidPolygonID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPolygonGroupID InvalidPolygonGroupID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FEdgeID InvalidEdgeID();
    
    UFUNCTION(BlueprintCallable)
    void InsetPolygons(const TArray<FPolygonID>& PolygonIDs, const float InsetFixedDistance, const float InsetProgressTowardCenter, const EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void InsertEdgeLoop(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void InitializeAdapters();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEdgeID GetVertexPairEdge(const FVertexID VertexID, const FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVertexID GetVertexInstanceVertex(const FVertexInstanceID VertexInstanceID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVertexInstanceCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexInstanceConnectedPolygons(const FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVertexInstanceConnectedPolygonCount(const FVertexInstanceID VertexInstanceID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPolygonID GetVertexInstanceConnectedPolygon(const FVertexInstanceID VertexInstanceID, const int32 ConnectedPolygonNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVertexCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexConnectedPolygons(const FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexConnectedEdges(const FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVertexConnectedEdgeCount(const FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEdgeID GetVertexConnectedEdge(const FVertexID VertexID, const int32 ConnectedEdgeNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVertexAdjacentVertices(const FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTextureCoordinateCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSubdivisionLimitData GetSubdivisionLimitData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSubdivisionCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPolygonTriangulatedTriangleCount(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTriangleID GetPolygonTriangulatedTriangle(const FPolygonID PolygonID, int32 PolygonTriangleNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonPerimeterVertices(const FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonPerimeterVertexInstances(const FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVertexInstanceID GetPolygonPerimeterVertexInstance(const FPolygonID PolygonID, const int32 PolygonVertexNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPolygonPerimeterVertexCount(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVertexID GetPolygonPerimeterVertex(const FPolygonID PolygonID, const int32 PolygonVertexNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPolygonPerimeterEdgeCount(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEdgeID GetPolygonPerimeterEdge(const FPolygonID PolygonID, const int32 PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPolygonID GetPolygonInGroup(const FPolygonGroupID PolygonGroupID, const int32 PolygonNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPolygonGroupCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPolygonCountInGroup(const FPolygonGroupID PolygonGroupID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPolygonCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPolygonAdjacentPolygons(const FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPolygonGroupID GetGroupForPolygon(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPolygonGroupID GetFirstValidPolygonGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEdgeVertices(const FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVertexID GetEdgeVertex(const FEdgeID EdgeID, const int32 EdgeVertexNumber) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEdgeID GetEdgeThatConnectsVertices(const FVertexID VertexID0, const FVertexID VertexID1) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEdgeLoopElements(const FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEdgeCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEdgeConnectedPolygons(const FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEdgeConnectedPolygonCount(const FEdgeID EdgeID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPolygonID GetEdgeConnectedPolygon(const FEdgeID EdgeID, const int32 ConnectedPolygonNumber) const;
    
    UFUNCTION(BlueprintCallable)
    void GeneratePolygonTangentsAndNormals(const TArray<FPolygonID>& PolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void FlipPolygons(const TArray<FPolygonID>& PolygonIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindPolygonPerimeterVertexNumberForVertex(const FPolygonID PolygonID, const FVertexID VertexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindPolygonPerimeterEdgeNumberForVertices(const FPolygonID PolygonID, const FVertexID EdgeVertexID0, const FVertexID EdgeVertexID1) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void FindPolygonLoop(const FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit) const;
    
    UFUNCTION(BlueprintCallable)
    void ExtrudePolygons(const TArray<FPolygonID>& Polygons, const float ExtrudeDistance, const bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons);
    
    UFUNCTION(BlueprintCallable)
    void ExtendVertices(const TArray<FVertexID>& VertexIDs, const bool bOnlyExtendClosestEdge, const FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs);
    
    UFUNCTION(BlueprintCallable)
    void ExtendEdges(const TArray<FEdgeID>& EdgeIDs, const bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void EndModification(const bool bFromUndo);
    
    UFUNCTION(BlueprintCallable)
    void DeleteVertexInstances(const TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, const bool bDeleteOrphanedVertices);
    
    UFUNCTION(BlueprintCallable)
    void DeleteVertexAndConnectedEdgesAndPolygons(const FVertexID VertexID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    
    UFUNCTION(BlueprintCallable)
    void DeletePolygons(const TArray<FPolygonID>& PolygonIDsToDelete, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    
    UFUNCTION(BlueprintCallable)
    void DeletePolygonGroups(const TArray<FPolygonGroupID>& PolygonGroupIDs);
    
    UFUNCTION(BlueprintCallable)
    void DeleteOrphanVertices(const TArray<FVertexID>& VertexIDsToDelete);
    
    UFUNCTION(BlueprintCallable)
    void DeleteEdges(const TArray<FEdgeID>& EdgeIDsToDelete, const bool bDeleteOrphanedVertices);
    
    UFUNCTION(BlueprintCallable)
    void DeleteEdgeAndConnectedPolygons(const FEdgeID EdgeID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups);
    
    UFUNCTION(BlueprintCallable)
    void CreateVertices(const TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreateVertexInstances(const TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreatePolygons(const TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreatePolygonGroups(const TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreateMissingPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreateEmptyVertexRange(const int32 NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs);
    
    UFUNCTION(BlueprintCallable)
    void CreateEdges(const TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ComputePolygonsSharedEdges(const TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlane ComputePolygonPlane(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ComputePolygonNormal(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ComputePolygonCenter(const FPolygonID PolygonID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBoxSphereBounds ComputeBoundingBoxAndSphere() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FBox ComputeBoundingBox() const;
    
    UFUNCTION(BlueprintCallable)
    UEditableMesh* CommitInstance(UPrimitiveComponent* ComponentToInstanceTo);
    
    UFUNCTION(BlueprintCallable)
    void Commit();
    
    UFUNCTION(BlueprintCallable)
    void ChangePolygonsVertexInstances(const TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons);
    
    UFUNCTION(BlueprintCallable)
    void BevelPolygons(const TArray<FPolygonID>& PolygonIDs, const float BevelFixedDistance, const float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs);
    
    UFUNCTION(BlueprintCallable)
    void AssignPolygonsToPolygonGroups(const TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, const bool bDeleteOrphanedPolygonGroups);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AnyChangesToUndo() const;
    
};

