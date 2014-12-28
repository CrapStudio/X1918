#ifndef PLAYER_H
#define PLAYER_H
#include <math.h>

class player
{
    public:
        char imie[];
        int sila;
        int agl;
        int hp;
        int max_hp=sqrt(64*sila);
        int pkt_akcji;
        int waga;
        int inteligencja;

    player(char imie[10], int sila, int agl, int pkt_akcji, int waga, int inteligencja)
    {
        this->imie[10]=imie[10];
        this->sila=sila;
        this->agl=agl;
        this->pkt_akcji=pkt_akcji;
        this->waga=waga;
        this->inteligencja=inteligencja;
    }

    protected:
    private:
        int base_dodge=agl*2;
};

#endif // PLAYER_H
