#include "Okrag.h"

Okrag::Okrag()
{
    x=rand()%11;
    y=rand()%11;
    r=rand()%11;
    //ctor
}

Okrag::~Okrag()
{
    //dtor
}

float Okrag::pole()
{
    return M_PI*r*r;
}

float Okrag::obwod()
{
    return 2*M_PI*r;
}
