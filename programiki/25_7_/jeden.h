#ifndef JEDEN_H_INCLUDED
#define JEDEN_H_INCLUDED

#include <iostream>
using namespace std;

struct telement
{
    int wartosc;
    telement * poprzedni;
};

//telement * wstosu;

telement *dodaj (int liczba, telement *wstosu)
{
    telement *wsk;
    wsk = new telement;
    if(!wsk) return 0;
    wsk->wartosc=liczba;
    wsk->poprzedni=wstosu;
    return wsk;
}

telement *usun (int *liczba, telement *wstosu)
{
    if(!wstosu) return 0;
    telement *wsk;
    *liczba=wstosu->wartosc;
    wsk=wstosu->poprzedni;
    delete wstosu;
    return wsk;
}

void wypisz (telement *wsk)
{
    cout<<"aktualny stos:";
    while (wsk!=NULL)
        {
        cout<<wsk->wartosc<<"\t";
        wsk=wsk->poprzedni;
        }
    cout<<endl;
}

#endif // JEDEN_H_INCLUDED
