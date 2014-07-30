#include "Trojkat.h"
#include <iostream>

using namespace std;


Trojkat::Trojkat()
{
    cout<<"\nwprowadz dlugosc bokow trojkata(a, b, c): ";
    cin>>a>>b>>c;
    //ctor
}

Trojkat::~Trojkat()
{
    //dtor
}

int Trojkat::obwod()
{
    return a+b+c;
}

bool Trojkat::czy_prostokatny()
{
    return ((a*a+b*b)==(c*c))||((a*a+c*c)==(b*b))||((c*c+b*b)==(a*a));
}
