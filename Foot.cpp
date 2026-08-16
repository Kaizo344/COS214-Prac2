#include "Foot.h"

void Foot::move(){
    ///incrementing steps taken?
    std::cout<<" walking by FOOT "<<std::endl;
}

void Foot::moveFaster(Traveller* t){

    std::cout<<" moving by FOOT even faster  (summoning Horse)"<<std::endl;
    t->changeMode(new Horse);

}

Foot::~Foot(){}
