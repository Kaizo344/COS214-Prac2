#ifndef OCEANFACTORY_H
#define OCEANFACTORY_H

#include "BiomeFactory.h"

// Concrete Factory
class OceanFactory : public BiomeFactory
{
    public:
        ~OceanFactory() {}
        NPC* createNPC() override;
        Terrain* createTerrain() override;
        Obstacle* createObstacle() override;
};

#endif // OCEANFACTORY_H