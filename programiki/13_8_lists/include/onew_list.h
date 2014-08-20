#ifndef ONEW_LIST_H
#define ONEW_LIST_H
#include <stdlib.h>
#include "List_cell.h"

template <class T>
class onew_list
{
        public:
                onew_list();
               // onew_list(int w_1st_value);
                virtual ~onew_list();

                List_cell* p_list_Start=0;
                T list_lenght;

                void add_element();
                void remove_element();
                void print_list();
        protected:
        private:
};

template<class T>
onew_list<T>::onew_list()
{
        p_list_Start=new List_cell;
        list_lenght=0;
}

template<class T>
onew_list<T>::~onew_list()
{
        //dtor
}

template<class T>
void onew_list<T>::add_element()
{
        List_cell another;
        another.p_next_el;
}

template<class T>
void onew_list<T>::remove_element()
{}

template<class T>
void onew_list<T>::print_list()
{}

#endif // ONEW_LIST_H
