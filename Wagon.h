#ifndef WAGON_H
#define WAGON_H

#include "Mode.h"

class Wagon : public Mode{
    public:
        void move() override;
        void moveFaster() override;
        ~Wagon() override;
};

#endif
