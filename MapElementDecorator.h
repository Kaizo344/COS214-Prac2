#ifndef MAPELEMENTDECORATOR_H
#define MAPELEMENTDECORATOR_H

#include "MapElement.h"

class MapElementDecorator: public MapElement{
    protected:
        MapElement* elem;
    public:
        MapElementDecorator(MapElement*, std::string);
        virtual std::string print()=0;
        virtual ~MapElementDecorator();
};

#endif
