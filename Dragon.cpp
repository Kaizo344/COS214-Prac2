#include "Dragon.h"

void Dragon::move(){
    ///incrementing steps taken?
    std::cout<<" moving by Dragon "<<std::endl;
}

void Dragon::moveFaster(Traveller* t){
    ///incrementing steps even faster?
    std::cout<<" moving by Dragon even faster  (max speed reached)"<<std::endl;
}

Dragon::~Dragon(){}
