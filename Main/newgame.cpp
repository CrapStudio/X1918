#include "newgame.h"
#include "player.h"

newgame::newgame()
{
    unsigned int wybor=0;
    initscr();
    for(;;){

    printw( "Witaj! Jak masz na imie?\n" );

    char imie[10];
    getstr(imie);

    mvprintw(1, 0, "  Czy Twoje imie to %s? (T/N)\n", imie);

    char wybor1;
    wybor1=getch();

    if (wybor1=='T' or wybor1=='t') wybor=1;
        else wybor=0;
    if (wybor==1) break;

    clear();
    }
    getch();
    endwin();
}

newgame::~newgame()
{
    //dtor
}
