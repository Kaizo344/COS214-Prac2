#ifndef SHORTESTROUTE_H
#define SHORTESTROUTE_H

#include <iostream>
#include <string>
#include "RouteStrategy.h"

// Concrete Strategy
class ShortestRoute : public RouteStrategy
{
    public:
        void calculateRoute() override;
};

#endif // SHORTESTROUTE_H