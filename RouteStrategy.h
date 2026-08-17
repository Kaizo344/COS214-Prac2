#ifndef ROUTESTRATEGY_H
#define ROUTESTRATEGY_H

#include <iostream>
#include <string>
// Strategy
class RouteStrategy
{
    public:
        virtual ~RouteStrategy();
        virtual void calculateRoute() = 0;
};

#endif // ROUTESTRATEGY_H