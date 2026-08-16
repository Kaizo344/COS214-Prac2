#include "Horse.h"

void Horse::move(){
    ///increment steps
    std::cout<<" moving by HORSE "<<std::endl;
}


void Horse::moveFaster(Traveller* t){

    std::cout<<" moving by HORSE even faster  (summoning Wagon)"<<std::endl;
    t->changeMode(new Wagon);

}

Horse::~Horse(){}
