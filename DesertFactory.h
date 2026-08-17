#ifndef DESERTFACTORY_H
#define DESERTFACTORY_H

#include "BiomeFactory.h"

// Concrete Factory
class DesertFactory : public BiomeFactory
{
    public:
        ~DesertFactory(){}
        NPC* createNPC() override;
        Terrain* createTerrain() override;
        Obstacle* createObstacle() override;
};

#endif // DESERTFACTORY_H