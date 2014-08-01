#include "Teacher.h"

Teacher::Teacher()
{
    //ctor
}

Teacher::~Teacher()
{
    //dtor
}

Teacher::Teacher(string a, int b, string c, string d):Person(a, b)
{
    subj=c;
    sala=d;
}

void Teacher::print_tea()
{
    print_person();
    cout<<subj<<sala;
}
