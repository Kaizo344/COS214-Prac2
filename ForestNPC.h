#ifndef FORESTNPC_H
#define FORESTNPC_H

#include <iostream>
#include "NPC.h"

// Concrete Product
class ForestNPC : public NPC
{
    public:
        ~ForestNPC() {}
        void interact() override;
};

#endif // FORESTNPC_H