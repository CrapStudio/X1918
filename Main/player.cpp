#include "player.h"

    Player::Player()
    {
    imie="";
    sila=0;
    agl=0;
    hp=0;
    max_hp=sqrt(64*sila);
    pkt_akcji=0;
    waga=0;
    inteligencja=0;
    base_dodge=agl*2;
    }

    Player::Player(string imie, int sila, int agl,int hp, int pkt_akcji, int waga, int inteligencja,int max_hp, int base_dodge)
    {
        imie=imie;
        sila=sila;
        agl=agl;
        hp=hp;
        pkt_akcji=pkt_akcji;
        waga=waga;
        inteligencja=inteligencja;
        max_hp=max_hp;
        base_dodge=base_dodge;
    }

    string Player::getimie(string imie)
    {
        imie=imie;
        return imie;
    }

    int Player::getsila(int sila)
    {
        sila=sila;
        return sila;
    }

    int Player::getagl(int agl)
    {
        agl=agl;
        return agl;
    }

    int Player::gethp(int hp)
    {
        hp=hp;
        return hp;
    }

    int Player::getmax_hp(int max_hp)
    {
        max_hp=max_hp;
        return max_hp;
    }

    int Player::getpkt_akcji(int pkt_akcji)
    {
        pkt_akcji=pkt_akcji;
        return pkt_akcji;
    }

    int Player::getwaga(int waga)
    {
        waga=waga;
        return waga;
    }

    int Player::getinteligencja(int inteligencja)
    {
        inteligencja=inteligencja;
        return inteligencja;
    }

    int Player::getbase_dodge(int base_dodge)
    {
        base_dodge=base_dodge;
        return base_dodge;
    }
