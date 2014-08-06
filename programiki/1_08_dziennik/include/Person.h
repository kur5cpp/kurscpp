#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>

using namespace std;


class Person
{
    public:
        Person();
        Person(string a, int b);
        virtual ~Person();
        string person_name;
        bool person_abs[31];
        int person_age;
        void print_person();
    protected:
    private:
};

#endif // PERSON_H
