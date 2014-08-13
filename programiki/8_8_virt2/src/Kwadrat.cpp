#include "Kwadrat.h"


Kwadrat::Kwadrat()
{
    a=rand()%11;
    //ctor
}

Kwadrat::~Kwadrat()
{
    //dtor
}

float Kwadrat::pole()
{
    return a*a;
}

float Kwadrat::obwod()
{
    return 4*a;
}
