#ifndef MOUNTAINDECORATOR_H
#define MOUNTAINDECORATOR_H

#include "MapElementDecorator.h"

class MountainDecorator: public MapElementDecorator{
    private:
        static int totalMountains;
        std::string getMountainType();
    public:
        MountainDecorator(MapElement*);
        std::string print() override;
        ~MountainDecorator() override;
};

#endif
