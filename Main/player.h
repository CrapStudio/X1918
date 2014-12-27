#ifndef PLAYER_H
#define PLAYER_H

class player
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


};

#endif // PLAYER_H
