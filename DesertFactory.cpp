#include "DesertFactory.h"
#include "DesertNPC.h"
#include "DesertTerrain.h"
#include "DesertObstacle.h"

NPC* DesertFactory::createNPC()
{
    return new DesertNPC();
}

Terrain* DesertFactory::createTerrain()
{
    return new DesertTerrain();
}

Obstacle* DesertFactory::createObstacle()
{
    return new DesertObstacle();
}