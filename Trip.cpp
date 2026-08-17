#include "Trip.h"

Trip::Trip(RouteStrategy* initialStrategy) : strategy(initialStrategy) {}

Trip::~Trip()
{
    if(strategy != nullptr)
    {
        delete strategy;
        strategy = nullptr;
    }
}

void Trip::setStrategy(RouteStrategy* s)
{
    if(s == nullptr)
    {
        std::cout << "Cannot set a null route strategy." << std::endl;
        return;
    }
    if(strategy != nullptr)
    {
        delete strategy;
    }
    strategy = s;
}

void Trip::planRoute()
{
    if(strategy != nullptr)
    {
        strategy->calculateRoute();
    }
    else
    {
        std::cout << "No route strategy is currently set for this trip." << std::endl;
    }
}