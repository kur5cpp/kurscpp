#include <iostream>
#include <stdlib.h>
#include "zespolona.h"

using namespace std;

int main()
{
    srand(time(NULL));
    Zespolona jedna;
    jedna.wyswietl();
    Zespolona druga(3, 4);
    druga.wyswietl();
    cout<<"moduly z:\t"; jedna.wyswietl();
    cout<<"="<<jedna.modul()<<endl;
    cout<<"moduly z:\t"; druga.wyswietl();
    cout<<"="<<druga.modul()<<endl;
    return 0;
}
