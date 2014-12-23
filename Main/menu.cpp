#include "menu.h"

menu::menu()
{
    initscr();
    keypad(stdscr,true);

    unsigned int wybor, opcja=5, rzedy, kolumny;
    getmaxyx(stdscr,rzedy,kolumny);
//////////////////////////////////////////////////////////////////////////
    do{
    if( has_colors() == TRUE ) //1
    {
        char tekst[]="Menu glowne\n";
        start_color(); //2
        attron(A_BOLD);
        init_pair( 1, COLOR_GREEN, COLOR_BLACK ); //3
        attron( COLOR_PAIR( 1 ) ); //4
        mvprintw( rzedy=0,( kolumny / 2 ) -( sizeof( tekst ) / 2 ), tekst );
        attroff( COLOR_PAIR( 1 ) ); //Wyłączenie koloru tekstu
        attroff(A_BOLD);
    }
    else
    {
        printw( "Twoja Konsola nie obsluguje kolorow..." );
    }
//////////////////////////////////////////////////////////////////////////
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
//////////////////////////////////////////////////////////////////////////
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
