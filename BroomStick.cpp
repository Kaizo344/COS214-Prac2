#include "BroomStick.h"

void BroomStick::move(){
    ///incrementing steps taken?
    std::cout<<" moving by BROOMSTICK "<<std::endl;
}

void BroomStick::moveFaster(Traveller* t){

    std::cout<<" moving by BROOMSTICK even faster  (summoning Dragon)"<<std::endl;
    t->changeMode(new Dragon);

}

BroomStick::~BroomStick(){}
