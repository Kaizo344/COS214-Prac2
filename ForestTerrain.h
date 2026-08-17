#ifndef FORESTTERRAIN_H
#define FORESTTERRAIN_H

#include "Terrain.h"
#include <iostream>

// Concrete Product
class ForestTerrain : public Terrain
{
    public:
        ~ForestTerrain() {}
        void display() override;
};

#endif // FORESTTERRAIN_H