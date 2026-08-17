#include "ElfsDecorator.h"

ElfsDecorator::ElfsDecorator(MapElement* m, std::string s):MapElementDecorator(m,s){}


std::string ElfsDecorator::print(){
    if (elem != nullptr){
        return "Elfs can be found on this part of the map stay vigilant, they are pick pockets!";
    }

    return "Elfs can be found here in the area(s) " + elem->print() + "\n stay vigilant, they are pick pockets!";
}

ElfsDecorator::~ElfsDecorator(){}
