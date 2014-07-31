#ifndef ZESPOLONA_H
#define ZESPOLONA_H
#include <iostream>
#include <stdlib.h>
#include <math.h>


using namespace std;

class Zespolona
{
    public:
        Zespolona();
        Zespolona(int a, int b);
        Zespolona(Zespolona &dokopi);
        virtual ~Zespolona();
        float u, r;
        void wyswietl();
        float modul();
        Zespolona dodaj(Zespolona &dodaj, Zespolona &dodaj2);
        Zespolona pomnoz(Zespolona &pomnoz1, Zespolona &pomnoz2);

        //operatory
        friend Zespolona operator+(Zespolona dodaj, Zespolona dodaj2);
        friend Zespolona operator*(Zespolona pomnoz1, Zespolona pomnoz2);
        friend Zespolona operator+=(Zespolona &lewa, Zespolona &prawa);
        friend Zespolona operator*=(Zespolona lewa, Zespolona prawa);
        friend Zespolona operator++(Zespolona wejscie);
        friend bool operator==(Zespolona lewa, Zespolona prawa);
        friend bool operator!(Zespolona wejscie);
//        friend bool operator bool(Zespolona wejscie);
    protected:
    private:
};

#endif // ZESPOLONA_H
