#include <iostream>
#include "Person.h"
#include "Pupil.h"
#include "Diary.h"
#include "Teacher.h"


using namespace std;


int main()
{

    Pupil pupils[3]= {Pupil("Ala", 23, 1), Pupil("Marcin", 25, 2), Pupil("Luj", 30, 3)};
    Teacher teach("Agata", 31, "informatyka", "21b");
    for(int j=0; j<3; j++){
        for(int i=0; i<31; i++)
            pupils[j].person_abs[i]=0;
    }
    for(int i=0; i<31; i++)
            teach.person_abs[i]=0;
    Diary dzienniczek(teach, pupils);
    dzienniczek.print_diary();
    return 0;
}
