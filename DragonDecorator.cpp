#include "DragonDecorator.h"

DragonDecorator::DragonDecorator(MapElement* m, std::string s):MapElementDecorator(m,s){}


std::string DragonDecorator::print(){
    if (elem != nullptr){
        return std::to_string(getNumDragons()) + " Dragons can be found here in the area(s) " + elem->print();
    }

    return std::to_string(getNumDragons()) + " Dragons can be found on this part of the map watch out";
}

int DragonDecorator::getNumDragons(){
    static unsigned long long state = 123456789ULL;
    state = (state * 2862933555777941757ULL + 3037000493ULL);

    return (int)(state & 0x7FFFFFFF);
}

DragonDecorator::~DragonDecorator(){}