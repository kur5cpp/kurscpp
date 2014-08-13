#ifndef PROSTOKAT_H
#define PROSTOKAT_H
#include "Figura.h"
#include <stdlib.h>


class Prostokat:public Figura
{
    public:
        Prostokat();
        virtual ~Prostokat();
        float a, b;
        float pole();
        float obwod();
    protected:
    private:
};

#endif // PROSTOKAT_H
