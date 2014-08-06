#include "Diary.h"

Diary::Diary()
{
    //ctor
}

Diary::Diary(Teacher teach2, Pupil pupils2[3])
{
    teach1=teach2;
    for(int i=0; i<3; i++)
        pupils1[i]=pupils2[i];
}

Diary::~Diary()
{
    //dtor
}

void fill_diary(int N)
{

}

void Diary::print_diary()
{
    teach1.print_tea();
    cout<<endl;
    for(int i=0; i<3; i++)
    {
        pupils1[i].print_pupa();
        cout<<endl;
    }
}
