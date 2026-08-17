#ifndef OCEANOBSTACLE_H
#define OCEANOBSTACLE_H

#include "Obstacle.h"
#include <iostream>

// Concrete Products
class OceanObstacle : public Obstacle
{
    public:
        ~OceanObstacle() {}
        void overcome() override;
};

#endif // OCEANOBSTACLE_H