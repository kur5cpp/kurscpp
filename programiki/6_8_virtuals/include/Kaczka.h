#ifndef KACZKA_H
#define KACZKA_H
#include "Zwierz.h"

class Kaczka: public Zwierz
{
    public:
        Kaczka();
        virtual ~Kaczka();
        void daj_glos();
    protected:
    private:
};

#endif // KACZKA_H
