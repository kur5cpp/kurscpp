#include <iostream>
#include "Punkt.h"
#include "Odcinek.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Punkt * telement=new Punkt[10];
    float najmniejsza=telement[0].odleglosc();
    for(int i=0; i<10; i++)
        {
        telement[i].wyswietl();
        if (telement[i].odleglosc()<najmniejsza)
            najmniejsza=telement[i].odleglosc();
        }
    cout<<"\n"<<najmniejsza<<"\n";
    delete[] telement;
    return 0;
}
