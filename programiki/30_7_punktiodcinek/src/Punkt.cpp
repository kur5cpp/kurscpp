#include "Punkt.h"

Punkt::Punkt()
{
    x=rand()%11;
    y=rand()%11;
    //ctor
}

Punkt::~Punkt()
{
    cout<<"punkt destrukcja\n";
    //dtor
}

void Punkt::wyswietl()
{
    cout<<"("<<x<<", "<<y<<")";
}

float Punkt::odleglosc()
{
    return sqrt((x*x)+(y*y));
}
