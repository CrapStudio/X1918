#include "menu.h"
#include "newgame.h"

menu::menu()
{
    initscr();
    start_color();
            init_pair( 1, COLOR_GREEN, COLOR_BLACK );
            init_pair( 2, COLOR_RED, COLOR_BLACK );
    keypad(stdscr,true);
    unsigned int wybor, potwierdzenie, opcja=5, rzedy, kolumny;
    getmaxyx(stdscr,rzedy,kolumny);
//////////////////////////////Wyjscie///////////////////////////////
    do{
        wybor=0;
        clear();
/////////////////////////////Menu///////////////////////////////////
    do{
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
 ////////////////////Wyswietlanie////////////////////////////
    if( has_colors() == TRUE ) //1
        {
        char tekst[]="Menu glowne\n";
        attron(A_BOLD);
        attron( COLOR_PAIR( 1 ) ); //4
        mvprintw( 0,( kolumny / 2 ) -( sizeof( tekst ) / 2 ), tekst );
        attroff( COLOR_PAIR( 1 ) ); //Wy³¹czenie koloru tekstu
        attroff(A_BOLD);
        }
    else
        {
        printw( "Twoja Konsola nie obsluguje kolorow..." );
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
///////////////////////////Wybor//////////////////////////////
    clear();
    switch (opcja)
    {
        case 1:
            {
            char tekst[]="Jezeli napewno chcesz wyjsc\n";
            char tekst2[]="Wcisnij Enter...\n";
            char tekst3[]="Pamietaj kazde niezapisane postepy zostana utracone";
            attron(A_BOLD);
            attron( COLOR_PAIR( 2 ) );
            mvprintw( 0,( kolumny / 2 ) -( sizeof( tekst ) / 2 ), tekst );
            mvprintw( 1,( kolumny / 2 ) -( sizeof( tekst2 ) / 2 ), tekst2 );
            mvprintw( 3,( kolumny / 2 ) -( sizeof( tekst3 ) / 2 ), tekst3 );
            attroff( COLOR_PAIR( 2 ) ); //Wy³¹czenie koloru tekstu
            attroff(A_BOLD);
            potwierdzenie=getch();
            break;
            }
        case 2:break;
        case 3:break;
        case 4:break;
        case 5:
            {
            newgame();
            }
        }
    } while (potwierdzenie != 10);
endwin();
}

menu::~menu()
{
    //dtor
}
