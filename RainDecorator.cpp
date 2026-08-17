#include "RainDecorator.h"

RainDecorator::RainDecorator(MapElement* m, std::string s):MapElementDecorator(m,s){}

std::string RainDecorator::print(){
    if (elem != nullptr){
        return "Extreme rain can be found here in the area(s) " + elem->print();
    }

    return "It rains a lot on this part of the map, progress will be wet and uncomfortable";
}

RainDecorator::~RainDecorator(){}