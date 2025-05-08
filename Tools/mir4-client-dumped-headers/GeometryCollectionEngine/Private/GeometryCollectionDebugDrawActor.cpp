#include "GeometryCollectionDebugDrawActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

AGeometryCollectionDebugDrawActor::AGeometryCollectionDebugDrawActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->bDebugDrawWholeCollection = false;
    this->bDebugDrawHierarchy = false;
    this->bDebugDrawClustering = false;
    this->HideGeometry = EGeometryCollectionDebugDrawActorHideGeometry::HideWithCollision;
    this->bShowRigidBodyId = false;
    this->bShowRigidBodyCollision = false;
    this->bCollisionAtOrigin = false;
    this->bShowRigidBodyTransform = false;
    this->bShowRigidBodyInertia = false;
    this->bShowRigidBodyVelocity = false;
    this->bShowRigidBodyForce = false;
    this->bShowRigidBodyInfos = false;
    this->bShowTransformIndex = false;
    this->bShowTransform = false;
    this->bShowParent = false;
    this->bShowLevel = false;
    this->bShowConnectivityEdges = false;
    this->bShowGeometryIndex = false;
    this->bShowGeometryTransform = false;
    this->bShowBoundingBox = false;
    this->bShowFaces = false;
    this->bShowFaceIndices = false;
    this->bShowFaceNormals = false;
    this->bShowSingleFace = false;
    this->SingleFaceIndex = 0;
    this->bShowVertices = false;
    this->bShowVertexIndices = false;
    this->bShowVertexNormals = false;
    this->bUseActiveVisualization = true;
    this->PointThickness = 6.00f;
    this->LineThickness = 1.00f;
    this->bTextShadow = true;
    this->TextScale = 1.00f;
    this->NormalScale = 10.00f;
    this->AxisScale = 20.00f;
    this->ArrowScale = 2.50f;
    this->RigidBodyTransformScale = 1.00f;
    this->TransformScale = 1.00f;
    this->ConnectivityEdgeThickness = 1.00f;
    this->GeometryTransformScale = 1.00f;
    this->SpriteComponent = NULL;
}


