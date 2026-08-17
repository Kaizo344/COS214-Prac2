#include "MountainDecorator.h"

int MountainDecorator::totalMountains = 0;

MountainDecorator::MountainDecorator(MapElement* m):MapElementDecorator(m){
    MountainDecorator::totalMountains++;
}


std::string MountainDecorator::print(){
    if (elem != nullptr){
        return getMountainType()+ "mountains can be found on this part of the map, progress will be slow and difficult";
    }

    return getMountainType() + "mountains can be found here in the area(s) " + elem->print();
}

std::string MountainDecorator::getMountainType(){
    if (totalMountains % 3 == 0)
        return "Flat slopped ";
    else if (totalMountains % 2 == 0)
        return "Volcanic ";
    else
        return "Jaggered slopped ";
}

MountainDecorator::~MountainDecorator(){}
