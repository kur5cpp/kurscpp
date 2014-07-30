#include <iostream>
#include "Punkt.h"
#include "Odcinek.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Punkt::info_o_klasie();
    Punkt * telement=new Punkt[10];
    float najmniejsza=telement[0].odleglosc();
    for(int i=0; i<10; i++)
        {
        telement[i].wyswietl();
        if (telement[i].odleglosc()<najmniejsza)
            najmniejsza=telement[i].odleglosc();
        }
    cout<<"\nnajkrotsza odleglosc to: \n";
    cout<<"\n"<<najmniejsza<<"\n\n";
    cout<<"\nkopiowanie:\n";
    Punkt a;
    a.wyswietl();
    Punkt d;
    d.wyswietl();
    Punkt e=d;
    e.wyswietl();
    delete[] telement;
    return 0;
}
