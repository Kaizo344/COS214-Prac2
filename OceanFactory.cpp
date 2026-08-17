#include "OceanFactory.h"
#include "OceanNPC.h"
#include "OceanTerrain.h"
#include "OceanObstacle.h"

NPC* OceanFactory::createNPC()
{
    return new OceanNPC();
}

Terrain* OceanFactory::createTerrain()
{
    return new OceanTerrain();
}

Obstacle* OceanFactory::createObstacle()
{
    return new OceanObstacle();
}