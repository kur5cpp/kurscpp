#ifndef TEACHER_H
#define TEACHER_H
#include "Person.h"
#include <string>//reqired?
#include <iostream>

using namespace std;


class Teacher:public Person
{
    public:
        string subj, sala;
        Teacher();
        Teacher(string a, int b, string c, string d);
        virtual ~Teacher();
        void print_tea();
    protected:
    private:
};

#endif // TEACHER_H
