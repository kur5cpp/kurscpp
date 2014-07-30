#include "Ulamek2.h"
#include <iostream>

using namespace std;


Ulamek2::Ulamek2()
{
    //ctor
}

Ulamek2::~Ulamek2()
{
    //dtor
}

void Ulamek2::ustaw_wartosci(int x, int y)
{
    licznik=x;
    mianownik=y;
}

void Ulamek2::wyswietl_ulamek()
{
    cout<<licznik<<"\n_\n"<<mianownik<<endl;
}

void Ulamek2::wyswietl_odwr(int licznik, int mianownik)
{
    cout<<"Odwrotnosc\n";
    cout<<mianownik<<"\n_\n"<<licznik<<endl;
}

void Ulamek2::dodaj_ulamek(int li, int mi)
{
    temp=(licznik*mi)+(li*mianownik);
    licznik=temp;
    mianownik*=mi;
    cout<<"wynik dodawania:\n";
    wyswietl_ulamek();
}
