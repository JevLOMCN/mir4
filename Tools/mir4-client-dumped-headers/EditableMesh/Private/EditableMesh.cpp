#include "EditableMesh.h"

UEditableMesh::UEditableMesh() {
    this->TextureCoordinateCount = 0;
    this->PendingCompactCounter = 0;
    this->SubdivisionCount = 0;
}

void UEditableMesh::WeldVertices(const TArray<FVertexID>& VertexIDs, FVertexID& OutNewVertexID) {
}

void UEditableMesh::TryToRemoveVertex(const FVertexID VertexID, bool& bOutWasVertexRemoved, FEdgeID& OutNewEdgeID) {
}

void UEditableMesh::TryToRemovePolygonEdge(const FEdgeID EdgeID, bool& bOutWasEdgeRemoved, FPolygonID& OutNewPolygonID) {
}

void UEditableMesh::TriangulatePolygons(const TArray<FPolygonID>& PolygonIDs, TArray<FPolygonID>& OutNewTrianglePolygons) {
}

void UEditableMesh::TessellatePolygons(const TArray<FPolygonID>& PolygonIDs, const ETriangleTessellationMode TriangleTessellationMode, TArray<FPolygonID>& OutNewPolygonIDs) {
}

void UEditableMesh::StartModification(const EMeshModificationType MeshModificationType, const EMeshTopologyChange MeshTopologyChange) {
}

void UEditableMesh::SplitPolygons(const TArray<FPolygonToSplit>& PolygonsToSplit, TArray<FEdgeID>& OutNewEdgeIDs) {
}

void UEditableMesh::SplitPolygonalMesh(const FPlane& InPlane, TArray<FPolygonID>& PolygonIDs1, TArray<FPolygonID>& PolygonIDs2, TArray<FEdgeID>& BoundaryIDs) {
}

void UEditableMesh::SplitEdge(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FVertexID>& OutNewVertexIDs) {
}

void UEditableMesh::SetVerticesCornerSharpness(const TArray<FVertexID>& VertexIDs, const TArray<float>& VerticesNewCornerSharpness) {
}

void UEditableMesh::SetVerticesAttributes(const TArray<FAttributesForVertex>& AttributesForVertices) {
}

void UEditableMesh::SetVertexInstancesAttributes(const TArray<FAttributesForVertexInstance>& AttributesForVertexInstances) {
}

void UEditableMesh::SetTextureCoordinateCount(const int32 NumTexCoords) {
}

void UEditableMesh::SetSubdivisionCount(const int32 NewSubdivisionCount) {
}

void UEditableMesh::SetPolygonsVertexAttributes(const TArray<FVertexAttributesForPolygon>& VertexAttributesForPolygons) {
}

void UEditableMesh::SetEdgesHardnessAutomatically(const TArray<FEdgeID>& EdgeIDs, const float MaxDotProductForSoftEdge) {
}

void UEditableMesh::SetEdgesHardness(const TArray<FEdgeID>& EdgeIDs, const TArray<bool>& EdgesNewIsHard) {
}

void UEditableMesh::SetEdgesCreaseSharpness(const TArray<FEdgeID>& EdgeIDs, const TArray<float>& EdgesNewCreaseSharpness) {
}

void UEditableMesh::SetEdgesAttributes(const TArray<FAttributesForEdge>& AttributesForEdges) {
}

void UEditableMesh::SetAllowUndo(const bool bInAllowUndo) {
}

void UEditableMesh::SetAllowSpatialDatabase(const bool bInAllowSpatialDatabase) {
}

void UEditableMesh::SetAllowCompact(const bool bInAllowCompact) {
}

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingPlane(const FPlane& InPlane, TArray<FPolygonID>& OutPolygons) const {
}

void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const FVector LineSegmentStart, const FVector LineSegmentEnd, TArray<FPolygonID>& OutPolygons) const {
}

void UEditableMesh::SearchSpatialDatabaseForPolygonsInVolume(const TArray<FPlane>& planes, TArray<FPolygonID>& OutPolygons) const {
}

UEditableMesh* UEditableMesh::RevertInstance() {
    return NULL;
}

void UEditableMesh::Revert() {
}

void UEditableMesh::RebuildRenderMesh() {
}

void UEditableMesh::QuadrangulateMesh(TArray<FPolygonID>& OutNewPolygonIDs) {
}

void UEditableMesh::PropagateInstanceChanges() {
}

void UEditableMesh::MoveVertices(const TArray<FVertexToMove>& VerticesToMove) {
}

FVertexID UEditableMesh::MakeVertexID(const int32 VertexIndex) {
    return FVertexID{};
}

FPolygonID UEditableMesh::MakePolygonID(const int32 PolygonIndex) {
    return FPolygonID{};
}

FPolygonGroupID UEditableMesh::MakePolygonGroupID(const int32 PolygonGroupIndex) {
    return FPolygonGroupID{};
}

FEdgeID UEditableMesh::MakeEdgeID(const int32 EdgeIndex) {
    return FEdgeID{};
}

bool UEditableMesh::IsValidVertex(const FVertexID VertexID) const {
    return false;
}

bool UEditableMesh::IsValidPolygonGroup(const FPolygonGroupID PolygonGroupID) const {
    return false;
}

bool UEditableMesh::IsValidPolygon(const FPolygonID PolygonID) const {
    return false;
}

bool UEditableMesh::IsValidEdge(const FEdgeID EdgeID) const {
    return false;
}

bool UEditableMesh::IsUndoAllowed() const {
    return false;
}

bool UEditableMesh::IsSpatialDatabaseAllowed() const {
    return false;
}

bool UEditableMesh::IsPreviewingSubdivisions() const {
    return false;
}

bool UEditableMesh::IsOrphanedVertex(const FVertexID VertexID) const {
    return false;
}

bool UEditableMesh::IsCompactAllowed() const {
    return false;
}

bool UEditableMesh::IsCommittedAsInstance() const {
    return false;
}

bool UEditableMesh::IsCommitted() const {
    return false;
}

bool UEditableMesh::IsBeingModified() const {
    return false;
}

FVertexID UEditableMesh::InvalidVertexID() {
    return FVertexID{};
}

FPolygonID UEditableMesh::InvalidPolygonID() {
    return FPolygonID{};
}

FPolygonGroupID UEditableMesh::InvalidPolygonGroupID() {
    return FPolygonGroupID{};
}

FEdgeID UEditableMesh::InvalidEdgeID() {
    return FEdgeID{};
}

void UEditableMesh::InsetPolygons(const TArray<FPolygonID>& PolygonIDs, const float InsetFixedDistance, const float InsetProgressTowardCenter, const EInsetPolygonsMode Mode, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs) {
}

void UEditableMesh::InsertEdgeLoop(const FEdgeID EdgeID, const TArray<float>& Splits, TArray<FEdgeID>& OutNewEdgeIDs) {
}

void UEditableMesh::InitializeAdapters() {
}

FEdgeID UEditableMesh::GetVertexPairEdge(const FVertexID VertexID, const FVertexID NextVertexID, bool& bOutEdgeWindingIsReversed) const {
    return FEdgeID{};
}

FVertexID UEditableMesh::GetVertexInstanceVertex(const FVertexInstanceID VertexInstanceID) const {
    return FVertexID{};
}

int32 UEditableMesh::GetVertexInstanceCount() const {
    return 0;
}

void UEditableMesh::GetVertexInstanceConnectedPolygons(const FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs) const {
}

int32 UEditableMesh::GetVertexInstanceConnectedPolygonCount(const FVertexInstanceID VertexInstanceID) const {
    return 0;
}

FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(const FVertexInstanceID VertexInstanceID, const int32 ConnectedPolygonNumber) const {
    return FPolygonID{};
}

int32 UEditableMesh::GetVertexCount() const {
    return 0;
}

void UEditableMesh::GetVertexConnectedPolygons(const FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs) const {
}

void UEditableMesh::GetVertexConnectedEdges(const FVertexID VertexID, TArray<FEdgeID>& OutConnectedEdgeIDs) const {
}

int32 UEditableMesh::GetVertexConnectedEdgeCount(const FVertexID VertexID) const {
    return 0;
}

FEdgeID UEditableMesh::GetVertexConnectedEdge(const FVertexID VertexID, const int32 ConnectedEdgeNumber) const {
    return FEdgeID{};
}

void UEditableMesh::GetVertexAdjacentVertices(const FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs) const {
}

int32 UEditableMesh::GetTextureCoordinateCount() const {
    return 0;
}

FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData() const {
    return FSubdivisionLimitData{};
}

int32 UEditableMesh::GetSubdivisionCount() const {
    return 0;
}

int32 UEditableMesh::GetPolygonTriangulatedTriangleCount(const FPolygonID PolygonID) const {
    return 0;
}

FTriangleID UEditableMesh::GetPolygonTriangulatedTriangle(const FPolygonID PolygonID, int32 PolygonTriangleNumber) const {
    return FTriangleID{};
}

void UEditableMesh::GetPolygonPerimeterVertices(const FPolygonID PolygonID, TArray<FVertexID>& OutPolygonPerimeterVertexIDs) const {
}

void UEditableMesh::GetPolygonPerimeterVertexInstances(const FPolygonID PolygonID, TArray<FVertexInstanceID>& OutPolygonPerimeterVertexInstanceIDs) const {
}

FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(const FPolygonID PolygonID, const int32 PolygonVertexNumber) const {
    return FVertexInstanceID{};
}

int32 UEditableMesh::GetPolygonPerimeterVertexCount(const FPolygonID PolygonID) const {
    return 0;
}

FVertexID UEditableMesh::GetPolygonPerimeterVertex(const FPolygonID PolygonID, const int32 PolygonVertexNumber) const {
    return FVertexID{};
}

void UEditableMesh::GetPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutPolygonPerimeterEdgeIDs) const {
}

int32 UEditableMesh::GetPolygonPerimeterEdgeCount(const FPolygonID PolygonID) const {
    return 0;
}

FEdgeID UEditableMesh::GetPolygonPerimeterEdge(const FPolygonID PolygonID, const int32 PerimeterEdgeNumber, bool& bOutEdgeWindingIsReversedForPolygon) const {
    return FEdgeID{};
}

FPolygonID UEditableMesh::GetPolygonInGroup(const FPolygonGroupID PolygonGroupID, const int32 PolygonNumber) const {
    return FPolygonID{};
}

int32 UEditableMesh::GetPolygonGroupCount() const {
    return 0;
}

int32 UEditableMesh::GetPolygonCountInGroup(const FPolygonGroupID PolygonGroupID) const {
    return 0;
}

int32 UEditableMesh::GetPolygonCount() const {
    return 0;
}

void UEditableMesh::GetPolygonAdjacentPolygons(const FPolygonID PolygonID, TArray<FPolygonID>& OutAdjacentPolygons) const {
}

FPolygonGroupID UEditableMesh::GetGroupForPolygon(const FPolygonID PolygonID) const {
    return FPolygonGroupID{};
}

FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup() const {
    return FPolygonGroupID{};
}

void UEditableMesh::GetEdgeVertices(const FEdgeID EdgeID, FVertexID& OutEdgeVertexID0, FVertexID& OutEdgeVertexID1) const {
}

FVertexID UEditableMesh::GetEdgeVertex(const FEdgeID EdgeID, const int32 EdgeVertexNumber) const {
    return FVertexID{};
}

FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(const FVertexID VertexID0, const FVertexID VertexID1) const {
    return FEdgeID{};
}

void UEditableMesh::GetEdgeLoopElements(const FEdgeID EdgeID, TArray<FEdgeID>& EdgeLoopIDs) const {
}

int32 UEditableMesh::GetEdgeCount() const {
    return 0;
}

void UEditableMesh::GetEdgeConnectedPolygons(const FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs) const {
}

int32 UEditableMesh::GetEdgeConnectedPolygonCount(const FEdgeID EdgeID) const {
    return 0;
}

FPolygonID UEditableMesh::GetEdgeConnectedPolygon(const FEdgeID EdgeID, const int32 ConnectedPolygonNumber) const {
    return FPolygonID{};
}

void UEditableMesh::GeneratePolygonTangentsAndNormals(const TArray<FPolygonID>& PolygonIDs) {
}

void UEditableMesh::FlipPolygons(const TArray<FPolygonID>& PolygonIDs) {
}

int32 UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(const FPolygonID PolygonID, const FVertexID VertexID) const {
    return 0;
}

int32 UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const FPolygonID PolygonID, const FVertexID EdgeVertexID0, const FVertexID EdgeVertexID1) const {
    return 0;
}

void UEditableMesh::FindPolygonLoop(const FEdgeID EdgeID, TArray<FEdgeID>& OutEdgeLoopEdgeIDs, TArray<FEdgeID>& OutFlippedEdgeIDs, TArray<FEdgeID>& OutReversedEdgeIDPathToTake, TArray<FPolygonID>& OutPolygonIDsToSplit) const {
}

void UEditableMesh::ExtrudePolygons(const TArray<FPolygonID>& Polygons, const float ExtrudeDistance, const bool bKeepNeighborsTogether, TArray<FPolygonID>& OutNewExtrudedFrontPolygons) {
}

void UEditableMesh::ExtendVertices(const TArray<FVertexID>& VertexIDs, const bool bOnlyExtendClosestEdge, const FVector ReferencePosition, TArray<FVertexID>& OutNewExtendedVertexIDs) {
}

void UEditableMesh::ExtendEdges(const TArray<FEdgeID>& EdgeIDs, const bool bWeldNeighbors, TArray<FEdgeID>& OutNewExtendedEdgeIDs) {
}

void UEditableMesh::EndModification(const bool bFromUndo) {
}

void UEditableMesh::DeleteVertexInstances(const TArray<FVertexInstanceID>& VertexInstanceIDsToDelete, const bool bDeleteOrphanedVertices) {
}

void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const FVertexID VertexID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups) {
}

void UEditableMesh::DeletePolygons(const TArray<FPolygonID>& PolygonIDsToDelete, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups) {
}

void UEditableMesh::DeletePolygonGroups(const TArray<FPolygonGroupID>& PolygonGroupIDs) {
}

void UEditableMesh::DeleteOrphanVertices(const TArray<FVertexID>& VertexIDsToDelete) {
}

void UEditableMesh::DeleteEdges(const TArray<FEdgeID>& EdgeIDsToDelete, const bool bDeleteOrphanedVertices) {
}

void UEditableMesh::DeleteEdgeAndConnectedPolygons(const FEdgeID EdgeID, const bool bDeleteOrphanedEdges, const bool bDeleteOrphanedVertices, const bool bDeleteOrphanedVertexInstances, const bool bDeleteEmptyPolygonGroups) {
}

void UEditableMesh::CreateVertices(const TArray<FVertexToCreate>& VerticesToCreate, TArray<FVertexID>& OutNewVertexIDs) {
}

void UEditableMesh::CreateVertexInstances(const TArray<FVertexInstanceToCreate>& VertexInstancesToCreate, TArray<FVertexInstanceID>& OutNewVertexInstanceIDs) {
}

void UEditableMesh::CreatePolygons(const TArray<FPolygonToCreate>& PolygonsToCreate, TArray<FPolygonID>& OutNewPolygonIDs, TArray<FEdgeID>& OutNewEdgeIDs) {
}

void UEditableMesh::CreatePolygonGroups(const TArray<FPolygonGroupToCreate>& PolygonGroupsToCreate, TArray<FPolygonGroupID>& OutNewPolygonGroupIDs) {
}

void UEditableMesh::CreateMissingPolygonPerimeterEdges(const FPolygonID PolygonID, TArray<FEdgeID>& OutNewEdgeIDs) {
}

void UEditableMesh::CreateEmptyVertexRange(const int32 NumVerticesToCreate, TArray<FVertexID>& OutNewVertexIDs) {
}

void UEditableMesh::CreateEdges(const TArray<FEdgeToCreate>& EdgesToCreate, TArray<FEdgeID>& OutNewEdgeIDs) {
}

void UEditableMesh::ComputePolygonsSharedEdges(const TArray<FPolygonID>& PolygonIDs, TArray<FEdgeID>& OutSharedEdgeIDs) const {
}

FPlane UEditableMesh::ComputePolygonPlane(const FPolygonID PolygonID) const {
    return FPlane{};
}

FVector UEditableMesh::ComputePolygonNormal(const FPolygonID PolygonID) const {
    return FVector{};
}

FVector UEditableMesh::ComputePolygonCenter(const FPolygonID PolygonID) const {
    return FVector{};
}

FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere() const {
    return FBoxSphereBounds{};
}

FBox UEditableMesh::ComputeBoundingBox() const {
    return FBox{};
}

UEditableMesh* UEditableMesh::CommitInstance(UPrimitiveComponent* ComponentToInstanceTo) {
    return NULL;
}

void UEditableMesh::Commit() {
}

void UEditableMesh::ChangePolygonsVertexInstances(const TArray<FChangeVertexInstancesForPolygon>& VertexInstancesForPolygons) {
}

void UEditableMesh::BevelPolygons(const TArray<FPolygonID>& PolygonIDs, const float BevelFixedDistance, const float BevelProgressTowardCenter, TArray<FPolygonID>& OutNewCenterPolygonIDs, TArray<FPolygonID>& OutNewSidePolygonIDs) {
}

void UEditableMesh::AssignPolygonsToPolygonGroups(const TArray<FPolygonGroupForPolygon>& PolygonGroupForPolygons, const bool bDeleteOrphanedPolygonGroups) {
}

bool UEditableMesh::AnyChangesToUndo() const {
    return false;
}


