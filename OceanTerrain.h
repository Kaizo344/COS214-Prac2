#ifndef OCEANTERRAIN_H
#define OCEANTERRAIN_H

#include "Terrain.h"
#include <iostream>

// Concrete Products
class OceanTerrain : public Terrain
{
    public:
        ~OceanTerrain() {}
        void display() override;
};

#endif // OCEANTERRAIN_H