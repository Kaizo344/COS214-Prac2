#include "ForestFactory.h"

NPC* ForestFactory::createNPC()
{
    return new ForestNPC();
}

Terrain* ForestFactory::createTerrain() 
{
    return new ForestTerrain();
}

Obstacle* ForestFactory::createObstacle() 
{
    return new ForestObstacle();
}