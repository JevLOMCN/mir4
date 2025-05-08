#include "MeshDescriptionBase.h"

UMeshDescriptionBase::UMeshDescriptionBase() {
}

void UMeshDescriptionBase::SetVertexPosition(FVertexID VertexID, const FVector& Position) {
}

void UMeshDescriptionBase::SetPolygonVertexInstance(FPolygonID PolygonID, int32 PerimeterIndex, FVertexInstanceID VertexInstanceID) {
}

void UMeshDescriptionBase::SetPolygonPolygonGroup(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID) {
}

void UMeshDescriptionBase::ReversePolygonFacing(FPolygonID PolygonID) {
}

void UMeshDescriptionBase::ReserveNewVertices(int32 NumberOfNewVertices) {
}

void UMeshDescriptionBase::ReserveNewVertexInstances(int32 NumberOfNewVertexInstances) {
}

void UMeshDescriptionBase::ReserveNewTriangles(int32 NumberOfNewTriangles) {
}

void UMeshDescriptionBase::ReserveNewPolygons(const int32 NumberOfNewPolygons) {
}

void UMeshDescriptionBase::ReserveNewPolygonGroups(int32 NumberOfNewPolygonGroups) {
}

void UMeshDescriptionBase::ReserveNewEdges(int32 NumberOfNewEdges) {
}

bool UMeshDescriptionBase::IsVertexValid(FVertexID VertexID) const {
    return false;
}

bool UMeshDescriptionBase::IsVertexOrphaned(FVertexID VertexID) const {
    return false;
}

bool UMeshDescriptionBase::IsVertexInstanceValid(FVertexInstanceID VertexInstanceID) const {
    return false;
}

bool UMeshDescriptionBase::IsTriangleValid(const FTriangleID TriangleID) const {
    return false;
}

bool UMeshDescriptionBase::IsTrianglePartOfNgon(FTriangleID TriangleID) const {
    return false;
}

bool UMeshDescriptionBase::IsPolygonValid(FPolygonID PolygonID) const {
    return false;
}

bool UMeshDescriptionBase::IsPolygonGroupValid(FPolygonGroupID PolygonGroupID) const {
    return false;
}

bool UMeshDescriptionBase::IsEmpty() const {
    return false;
}

bool UMeshDescriptionBase::IsEdgeValid(FEdgeID EdgeID) const {
    return false;
}

bool UMeshDescriptionBase::IsEdgeInternalToPolygon(FEdgeID EdgeID, FPolygonID PolygonID) const {
    return false;
}

bool UMeshDescriptionBase::IsEdgeInternal(FEdgeID EdgeID) const {
    return false;
}

void UMeshDescriptionBase::GetVertexVertexInstances(FVertexID VertexID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) const {
}

FVector UMeshDescriptionBase::GetVertexPosition(FVertexID VertexID) const {
    return FVector{};
}

FEdgeID UMeshDescriptionBase::GetVertexPairEdge(FVertexID VertexID0, FVertexID VertexID1) const {
    return FEdgeID{};
}

FVertexID UMeshDescriptionBase::GetVertexInstanceVertex(FVertexInstanceID VertexInstanceID) const {
    return FVertexID{};
}

FEdgeID UMeshDescriptionBase::GetVertexInstancePairEdge(FVertexInstanceID VertexInstanceID0, FVertexInstanceID VertexInstanceID1) const {
    return FEdgeID{};
}

FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForTriangleVertex(FTriangleID TriangleID, FVertexID VertexID) const {
    return FVertexInstanceID{};
}

FVertexInstanceID UMeshDescriptionBase::GetVertexInstanceForPolygonVertex(FPolygonID PolygonID, FVertexID VertexID) const {
    return FVertexInstanceID{};
}

void UMeshDescriptionBase::GetVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID, TArray<FTriangleID>& OutConnectedTriangleIDs) const {
}

void UMeshDescriptionBase::GetVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID, TArray<FPolygonID>& OutConnectedPolygonIDs) const {
}

void UMeshDescriptionBase::GetVertexConnectedTriangles(FVertexID VertexID, TArray<FTriangleID>& OutConnectedTriangleIDs) const {
}

void UMeshDescriptionBase::GetVertexConnectedPolygons(FVertexID VertexID, TArray<FPolygonID>& OutConnectedPolygonIDs) const {
}

void UMeshDescriptionBase::GetVertexConnectedEdges(FVertexID VertexID, TArray<FEdgeID>& OutEdgeIDs) const {
}

void UMeshDescriptionBase::GetVertexAdjacentVertices(FVertexID VertexID, TArray<FVertexID>& OutAdjacentVertexIDs) const {
}

void UMeshDescriptionBase::GetTriangleVertices(FTriangleID TriangleID, TArray<FVertexID>& OutVertexIDs) const {
}

void UMeshDescriptionBase::GetTriangleVertexInstances(FTriangleID TriangleID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) const {
}

FVertexInstanceID UMeshDescriptionBase::GetTriangleVertexInstance(FTriangleID TriangleID, int32 Index) const {
    return FVertexInstanceID{};
}

FPolygonGroupID UMeshDescriptionBase::GetTrianglePolygonGroup(FTriangleID TriangleID) const {
    return FPolygonGroupID{};
}

FPolygonID UMeshDescriptionBase::GetTrianglePolygon(FTriangleID TriangleID) const {
    return FPolygonID{};
}

void UMeshDescriptionBase::GetTriangleEdges(FTriangleID TriangleID, TArray<FEdgeID>& OutEdgeIDs) const {
}

void UMeshDescriptionBase::GetTriangleAdjacentTriangles(FTriangleID TriangleID, TArray<FTriangleID>& OutTriangleIDs) const {
}

void UMeshDescriptionBase::GetPolygonVertices(FPolygonID PolygonID, TArray<FVertexID>& OutVertexIDs) const {
}

void UMeshDescriptionBase::GetPolygonVertexInstances(FPolygonID PolygonID, TArray<FVertexInstanceID>& OutVertexInstanceIDs) const {
}

void UMeshDescriptionBase::GetPolygonTriangles(FPolygonID PolygonID, TArray<FTriangleID>& OutTriangleIDs) const {
}

FPolygonGroupID UMeshDescriptionBase::GetPolygonPolygonGroup(FPolygonID PolygonID) const {
    return FPolygonGroupID{};
}

void UMeshDescriptionBase::GetPolygonPerimeterEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs) const {
}

void UMeshDescriptionBase::GetPolygonInternalEdges(FPolygonID PolygonID, TArray<FEdgeID>& OutEdgeIDs) const {
}

void UMeshDescriptionBase::GetPolygonGroupPolygons(FPolygonGroupID PolygonGroupID, TArray<FPolygonID>& OutPolygonIDs) const {
}

void UMeshDescriptionBase::GetPolygonAdjacentPolygons(FPolygonID PolygonID, TArray<FPolygonID>& OutPolygonIDs) const {
}

int32 UMeshDescriptionBase::GetNumVertexVertexInstances(FVertexID VertexID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumVertexInstanceConnectedTriangles(FVertexInstanceID VertexInstanceID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumVertexInstanceConnectedPolygons(FVertexInstanceID VertexInstanceID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumVertexConnectedTriangles(FVertexID VertexID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumVertexConnectedPolygons(FVertexID VertexID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumVertexConnectedEdges(FVertexID VertexID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumPolygonVertices(FPolygonID PolygonID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumPolygonTriangles(FPolygonID PolygonID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumPolygonInternalEdges(FPolygonID PolygonID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumPolygonGroupPolygons(FPolygonGroupID PolygonGroupID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumEdgeConnectedTriangles(FEdgeID EdgeID) const {
    return 0;
}

int32 UMeshDescriptionBase::GetNumEdgeConnectedPolygons(FEdgeID EdgeID) const {
    return 0;
}

void UMeshDescriptionBase::GetEdgeVertices(const FEdgeID EdgeID, TArray<FVertexID>& OutVertexIDs) const {
}

FVertexID UMeshDescriptionBase::GetEdgeVertex(FEdgeID EdgeID, int32 VertexNumber) const {
    return FVertexID{};
}

void UMeshDescriptionBase::GetEdgeConnectedTriangles(FEdgeID EdgeID, TArray<FTriangleID>& OutConnectedTriangleIDs) const {
}

void UMeshDescriptionBase::GetEdgeConnectedPolygons(FEdgeID EdgeID, TArray<FPolygonID>& OutConnectedPolygonIDs) const {
}

void UMeshDescriptionBase::Empty() {
}

void UMeshDescriptionBase::DeleteVertexInstance(FVertexInstanceID VertexInstanceID, TArray<FVertexID>& OrphanedVertices) {
}

void UMeshDescriptionBase::DeleteVertex(FVertexID VertexID) {
}

void UMeshDescriptionBase::DeleteTriangle(FTriangleID TriangleID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroupsPtr) {
}

void UMeshDescriptionBase::DeletePolygonGroup(FPolygonGroupID PolygonGroupID) {
}

void UMeshDescriptionBase::DeletePolygon(FPolygonID PolygonID, TArray<FEdgeID>& OrphanedEdges, TArray<FVertexInstanceID>& OrphanedVertexInstances, TArray<FPolygonGroupID>& OrphanedPolygonGroups) {
}

void UMeshDescriptionBase::DeleteEdge(FEdgeID EdgeID, TArray<FVertexID>& OrphanedVertices) {
}

void UMeshDescriptionBase::CreateVertexWithID(FVertexID VertexID) {
}

void UMeshDescriptionBase::CreateVertexInstanceWithID(FVertexInstanceID VertexInstanceID, FVertexID VertexID) {
}

FVertexInstanceID UMeshDescriptionBase::CreateVertexInstance(FVertexID VertexID) {
    return FVertexInstanceID{};
}

FVertexID UMeshDescriptionBase::CreateVertex() {
    return FVertexID{};
}

void UMeshDescriptionBase::CreateTriangleWithID(FTriangleID TriangleID, FPolygonGroupID PolygonGroupID, const TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs) {
}

FTriangleID UMeshDescriptionBase::CreateTriangle(FPolygonGroupID PolygonGroupID, const TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs) {
    return FTriangleID{};
}

void UMeshDescriptionBase::CreatePolygonWithID(FPolygonID PolygonID, FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs) {
}

void UMeshDescriptionBase::CreatePolygonGroupWithID(FPolygonGroupID PolygonGroupID) {
}

FPolygonGroupID UMeshDescriptionBase::CreatePolygonGroup() {
    return FPolygonGroupID{};
}

FPolygonID UMeshDescriptionBase::CreatePolygon(FPolygonGroupID PolygonGroupID, TArray<FVertexInstanceID>& VertexInstanceIDs, TArray<FEdgeID>& NewEdgeIDs) {
    return FPolygonID{};
}

void UMeshDescriptionBase::CreateEdgeWithID(FEdgeID EdgeID, FVertexID VertexID0, FVertexID VertexID1) {
}

FEdgeID UMeshDescriptionBase::CreateEdge(FVertexID VertexID0, FVertexID VertexID1) {
    return FEdgeID{};
}

void UMeshDescriptionBase::ComputePolygonTriangulation(FPolygonID PolygonID) {
}


