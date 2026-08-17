#ifndef NPC_H
#define NPC_H

// Abstract Product
class NPC
{
    public:
        virtual ~NPC();
        virtual void interact() = 0;
};

#endif // NPC_H