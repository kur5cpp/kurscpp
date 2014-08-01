#include "Punkt_3d.h"

Punkt_3d::Punkt_3d()
{
    //ctor
}

Punkt_3d::Punkt_3d(int a, int b, int c):Punkt_2D(a, b)
{
    z=c;
}

Punkt_3d::~Punkt_3d()
{
    //dtor
}

void Punkt_3d::wyswietl_3d()
{
    wyswietl_2d();
    cout<<z<<endl;
}
