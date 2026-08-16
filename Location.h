#ifndef LOCATION_H
#define LOCATION_H

#include "MapElement.h"


class Location: public MapElement{
    public:
        Location(std::string);
        std::string print() override;
        ~Location() override;
};

#endif
