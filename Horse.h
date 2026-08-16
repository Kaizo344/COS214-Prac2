#ifndef HORSE_H
#define HORSE_H

#include "Mode.h"

class Horse : public Mode{
    public:
        void move() override;
        void moveFaster() override;
        ~Horse() override;
};


#endif
