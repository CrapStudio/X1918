#include "newgame.h"
#include "player.h"
#include <iostream>
#include <math.h>

newgame::newgame()
{
    initscr();
    char imie[10];
    int sila=17;
    int agl=17;
    int pkt_akcji=8;
    int waga=70;
    int inteligencja=0;
    int max_hp=sqrt(64*sila);
    int hp=max_hp;
    int base_dodge=agl*2;
    char *nazwa[10];
    unsigned int wybor, potwierdzenie, opcja=3, rzedy, kolumny;

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
    clear();
        do{
        wybor=0;
        clear();
        //Wyswietlanie
        do{
            if (wybor == KEY_UP && opcja!=3)
          {
            opcja++;
          }
            else if (wybor == KEY_DOWN && opcja!=1)
          {
            opcja--;
          }
            if(wybor == 10)
          {
            break;
          }
        //

        //Dialog z Nieznajomym
        start_color();
        init_pair(1, COLOR_RED, COLOR_BLACK);
        attron(COLOR_PAIR(1));
        printw("\n  Nieznajomy: ");
        attroff(COLOR_PAIR(1));
        printw("Dawno u siebie nie goscilem zadnego czlowieka... \n");
        printw("  Wygladasz mi na dobrego czlowieka. Co cie do nas sprowadza, %s?\n\n", imie);

            if(opcja == 3) attron(A_BOLD);
            printw("  Nic\n");
            attroff(A_BOLD);

            if(opcja == 2) attron(A_BOLD);
            printw("  Nie wiem\n");
            attroff(A_BOLD);

            if(opcja == 1) attron(A_BOLD);
            printw("  Chcialbym sie dowiedziec czegos wiecej\n");
            attroff(A_BOLD);

        wybor=getch();
        clear();

        }while(1==1);
        switch(opcja)
            {
            case 3:
                {
                    wybor=0;
                    opcja=3;
                    clear();

                    do{
                        if (wybor == 259 && opcja!=3)
                        {
                        opcja++;
                        }
                        else if (wybor == 258 && opcja!=1)
                        {
                        opcja--;
                        }
                        if(wybor == 10)
                        {
                        break;
                        }

        attron(COLOR_PAIR(1));
        printw("\n  Nieznajomy:");
        attroff(COLOR_PAIR(1));

                    printw(" Ale i tak skoro u nas sie znalazles moglbys\n  o sobie cos powiedziec.");
                    printw(" Czym zajmowales sie za dawnego zycia?\n");

            if(opcja == 3) attron(A_BOLD);
            printw("\n  Bylem zolnierzem\n");
            attroff(A_BOLD);

            if(opcja == 2) attron(A_BOLD);
            printw("  Bylem kupcem\n");
            attroff(A_BOLD);

            if(opcja == 1) attron(A_BOLD);
            printw("  Wstyd mi sie przyznac, ale bylem... zlodziejem\n");
            attroff(A_BOLD);

        wybor=getch();
        clear();
                      }while(1==1);
                      }
            case 2:break;
            case 1:break;
            }
        }while (potwierdzenie != 10);

    Player(imie, sila, agl, pkt_akcji, waga, inteligencja);
    Player plr;
    getch();
    clear();

getch();
endwin();
}
