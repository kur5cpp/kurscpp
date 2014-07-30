#include "Odcinek.h"

Odcinek::Odcinek()
{
    //ctor
}

Odcinek::~Odcinek()
{
    cout<<"odcinek destrukcja\n";
    //dtor
}

void Odcinek::wyswietl()
{
    cout<<__FUNCTION__;
    poczatek.wyswietl();
    koniec.wyswietl();
}
