#ifndef FORESTFACTORY_H
#define FORESTFACTORY_H

#include "BiomeFactory.h"
#include "ForestNPC.h"
#include "ForestTerrain.h"
#include "ForestObstacle.h"

// Concrete Factory
class ForestFactory : public BiomeFactory
{
    public:
        ~ForestFactory() {}
        NPC* createNPC() override;
        Terrain* createTerrain() override;
        Obstacle* createObstacle() override;
};

#endif // FORESTFACTORY_H