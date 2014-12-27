#ifndef PLAYER_H
#define PLAYER_H

class monsters
{
    public:
        string nazwa;
        int sila;
        int agl;
        int hp;
        int pkt_akcji;
        int waga;
    protected:
    private:
        int base_hp=(3+sila)*4;
        int base_dodge=agl*2;

    monsters(string nazwa, int sila, int agl, int hp, int pkt_akcji, int waga, int inteligencja, int base_hp, int base_dodge)
    {
        this->sila=sila;
        this->agl=agl;
        this->hp=hp;
        this->pkt_akcji=pkt_akcji;
        this->waga=waga;
        this->inteligencja=inteligencja;
        this->base_hp=base_hp;
    }


};

#endif // PLAYER_H
