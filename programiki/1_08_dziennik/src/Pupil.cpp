#include "Pupil.h"

Pupil::Pupil()
{
    //ctor
}

Pupil::~Pupil()
{
    //dtor
}

Pupil::Pupil(string a, int b, int c):Person(a, b)
{
    wstat_no=c;
}

void Pupil::print_pupa()
{
    print_person();
    cout<<wstat_no;
}
