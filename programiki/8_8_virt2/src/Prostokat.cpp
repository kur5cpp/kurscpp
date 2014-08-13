#include "Prostokat.h"

Prostokat::Prostokat()
{
    a=rand()%11;
    b=rand()%11;
    //ctor
}

Prostokat::~Prostokat()
{
    //dtor
}

float Prostokat::pole()
{
    return a*b;
}

float Prostokat::obwod()
{
    return a+a+b+b;
}
