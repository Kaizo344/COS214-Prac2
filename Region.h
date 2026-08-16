#ifndef REGION_H
#define REGION_H

#include "MapElement.h"
#include <vector>

class Region: public MapElement{
    private:
        std::vector<MapElement*> mapElements;
    public:
        Region(std::string);
        std::string print() override;
        void add(MapElement*);
        ~Region() override;
};

#endif
