#ifndef PUNKT_3D_H
#define PUNKT_3D_H
#include "Punkt_2D.h"


class Punkt_3d:public Punkt_2D
{
    public:
        Punkt_3d();
        Punkt_3d(int a, int b, int c);
        virtual ~Punkt_3d();
        int z;
        void wyswietl_3d();
    protected:
    private:
};

#endif // PUNKT_3D_H
