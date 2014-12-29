#include "world.h"
#include <ctime>
#include <math.h>
#include <windows.h>

world::world()
{
        x=0;
        y=0;
        typ=0;
        czy=0;
        event=0;
}

void world::worldgen()
{
    srand(time(0));
    
    for(int i;i<10;i++)
    {
        int x=i;
        
        for(int j;j<10;j++)
        {
            world z;
            int y=j;
            int typ=rand()%3;
            int czy=0;
            int event=rand()%2;
            
        }
        
    }
}

world::world(int x, int y, int typ, int czy, int event)
{
        x=x;
        y=y;
        typ=typ;
        czy=czy;
        event=event;
}
