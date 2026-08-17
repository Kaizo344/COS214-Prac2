#ifndef RAINDECORATOR_H
#define RAINDECORATOR_H

#include "MapElementDecorator.h"

class RainDecorator: public MapElementDecorator{
    public:
        RainDecorator(MapElement*, std::string);
        std::string print() override;
        ~RainDecorator() override;

    private:
        int getNumDragons();
};

#endif
