#ifndef WAGON_H
#define WAGON_H

#include "Mode.h"
#include "BroomStick.h"

class Wagon : public Mode{
    public:
        void move() override;
        void moveFaster(Traveller*) override;
        ~Wagon() override;
};

#endif
