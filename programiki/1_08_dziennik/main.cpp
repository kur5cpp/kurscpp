#include <iostream>
#include "Person.h"
#include "Pupil.h"
#include "Diary.h"


using namespace std;


int main()
{

    Pupil pupils[2];
    pupils={
        Pupil("Ala", 23, 1), Pupil("Marcin", 25, 2), Pupil("Luj", 30, 3),
    };
//    pupils[1]=bsd;
//    pupils[2]=csd;
    Teacher teach("Agata", 31, "informatyka", "21b");
    cout<<"przed dziennicz";
    Diary dzienniczek(teach, pupils);
    dzienniczek.print_diary();
    return 0;
}
