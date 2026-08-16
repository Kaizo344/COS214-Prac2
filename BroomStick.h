#ifndef BROOMSTICK_H
#define BROOMSTICK_H

#include "Mode.h"

class BroomStick : public Mode{
    public:
        void move() override;
        void moveFaster() override;
        ~BroomStick() override;
};

#endif
