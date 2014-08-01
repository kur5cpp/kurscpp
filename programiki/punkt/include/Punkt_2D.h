#ifndef PUNKT_2D_H
#define PUNKT_2D_H
#include "Punkt_1D.h"


class Punkt_2D:public Punkt_1D
{
    public:
        Punkt_2D();
        Punkt_2D(int a, int b);
        virtual ~Punkt_2D();
        int y;
        void wyswietl_2d();
    protected:
    private:
};

#endif // PUNKT_2D_H
