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
        int x, y;
        virtual ~Punkt();
        void wyswietl();
        float odleglosc();
    protected:
    private:
};

#endif // PUNKT_H
