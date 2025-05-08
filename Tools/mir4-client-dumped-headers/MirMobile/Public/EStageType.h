#pragma once
#include "CoreMinimal.h"
#include "EStageType.generated.h"

UENUM(BlueprintType)
enum class EStageType : uint8 {
    None,
    Field,
    SingleField,
    Fight = 6,
    Custom = 10,
    EliteDungeon,
    Labyrinth,
    UnderWorld,
    Bido,
    StrongPoint = 20,
    Siege,
    Plunder = 31,
    WorldBoss = 51,
    GuildExpedition,
    GuildBossWave,
    Boss_Indun = 101,
    Party_Indun,
    Magic_Square,
    SecretDungeon,
    ArenaPvP,
    Magic_square_StartMap,
    BlackDragon = 110,
    HellDungeon = 120,
    Salon = 200,
    CrackDimension = 248,
    Conquer,
    ServerVisit,
    DungeonScript,
};

