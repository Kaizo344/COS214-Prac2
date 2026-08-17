#ifndef SCENICROUTE_H
#define SCENICROUTE_H

#include <iostream>
#include <string>
#include "RouteStrategy.h"

// Concrete Strategy
class ScenicRoute : public RouteStrategy
{
    public:
        void calculateRoute() override;
};

#endif // SCENICROUTE_H