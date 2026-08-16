#ifndef FOOT_H
#define FOOT_H

#include "Mode.h"

class Foot : public Mode{
    public:
        void move() override;
        void moveFaster() override;
        ~Foot() override;
};

#endif
