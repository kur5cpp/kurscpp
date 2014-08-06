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
        int N=0;
        Teacher teach1;
        Pupil pupils1[3];
        Diary();
        Diary(Teacher teach1, Pupil pupils1[3]);
        virtual ~Diary();
        void fill_diary(int N);
        void print_diary();
    protected:
    private:
};

#endif // DIARY_H
