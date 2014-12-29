#ifndef PLAYER_H
#define PLAYER_H
#include <math.h>
#include <string>
using namespace std;

class Player
{
private:
    string imie;
    int sila;
    int agl;
    int hp;
    int max_hp=sqrt(64*sila);
    int pkt_akcji;
    int waga;
    int inteligencja;
    int base_dodge=agl*2;
public:
    Player(string imie, int sila, int agl, int pkt_akcji, int waga, int inteligencja);
    Player();
    string getimie(string);
    int getsila(int);
    int getagl(int);
    int gethp(int);
    int getmax_hp(int);
    int getpkt_akcji(int);
    int getwaga(int);
    int getinteligencja(int);
    int getbase_dodge(int);
};
#endif // PLAYER_H
