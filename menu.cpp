#include "menu.h"

menu::menu()
{
    initscr();
    keypad(stdscr,true);
    unsigned int wybor, opcja=5;

    do{
    printw( "Menu glowne\n");
    if (wybor == KEY_UP && opcja!=5)
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
    if(opcja == 5) attron(A_BOLD);
    printw("Nowa gra\n");
    attroff(A_BOLD);
    if(opcja == 4) attron(A_BOLD);
    printw("Wczytaj\n");
    attroff(A_BOLD);
    if(opcja == 3) attron(A_BOLD);
    printw("Zapisz\n");
    attroff(A_BOLD);
    if(opcja == 2) attron(A_BOLD);
    printw("Kontynuuj\n");
    attroff(A_BOLD);
    if(opcja == 1) attron(A_BOLD);
    printw("Wyjdz\n");
    attroff(A_BOLD);

    wybor = getch();
    clear();
    } while(1==1);

    clear();
    switch (opcja)
    {
        case 1:break;
        case 2:break;
        case 3:break;
        case 4:break;
        case 5:break;
    }
endwin();
}

menu::~menu()
{
    //dtor
}
