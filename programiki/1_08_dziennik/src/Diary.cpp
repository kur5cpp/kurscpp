#include "Diary.h"

Diary::Diary()
{
    //ctor
}

Diary::Diary(Teacher teach, Pupil pupils[2])
{

}

Diary::~Diary()
{
    //dtor
}

void Diary::print_diary()
{
    teach.print_tea();
    for(int i=0; i<2; i++)
    {
        cout<<"tu jestem";
        pupils[i].print_pupa();
        cout<<endl;
    }
}
