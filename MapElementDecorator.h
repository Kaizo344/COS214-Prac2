#ifndef MAPELEMENTDECORATOR_H
#define MAPELEMENTDECORATOR_H

#include "MapElement.h"

class MapElementDecorator{
    protected:
        MapElement* elem;
    public:
        MapElementDecorator(MapElement*);
        virtual std::string print()=0;
        virtual ~MapElementDecorator();
};

#endif
