#ifndef TRAVELLER_H
#define TRAVELLER_H

class Mode;
class Foot;

///TODO change return type of changeMode
///ownership of State class handled by Traveller
class Traveller {
    private:
        Mode* state;
        Traveller(); ///hidden so as to enforce correct Traveller construction
    public:
        Traveller(Mode* m);
        void changeMode(Mode*);
        void moveTraveller();
        void moveTravellerFaster();
        ~Traveller();
};

#endif
