#include "Location.h"

Location::Location(std::string s):MapElement(s){}

std::string Location::print(){
    return this->name;
}

Location::~Location(){}
