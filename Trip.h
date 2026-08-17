#ifndef TRIP_H
#define TRIP_H

#include <iostream>
#include <string>
#include "RouteStrategy.h"

// Context
class Trip
{
    private: 
        RouteStrategy* strategy;
    public:
        Trip(RouteStrategy* initialStrategy = nullptr);
        ~Trip();
        void planRoute();
        void setStrategy(RouteStrategy* s);
};

#endif // TRIP_H