#include "Wagon.h"

void Wagon::move(){
    std::cout<<" moving by WAGON "<<std::endl;
}

void Wagon::moveFaster(Traveller* t){
    std::cout<<" moving by WAGON even faster "<<std::endl;
    t->changeMode(new BroomStick);
}

Wagon::~Wagon(){}
