#ifndef DIARY_H
#define DIARY_H
#include "Pupil.h"
#include "Teacher.h"
#include <string>//reqired?
#include <iostream>

using namespace std;


class Diary
{
    public:
        Teacher teach;
        Pupil pupils[2];
        Diary();
        Diary(Teacher teach, Pupil pupils[2]);
        virtual ~Diary();
        void print_diary();
    protected:
    private:
};

#endif // DIARY_H
