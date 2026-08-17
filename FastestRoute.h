#ifndef FASTESTROUTE_H
#define FASTESTROUTE_H

#include <iostream>
#include <string>
#include "RouteStrategy.h"

// Concrete Strategy
class FastestRoute : public RouteStrategy
{
    public:
        void calculateRoute() override;
};

#endif // FASTESTROUTE_H