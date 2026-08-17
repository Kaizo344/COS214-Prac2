#ifndef TERRAIN_H
#define TERRAIN_H

// Abstract Product
class Terrain
{
    public:
        virtual ~Terrain();
        virtual void display() = 0;
};

#endif // TERRAIN_H
