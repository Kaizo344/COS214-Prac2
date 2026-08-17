#ifndef DESERTTERRAIN_H
#define DESERTTERRAIN_H

#include "Terrain.h"
#include <iostream>

// Concrete Products
class DesertTerrain : public Terrain
{
    public : 
        void display() override;
};

#endif // DESERTTERRAIN_H