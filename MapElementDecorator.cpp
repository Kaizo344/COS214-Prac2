#include "MapElementDecorator.h"

MapElementDecorator::MapElementDecorator(MapElement* m, std::string s):MapElement(s) {
    if (m == nullptr){
        elem = nullptr;
        return;
    }

    elem = m;
}

MapElementDecorator::~MapElementDecorator(){
    if (elem != nullptr){
        delete elem;
    }

}
