#ifndef CHEAPESTROUTE_H
#define CHEAPESTROUTE_H

#include <iostream>
#include <string>
#include "RouteStrategy.h"

// Concrete Strategy
class CheapestRoute : public RouteStrategy
{
    public:
        void calculateRoute() override;
};

#endif // CHEAPESTROUTE_H