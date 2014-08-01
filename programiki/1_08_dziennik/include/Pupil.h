#ifndef PUPIL_H
#define PUPIL_H
#include "Person.h"
#include <string>//reqired?
#include <iostream>

using namespace std;

class Pupil:public Person
{
    public:
        Pupil();
        Pupil(string a, int b, int c);
        virtual ~Pupil();
        int wstat_no;
        void print_pupa();
    protected:
    private:
};

#endif // PUPIL_H
