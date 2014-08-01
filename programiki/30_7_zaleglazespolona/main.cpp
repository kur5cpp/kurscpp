#include <iostream>
#include <stdlib.h>
#include "zespolona.h"

using namespace std;

int main()
{
    srand(time(NULL));
//    Zespolona jedna;
//    jedna.wyswietl();
//    Zespolona druga(3, 4);
//    druga.wyswietl();
//    cout<<"moduly z:\t"; jedna.wyswietl();
//    cout<<"="<<jedna.modul()<<endl;
//    cout<<"moduly z:\t"; druga.wyswietl();
//    cout<<"="<<druga.modul()<<endl;

//    Zespolona trzecia;
//    trzecia.dodaj(jedna, druga);
//    trzecia.wyswietl();
//    Zespolona czwarta;
//    czwarta=jedna+trzecia;
//    czwarta.wyswietl();

    Zespolona jedna(3, 4);
    Zespolona druga(2, 3);
    Zespolona trzecia;
//    Zespolona druga(3, 4);
//    jedna+=druga;
//    Zespolona trzecia;
//    trzecia=jedna+druga;
//    jedna.wyswietl();
//    trzecia.wyswietl();
    trzecia=++jedna+druga;
    trzecia.wyswietl();
    Zespolona czwarta;
    czwarta=druga++;
    czwarta.wyswietl();
    druga.wyswietl();
    return 0;
}
