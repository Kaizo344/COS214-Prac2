#ifndef ROUTESTRATEGY_H
#define ROUTESTRATEGY_H

#include <iostream>
#includ
// Strategy
class RouteStrategy
{
    public:
        virtual ~RouteStrategy();
        virtual void calculateRoute() = 0;
};

#endif // ROUTESTRATEGY_H