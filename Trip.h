#ifndef TRIP_H
#define TRIP_H

#include <iostream>
#include <string>

// Context
class Trip
{
    private: 
        RouteStrategy* strategy;
    public:
        Trip(RouteStrategy* initialStrategy = nullptr);
        void planRoute();
        void setStrategy(RouteStrategy* s);
        ~Trip();
};

#endif // TRIP_H