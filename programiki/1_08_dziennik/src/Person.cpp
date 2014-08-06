#include "Person.h"

Person::Person()
{
    //ctor
}

Person::Person(string a, int b)
{
    person_name=a;
    person_age=b;
}

Person::~Person()
{
    //dtor
}

void Person::print_person()
{
    cout<<person_name<<"\t"<<person_age<<"\t";
    for(int i=0; i<31; i++)
        cout<<person_abs[i];
}
