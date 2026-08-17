#ifndef DRAGONDECORATOR_H
#define DRAGONDECORATOR_H

#include "MapElementDecorator.h"
#include <string>

class DragonDecorator: public MapElementDecorator{
    public:
        DragonDecorator(MapElement*, std::string);
        std::string print() override;
        int getNumDragons();
        ~DragonDecorator() override;
};

#endif
