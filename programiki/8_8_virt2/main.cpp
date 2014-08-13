#include <iostream>
#include "Figura.h"
#include <stdlib.h>
#include <math.h>//??
#include "Kwadrat.h"
#include "Prostokat.h"
#include "Okrag.h"

using namespace std;

float policz_pole_figury(Figura &f)
{
    return f.pole();
}

enum Kolor{
        bialy = 10,
        czarny = 20,
        zielony = 30
};

int main()
{
    srand(time(NULL));
    //wywolanie wszystkich metod
    Figura f;
    Kwadrat k;
    Prostokat p;
    Okrag o;

    cout<<"a= "<<k.a<<endl;
    cout<<"pole kwa: "<<k.pole()<<endl;
    cout<<"obw kwa: "<<k.obwod()<<endl;

    cout<<"a= "<<p.a<<"b= "<<p.b<<endl;
    cout<<"pole pro: "<<p.pole()<<endl;
    cout<<"obw pro: "<<p.obwod()<<endl;

    cout<<"r= "<<o.r<<endl;
    cout<<"pole kola: "<<o.pole()<<endl;
    cout<<"obw kola: "<<o.obwod()<<endl;

    cout<<policz_pole_figury(k);
    Kolor kolo = bialy;
    cout << kolo;
    //nie zadziala: Kolor niekolo = czryny;
    return 0;
}
