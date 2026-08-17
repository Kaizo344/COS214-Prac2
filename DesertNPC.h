#ifndef DESERTNPC_H
#define DESERTNPC_H

#include <iostream>
#include "NPC.h"

// Concrete Products
class DesertNPC : public NPC
{
    public:
        void interact() override;
};

#endif // DESERTNPC_H