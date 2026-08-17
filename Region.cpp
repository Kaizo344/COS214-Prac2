#include "Region.h"

Region::Region(std::string d):MapElement(d){}

std::string Region::print(){
    std::string out = "";

    out += name + ": [";
    for (MapElement* m : mapElements) {
        if (m != nullptr) {  
            out += " " + m->print() + " ";
        }
    }
    out += "]\n";

    return out;
}

void Region::add(MapElement* m){
    if (m == nullptr)
        return;

    mapElements.push_back(m);
}

Region::~Region(){
    for(MapElement* e : mapElements){
        if (e != nullptr) {
            delete e;
        }
    }
    mapElements.clear();  
}