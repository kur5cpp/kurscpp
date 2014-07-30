#include "zespolona.h"

Zespolona::Zespolona()
{
    r=rand()%21-10;
    u=rand()%21-10;
    //ctor
}

Zespolona::Zespolona(int a, int b)
{
    r=a;
    u=b;
}

Zespolona::~Zespolona()
{
    //dtor
}

Zespolona::Zespolona(Zespolona &dokopi)
{
    this->u=dokopi.u;
    this->r=dokopi.r;
}

void Zespolona::wyswietl()
{
    cout<<endl<<r<<"+"<<u<<"i"<<endl;
}

float Zespolona::modul()
{
    return sqrt(u*u+r*r);
}
