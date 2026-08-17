#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include "Trip.h"
#include "Traveller.h"
#include "Region.h"
#include "BiomeFactory.h"

class GameManager
{
    private:
        Trip* trip;
        Traveller* traveller;
        Region* worldRoot;
        BiomeFactory* biomeFactory;
    public:
        GameManager();
        ~GameManager();
        void run();
        void setBiome(BiomeFactory* f);
        void setTrip(Trip* t);
        void setTraveller(Traveller* t);
        void setWorldRoot(Region* r)
};

#endif // GAMEMANAGER_H