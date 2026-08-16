#ifndef HORSE_H
#define HORSE_H

#include "Mode.h"
#include "Wagon.h"

class Horse : public Mode{
    public:
        void move() override;
        void moveFaster(Traveller*) override;
        ~Horse() override;
};


#endif
