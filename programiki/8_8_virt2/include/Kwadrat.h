#ifndef KWADRAT_H
#define KWADRAT_H
#include "Figura.h"
#include <stdlib.h>

class Kwadrat:public Figura
{
    public:
        Kwadrat();
        virtual ~Kwadrat();
        float a;
        float pole();
        float obwod();
    protected:
    private:
};

#endif // KWADRAT_H
