#ifndef MAPELEMENT_H
#define MAPELEMENT_H

#include <string>
#include <iostream>


class MapElement {
    protected:
        std::string name;
    public:
        MapElement(std::string s):name(s){};
        virtual std::string print()=0;
        virtual ~MapElement(){};
};

#endif
