#include "newgame.h"
#include "player.h"
#include <iostream>

newgame::newgame()
{
    unsigned int wybor=0;
    initscr();
    char imie[10];
    int sila=17;
    int agl=17;
    int pkt_akcji=8;
    int waga=70;
    int inteligencja=0;
    char *nazwa[10];

    for(int i=0;i<10;i++)
        nazwa[i]=&imie[i];

    for(;;){
            printw( "Witaj! Jak masz na imie?\n" );
            getstr(imie);
            mvprintw(1, 0, " Czy Twoje imie to %s? (T/N)\n", imie);
            char wybor1;
            noecho();
            wybor1=getch();
            if (wybor1=='T' or wybor1=='t') wybor=1;
            else wybor=0;
            if (wybor==1) break;
            clear();
            }
    sila=sila+10;
    Player(imie, sila, agl, pkt_akcji, waga, inteligencja);
    Player plr;
    plr.getsila(sila);
    printw("%i", sila);
    getch();
    clear();

getch();
endwin();
}
newgame::~newgame()
{
//dtor
}
