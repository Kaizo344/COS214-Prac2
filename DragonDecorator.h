#ifndef DRAGONDECORATOR_H
#define DRAGONDECORATOR_H

#include "MapElementDecorator.h"

class DragonDecorator: public MapElementDecorator{
    DragonDecorator(MapElement*);
    std::string print() override;
    int getNumDragons();
    ~DragonDecorator() override;
};

#endif
