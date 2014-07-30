#include "Punkt.h"

int Punkt::licznik=1;

Punkt::Punkt()
{
    x=rand()%11;
    y=rand()%11;
    numer=licznik;
    licznik++;
    //ctor
}

Punkt::~Punkt()
{
//    cout<<licznik<<"\n";
   // cout<<"punkt destrukcja\n";
//    licznik--;
    //dtor
}

Punkt::Punkt(Punkt &obiekt1)
{
    this->x=obiekt1.x;
    this->y=obiekt1.y;
//    licznik++;
}

void Punkt::wyswietl()
{
    cout<<"("<<x<<", "<<y<<")"<<"\tnumer: "<<numer<<endl;
////    cout<<licznik<<"\n";
}

float Punkt::odleglosc()
{
    return sqrt((x*x)+(y*y));
}

void Punkt::info_o_klasie()
{
    cout<<"\nmetoda info o klasiel; blabla bla\n";
    cout<<"Licznik: "<<licznik<<endl;
}
