#ifndef PUNKT_H
#define PUNKT_H
#include <stdlib.h>
#include <iostream>
#include <math.h>

using namespace std;

class Punkt
{
    public:
        Punkt();
        Punkt(Punkt &obiekt1);
        int x, y, numer;
        virtual ~Punkt();
        void wyswietl();
        float odleglosc();
        static void info_o_klasie();
    protected:
    private:
        static int licznik;

};

#endif // PUNKT_H
