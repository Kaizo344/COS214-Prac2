#include "Traveller.h"
#include "Mode.h"
#include "Foot.h"

Traveller::Traveller(Mode* m){
    if (m == nullptr){
        state = new Foot;///default to Foot
    }else{
        state = m;
    }
}

void Traveller::changeMode(Mode* m){
    if (m == nullptr)
        return;

    if (state == nullptr )
        return;

    ///transition logic handled in the concrete classes

    delete state;
    state = m;
}

void Traveller::moveTravller(){
    state->move();
}

void Traveller::moveTravellerFaster(){
    state->moveFaster(this);
}

Traveller::~Traveller(){
    delete state;
}
