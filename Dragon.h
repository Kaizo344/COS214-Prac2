#ifndef DRAGON_H
#define DRAGON_H

#include "Mode.h"

class Dragon : public Mode{
    public:
        void move() override;
        void moveFaster(Traveller*) override;
        ~Dragon() override;
};

#endif
