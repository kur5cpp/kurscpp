#ifndef ODCINEK_H
#define ODCINEK_H
#include <iostream>
#include "Punkt.h"

using namespace std;

class Odcinek
{
    public:
        Odcinek();
        virtual ~Odcinek();
        void wyswietl();
    protected:
    private:
        Punkt poczatek;
        Punkt koniec;
};

#endif // ODCINEK_H
