#ifndef MODE_H
#define MODE_H

#include <iostream>

////TODO add cardinalties to the class diagrams
class Mode {
    public:
        virtual void move()=0 ;
        virtual void moveFaster()=0;
        virtual ~Mode();
};

#endif
