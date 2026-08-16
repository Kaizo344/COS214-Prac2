#ifndef FOOT_H
#define FOOT_H

#include "Mode.h"
#include "Horse.h"

class Foot : public Mode{
    public:
        void move() override;
        void moveFaster(Traveller* t) override;
        ~Foot() override;
};

#endif
