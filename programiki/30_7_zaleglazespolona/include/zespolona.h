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
    protected:
    private:
};

#endif // ZESPOLONA_H
