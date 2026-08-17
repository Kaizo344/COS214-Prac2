#ifndef FORESTOBSTACLE_H
#define FORESTOBSTACLE_H

#include "Obstacle.h"
#include <iostream>

// Concrete Product
class ForestObstacle : public Obstacle
{
    public:
        ~ForestObstacle() {}
        void overcome() override;
};

#endif // FORESTOBSTACLE_H