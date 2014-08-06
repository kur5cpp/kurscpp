#include "zespolona.h"

Zespolona::Zespolona()
{
    r=rand()%21-10;
    u=rand()%21-10;
    //ctor
}

Zespolona::Zespolona(int a, int b)
{
    r=a;
    u=b;
}

Zespolona::~Zespolona()
{
    //dtor
}

Zespolona::Zespolona(Zespolona &dokopi)
{
    this->u=dokopi.u;
    this->r=dokopi.r;
}

void Zespolona::wyswietl()
{
    cout<<endl<<r<<"+"<<u<<"i"<<endl;
}

float Zespolona::modul()
{
    return sqrt(u*u+r*r);
}

Zespolona Zespolona::dodaj(Zespolona &dodaj, Zespolona &dodaj2)
{
//    this->u=dodaj2.u+dodaj.u;
//    this->r=dodaj2.r+dodaj.r;
    Zespolona wyjscie;
    wyjscie.u=dodaj2.u+dodaj.u;
    wyjscie.r=dodaj2.r+dodaj.r;
    return wyjscie;
}

Zespolona Zespolona::pomnoz(Zespolona &pomnoz1, Zespolona &pomnoz2)
{
    Zespolona wyjscie;
    wyjscie.u=(pomnoz1.u*pomnoz2.r)+(pomnoz1.r*pomnoz2.u);
    wyjscie.r=(pomnoz1.r*pomnoz2.r)-(pomnoz1.u*pomnoz2.u);
    return wyjscie;
}

Zespolona operator+(Zespolona dodaj, Zespolona dodaj2)
{
//    this->u=dodaj2.u+dodaj.u;
//    this->r=dodaj2.r+dodaj.r;
    Zespolona wyjscie;
    wyjscie.u=dodaj2.u+dodaj.u;
    wyjscie.r=dodaj2.r+dodaj.r;
    return wyjscie;
}

Zespolona operator*(Zespolona pomnoz1, Zespolona pomnoz2)
{
    Zespolona wyjscie;
    wyjscie.u=(pomnoz1.u*pomnoz2.r)+(pomnoz1.r*pomnoz2.u);
    wyjscie.r=(pomnoz1.r*pomnoz2.r)-(pomnoz1.u*pomnoz2.u);
    return wyjscie;
}

Zespolona operator+=(Zespolona &lewa, Zespolona &prawa)
{
    lewa.u=lewa.u+prawa.u;
    lewa.r=lewa.r+prawa.r;
    return lewa;
}

Zespolona operator*=(Zespolona &lewa, Zespolona &prawa)
{
    lewa.u=(lewa.u*prawa.r)+(lewa.r*prawa.u);
    lewa.r=(lewa.r*prawa.r)-(lewa.u*prawa.u);
    return lewa;
}

//Zespolona operator++(Zespolona wejscie)
//{
//    wejscie.r++;
//    return wejscie;
//}

//bool operator==(Zespolona lewa, Zespolona prawa)
//{
//    if(lewa.u==prawa.u&&lewa.r==prawa.r)//returnn
//        return 1;
//    else return 0;
//}

bool operator!(Zespolona wejscie)
{
    if(wejscie.r==0&&wejscie.u==0) return 1;
    else return 0;
}

