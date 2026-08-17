#ifndef OBSTACLE_H
#define OBSTACLE_H

// Abstract Product
class Obstacle
{
    public:
        virtual ~Obstacle();
        virtual void overcome() = 0;
};

#endif // OBSTACLE_H