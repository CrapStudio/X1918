#include "monsters.h"
//
    Monsters::Monsters()
    {
    imie="";
    sila=0;
    agl=0;
    hp=0;
    }

    Monsters::Monsters(string imie, int sila, int agl)
    {
        imie=imie;
        sila=sila;
        agl=agl;
    }

    string Monsters::getimie(string imie)
    {
        imie=imie;
        return imie;
    }

    int Monsters::getsila(int sila)
    {
        sila=sila;
        return sila;
    }

    int Monsters::getagl(int agl)
    {
        agl=agl;
        return agl;
    }

    int Monsters::gethp(int hp)
    {
        hp=hp;
        return hp;
    }

    int Monsters::getmax_hp(int max_hp)
    {
        max_hp=max_hp;
        return max_hp;
    }

    int Monsters::getbase_dodge(int base_dodge)
    {
        base_dodge=base_dodge;
        return base_dodge;
    }
