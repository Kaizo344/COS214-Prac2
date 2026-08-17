#ifndef OCEANNPC_H
#define OCEANNPC_H

#include "NPC.h"
#include <iostream>

// Concrete Products
class OceanNPC : public NPC
{
    public:
        ~OceanNPC() {}
        void interact() override;
};

#endif // OCEANNPC_H