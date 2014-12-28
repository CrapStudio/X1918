#include "newgame.h"
#include "player.h"

newgame::newgame()
{
unsigned int wybor=0;
initscr();
char imie[10];
for(;;){
printw( "Witaj! Jak masz na imie?\n" );
getstr(imie);
mvprintw(1, 0, " Czy Twoje imie to %s? (T/N)\n", imie);
char wybor1;
wybor1=getch();
if (wybor1=='T' or wybor1=='t') wybor=1;
else wybor=0;
if (wybor==1) break;
clear();
}

int sila=17;
int agl=17;
int pkt_akcji=8;
int waga=70;
int inteligencja=0;
char *nazwa[10];

for(int i=0;i<10;i++)
    nazwa[i]=&imie[i];

player(nazwa[10],sila,agl,pkt_akcji,waga,inteligencja);
getch();
endwin();
}
newgame::~newgame()
{
//dtor
}
