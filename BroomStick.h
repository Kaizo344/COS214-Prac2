#ifndef BROOMSTICK_H
#define BROOMSTICK_H

#include "Mode.h"
#include "Dragon.h"

class BroomStick : public Mode{
    public:
        void move() override;
        void moveFaster(Traveller*) override;
        ~BroomStick() override;
};

#endif
