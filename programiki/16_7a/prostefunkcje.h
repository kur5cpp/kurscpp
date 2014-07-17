#ifndef PROSTEFUNKCJE_H_INCLUDED
#define PROSTEFUNKCJE_H_INCLUDED
#include <iostream>

using namespace std;


void licznzik(int n)
{
    static int licznik=0;

    n+=licznik;
    for (; licznik<n; )
        cout<<"toja"<<"\t"<<licznik++<<endl;
}

#endif // PROSTEFUNKCJE_H_INCLUDED
