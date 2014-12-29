#ifndef WORLD_H
#define WORLD_H
#include <math.h>
#include <string>


class world
{
    public:
        world();
        world(int, int, int, int, int);
        void worldgen();
        int getx(int);
        int gety(int);
        int gettyp(int);
        int getczy(int);
        int getevent(int);
    protected:
    private:
        int x;
        int y;
        int typ;
        int czy;
        int event;
};

#endif // WORLD_H
