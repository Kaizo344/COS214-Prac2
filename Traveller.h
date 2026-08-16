#ifndef TRAVELLER_H
#define TRAVELLER_H
#include "Mode.h"


class Traveller {
    private:
        Mode* state;
    public:
        Mode* changeMode(Mode*);
        void moveTravller();
        void moveTravllerFaster();
        virtual ~Traveller();
};

#endif
