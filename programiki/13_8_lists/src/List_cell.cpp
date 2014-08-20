#include "List_cell.h"

List_cell::List_cell()
{
        cell_value=rand()%10+1;
        p_next_el=0;//ctor
}

List_cell::~List_cell()
{
        //dtor
}
