#ifndef OKRAG_H
#define OKRAG_H
#include "Figura.h"
#include <stdlib.h>
#include <math.h>

class Okrag:public Figura
{
    public:
        Okrag();
        virtual ~Okrag();
        float x, y, r;
        float pole();
        float obwod();
    protected:
    private:
};

#endif // OKRAG_H
