#ifndef MODE_H
#define MODE_H

#include <iostream>
#include "Traveller.h"
////TODO add cardinalties to the class diagrams
class Mode {
    public:
        virtual void move()=0 ;
        virtual void moveFaster(Traveller*)=0;
        virtual ~Mode();
};

#endif
