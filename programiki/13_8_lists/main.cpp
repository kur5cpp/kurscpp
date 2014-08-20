#include <iostream>
#include "onew_list.h"
#include "List_cell.h"


using namespace std;

int main()
{
    onew_list <int>int_try;
    cout<<int_try.list_lenght;
    onew_list <float>float_try;
    float_try.list_lenght=1.3456;
    cout<<float_try.list_lenght;
    cout << "Hello world!" << endl;
    return 0;
}
