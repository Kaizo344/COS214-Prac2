#ifndef DESERTOBSTACLE_H
#define DESERTOBSTACLE_H

#include "Obstacle.h"
#include <iostream>

// Concrete Products
class DesertObstacle : public Obstacle 
{
    public:
        ~DesertObstacle() {}
        void overcome() override;
};

#endif // DESERTOBSTACLE_H