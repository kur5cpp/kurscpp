#include "Punkt_2D.h"

Punkt_2D::Punkt_2D()
{
    //ctor
}

Punkt_2D::~Punkt_2D()
{
    //dtor
}

Punkt_2D::Punkt_2D(int a, int b):Punkt_1D(a)
{
    y=b;
}

void Punkt_2D::wyswietl_2d()
{
    wyswietl_1d();
    cout<<y<<endl;
}
