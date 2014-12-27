#include "newgame.h"

newgame::newgame()
{
    unsigned int wybor=0;
    initscr(); //1
    printw( "Witaj! Jak masz na imie?\n" );
    do{//trzeba naprawic!!!!
    char imie[10];
    getstr(imie);
    mvprintw(1, 2, "Czy Twoje imie to %s? (T/N)\n", imie);
    char wybor1;
    wybor1=getch();
    if (wybor1=='T' or wybor1=='t') wybor=1;
        else wybor=0;
    }
    while(wybor==1);
    getch();
    endwin();
}

newgame::~newgame()
{
    //dtor
}
