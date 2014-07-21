#ifndef STRUKTURY_BIBLIOTEKA_H_INCLUDED
#define STRUKTURY_BIBLIOTEKA_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;


struct t_ksiazka
{
    string tytul[50];
    string autor[30];
    float cena;
    float isbn;
    int naklad;
    int rok_wydania;
};


t_ksiazka ksiegozbior[100];
t_ksiazka * pksiegozbior;

#endif // STRUKTURY_BIBLIOTEKA_H_INCLUDED
