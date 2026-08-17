#ifndef ELFSDECORATOR_H
#define ELFSDECORATOR_H

#include "MapElementDecorator.h"

class ElfsDecorator: public MapElementDecorator{
    public:
        ElfsDecorator(MapElement*);
        std::string print() override;
        ~ElfsDecorator() override;
};

#endif
