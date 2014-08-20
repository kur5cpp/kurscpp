#ifndef LIST_CELL_H
#define LIST_CELL_H
#include <stdlib.h>


class List_cell
{
        public:
                List_cell();
                virtual ~List_cell();
                int cell_value;
                List_cell* p_next_el;
        protected:
        private:
};

#endif // LIST_CELL_H
