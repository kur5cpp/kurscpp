#ifndef PUNKT_1D_H
#define PUNKT_1D_H
#include <iostream>

using namespace std;


class Punkt_1D
{
    public:
        Punkt_1D();
        Punkt_1D(int a);
        virtual ~Punkt_1D();
        int x;
        void wyswietl_1d();
    protected:
    private:
};

#endif // PUNKT_1D_H
