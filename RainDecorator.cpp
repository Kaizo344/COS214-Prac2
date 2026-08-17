#include "RainDecorator.h"

RainDecorator::RainDecorator(MapElement* m):MapElementDecorator(m){}


std::string RainDecorator::print(){
    if (elem != nullptr){
        return "It rains a lot on this part of the map, progress will be wet and uncomfortable";
    }

    return "Extreme rain can be found here in the area(s) " + elem->print();
}



RainDecorator::~RainDecorator(){}
