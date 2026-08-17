#ifndef OCEANNPC_H
#define OCEANNPC_H

#include "NPC.H"
#include <iostream>

// Concrete Products
class OceanNPC : public NPC
{
    public:
        void interact() override;
};

#endif // OCEANNPC_H