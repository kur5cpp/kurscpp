#include "Punkt_1D.h"

Punkt_1D::Punkt_1D()
{
    //ctor
}

Punkt_1D::Punkt_1D(int a)
{
    x=a;
}

Punkt_1D::~Punkt_1D()
{
    //dtor
}

void Punkt_1D::wyswietl_1d()
{
    cout<<x<<endl;
}
