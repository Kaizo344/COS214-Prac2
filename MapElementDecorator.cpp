#include "MapElementDecorator.h"

MapElementDecorator::MapElementDecorator(MapElement* m){
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
