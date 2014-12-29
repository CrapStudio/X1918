#ifndef MONSTERS_H
#define MONSTERS_H
#include <math.h>
#include <string>
using namespace std;

class Monsters
{
private:
    string imie;
    int sila;
    int agl;
    int hp;
    int max_hp=sqrt(64*sila);
    int base_dodge=agl*2;
public:
    Monsters(string imie, int sila, int agl);
    Monsters();
    string getimie(string);
    int getsila(int);
    int getagl(int);
    int gethp(int);
    int getmax_hp(int);
    int getbase_dodge(int);
};
#endif // PLAYER_H
